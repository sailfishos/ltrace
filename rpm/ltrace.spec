Name:       ltrace
Summary:    ltrace intercepts and records dynamic library calls
Version:    0.8.0
Release:    1
License:    GPLv2+
URL:        https://gitlab.com/cespedes/ltrace/
Source0:    ltrace-%{version}.tar.gz
BuildRequires:  pkgconfig(glib-2.0)
BuildRequires:  binutils-devel
BuildRequires:  elfutils-devel

%description
ltrace intercepts and records dynamic library calls which are called by an executed process and the signals received by that process. It can also intercept and print the system calls executed by the program.

%prep
%autosetup -n %{name}-%{version}/%{name}

%build
%autogen --disable-static
%configure --disable-static
%make_build

%install
%make_install

%files
%defattr(-,root,root,-)
%{_bindir}
%{_datadir}/ltrace
%{_mandir}
%{_docdir}
