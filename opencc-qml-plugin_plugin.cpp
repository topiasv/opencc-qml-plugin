#include "opencc-qml-plugin_plugin.h"
#include "opencc.h"

#include <qqml.h>

void Opencc_Qml_PluginPlugin::registerTypes(const char *uri)
{
    // @uri net.toxip.openccqml
    qmlRegisterType<OpenCC>(uri, 1, 0, "OpenCC");
}

