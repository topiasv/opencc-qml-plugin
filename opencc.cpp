#include "opencc.h"
#include <QString>

#include <opencc/opencc.h>

OpenCC::OpenCC(QQuickItem *parent) : QQuickItem(parent) {
  const std::string mode("s2twp.json");
  converter = new opencc::SimpleConverter(mode);
}

OpenCC::~OpenCC() { delete converter; }

QString OpenCC::convert(const QString qstr) const {
  // Use this if you ever wish to add Windows support
  // std::string str = qstr.toLocal8Bit().constData();
  std::string str = qstr.toUtf8().constData();
  std::string newStr = converter->Convert(str);
  return QString(newStr.c_str());
}
