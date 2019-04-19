#ifndef OPENCC_H
#define OPENCC_H

#include <QQuickItem>
#include <QString>
#include <opencc/opencc.h>

class OpenCC : public QQuickItem
{
  Q_OBJECT
  Q_DISABLE_COPY(OpenCC)
private:
  opencc::SimpleConverter* converter;
public:
  OpenCC(QQuickItem *parent = nullptr);
  ~OpenCC();
  Q_INVOKABLE void chooseMode(QString mode);
  Q_INVOKABLE QString convert(const QString qstr) const;

};

#endif // OPENCC_H
