#pragma once
// IWYU pragma private; include "GlobalNamespace/BatteryChargerCrank.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__BatteryChargerCrank_def.hpp"
#include "GlobalNamespace/zzzz__BatteryCharger_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerCrank.get_IsHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BatteryChargerCrank::*)()>(&::GlobalNamespace::BatteryChargerCrank::get_IsHeld)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfdaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"get_IsHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerCrank.get_IsHeldLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BatteryChargerCrank::*)()>(&::GlobalNamespace::BatteryChargerCrank::get_IsHeldLeftHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfdaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"get_IsHeldLeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerCrank.get_CurrentAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BatteryChargerCrank::*)()>(&::GlobalNamespace::BatteryChargerCrank::get_CurrentAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfdab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"get_CurrentAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerCrank.get_CrankIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BatteryChargerCrank::*)()>(&::GlobalNamespace::BatteryChargerCrank::get_CrankIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfdab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"get_CrankIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerCrank.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerCrank::*)()>(&::GlobalNamespace::BatteryChargerCrank::Awake)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5bfdac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerCrank.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerCrank::*)()>(&::GlobalNamespace::BatteryChargerCrank::Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5bfdc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerCrank.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerCrank::*)()>(&::GlobalNamespace::BatteryChargerCrank::LateUpdate)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x5bfdcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerCrank.UpdateFromRemoteHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerCrank::*)(::GlobalNamespace::VRRig*, bool)>(&::GlobalNamespace::BatteryChargerCrank::UpdateFromRemoteHand)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5bfce24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"UpdateFromRemoteHand", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerCrank.SetVisualAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerCrank::*)(float_t)>(&::GlobalNamespace::BatteryChargerCrank::SetVisualAngle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5bfcfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"SetVisualAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerCrank.ComputeAngleFromWorldPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BatteryChargerCrank::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::BatteryChargerCrank::ComputeAngleFromWorldPos)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5bfe158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"ComputeAngleFromWorldPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerCrank.ApplyVisualAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerCrank::*)(float_t)>(&::GlobalNamespace::BatteryChargerCrank::ApplyVisualAngle)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5bfe3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"ApplyVisualAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerCrank.UpdateCrankSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerCrank::*)(float_t)>(&::GlobalNamespace::BatteryChargerCrank::UpdateCrankSound)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5bfe284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"UpdateCrankSound", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerCrank.StopCrankSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerCrank::*)()>(&::GlobalNamespace::BatteryChargerCrank::StopCrankSound)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5bfe4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"StopCrankSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerCrank.OnHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerCrank::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::BatteryChargerCrank::OnHover)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bfe590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                    {::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerCrank.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerCrank::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::BatteryChargerCrank::OnGrab)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5bfe594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                    {::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerCrank.DropItemCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerCrank::*)()>(&::GlobalNamespace::BatteryChargerCrank::DropItemCleanup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5bfe858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                    {::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerCrank.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BatteryChargerCrank::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::BatteryChargerCrank::OnRelease)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5bfe89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                    {::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerCrank.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerCrank::*)()>(&::GlobalNamespace::BatteryChargerCrank::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5bfe960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryChargerCrank._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryChargerCrank::*)()>(&::GlobalNamespace::BatteryChargerCrank::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5bfea64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BatteryCharger>& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_charger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___charger;
}
constexpr ::UnityW<::GlobalNamespace::BatteryCharger> const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_charger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___charger;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_charger(::UnityW<::GlobalNamespace::BatteryCharger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___charger = value;
}
constexpr float_t& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankHandleX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleX;
}
constexpr float_t const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankHandleX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleX;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_crankHandleX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankHandleX = value;
}
constexpr float_t& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankHandleY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleY;
}
constexpr float_t const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankHandleY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleY;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_crankHandleY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankHandleY = value;
}
constexpr float_t& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankHandleMinZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleMinZ;
}
constexpr float_t const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankHandleMinZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleMinZ;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_crankHandleMinZ(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankHandleMinZ = value;
}
constexpr float_t& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankHandleMaxZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleMaxZ;
}
constexpr float_t const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankHandleMaxZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleMaxZ;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_crankHandleMaxZ(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankHandleMaxZ = value;
}
constexpr float_t& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_maxHandSnapDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHandSnapDistance;
}
constexpr float_t const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_maxHandSnapDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHandSnapDistance;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_maxHandSnapDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHandSnapDistance = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_rotatingPart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatingPart;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_rotatingPart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatingPart;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_rotatingPart(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotatingPart = value;
}
constexpr float_t& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_vibrationAmplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrationAmplitude;
}
constexpr float_t const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_vibrationAmplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrationAmplitude;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_vibrationAmplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vibrationAmplitude = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankSound;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankSound;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_crankSound(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankSound = value;
}
constexpr float_t& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankSoundMinPitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankSoundMinPitch;
}
constexpr float_t const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankSoundMinPitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankSoundMinPitch;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_crankSoundMinPitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankSoundMinPitch = value;
}
constexpr float_t& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankSoundMaxPitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankSoundMaxPitch;
}
constexpr float_t const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankSoundMaxPitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankSoundMaxPitch;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_crankSoundMaxPitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankSoundMaxPitch = value;
}
constexpr float_t& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankAngleOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankAngleOffset;
}
constexpr float_t const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankAngleOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankAngleOffset;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_crankAngleOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankAngleOffset = value;
}
constexpr float_t& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankRadius;
}
constexpr float_t const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankRadius;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_crankRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankRadius = value;
}
constexpr float_t& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_lastAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle;
}
constexpr float_t const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_lastAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_lastAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAngle = value;
}
constexpr float_t& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_currentAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle;
}
constexpr float_t const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_currentAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_currentAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAngle = value;
}
constexpr float_t& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_smoothCrankSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothCrankSpeed;
}
constexpr float_t const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_smoothCrankSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothCrankSpeed;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_smoothCrankSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothCrankSpeed = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_baseLocalAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseLocalAngle;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_baseLocalAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseLocalAngle;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_baseLocalAngle(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseLocalAngle = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_baseLocalAngleInverse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseLocalAngleInverse;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_baseLocalAngleInverse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseLocalAngleInverse;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_baseLocalAngleInverse(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseLocalAngleInverse = value;
}
constexpr int32_t& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankIndex;
}
constexpr int32_t const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_crankIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankIndex;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_crankIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankIndex = value;
}
constexpr bool& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_isHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeld;
}
constexpr bool const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_isHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeld;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_isHeld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHeld = value;
}
constexpr bool& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_isHeldLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeldLeftHand;
}
constexpr bool const& GlobalNamespace::BatteryChargerCrank::__cordl_internal_get_isHeldLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeldLeftHand;
}
constexpr void GlobalNamespace::BatteryChargerCrank::__cordl_internal_set_isHeldLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHeldLeftHand = value;
}
inline bool GlobalNamespace::BatteryChargerCrank::get_IsHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"get_IsHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::BatteryChargerCrank::get_IsHeldLeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"get_IsHeldLeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::BatteryChargerCrank::get_CurrentAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"get_CurrentAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BatteryChargerCrank::get_CrankIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"get_CrankIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryChargerCrank::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryChargerCrank::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryChargerCrank::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryChargerCrank::UpdateFromRemoteHand(::GlobalNamespace::VRRig*  rig, bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"UpdateFromRemoteHand", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, leftHand);
}
inline void GlobalNamespace::BatteryChargerCrank::SetVisualAngle(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"SetVisualAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, angle);
}
inline float_t GlobalNamespace::BatteryChargerCrank::ComputeAngleFromWorldPos(::UnityEngine::Vector3  worldPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"ComputeAngleFromWorldPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, worldPos);
}
inline void GlobalNamespace::BatteryChargerCrank::ApplyVisualAngle(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"ApplyVisualAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, angle);
}
inline void GlobalNamespace::BatteryChargerCrank::UpdateCrankSound(float_t  crankAmount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"UpdateCrankSound", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crankAmount);
}
inline void GlobalNamespace::BatteryChargerCrank::StopCrankSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"StopCrankSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryChargerCrank::OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointHovered, hoveringHand);
}
inline void GlobalNamespace::BatteryChargerCrank::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline void GlobalNamespace::BatteryChargerCrank::DropItemCleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BatteryChargerCrank::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::BatteryChargerCrank::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryChargerCrank::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryChargerCrank*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BatteryChargerCrank* GlobalNamespace::BatteryChargerCrank::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BatteryChargerCrank*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BatteryChargerCrank::BatteryChargerCrank()   {
}
