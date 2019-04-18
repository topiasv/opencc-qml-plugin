Name:       opencc-qml-plugin

# >> macros
# << macros

%{!?qtc_qmake:%define qtc_qmake %qmake}
%{!?qtc_qmake5:%define qtc_qmake5 %qmake5}
%{!?qtc_make:%define qtc_make make}
%{?qtc_builddir:%define _builddir %qtc_builddir}
Summary:    Bridge between QML and OpenCC
Version:    1.0.1
Release:    1%{?dist}
License:    Apache-2.0
URL:        https://github.com/topiasv/opencc-qml-plugin
Source0:    %{name}-%{version}.tar.gz
Requires: opencc
BuildRequires:  pkgconfig(Qt5Core)
BuildRequires:  pkgconfig(Qt5Qml)
BuildRequires:  pkgconfig(Qt5Quick)
BuildRequires:  pkgconfig(opencc)

%description
QML plugin that allows you to access opencc
from QML.

%prep
%setup -q -n %{name}-%{version}

# >> setup
# << setup

%build
# >> build pre
# << build pre

%qtc_qmake5

%qtc_make %{?_smp_mflags}

# >> build post
# << build post

%install
rm -rf %{buildroot}
# >> install pre
# << install pre
%qmake5_install

# >> install post
# << install post

%files
%defattr(-,root,root,-)
/usr/lib/qt5/qml/net/toxip/openccqml/libopenccqmlplugin.so
/usr/lib/qt5/qml/net/toxip/openccqml/qmldir
# >> files
# << files
