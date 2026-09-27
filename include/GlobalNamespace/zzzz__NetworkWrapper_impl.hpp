#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkWrapper.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemConfig_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkWrapper_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystem_def.hpp"
#include "GorillaNetworking/zzzz__SO_NetworkVoiceSettings_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkWrapper.AutoInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::NetworkWrapper::AutoInstantiate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x56ec924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkWrapper*>(),
                        {"AutoInstantiate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkWrapper.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkWrapper::*)()>(&::GlobalNamespace::NetworkWrapper::Awake)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x56ec9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkWrapper*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkWrapper.UpdatePlayerCountWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkWrapper::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkWrapper::UpdatePlayerCountWrapper)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56eccf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkWrapper*>(),
                        {"UpdatePlayerCountWrapper", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkWrapper.UpdatePlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkWrapper::*)()>(&::GlobalNamespace::NetworkWrapper::UpdatePlayerCount)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x56eccfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkWrapper*>(),
                        {"UpdatePlayerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkWrapper::*)()>(&::GlobalNamespace::NetworkWrapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ecf14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkWrapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NetworkSystem>& GlobalNamespace::NetworkWrapper::__cordl_internal_get_activeNetworkSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeNetworkSystem;
}
constexpr ::UnityW<::GlobalNamespace::NetworkSystem> const& GlobalNamespace::NetworkWrapper::__cordl_internal_get_activeNetworkSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeNetworkSystem;
}
constexpr void GlobalNamespace::NetworkWrapper::__cordl_internal_set_activeNetworkSystem(::UnityW<::GlobalNamespace::NetworkSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeNetworkSystem = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::NetworkWrapper::__cordl_internal_get_titleRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleRef;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::NetworkWrapper::__cordl_internal_get_titleRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleRef;
}
constexpr void GlobalNamespace::NetworkWrapper::__cordl_internal_set_titleRef(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___titleRef = value;
}
constexpr ::GlobalNamespace::NetworkSystemConfig& GlobalNamespace::NetworkWrapper::__cordl_internal_get_netSysConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netSysConfig;
}
constexpr ::GlobalNamespace::NetworkSystemConfig const& GlobalNamespace::NetworkWrapper::__cordl_internal_get_netSysConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netSysConfig;
}
constexpr void GlobalNamespace::NetworkWrapper::__cordl_internal_set_netSysConfig(::GlobalNamespace::NetworkSystemConfig  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netSysConfig = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::NetworkWrapper::__cordl_internal_get_networkRegionNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkRegionNames;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::NetworkWrapper::__cordl_internal_get_networkRegionNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkRegionNames;
}
constexpr void GlobalNamespace::NetworkWrapper::__cordl_internal_set_networkRegionNames(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkRegionNames = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::NetworkWrapper::__cordl_internal_get_devNetworkRegionNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___devNetworkRegionNames;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::NetworkWrapper::__cordl_internal_get_devNetworkRegionNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___devNetworkRegionNames;
}
constexpr void GlobalNamespace::NetworkWrapper::__cordl_internal_set_devNetworkRegionNames(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___devNetworkRegionNames = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::NetworkWrapper::__cordl_internal_get_stateTextRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateTextRef;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::NetworkWrapper::__cordl_internal_get_stateTextRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateTextRef;
}
constexpr void GlobalNamespace::NetworkWrapper::__cordl_internal_set_stateTextRef(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateTextRef = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::NetworkWrapper::__cordl_internal_get_playerCountTextRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCountTextRef;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::NetworkWrapper::__cordl_internal_get_playerCountTextRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCountTextRef;
}
constexpr void GlobalNamespace::NetworkWrapper::__cordl_internal_set_playerCountTextRef(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCountTextRef = value;
}
constexpr ::UnityW<::GorillaNetworking::SO_NetworkVoiceSettings>& GlobalNamespace::NetworkWrapper::__cordl_internal_get_VoiceSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoiceSettings;
}
constexpr ::UnityW<::GorillaNetworking::SO_NetworkVoiceSettings> const& GlobalNamespace::NetworkWrapper::__cordl_internal_get_VoiceSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoiceSettings;
}
constexpr void GlobalNamespace::NetworkWrapper::__cordl_internal_set_VoiceSettings(::UnityW<::GorillaNetworking::SO_NetworkVoiceSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VoiceSettings = value;
}
inline void GlobalNamespace::NetworkWrapper::AutoInstantiate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkWrapper*>(),
                        {"AutoInstantiate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::NetworkWrapper::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkWrapper*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkWrapper::UpdatePlayerCountWrapper(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkWrapper*>(),
                        {"UpdatePlayerCountWrapper", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::NetworkWrapper::UpdatePlayerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkWrapper*>(),
                        {"UpdatePlayerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkWrapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkWrapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NetworkWrapper* GlobalNamespace::NetworkWrapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkWrapper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkWrapper::NetworkWrapper()   {
}
