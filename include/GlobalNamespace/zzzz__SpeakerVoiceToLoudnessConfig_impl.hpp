#pragma once
// IWYU pragma private; include "GlobalNamespace/SpeakerVoiceToLoudnessConfig.hpp"
#include "GlobalNamespace/zzzz__SpeakerVoiceToLoudnessConfig_SerializedConfig_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SpeakerVoiceToLoudnessConfig_def.hpp"
#include "GlobalNamespace/zzzz__SpeakerVoiceToLoudnessConfig_SerializedConfig_def.hpp"
#include "GlobalNamespace/zzzz__StaticArrayBag_1_def.hpp"
#include "GorillaNetworking/zzzz__PlayFabTitleDataCache_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpeakerVoiceToLoudnessConfig.get_EnableLoudnessLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::SpeakerVoiceToLoudnessConfig::get_EnableLoudnessLimit)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59865c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudnessConfig*>(),
                        {"get_EnableLoudnessLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeakerVoiceToLoudnessConfig.get_LoudnessLimitThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::SpeakerVoiceToLoudnessConfig::get_LoudnessLimitThreshold)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5986620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudnessConfig*>(),
                        {"get_LoudnessLimitThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeakerVoiceToLoudnessConfig.StaticLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SpeakerVoiceToLoudnessConfig::StaticLoad)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5986678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudnessConfig*>(),
                        {"StaticLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeakerVoiceToLoudnessConfig.OnTitleDataCacheReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaNetworking::PlayFabTitleDataCache*)>(&::GlobalNamespace::SpeakerVoiceToLoudnessConfig::OnTitleDataCacheReady)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x59866ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudnessConfig*>(),
                        {"OnTitleDataCacheReady", {}, {::i2c::type_of<::GorillaNetworking::PlayFabTitleDataCache*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeakerVoiceToLoudnessConfig.OnTitleDataCacheResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::SpeakerVoiceToLoudnessConfig::OnTitleDataCacheResponse)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x59867e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudnessConfig*>(),
                        {"OnTitleDataCacheResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeakerVoiceToLoudnessConfig.OnTitleDataCacheError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::SpeakerVoiceToLoudnessConfig::OnTitleDataCacheError)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59869b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudnessConfig*>(),
                        {"OnTitleDataCacheError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SpeakerVoiceToLoudnessConfig::setStaticF_k_config(::GlobalNamespace::SpeakerVoiceToLoudnessConfig_SerializedConfig  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SpeakerVoiceToLoudnessConfig_SerializedConfig, "k_config", ::GlobalNamespace::SpeakerVoiceToLoudnessConfig*>(std::forward<::GlobalNamespace::SpeakerVoiceToLoudnessConfig_SerializedConfig>(value));
}
inline ::GlobalNamespace::SpeakerVoiceToLoudnessConfig_SerializedConfig GlobalNamespace::SpeakerVoiceToLoudnessConfig::getStaticF_k_config()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SpeakerVoiceToLoudnessConfig_SerializedConfig, "k_config", ::GlobalNamespace::SpeakerVoiceToLoudnessConfig*>();
}
inline void GlobalNamespace::SpeakerVoiceToLoudnessConfig::setStaticF_StaticArrays(::GlobalNamespace::StaticArrayBag_1<float_t>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::StaticArrayBag_1<float_t>*, "StaticArrays", ::GlobalNamespace::SpeakerVoiceToLoudnessConfig*>(std::forward<::GlobalNamespace::StaticArrayBag_1<float_t>*>(value));
}
inline ::GlobalNamespace::StaticArrayBag_1<float_t>* GlobalNamespace::SpeakerVoiceToLoudnessConfig::getStaticF_StaticArrays()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::StaticArrayBag_1<float_t>*, "StaticArrays", ::GlobalNamespace::SpeakerVoiceToLoudnessConfig*>();
}
inline bool GlobalNamespace::SpeakerVoiceToLoudnessConfig::get_EnableLoudnessLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudnessConfig*>(),
                        {"get_EnableLoudnessLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline float_t GlobalNamespace::SpeakerVoiceToLoudnessConfig::get_LoudnessLimitThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudnessConfig*>(),
                        {"get_LoudnessLimitThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SpeakerVoiceToLoudnessConfig::StaticLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudnessConfig*>(),
                        {"StaticLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SpeakerVoiceToLoudnessConfig::OnTitleDataCacheReady(::GorillaNetworking::PlayFabTitleDataCache*  titleDataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudnessConfig*>(),
                        {"OnTitleDataCacheReady", {}, {::i2c::type_of<::GorillaNetworking::PlayFabTitleDataCache*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, titleDataCache);
}
inline void GlobalNamespace::SpeakerVoiceToLoudnessConfig::OnTitleDataCacheResponse(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudnessConfig*>(),
                        {"OnTitleDataCacheResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, json);
}
inline void GlobalNamespace::SpeakerVoiceToLoudnessConfig::OnTitleDataCacheError(::PlayFab::PlayFabError*  errorMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudnessConfig*>(),
                        {"OnTitleDataCacheError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorMsg);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpeakerVoiceToLoudnessConfig::SpeakerVoiceToLoudnessConfig()   {
}
