#pragma once
// IWYU pragma private; include "GlobalNamespace/ArtilleryCrank.hpp"
#include "GlobalNamespace/zzzz__ArtilleryCrankType_impl.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__ArtilleryCrank_def.hpp"
#include "GlobalNamespace/zzzz__ArtilleryCannon_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCrank.get_IsHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArtilleryCrank::*)()>(&::GlobalNamespace::ArtilleryCrank::get_IsHeld)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfae28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"get_IsHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCrank.get_IsHeldLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArtilleryCrank::*)()>(&::GlobalNamespace::ArtilleryCrank::get_IsHeldLeftHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfae30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"get_IsHeldLeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCrank.get_CurrentAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ArtilleryCrank::*)()>(&::GlobalNamespace::ArtilleryCrank::get_CurrentAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfae38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"get_CurrentAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCrank.get_CrankIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ArtilleryCrank::*)()>(&::GlobalNamespace::ArtilleryCrank::get_CrankIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bfae40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"get_CrankIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCrank.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCrank::*)()>(&::GlobalNamespace::ArtilleryCrank::Awake)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5bfae50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCrank.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCrank::*)()>(&::GlobalNamespace::ArtilleryCrank::LateUpdate)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x5bfb01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCrank.UpdateFromRemoteHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCrank::*)(::GlobalNamespace::VRRig*, bool)>(&::GlobalNamespace::ArtilleryCrank::UpdateFromRemoteHand)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5bf9568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"UpdateFromRemoteHand", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCrank.SetVisualAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCrank::*)(float_t)>(&::GlobalNamespace::ArtilleryCrank::SetVisualAngle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5bf96f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"SetVisualAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCrank.ComputeAngleFromWorldPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ArtilleryCrank::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::ArtilleryCrank::ComputeAngleFromWorldPos)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5bfb41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"ComputeAngleFromWorldPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCrank.ApplyVisualAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCrank::*)(float_t)>(&::GlobalNamespace::ArtilleryCrank::ApplyVisualAngle)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5bfb548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"ApplyVisualAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCrank.OnHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCrank::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::ArtilleryCrank::OnHover)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bfb64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                    {::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCrank.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCrank::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::ArtilleryCrank::OnGrab)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5bfb650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                    {::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCrank.DropItemCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCrank::*)()>(&::GlobalNamespace::ArtilleryCrank::DropItemCleanup)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5bfb914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                    {::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCrank.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArtilleryCrank::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::ArtilleryCrank::OnRelease)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5bfb95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                    {::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCrank.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCrank::*)()>(&::GlobalNamespace::ArtilleryCrank::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5bfba28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArtilleryCrank._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArtilleryCrank::*)()>(&::GlobalNamespace::ArtilleryCrank::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfbb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ArtilleryCannon>& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_cannon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cannon;
}
constexpr ::UnityW<::GlobalNamespace::ArtilleryCannon> const& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_cannon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cannon;
}
constexpr void GlobalNamespace::ArtilleryCrank::__cordl_internal_set_cannon(::UnityW<::GlobalNamespace::ArtilleryCannon>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cannon = value;
}
constexpr ::GlobalNamespace::ArtilleryCrankType& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_crankType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankType;
}
constexpr ::GlobalNamespace::ArtilleryCrankType const& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_crankType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankType;
}
constexpr void GlobalNamespace::ArtilleryCrank::__cordl_internal_set_crankType(::GlobalNamespace::ArtilleryCrankType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankType = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_crankHandleX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleX;
}
constexpr float_t const& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_crankHandleX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleX;
}
constexpr void GlobalNamespace::ArtilleryCrank::__cordl_internal_set_crankHandleX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankHandleX = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_crankHandleY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleY;
}
constexpr float_t const& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_crankHandleY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleY;
}
constexpr void GlobalNamespace::ArtilleryCrank::__cordl_internal_set_crankHandleY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankHandleY = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_crankHandleMinZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleMinZ;
}
constexpr float_t const& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_crankHandleMinZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleMinZ;
}
constexpr void GlobalNamespace::ArtilleryCrank::__cordl_internal_set_crankHandleMinZ(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankHandleMinZ = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_crankHandleMaxZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleMaxZ;
}
constexpr float_t const& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_crankHandleMaxZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleMaxZ;
}
constexpr void GlobalNamespace::ArtilleryCrank::__cordl_internal_set_crankHandleMaxZ(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankHandleMaxZ = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_maxHandSnapDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHandSnapDistance;
}
constexpr float_t const& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_maxHandSnapDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHandSnapDistance;
}
constexpr void GlobalNamespace::ArtilleryCrank::__cordl_internal_set_maxHandSnapDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHandSnapDistance = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_rotatingPart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatingPart;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_rotatingPart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatingPart;
}
constexpr void GlobalNamespace::ArtilleryCrank::__cordl_internal_set_rotatingPart(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotatingPart = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_crankAngleOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankAngleOffset;
}
constexpr float_t const& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_crankAngleOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankAngleOffset;
}
constexpr void GlobalNamespace::ArtilleryCrank::__cordl_internal_set_crankAngleOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankAngleOffset = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_crankRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankRadius;
}
constexpr float_t const& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_crankRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankRadius;
}
constexpr void GlobalNamespace::ArtilleryCrank::__cordl_internal_set_crankRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankRadius = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_lastAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle;
}
constexpr float_t const& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_lastAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle;
}
constexpr void GlobalNamespace::ArtilleryCrank::__cordl_internal_set_lastAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAngle = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_currentAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle;
}
constexpr float_t const& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_currentAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle;
}
constexpr void GlobalNamespace::ArtilleryCrank::__cordl_internal_set_currentAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAngle = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_baseLocalAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseLocalAngle;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_baseLocalAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseLocalAngle;
}
constexpr void GlobalNamespace::ArtilleryCrank::__cordl_internal_set_baseLocalAngle(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseLocalAngle = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_baseLocalAngleInverse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseLocalAngleInverse;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_baseLocalAngleInverse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseLocalAngleInverse;
}
constexpr void GlobalNamespace::ArtilleryCrank::__cordl_internal_set_baseLocalAngleInverse(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseLocalAngleInverse = value;
}
constexpr bool& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_isHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeld;
}
constexpr bool const& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_isHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeld;
}
constexpr void GlobalNamespace::ArtilleryCrank::__cordl_internal_set_isHeld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHeld = value;
}
constexpr bool& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_isHeldLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeldLeftHand;
}
constexpr bool const& GlobalNamespace::ArtilleryCrank::__cordl_internal_get_isHeldLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeldLeftHand;
}
constexpr void GlobalNamespace::ArtilleryCrank::__cordl_internal_set_isHeldLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHeldLeftHand = value;
}
inline bool GlobalNamespace::ArtilleryCrank::get_IsHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"get_IsHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ArtilleryCrank::get_IsHeldLeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"get_IsHeldLeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::ArtilleryCrank::get_CurrentAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"get_CurrentAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ArtilleryCrank::get_CrankIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"get_CrankIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCrank::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCrank::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCrank::UpdateFromRemoteHand(::GlobalNamespace::VRRig*  rig, bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"UpdateFromRemoteHand", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, leftHand);
}
inline void GlobalNamespace::ArtilleryCrank::SetVisualAngle(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"SetVisualAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, angle);
}
inline float_t GlobalNamespace::ArtilleryCrank::ComputeAngleFromWorldPos(::UnityEngine::Vector3  worldPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"ComputeAngleFromWorldPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, worldPos);
}
inline void GlobalNamespace::ArtilleryCrank::ApplyVisualAngle(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"ApplyVisualAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, angle);
}
inline void GlobalNamespace::ArtilleryCrank::OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointHovered, hoveringHand);
}
inline void GlobalNamespace::ArtilleryCrank::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline void GlobalNamespace::ArtilleryCrank::DropItemCleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ArtilleryCrank::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::ArtilleryCrank::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArtilleryCrank::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArtilleryCrank*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ArtilleryCrank* GlobalNamespace::ArtilleryCrank::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ArtilleryCrank*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArtilleryCrank::ArtilleryCrank()   {
}
