#pragma once
// IWYU pragma private; include "Viveport/Internal/Deeplink.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "Viveport/Internal/zzzz__Deeplink_def.hpp"
#include "Viveport/Internal/zzzz__Deeplink_def.hpp"
#include "Viveport/Internal/zzzz__StatusCallback_def.hpp"
#include "Viveport/zzzz__Deeplink_def.hpp"
//  Writing Method size for method: ::Viveport::Internal::Deeplink.IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Internal::StatusCallback*)>(&::Viveport::Internal::Deeplink::IsReady)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b58160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Deeplink*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::Deeplink.GoToApp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Deeplink_DeeplinkChecker*, ::StringW, ::StringW)>(&::Viveport::Internal::Deeplink::GoToApp)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5b582e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Deeplink*>(),
                        {"GoToApp", {}, {::i2c::type_of<::Viveport::Deeplink_DeeplinkChecker*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::Deeplink.GoToStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Deeplink_DeeplinkChecker*, ::StringW)>(&::Viveport::Internal::Deeplink::GoToStore)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b58574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Deeplink*>(),
                        {"GoToStore", {}, {::i2c::type_of<::Viveport::Deeplink_DeeplinkChecker*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::Deeplink.GoToAppOrGoToStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Deeplink_DeeplinkChecker*, ::StringW, ::StringW)>(&::Viveport::Internal::Deeplink::GoToAppOrGoToStore)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5b58774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Deeplink*>(),
                        {"GoToAppOrGoToStore", {}, {::i2c::type_of<::Viveport::Deeplink_DeeplinkChecker*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::Deeplink.GetAppLaunchData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Viveport::Internal::Deeplink::GetAppLaunchData)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b58928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Deeplink*>(),
                        {"GetAppLaunchData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::Deeplink._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::Deeplink::*)()>(&::Viveport::Internal::Deeplink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b59d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Deeplink*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Viveport::Internal::Deeplink::IsReady(::Viveport::Internal::StatusCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Deeplink*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Viveport::Internal::Deeplink::GoToApp(::Viveport::Deeplink_DeeplinkChecker*  checker, ::StringW  appId, ::StringW  launchData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Deeplink*>(),
                        {"GoToApp", {}, {::i2c::type_of<::Viveport::Deeplink_DeeplinkChecker*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, checker, appId, launchData);
}
inline void Viveport::Internal::Deeplink::GoToStore(::Viveport::Deeplink_DeeplinkChecker*  checker, ::StringW  appId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Deeplink*>(),
                        {"GoToStore", {}, {::i2c::type_of<::Viveport::Deeplink_DeeplinkChecker*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, checker, appId);
}
inline void Viveport::Internal::Deeplink::GoToAppOrGoToStore(::Viveport::Deeplink_DeeplinkChecker*  checker, ::StringW  appId, ::StringW  launchData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Deeplink*>(),
                        {"GoToAppOrGoToStore", {}, {::i2c::type_of<::Viveport::Deeplink_DeeplinkChecker*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, checker, appId, launchData);
}
inline ::StringW Viveport::Internal::Deeplink::GetAppLaunchData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Deeplink*>(),
                        {"GetAppLaunchData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Viveport::Internal::Deeplink::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Deeplink*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::Internal::Deeplink* Viveport::Internal::Deeplink::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Internal::Deeplink*>());
}
// Ctor Parameters []
constexpr ::Viveport::Internal::Deeplink::Deeplink()   {
}
//  Writing Method size for method: ::Viveport::Internal::Deeplink_AndroidDeeplinkChecker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::Deeplink_AndroidDeeplinkChecker::*)(::Viveport::Deeplink_DeeplinkChecker*)>(&::Viveport::Internal::Deeplink_AndroidDeeplinkChecker::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b59cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Deeplink_AndroidDeeplinkChecker*>(),
                        {".ctor", {}, {::i2c::type_of<::Viveport::Deeplink_DeeplinkChecker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::Deeplink_AndroidDeeplinkChecker.onSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::Deeplink_AndroidDeeplinkChecker::*)()>(&::Viveport::Internal::Deeplink_AndroidDeeplinkChecker::onSuccess)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b59d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Deeplink_AndroidDeeplinkChecker*>(),
                        {"onSuccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::Deeplink_AndroidDeeplinkChecker.onFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::Deeplink_AndroidDeeplinkChecker::*)(int32_t, ::StringW)>(&::Viveport::Internal::Deeplink_AndroidDeeplinkChecker::onFailure)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b59dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Deeplink_AndroidDeeplinkChecker*>(),
                        {"onFailure", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Viveport::Deeplink_DeeplinkChecker*& Viveport::Internal::Deeplink_AndroidDeeplinkChecker::__cordl_internal_get_checker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checker;
}
constexpr ::Viveport::Deeplink_DeeplinkChecker* const& Viveport::Internal::Deeplink_AndroidDeeplinkChecker::__cordl_internal_get_checker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checker;
}
constexpr void Viveport::Internal::Deeplink_AndroidDeeplinkChecker::__cordl_internal_set_checker(::Viveport::Deeplink_DeeplinkChecker*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checker = value;
}
inline void Viveport::Internal::Deeplink_AndroidDeeplinkChecker::_ctor(::Viveport::Deeplink_DeeplinkChecker*  checker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Deeplink_AndroidDeeplinkChecker*>(),
                        {".ctor", {}, {::i2c::type_of<::Viveport::Deeplink_DeeplinkChecker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, checker);
}
inline void Viveport::Internal::Deeplink_AndroidDeeplinkChecker::onSuccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Deeplink_AndroidDeeplinkChecker*>(),
                        {"onSuccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Viveport::Internal::Deeplink_AndroidDeeplinkChecker::onFailure(int32_t  errorCode, ::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Deeplink_AndroidDeeplinkChecker*>(),
                        {"onFailure", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorCode, errorMessage);
}
inline ::Viveport::Internal::Deeplink_AndroidDeeplinkChecker* Viveport::Internal::Deeplink_AndroidDeeplinkChecker::New_ctor(::Viveport::Deeplink_DeeplinkChecker*  checker)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Internal::Deeplink_AndroidDeeplinkChecker*>(checker));
}
// Ctor Parameters []
constexpr ::Viveport::Internal::Deeplink_AndroidDeeplinkChecker::Deeplink_AndroidDeeplinkChecker()   {
}
