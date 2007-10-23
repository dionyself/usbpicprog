#ifndef NOKDE_KLOCALE_H
#define NOKDE_KLOCALE_H

#undef KDECORE_EXPORT
#define KDECORE_EXPORT

#undef KDE_DEPRECATED
#define KDE_DEPRECATED

#undef I18N_NOOP
#define I18N_NOOP(x) (x)
#include <qstring.h>
inline QString i18n(const QString &text) { return text; }
extern QString i18n(const QString &index, const QString &text);
extern QString locate(const QString &, const QString &);

#endif