/***************************************************************************
 *   Copyright (C) 2008 by Frans Schreuder                                 *
 *   usbpicprog.sourceforge.net                                            *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include "hardware.h"
#include <iostream>
using namespace std;

Hardware::Hardware(  ) 
{
	struct usb_bus *bus;
	struct usb_device *dev;

	usb_init();
	
	usb_find_busses();
	usb_find_devices();
	
	for (bus=usb_get_busses();bus;bus=bus->next)
	{
		for (dev=bus->devices;dev;dev=dev->next)
		{
			
			_handle = usb_open(dev);
			if (!_handle)
			{
				cerr<<"Warning !! cannot open device"<<endl;
				continue;
			}
			if ((dev->descriptor.idVendor == VENDOR) && (dev->descriptor.idProduct == PRODUCT) )
				break;
			usb_close(_handle);
			_handle=NULL;
		}
			if(_handle!=NULL)
				break;
	}
	if (!_handle)
		cerr<<"Warning !! Device not found"<<endl;
}


Hardware::~Hardware()
{
	if(_handle!=NULL)
	{
		usb_close(_handle);
		_handle=NULL;
	}
}

int Hardware::readCode(ReadHexFile *hexData,PicType *picType)
{
}

int Hardware::writeCode(ReadHexFile *hexData,PicType *picType)
{
}

int Hardware::readData(ReadHexFile *hexData,PicType *picType)
{
}

int Hardware::writeData(ReadHexFile *hexData,PicType *picType)
{
}

int Hardware::readConfig(ReadHexFile *hexData,PicType *picType)
{
}

int Hardware::writeConfig(ReadHexFile *hexData,PicType *picType)
{
}





int Hardware::readId(void)
{
	char msg[64];
	char id=0x20;
	if (_handle !=NULL)
	{
		if(writeString((char*)&id)<0)return 0;
		nBytes = readString(msg);
			
		if (nBytes < 0 )
		{
			cerr<<"Usb Error"<<endl;
			return 0;
		}
		else
		{
			//cout<<"Id: "<<hex<<((int)msg[0]&0xFF)<<" "<<hex<<((int)msg[1]&0xFF)<<", "<<nBytes<<" bytes"<<endl;
			return ((((int)msg[0])&0xFF)<<8)|(((int)msg[1])&0xFF);
			
		}
	}
	
}

int Hardware::readCodeBlock(char * msg,int address,int size,int lastblock)
{
	char id=0x40;
	char sendstr[10];
	if (_handle !=NULL)
	{
		sendstr[0]=id;
		sendstr[1]=(char)size;
		sendstr[2]=(char)((address>>16)&0xFF);
		sendstr[3]=(char)((address>>8)&0xFF);
		sendstr[4]=(char)(address&0xFF);
		sendstr[5]=(char)lastblock;
		
		
	    
		int nBytes = usb_interrupt_write(_handle,1,sendstr,6,5000);
		if (nBytes < 0 )
		{
			cerr<<"Usb Error"<<endl;
			return nBytes;
		}
			
		nBytes = usb_interrupt_read(_handle,1,(char*)msg,64,5000);
		if (nBytes < 0 )
			cerr<<"Usb Error"<<endl;
		return nBytes;
	}
	else return -1;
}

int Hardware::readDataBlock(char * msg,int address,int size,int lastblock)
{
	char id=0x60;
	char sendstr[10];
	if (_handle !=NULL)
	{
		sendstr[0]=id;
		sendstr[1]=(char)size;
		sendstr[2]=(char)((address>>8)&0xFF);
		sendstr[3]=(char)(address&0xFF);
		sendstr[4]=(char)lastblock;
		
		
	    
		int nBytes = usb_interrupt_write(_handle,1,sendstr,6,5000);
		if (nBytes < 0 )
		{
			cerr<<"Usb Error"<<endl;
			return nBytes;
		}
			
		nBytes = usb_interrupt_read(_handle,1,(char*)msg,64,5000);
		if (nBytes < 0 )
			cerr<<"Usb Error"<<endl;
		return nBytes;
	}	return -1;
	
}


bool Hardware::connected(void) 
{
		if (_handle == NULL)
			return 0;
		else
			return 1;
}


void Hardware::writeString(const char * msg,int size)
{
	if (_handle != NULL)
	{
		//qDebug ("Device Found!!");
		//bzero(bytes,sizeof(bytes));
		//int nBytes = usb_control_msg(handle,USB_TYPE_VENDOR | USB_RECIP_DEVICE | USB_ENDPOINT_IN,1,0,0,bytes,sizeof(bytes),5000);
		int nBytes = usb_interrupt_write(_handle,1,(char*)msg,size,5000);
		if (nBytes < 0 )
			cerr<<"Usb Error while writing to device"<<endl;
	}
	else 
		cerr<<"Error: Not connected"<<endl;
}

int Hardware::readString(char* msg)
{
	int nBytes = usb_interrupt_read(_handle,1,(char*)msg,64,5000);
		if (nBytes < 0 )
		{
			cerr<<"Usb Error"<<endl;
		
		}
		return nBytes;
		
}

const char * Hardware::readResponse(void)
{
	
	char msg[64];
	int nBytes = readString(msg);
		if (nBytes < 0 )
		{
			cerr<<"Usb Error"<<endl;
			return NULL;
		}
			
	else
	{
		switch(msg[0])
		{
			case 1:
				return "Received: 1, Ok";
				break;
			case 2:
				return "Received: 2, asked for next block";
				break;
			case 3:
				return "Error, PIC not supported for this action";
				break;
			default:
				return "Received unexpected response";
				break;	
		}
			
	}
}

//