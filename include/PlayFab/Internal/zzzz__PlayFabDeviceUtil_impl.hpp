#pragma once
// IWYU pragma private; include "PlayFab/Internal/PlayFabDeviceUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/Internal/zzzz__PlayFabDeviceUtil_def.hpp"
#include "PlayFab/ClientModels/zzzz__AttributeInstallResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserSettings_def.hpp"
#include "PlayFab/Internal/zzzz__PlayFabDeviceUtil_def.hpp"
#include "PlayFab/SharedModels/zzzz__IPlayFabInstanceApi_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "PlayFab/zzzz__PlayFabApiSettings_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
//  Writing Method size for method: ::PlayFab::Internal::PlayFabDeviceUtil.DoAttributeInstall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::PlayFabApiSettings*, ::PlayFab::SharedModels::IPlayFabInstanceApi*)>(&::PlayFab::Internal::PlayFabDeviceUtil::DoAttributeInstall)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xa84302c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabDeviceUtil*>(),
                        {"DoAttributeInstall", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::SharedModels::IPlayFabInstanceApi*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabDeviceUtil.OnAttributeInstall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::ClientModels::AttributeInstallResult*)>(&::PlayFab::Internal::PlayFabDeviceUtil::OnAttributeInstall)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa8432b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabDeviceUtil*>(),
                        {"OnAttributeInstall", {}, {::i2c::type_of<::PlayFab::ClientModels::AttributeInstallResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabDeviceUtil.SendDeviceInfoToPlayFab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::PlayFabApiSettings*, ::PlayFab::SharedModels::IPlayFabInstanceApi*)>(&::PlayFab::Internal::PlayFabDeviceUtil::SendDeviceInfoToPlayFab)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0xa843374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabDeviceUtil*>(),
                        {"SendDeviceInfoToPlayFab", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::SharedModels::IPlayFabInstanceApi*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabDeviceUtil.OnGatherFail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::PlayFabError*)>(&::PlayFab::Internal::PlayFabDeviceUtil::OnGatherFail)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa843700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabDeviceUtil*>(),
                        {"OnGatherFail", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabDeviceUtil.OnPlayFabLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::SharedModels::PlayFabResultCommon*, ::PlayFab::PlayFabApiSettings*, ::PlayFab::SharedModels::IPlayFabInstanceApi*)>(&::PlayFab::Internal::PlayFabDeviceUtil::OnPlayFabLogin)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa84379c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabDeviceUtil*>(),
                        {"OnPlayFabLogin", {}, {::i2c::type_of<::PlayFab::SharedModels::PlayFabResultCommon*>(), ::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::SharedModels::IPlayFabInstanceApi*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabDeviceUtil._OnPlayFabLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::ClientModels::UserSettings*, ::StringW, ::StringW, ::StringW, ::PlayFab::PlayFabApiSettings*, ::PlayFab::SharedModels::IPlayFabInstanceApi*)>(&::PlayFab::Internal::PlayFabDeviceUtil::_OnPlayFabLogin)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa8438ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabDeviceUtil*>(),
                        {"_OnPlayFabLogin", {}, {::i2c::type_of<::PlayFab::ClientModels::UserSettings*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::SharedModels::IPlayFabInstanceApi*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabDeviceUtil.GetAdvertIdFromUnity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::PlayFabApiSettings*, ::PlayFab::SharedModels::IPlayFabInstanceApi*)>(&::PlayFab::Internal::PlayFabDeviceUtil::GetAdvertIdFromUnity)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa843a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabDeviceUtil*>(),
                        {"GetAdvertIdFromUnity", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::SharedModels::IPlayFabInstanceApi*>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::Internal::PlayFabDeviceUtil::setStaticF__needsAttribution(bool  value)  {
::cordl_internals::setStaticField<bool, "_needsAttribution", ::PlayFab::Internal::PlayFabDeviceUtil*>(std::forward<bool>(value));
}
inline bool PlayFab::Internal::PlayFabDeviceUtil::getStaticF__needsAttribution()  {
return ::cordl_internals::getStaticField<bool, "_needsAttribution", ::PlayFab::Internal::PlayFabDeviceUtil*>();
}
inline void PlayFab::Internal::PlayFabDeviceUtil::setStaticF__gatherDeviceInfo(bool  value)  {
::cordl_internals::setStaticField<bool, "_gatherDeviceInfo", ::PlayFab::Internal::PlayFabDeviceUtil*>(std::forward<bool>(value));
}
inline bool PlayFab::Internal::PlayFabDeviceUtil::getStaticF__gatherDeviceInfo()  {
return ::cordl_internals::getStaticField<bool, "_gatherDeviceInfo", ::PlayFab::Internal::PlayFabDeviceUtil*>();
}
inline void PlayFab::Internal::PlayFabDeviceUtil::setStaticF__gatherScreenTime(bool  value)  {
::cordl_internals::setStaticField<bool, "_gatherScreenTime", ::PlayFab::Internal::PlayFabDeviceUtil*>(std::forward<bool>(value));
}
inline bool PlayFab::Internal::PlayFabDeviceUtil::getStaticF__gatherScreenTime()  {
return ::cordl_internals::getStaticField<bool, "_gatherScreenTime", ::PlayFab::Internal::PlayFabDeviceUtil*>();
}
inline void PlayFab::Internal::PlayFabDeviceUtil::DoAttributeInstall(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::SharedModels::IPlayFabInstanceApi*  instanceApi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabDeviceUtil*>(),
                        {"DoAttributeInstall", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::SharedModels::IPlayFabInstanceApi*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, settings, instanceApi);
}
inline void PlayFab::Internal::PlayFabDeviceUtil::OnAttributeInstall(::PlayFab::ClientModels::AttributeInstallResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabDeviceUtil*>(),
                        {"OnAttributeInstall", {}, {::i2c::type_of<::PlayFab::ClientModels::AttributeInstallResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result);
}
inline void PlayFab::Internal::PlayFabDeviceUtil::SendDeviceInfoToPlayFab(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::SharedModels::IPlayFabInstanceApi*  instanceApi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabDeviceUtil*>(),
                        {"SendDeviceInfoToPlayFab", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::SharedModels::IPlayFabInstanceApi*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, settings, instanceApi);
}
inline void PlayFab::Internal::PlayFabDeviceUtil::OnGatherFail(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabDeviceUtil*>(),
                        {"OnGatherFail", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error);
}
inline void PlayFab::Internal::PlayFabDeviceUtil::OnPlayFabLogin(::PlayFab::SharedModels::PlayFabResultCommon*  result, ::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::SharedModels::IPlayFabInstanceApi*  instanceApi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabDeviceUtil*>(),
                        {"OnPlayFabLogin", {}, {::i2c::type_of<::PlayFab::SharedModels::PlayFabResultCommon*>(), ::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::SharedModels::IPlayFabInstanceApi*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result, settings, instanceApi);
}
inline void PlayFab::Internal::PlayFabDeviceUtil::_OnPlayFabLogin(::PlayFab::ClientModels::UserSettings*  settingsForUser, ::StringW  playFabId, ::StringW  entityId, ::StringW  entityType, ::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::SharedModels::IPlayFabInstanceApi*  instanceApi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabDeviceUtil*>(),
                        {"_OnPlayFabLogin", {}, {::i2c::type_of<::PlayFab::ClientModels::UserSettings*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::SharedModels::IPlayFabInstanceApi*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, settingsForUser, playFabId, entityId, entityType, settings, instanceApi);
}
inline void PlayFab::Internal::PlayFabDeviceUtil::GetAdvertIdFromUnity(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::SharedModels::IPlayFabInstanceApi*  instanceApi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabDeviceUtil*>(),
                        {"GetAdvertIdFromUnity", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::SharedModels::IPlayFabInstanceApi*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, settings, instanceApi);
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::PlayFabDeviceUtil::PlayFabDeviceUtil()   {
}
//  Writing Method size for method: ::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0::*)()>(&::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa843c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0._GetAdvertIdFromUnity_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0::*)(::StringW, bool, ::StringW)>(&::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0::_GetAdvertIdFromUnity_b__0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa843c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0*>(),
                        {"<GetAdvertIdFromUnity>b__0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::PlayFabApiSettings*& PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::PlayFab::PlayFabApiSettings* const& PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0::__cordl_internal_set_settings(::PlayFab::PlayFabApiSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi*& PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0::__cordl_internal_get_instanceApi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceApi;
}
constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi* const& PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0::__cordl_internal_get_instanceApi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceApi;
}
constexpr void PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0::__cordl_internal_set_instanceApi(::PlayFab::SharedModels::IPlayFabInstanceApi*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceApi = value;
}
inline void PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0::_GetAdvertIdFromUnity_b__0(::StringW  advertisingId, bool  trackingEnabled, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0*>(),
                        {"<GetAdvertIdFromUnity>b__0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, advertisingId, trackingEnabled, error);
}
inline ::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0* PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0::PlayFabDeviceUtil___c__DisplayClass9_0()   {
}
