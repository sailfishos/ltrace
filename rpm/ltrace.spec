Name:       ltrace
Summary:    ltrace intercepts and records dynamic library calls
Version:    0.8.0
Release:    1
Group:      Development Platform/Platform SDK
License:    GPLv2+
URL:        https://gitlab.com/cespedes/ltrace/
Source0:    ltrace-%{version}.tar.gz
Patch0:     ltrace-0.7.91-tautology.patch
Patch1:     ltrace-rh1423913.patch
BuildRequires:  pkgconfig(glib-2.0)
BuildRequires:  binutils-devel
BuildRequires:  elfutils-devel

%description
ltrace intercepts and records dynamic library calls which are called by an executed process and the signals received by that process. It can also intercept and print the system calls executed by the program.

%prep
%setup -q -n %{name}-%{version}/%{name}
%patch0 -p1
%patch1 -p1

%build
%autogen --disable-static
%configure --disable-static
make %{?_smp_mflags}

%install
rm -rf %{buildroot}
%make_install

%files
%defattr(-,root,root,-)
%{_bindir}
%{_datadir}/ltrace
%{_mandir}
%{_docdir}
