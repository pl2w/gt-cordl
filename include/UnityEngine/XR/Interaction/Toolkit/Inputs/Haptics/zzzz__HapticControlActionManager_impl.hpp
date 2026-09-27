#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/HapticControlActionManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__HapticControlActionManager_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/OpenXR/zzzz__OpenXRHapticImpulseChannel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__HapticImpulseCommandChannelGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__HapticImpulseSingleChannelGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__IXRHapticImpulseChannelGroup_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb4cad54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager.GetChannelGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager::GetChannelGroup)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xb4caf0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*>(),
                        {"GetChannelGroup", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager::__cordl_internal_get_m_DeviceChannelGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeviceChannelGroup;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager::__cordl_internal_get_m_DeviceChannelGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeviceChannelGroup;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager::__cordl_internal_set_m_DeviceChannelGroup(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeviceChannelGroup = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager::__cordl_internal_get_m_OpenXRChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OpenXRChannel;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager::__cordl_internal_get_m_OpenXRChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OpenXRChannel;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager::__cordl_internal_set_m_OpenXRChannel(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OpenXRChannel = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager::__cordl_internal_get_m_OpenXRChannelGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OpenXRChannelGroup;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager::__cordl_internal_get_m_OpenXRChannelGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OpenXRChannelGroup;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager::__cordl_internal_set_m_OpenXRChannelGroup(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OpenXRChannelGroup = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager::GetChannelGroup(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*>(),
                        {"GetChannelGroup", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup*>(this, ___internal_method, action);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager::HapticControlActionManager()   {
}
