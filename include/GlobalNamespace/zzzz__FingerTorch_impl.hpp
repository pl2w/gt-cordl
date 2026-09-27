#pragma once
// IWYU pragma private; include "GlobalNamespace/FingerTorch.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FingerTorch_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FingerTorch.GorillaTag_ISpawnable_get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FingerTorch::*)()>(&::GlobalNamespace::FingerTorch::GorillaTag_ISpawnable_get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e08910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FingerTorch.GorillaTag_ISpawnable_set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FingerTorch::*)(bool)>(&::GlobalNamespace::FingerTorch::GorillaTag_ISpawnable_set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e08918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FingerTorch.GorillaTag_ISpawnable_get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GlobalNamespace::FingerTorch::*)()>(&::GlobalNamespace::FingerTorch::GorillaTag_ISpawnable_get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e08920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FingerTorch.GorillaTag_ISpawnable_set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FingerTorch::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GlobalNamespace::FingerTorch::GorillaTag_ISpawnable_set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e08928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FingerTorch.GorillaTag_ISpawnable_OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FingerTorch::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::FingerTorch::GorillaTag_ISpawnable_OnSpawn)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e08930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FingerTorch.GorillaTag_ISpawnable_OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FingerTorch::*)()>(&::GlobalNamespace::FingerTorch::GorillaTag_ISpawnable_OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e089e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FingerTorch.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FingerTorch::*)()>(&::GlobalNamespace::FingerTorch::OnEnable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e089e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FingerTorch.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FingerTorch::*)()>(&::GlobalNamespace::FingerTorch::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e08c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FingerTorch.UpdateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FingerTorch::*)()>(&::GlobalNamespace::FingerTorch::UpdateLocal)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5e08c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"UpdateLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FingerTorch.UpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FingerTorch::*)()>(&::GlobalNamespace::FingerTorch::UpdateShared)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e08da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"UpdateShared", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FingerTorch.UpdateReplicated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FingerTorch::*)()>(&::GlobalNamespace::FingerTorch::UpdateReplicated)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e08de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"UpdateReplicated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FingerTorch.IsMyItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FingerTorch::*)()>(&::GlobalNamespace::FingerTorch::IsMyItem)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e08e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"IsMyItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FingerTorch.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FingerTorch::*)()>(&::GlobalNamespace::FingerTorch::LateUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e08f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FingerTorch.OnExtendStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FingerTorch::*)(bool)>(&::GlobalNamespace::FingerTorch::OnExtendStateChanged)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5e08a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"OnExtendStateChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FingerTorch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FingerTorch::*)()>(&::GlobalNamespace::FingerTorch::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e08f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::FingerTorch::__cordl_internal_get_attachedToLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachedToLeftHand;
}
constexpr bool const& GlobalNamespace::FingerTorch::__cordl_internal_get_attachedToLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachedToLeftHand;
}
constexpr void GlobalNamespace::FingerTorch::__cordl_internal_set_attachedToLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachedToLeftHand = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FingerTorch::__cordl_internal_get_pinkyRingBone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pinkyRingBone;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FingerTorch::__cordl_internal_get_pinkyRingBone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pinkyRingBone;
}
constexpr void GlobalNamespace::FingerTorch::__cordl_internal_set_pinkyRingBone(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pinkyRingBone = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FingerTorch::__cordl_internal_get_thumbRingBone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thumbRingBone;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FingerTorch::__cordl_internal_get_thumbRingBone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thumbRingBone;
}
constexpr void GlobalNamespace::FingerTorch::__cordl_internal_set_thumbRingBone(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thumbRingBone = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::FingerTorch::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::FingerTorch::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::FingerTorch::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::FingerTorch::__cordl_internal_get_extendAudioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendAudioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::FingerTorch::__cordl_internal_get_extendAudioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendAudioClip;
}
constexpr void GlobalNamespace::FingerTorch::__cordl_internal_set_extendAudioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extendAudioClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::FingerTorch::__cordl_internal_get_retractAudioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractAudioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::FingerTorch::__cordl_internal_get_retractAudioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractAudioClip;
}
constexpr void GlobalNamespace::FingerTorch::__cordl_internal_set_retractAudioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retractAudioClip = value;
}
constexpr float_t& GlobalNamespace::FingerTorch::__cordl_internal_get_extendVibrationDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendVibrationDuration;
}
constexpr float_t const& GlobalNamespace::FingerTorch::__cordl_internal_get_extendVibrationDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendVibrationDuration;
}
constexpr void GlobalNamespace::FingerTorch::__cordl_internal_set_extendVibrationDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extendVibrationDuration = value;
}
constexpr float_t& GlobalNamespace::FingerTorch::__cordl_internal_get_extendVibrationStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendVibrationStrength;
}
constexpr float_t const& GlobalNamespace::FingerTorch::__cordl_internal_get_extendVibrationStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendVibrationStrength;
}
constexpr void GlobalNamespace::FingerTorch::__cordl_internal_set_extendVibrationStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extendVibrationStrength = value;
}
constexpr float_t& GlobalNamespace::FingerTorch::__cordl_internal_get_retractVibrationDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractVibrationDuration;
}
constexpr float_t const& GlobalNamespace::FingerTorch::__cordl_internal_get_retractVibrationDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractVibrationDuration;
}
constexpr void GlobalNamespace::FingerTorch::__cordl_internal_set_retractVibrationDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retractVibrationDuration = value;
}
constexpr float_t& GlobalNamespace::FingerTorch::__cordl_internal_get_retractVibrationStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractVibrationStrength;
}
constexpr float_t const& GlobalNamespace::FingerTorch::__cordl_internal_get_retractVibrationStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractVibrationStrength;
}
constexpr void GlobalNamespace::FingerTorch::__cordl_internal_set_retractVibrationStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retractVibrationStrength = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::FingerTorch::__cordl_internal_get_particleFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::FingerTorch::__cordl_internal_get_particleFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleFX;
}
constexpr void GlobalNamespace::FingerTorch::__cordl_internal_set_particleFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleFX = value;
}
constexpr bool& GlobalNamespace::FingerTorch::__cordl_internal_get_networkedExtended()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedExtended;
}
constexpr bool const& GlobalNamespace::FingerTorch::__cordl_internal_get_networkedExtended() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedExtended;
}
constexpr void GlobalNamespace::FingerTorch::__cordl_internal_set_networkedExtended(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkedExtended = value;
}
constexpr bool& GlobalNamespace::FingerTorch::__cordl_internal_get_extended()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extended;
}
constexpr bool const& GlobalNamespace::FingerTorch::__cordl_internal_get_extended() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extended;
}
constexpr void GlobalNamespace::FingerTorch::__cordl_internal_set_extended(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extended = value;
}
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::FingerTorch::__cordl_internal_get_inputDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputDevice;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::FingerTorch::__cordl_internal_get_inputDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputDevice;
}
constexpr void GlobalNamespace::FingerTorch::__cordl_internal_set_inputDevice(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputDevice = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::FingerTorch::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::FingerTorch::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GlobalNamespace::FingerTorch::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr int32_t& GlobalNamespace::FingerTorch::__cordl_internal_get_stateBitIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateBitIndex;
}
constexpr int32_t const& GlobalNamespace::FingerTorch::__cordl_internal_get_stateBitIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateBitIndex;
}
constexpr void GlobalNamespace::FingerTorch::__cordl_internal_set_stateBitIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateBitIndex = value;
}
constexpr bool& GlobalNamespace::FingerTorch::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr bool const& GlobalNamespace::FingerTorch::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr void GlobalNamespace::FingerTorch::__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GlobalNamespace::FingerTorch::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GlobalNamespace::FingerTorch::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr void GlobalNamespace::FingerTorch::__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField = value;
}
inline bool GlobalNamespace::FingerTorch::GorillaTag_ISpawnable_get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::FingerTorch::GorillaTag_ISpawnable_set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GlobalNamespace::FingerTorch::GorillaTag_ISpawnable_get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GlobalNamespace::FingerTorch::GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FingerTorch::GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::FingerTorch::GorillaTag_ISpawnable_OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FingerTorch::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FingerTorch::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FingerTorch::UpdateLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"UpdateLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FingerTorch::UpdateShared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"UpdateShared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FingerTorch::UpdateReplicated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"UpdateReplicated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::FingerTorch::IsMyItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"IsMyItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::FingerTorch::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FingerTorch::OnExtendStateChanged(bool  playAudio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {"OnExtendStateChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playAudio);
}
inline void GlobalNamespace::FingerTorch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerTorch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FingerTorch* GlobalNamespace::FingerTorch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FingerTorch*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GlobalNamespace::FingerTorch::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GlobalNamespace::FingerTorch::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FingerTorch::FingerTorch()   {
}
