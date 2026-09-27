#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509StoreManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X509StoreManager_def.hpp"
#include "Mono/Security/X509/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Security/X509/zzzz__X509Stores_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509StoreManager::*)()>(&::Mono::Security::X509::X509StoreManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f5f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_CurrentUserPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Mono::Security::X509::X509StoreManager::get_CurrentUserPath)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa0f5f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_CurrentUserPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_LocalMachinePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Mono::Security::X509::X509StoreManager::get_LocalMachinePath)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa0f6038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_LocalMachinePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_NewCurrentUserPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Mono::Security::X509::X509StoreManager::get_NewCurrentUserPath)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa0f6148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_NewCurrentUserPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_NewLocalMachinePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Mono::Security::X509::X509StoreManager::get_NewLocalMachinePath)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa0f6258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_NewLocalMachinePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_CurrentUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Stores* (*)()>(&::Mono::Security::X509::X509StoreManager::get_CurrentUser)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa0f6368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_CurrentUser", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_LocalMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Stores* (*)()>(&::Mono::Security::X509::X509StoreManager::get_LocalMachine)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa0f6458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_LocalMachine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_NewCurrentUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Stores* (*)()>(&::Mono::Security::X509::X509StoreManager::get_NewCurrentUser)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa0f650c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_NewCurrentUser", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_NewLocalMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Stores* (*)()>(&::Mono::Security::X509::X509StoreManager::get_NewLocalMachine)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa0f65c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_NewLocalMachine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_IntermediateCACertificates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509CertificateCollection* (*)()>(&::Mono::Security::X509::X509StoreManager::get_IntermediateCACertificates)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa0f667c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_IntermediateCACertificates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_IntermediateCACrls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (*)()>(&::Mono::Security::X509::X509StoreManager::get_IntermediateCACrls)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa0f6808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_IntermediateCACrls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_TrustedRootCertificates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509CertificateCollection* (*)()>(&::Mono::Security::X509::X509StoreManager::get_TrustedRootCertificates)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa0f22ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_TrustedRootCertificates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_TrustedRootCACrls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (*)()>(&::Mono::Security::X509::X509StoreManager::get_TrustedRootCACrls)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa0f69ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_TrustedRootCACrls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_UntrustedCertificates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509CertificateCollection* (*)()>(&::Mono::Security::X509::X509StoreManager::get_UntrustedCertificates)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa0f6a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_UntrustedCertificates", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X509StoreManager::setStaticF__userPath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_userPath", ::Mono::Security::X509::X509StoreManager*>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::X509::X509StoreManager::getStaticF__userPath()  {
return ::cordl_internals::getStaticField<::StringW, "_userPath", ::Mono::Security::X509::X509StoreManager*>();
}
inline void Mono::Security::X509::X509StoreManager::setStaticF__localMachinePath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_localMachinePath", ::Mono::Security::X509::X509StoreManager*>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::X509::X509StoreManager::getStaticF__localMachinePath()  {
return ::cordl_internals::getStaticField<::StringW, "_localMachinePath", ::Mono::Security::X509::X509StoreManager*>();
}
inline void Mono::Security::X509::X509StoreManager::setStaticF__newUserPath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_newUserPath", ::Mono::Security::X509::X509StoreManager*>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::X509::X509StoreManager::getStaticF__newUserPath()  {
return ::cordl_internals::getStaticField<::StringW, "_newUserPath", ::Mono::Security::X509::X509StoreManager*>();
}
inline void Mono::Security::X509::X509StoreManager::setStaticF__newLocalMachinePath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_newLocalMachinePath", ::Mono::Security::X509::X509StoreManager*>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::X509::X509StoreManager::getStaticF__newLocalMachinePath()  {
return ::cordl_internals::getStaticField<::StringW, "_newLocalMachinePath", ::Mono::Security::X509::X509StoreManager*>();
}
inline void Mono::Security::X509::X509StoreManager::setStaticF__userStore(::Mono::Security::X509::X509Stores*  value)  {
::cordl_internals::setStaticField<::Mono::Security::X509::X509Stores*, "_userStore", ::Mono::Security::X509::X509StoreManager*>(std::forward<::Mono::Security::X509::X509Stores*>(value));
}
inline ::Mono::Security::X509::X509Stores* Mono::Security::X509::X509StoreManager::getStaticF__userStore()  {
return ::cordl_internals::getStaticField<::Mono::Security::X509::X509Stores*, "_userStore", ::Mono::Security::X509::X509StoreManager*>();
}
inline void Mono::Security::X509::X509StoreManager::setStaticF__machineStore(::Mono::Security::X509::X509Stores*  value)  {
::cordl_internals::setStaticField<::Mono::Security::X509::X509Stores*, "_machineStore", ::Mono::Security::X509::X509StoreManager*>(std::forward<::Mono::Security::X509::X509Stores*>(value));
}
inline ::Mono::Security::X509::X509Stores* Mono::Security::X509::X509StoreManager::getStaticF__machineStore()  {
return ::cordl_internals::getStaticField<::Mono::Security::X509::X509Stores*, "_machineStore", ::Mono::Security::X509::X509StoreManager*>();
}
inline void Mono::Security::X509::X509StoreManager::setStaticF__newUserStore(::Mono::Security::X509::X509Stores*  value)  {
::cordl_internals::setStaticField<::Mono::Security::X509::X509Stores*, "_newUserStore", ::Mono::Security::X509::X509StoreManager*>(std::forward<::Mono::Security::X509::X509Stores*>(value));
}
inline ::Mono::Security::X509::X509Stores* Mono::Security::X509::X509StoreManager::getStaticF__newUserStore()  {
return ::cordl_internals::getStaticField<::Mono::Security::X509::X509Stores*, "_newUserStore", ::Mono::Security::X509::X509StoreManager*>();
}
inline void Mono::Security::X509::X509StoreManager::setStaticF__newMachineStore(::Mono::Security::X509::X509Stores*  value)  {
::cordl_internals::setStaticField<::Mono::Security::X509::X509Stores*, "_newMachineStore", ::Mono::Security::X509::X509StoreManager*>(std::forward<::Mono::Security::X509::X509Stores*>(value));
}
inline ::Mono::Security::X509::X509Stores* Mono::Security::X509::X509StoreManager::getStaticF__newMachineStore()  {
return ::cordl_internals::getStaticField<::Mono::Security::X509::X509Stores*, "_newMachineStore", ::Mono::Security::X509::X509StoreManager*>();
}
inline void Mono::Security::X509::X509StoreManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509StoreManager::get_CurrentUserPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_CurrentUserPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509StoreManager::get_LocalMachinePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_LocalMachinePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509StoreManager::get_NewCurrentUserPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_NewCurrentUserPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509StoreManager::get_NewLocalMachinePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_NewLocalMachinePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::Mono::Security::X509::X509Stores* Mono::Security::X509::X509StoreManager::get_CurrentUser()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_CurrentUser", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Stores*>(nullptr, ___internal_method);
}
inline ::Mono::Security::X509::X509Stores* Mono::Security::X509::X509StoreManager::get_LocalMachine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_LocalMachine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Stores*>(nullptr, ___internal_method);
}
inline ::Mono::Security::X509::X509Stores* Mono::Security::X509::X509StoreManager::get_NewCurrentUser()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_NewCurrentUser", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Stores*>(nullptr, ___internal_method);
}
inline ::Mono::Security::X509::X509Stores* Mono::Security::X509::X509StoreManager::get_NewLocalMachine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_NewLocalMachine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Stores*>(nullptr, ___internal_method);
}
inline ::Mono::Security::X509::X509CertificateCollection* Mono::Security::X509::X509StoreManager::get_IntermediateCACertificates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_IntermediateCACertificates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection*>(nullptr, ___internal_method);
}
inline ::System::Collections::ArrayList* Mono::Security::X509::X509StoreManager::get_IntermediateCACrls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_IntermediateCACrls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(nullptr, ___internal_method);
}
inline ::Mono::Security::X509::X509CertificateCollection* Mono::Security::X509::X509StoreManager::get_TrustedRootCertificates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_TrustedRootCertificates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection*>(nullptr, ___internal_method);
}
inline ::System::Collections::ArrayList* Mono::Security::X509::X509StoreManager::get_TrustedRootCACrls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_TrustedRootCACrls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(nullptr, ___internal_method);
}
inline ::Mono::Security::X509::X509CertificateCollection* Mono::Security::X509::X509StoreManager::get_UntrustedCertificates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509StoreManager*>(),
                        {"get_UntrustedCertificates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection*>(nullptr, ___internal_method);
}
inline ::Mono::Security::X509::X509StoreManager* Mono::Security::X509::X509StoreManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509StoreManager*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509StoreManager::X509StoreManager()   {
}
