#pragma once
// IWYU pragma private; include "System/Net/AuthenticationManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__AuthenticationManager_def.hpp"
#include "System/Collections/Specialized/zzzz__StringDictionary_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Net/zzzz__Authorization_def.hpp"
#include "System/Net/zzzz__IAuthenticationModule_def.hpp"
#include "System/Net/zzzz__ICredentialPolicy_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::AuthenticationManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::AuthenticationManager::*)()>(&::System::Net::AuthenticationManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac89b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.EnsureModules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Net::AuthenticationManager::EnsureModules)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xac89b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"EnsureModules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.get_CredentialPolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ICredentialPolicy* (*)()>(&::System::Net::AuthenticationManager::get_CredentialPolicy)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xac89dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"get_CredentialPolicy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.set_CredentialPolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::ICredentialPolicy*)>(&::System::Net::AuthenticationManager::set_CredentialPolicy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xac89e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"set_CredentialPolicy", {}, {::i2c::type_of<::System::Net::ICredentialPolicy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.GetMustImplement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Net::AuthenticationManager::GetMustImplement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xac89e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"GetMustImplement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.get_CustomTargetNameDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Specialized::StringDictionary* (*)()>(&::System::Net::AuthenticationManager::get_CustomTargetNameDictionary)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xac89ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"get_CustomTargetNameDictionary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.get_RegisteredModules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)()>(&::System::Net::AuthenticationManager::get_RegisteredModules)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xac89f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"get_RegisteredModules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.get_OSSupportsExtendedProtection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Net::AuthenticationManager::get_OSSupportsExtendedProtection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac89f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"get_OSSupportsExtendedProtection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Net::AuthenticationManager::Clear)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xac89f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.Authenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Authorization* (*)(::StringW, ::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&::System::Net::AuthenticationManager::Authenticate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xac8a0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"Authenticate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.DoAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Authorization* (*)(::StringW, ::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&::System::Net::AuthenticationManager::DoAuthenticate)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0xac8a1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"DoAuthenticate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.PreAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Authorization* (*)(::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&::System::Net::AuthenticationManager::PreAuthenticate)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0xac8a630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"PreAuthenticate", {}, {::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::IAuthenticationModule*)>(&::System::Net::AuthenticationManager::Register)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xac8ab08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"Register", {}, {::i2c::type_of<::System::Net::IAuthenticationModule*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::IAuthenticationModule*)>(&::System::Net::AuthenticationManager::Unregister)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xac8b1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::System::Net::IAuthenticationModule*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Net::AuthenticationManager::Unregister)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xac8b2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.DoUnregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool)>(&::System::Net::AuthenticationManager::DoUnregister)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0xac8ad14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"DoUnregister", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::AuthenticationManager::setStaticF_modules(::System::Collections::ArrayList*  value)  {
::cordl_internals::setStaticField<::System::Collections::ArrayList*, "modules", ::System::Net::AuthenticationManager*>(std::forward<::System::Collections::ArrayList*>(value));
}
inline ::System::Collections::ArrayList* System::Net::AuthenticationManager::getStaticF_modules()  {
return ::cordl_internals::getStaticField<::System::Collections::ArrayList*, "modules", ::System::Net::AuthenticationManager*>();
}
inline void System::Net::AuthenticationManager::setStaticF_locker(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "locker", ::System::Net::AuthenticationManager*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Net::AuthenticationManager::getStaticF_locker()  {
return ::cordl_internals::getStaticField<::System::Object*, "locker", ::System::Net::AuthenticationManager*>();
}
inline void System::Net::AuthenticationManager::setStaticF_credential_policy(::System::Net::ICredentialPolicy*  value)  {
::cordl_internals::setStaticField<::System::Net::ICredentialPolicy*, "credential_policy", ::System::Net::AuthenticationManager*>(std::forward<::System::Net::ICredentialPolicy*>(value));
}
inline ::System::Net::ICredentialPolicy* System::Net::AuthenticationManager::getStaticF_credential_policy()  {
return ::cordl_internals::getStaticField<::System::Net::ICredentialPolicy*, "credential_policy", ::System::Net::AuthenticationManager*>();
}
inline void System::Net::AuthenticationManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::AuthenticationManager::EnsureModules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"EnsureModules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Net::ICredentialPolicy* System::Net::AuthenticationManager::get_CredentialPolicy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"get_CredentialPolicy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentialPolicy*>(nullptr, ___internal_method);
}
inline void System::Net::AuthenticationManager::set_CredentialPolicy(::System::Net::ICredentialPolicy*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"set_CredentialPolicy", {}, {::i2c::type_of<::System::Net::ICredentialPolicy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Exception* System::Net::AuthenticationManager::GetMustImplement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"GetMustImplement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Collections::Specialized::StringDictionary* System::Net::AuthenticationManager::get_CustomTargetNameDictionary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"get_CustomTargetNameDictionary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Specialized::StringDictionary*>(nullptr, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Net::AuthenticationManager::get_RegisteredModules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"get_RegisteredModules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method);
}
inline bool System::Net::AuthenticationManager::get_OSSupportsExtendedProtection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"get_OSSupportsExtendedProtection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Net::AuthenticationManager::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Net::Authorization* System::Net::AuthenticationManager::Authenticate(::StringW  challenge, ::System::Net::WebRequest*  request, ::System::Net::ICredentials*  credentials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"Authenticate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*>(nullptr, ___internal_method, challenge, request, credentials);
}
inline ::System::Net::Authorization* System::Net::AuthenticationManager::DoAuthenticate(::StringW  challenge, ::System::Net::WebRequest*  request, ::System::Net::ICredentials*  credentials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"DoAuthenticate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*>(nullptr, ___internal_method, challenge, request, credentials);
}
inline ::System::Net::Authorization* System::Net::AuthenticationManager::PreAuthenticate(::System::Net::WebRequest*  request, ::System::Net::ICredentials*  credentials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"PreAuthenticate", {}, {::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*>(nullptr, ___internal_method, request, credentials);
}
inline void System::Net::AuthenticationManager::Register(::System::Net::IAuthenticationModule*  authenticationModule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"Register", {}, {::i2c::type_of<::System::Net::IAuthenticationModule*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, authenticationModule);
}
inline void System::Net::AuthenticationManager::Unregister(::System::Net::IAuthenticationModule*  authenticationModule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::System::Net::IAuthenticationModule*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, authenticationModule);
}
inline void System::Net::AuthenticationManager::Unregister(::StringW  authenticationScheme)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, authenticationScheme);
}
inline void System::Net::AuthenticationManager::DoUnregister(::StringW  authenticationScheme, bool  throwEx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationManager*>(),
                        {"DoUnregister", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, authenticationScheme, throwEx);
}
inline ::System::Net::AuthenticationManager* System::Net::AuthenticationManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::AuthenticationManager*>());
}
// Ctor Parameters []
constexpr ::System::Net::AuthenticationManager::AuthenticationManager()   {
}
