rm -rf src/usbpicprog.app
mkdir -p src/usbpicprog.app
mkdir -p src/usbpicprog.app/Contents
mkdir -p src/usbpicprog.app/Contents/MacOS
mkdir -p src/usbpicprog.app/Contents/Resources
cp src/Info.plist src/usbpicprog.app/Contents
cp icons/usbpicprog.icns src/usbpicprog.app/Contents/Resources
echo -n "APPL????" > src/usbpicprog.app/Contents/PkgInfo
cp src/usbpicprog src/usbpicprog.app/Contents/MacOS/usbpicprog