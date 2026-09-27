#pragma once
// IWYU pragma private; include "Viveport/Deeplink.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Viveport/zzzz__Deeplink_def.hpp"
#include "Viveport/Internal/zzzz__StatusCallback2_def.hpp"
#include "Viveport/Internal/zzzz__StatusCallback_def.hpp"
#include "Viveport/zzzz__Deeplink_def.hpp"
#include "Viveport/zzzz__StatusCallback_def.hpp"
//  Writing Method size for method: ::Viveport::Deeplink.IsReadyIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Viveport::Deeplink::IsReadyIl2cppCallback)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b57f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Deeplink*>(),
                        {"IsReadyIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Deeplink.IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::StatusCallback*)>(&::Viveport::Deeplink::IsReady)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5b57f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Deeplink*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::StatusCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Deeplink.GoToApp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Deeplink_DeeplinkChecker*, ::StringW, ::StringW)>(&::Viveport::Deeplink::GoToApp)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b58260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Deeplink*>(),
                        {"GoToApp", {}, {::i2c::type_of<::Viveport::Deeplink_DeeplinkChecker*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Deeplink.GoToApp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Deeplink_DeeplinkChecker*, ::StringW, ::StringW, ::StringW)>(&::Viveport::Deeplink::GoToApp)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b58498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Deeplink*>(),
                        {"GoToApp", {}, {::i2c::type_of<::Viveport::Deeplink_DeeplinkChecker*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Deeplink.GoToStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Deeplink_DeeplinkChecker*, ::StringW)>(&::Viveport::Deeplink::GoToStore)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b58520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Deeplink*>(),
                        {"GoToStore", {}, {::i2c::type_of<::Viveport::Deeplink_DeeplinkChecker*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Deeplink.GoToAppOrGoToStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Deeplink_DeeplinkChecker*, ::StringW, ::StringW)>(&::Viveport::Deeplink::GoToAppOrGoToStore)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b586ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Deeplink*>(),
                        {"GoToAppOrGoToStore", {}, {::i2c::type_of<::Viveport::Deeplink_DeeplinkChecker*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Deeplink.GetAppLaunchData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Viveport::Deeplink::GetAppLaunchData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b58924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Deeplink*>(),
                        {"GetAppLaunchData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Deeplink._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Deeplink::*)()>(&::Viveport::Deeplink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b58a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Deeplink*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Viveport::Deeplink::setStaticF_isReadyIl2cppCallback(::Viveport::Internal::StatusCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::StatusCallback*, "isReadyIl2cppCallback", ::Viveport::Deeplink*>(std::forward<::Viveport::Internal::StatusCallback*>(value));
}
inline ::Viveport::Internal::StatusCallback* Viveport::Deeplink::getStaticF_isReadyIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::StatusCallback*, "isReadyIl2cppCallback", ::Viveport::Deeplink*>();
}
inline void Viveport::Deeplink::setStaticF_goToAppIl2cppCallback(::Viveport::Internal::StatusCallback2*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::StatusCallback2*, "goToAppIl2cppCallback", ::Viveport::Deeplink*>(std::forward<::Viveport::Internal::StatusCallback2*>(value));
}
inline ::Viveport::Internal::StatusCallback2* Viveport::Deeplink::getStaticF_goToAppIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::StatusCallback2*, "goToAppIl2cppCallback", ::Viveport::Deeplink*>();
}
inline void Viveport::Deeplink::setStaticF_goToAppWithBranchNameIl2cppCallback(::Viveport::Internal::StatusCallback2*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::StatusCallback2*, "goToAppWithBranchNameIl2cppCallback", ::Viveport::Deeplink*>(std::forward<::Viveport::Internal::StatusCallback2*>(value));
}
inline ::Viveport::Internal::StatusCallback2* Viveport::Deeplink::getStaticF_goToAppWithBranchNameIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::StatusCallback2*, "goToAppWithBranchNameIl2cppCallback", ::Viveport::Deeplink*>();
}
inline void Viveport::Deeplink::setStaticF_goToStoreIl2cppCallback(::Viveport::Internal::StatusCallback2*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::StatusCallback2*, "goToStoreIl2cppCallback", ::Viveport::Deeplink*>(std::forward<::Viveport::Internal::StatusCallback2*>(value));
}
inline ::Viveport::Internal::StatusCallback2* Viveport::Deeplink::getStaticF_goToStoreIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::StatusCallback2*, "goToStoreIl2cppCallback", ::Viveport::Deeplink*>();
}
inline void Viveport::Deeplink::setStaticF_goToAppOrGoToStoreIl2cppCallback(::Viveport::Internal::StatusCallback2*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::StatusCallback2*, "goToAppOrGoToStoreIl2cppCallback", ::Viveport::Deeplink*>(std::forward<::Viveport::Internal::StatusCallback2*>(value));
}
inline ::Viveport::Internal::StatusCallback2* Viveport::Deeplink::getStaticF_goToAppOrGoToStoreIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::StatusCallback2*, "goToAppOrGoToStoreIl2cppCallback", ::Viveport::Deeplink*>();
}
inline void Viveport::Deeplink::IsReadyIl2cppCallback(int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Deeplink*>(),
                        {"IsReadyIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode);
}
inline void Viveport::Deeplink::IsReady(::Viveport::StatusCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Deeplink*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::StatusCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Viveport::Deeplink::GoToApp(::Viveport::Deeplink_DeeplinkChecker*  checker, ::StringW  appId, ::StringW  launchData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Deeplink*>(),
                        {"GoToApp", {}, {::i2c::type_of<::Viveport::Deeplink_DeeplinkChecker*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, checker, appId, launchData);
}
inline void Viveport::Deeplink::GoToApp(::Viveport::Deeplink_DeeplinkChecker*  checker, ::StringW  appId, ::StringW  launchData, ::StringW  branchName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Deeplink*>(),
                        {"GoToApp", {}, {::i2c::type_of<::Viveport::Deeplink_DeeplinkChecker*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, checker, appId, launchData, branchName);
}
inline void Viveport::Deeplink::GoToStore(::Viveport::Deeplink_DeeplinkChecker*  checker, ::StringW  appId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Deeplink*>(),
                        {"GoToStore", {}, {::i2c::type_of<::Viveport::Deeplink_DeeplinkChecker*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, checker, appId);
}
inline void Viveport::Deeplink::GoToAppOrGoToStore(::Viveport::Deeplink_DeeplinkChecker*  checker, ::StringW  appId, ::StringW  launchData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Deeplink*>(),
                        {"GoToAppOrGoToStore", {}, {::i2c::type_of<::Viveport::Deeplink_DeeplinkChecker*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, checker, appId, launchData);
}
inline ::StringW Viveport::Deeplink::GetAppLaunchData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Deeplink*>(),
                        {"GetAppLaunchData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Viveport::Deeplink::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Deeplink*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::Deeplink* Viveport::Deeplink::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Deeplink*>());
}
// Ctor Parameters []
constexpr ::Viveport::Deeplink::Deeplink()   {
}
//  Writing Method size for method: ::Viveport::Deeplink_DeeplinkChecker.OnSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Deeplink_DeeplinkChecker::*)()>(&::Viveport::Deeplink_DeeplinkChecker::OnSuccess)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::Deeplink_DeeplinkChecker*>(),
                    {::i2c::class_of<::Viveport::Deeplink_DeeplinkChecker*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Deeplink_DeeplinkChecker.OnFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Deeplink_DeeplinkChecker::*)(int32_t, ::StringW)>(&::Viveport::Deeplink_DeeplinkChecker::OnFailure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::Deeplink_DeeplinkChecker*>(),
                    {::i2c::class_of<::Viveport::Deeplink_DeeplinkChecker*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Deeplink_DeeplinkChecker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Deeplink_DeeplinkChecker::*)()>(&::Viveport::Deeplink_DeeplinkChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b58a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Deeplink_DeeplinkChecker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Viveport::Deeplink_DeeplinkChecker::OnSuccess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::Deeplink_DeeplinkChecker*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Viveport::Deeplink_DeeplinkChecker::OnFailure(int32_t  errorCode, ::StringW  errorMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::Deeplink_DeeplinkChecker*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorCode, errorMessage);
}
inline void Viveport::Deeplink_DeeplinkChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Deeplink_DeeplinkChecker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::Deeplink_DeeplinkChecker* Viveport::Deeplink_DeeplinkChecker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Deeplink_DeeplinkChecker*>());
}
// Ctor Parameters []
constexpr ::Viveport::Deeplink_DeeplinkChecker::Deeplink_DeeplinkChecker()   {
}
