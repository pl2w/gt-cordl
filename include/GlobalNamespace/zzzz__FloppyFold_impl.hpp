#pragma once
// IWYU pragma private; include "GlobalNamespace/FloppyFold.hpp"
#include "GlobalNamespace/zzzz__FloppyFold_Axis_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__FloppyFold_def.hpp"
#include "GlobalNamespace/zzzz__FloppyFold_Axis_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloppyFold.get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FloppyFold::*)()>(&::GlobalNamespace::FloppyFold::get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564e100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloppyFold.set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloppyFold::*)(bool)>(&::GlobalNamespace::FloppyFold::set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564e108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloppyFold.get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GlobalNamespace::FloppyFold::*)()>(&::GlobalNamespace::FloppyFold::get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564e110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloppyFold.set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloppyFold::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GlobalNamespace::FloppyFold::set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564e118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloppyFold.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloppyFold::*)()>(&::GlobalNamespace::FloppyFold::Start)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x564e120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloppyFold.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloppyFold::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::FloppyFold::OnSpawn)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x564e43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloppyFold.OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloppyFold::*)()>(&::GlobalNamespace::FloppyFold::OnDespawn)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x564e4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloppyFold.Reanchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloppyFold::*)()>(&::GlobalNamespace::FloppyFold::Reanchor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x564e3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"Reanchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloppyFold.RememberInRigSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloppyFold::*)()>(&::GlobalNamespace::FloppyFold::RememberInRigSpace)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x564e4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"RememberInRigSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloppyFold.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloppyFold::*)()>(&::GlobalNamespace::FloppyFold::Update)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x564e594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloppyFold.AxisVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::FloppyFold_Axis)>(&::GlobalNamespace::FloppyFold::AxisVector)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x564e2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"AxisVector", {}, {::i2c::type_of<::GlobalNamespace::FloppyFold_Axis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloppyFold._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloppyFold::*)()>(&::GlobalNamespace::FloppyFold::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x564ead0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FloppyFold_Axis& GlobalNamespace::FloppyFold::__cordl_internal_get_LocalRotationAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalRotationAxis;
}
constexpr ::GlobalNamespace::FloppyFold_Axis const& GlobalNamespace::FloppyFold::__cordl_internal_get_LocalRotationAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalRotationAxis;
}
constexpr void GlobalNamespace::FloppyFold::__cordl_internal_set_LocalRotationAxis(::GlobalNamespace::FloppyFold_Axis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LocalRotationAxis = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FloppyFold::__cordl_internal_get_LocalCenterOfMass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalCenterOfMass;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FloppyFold::__cordl_internal_get_LocalCenterOfMass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalCenterOfMass;
}
constexpr void GlobalNamespace::FloppyFold::__cordl_internal_set_LocalCenterOfMass(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LocalCenterOfMass = value;
}
constexpr float_t& GlobalNamespace::FloppyFold::__cordl_internal_get_minAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minAngle;
}
constexpr float_t const& GlobalNamespace::FloppyFold::__cordl_internal_get_minAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minAngle;
}
constexpr void GlobalNamespace::FloppyFold::__cordl_internal_set_minAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minAngle = value;
}
constexpr float_t& GlobalNamespace::FloppyFold::__cordl_internal_get_maxAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAngle;
}
constexpr float_t const& GlobalNamespace::FloppyFold::__cordl_internal_get_maxAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAngle;
}
constexpr void GlobalNamespace::FloppyFold::__cordl_internal_set_maxAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxAngle = value;
}
constexpr float_t& GlobalNamespace::FloppyFold::__cordl_internal_get_freeMinAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freeMinAngle;
}
constexpr float_t const& GlobalNamespace::FloppyFold::__cordl_internal_get_freeMinAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freeMinAngle;
}
constexpr void GlobalNamespace::FloppyFold::__cordl_internal_set_freeMinAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___freeMinAngle = value;
}
constexpr float_t& GlobalNamespace::FloppyFold::__cordl_internal_get_freeMaxAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freeMaxAngle;
}
constexpr float_t const& GlobalNamespace::FloppyFold::__cordl_internal_get_freeMaxAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freeMaxAngle;
}
constexpr void GlobalNamespace::FloppyFold::__cordl_internal_set_freeMaxAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___freeMaxAngle = value;
}
constexpr float_t& GlobalNamespace::FloppyFold::__cordl_internal_get_springStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___springStrength;
}
constexpr float_t const& GlobalNamespace::FloppyFold::__cordl_internal_get_springStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___springStrength;
}
constexpr void GlobalNamespace::FloppyFold::__cordl_internal_set_springStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___springStrength = value;
}
constexpr float_t& GlobalNamespace::FloppyFold::__cordl_internal_get_drag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr float_t const& GlobalNamespace::FloppyFold::__cordl_internal_get_drag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr void GlobalNamespace::FloppyFold::__cordl_internal_set_drag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drag = value;
}
constexpr float_t& GlobalNamespace::FloppyFold::__cordl_internal_get_gravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravity;
}
constexpr float_t const& GlobalNamespace::FloppyFold::__cordl_internal_get_gravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravity;
}
constexpr void GlobalNamespace::FloppyFold::__cordl_internal_set_gravity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravity = value;
}
constexpr float_t& GlobalNamespace::FloppyFold::__cordl_internal_get_localFriction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localFriction;
}
constexpr float_t const& GlobalNamespace::FloppyFold::__cordl_internal_get_localFriction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localFriction;
}
constexpr void GlobalNamespace::FloppyFold::__cordl_internal_set_localFriction(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localFriction = value;
}
constexpr bool& GlobalNamespace::FloppyFold::__cordl_internal_get_IgnorePlayerMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnorePlayerMovement;
}
constexpr bool const& GlobalNamespace::FloppyFold::__cordl_internal_get_IgnorePlayerMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnorePlayerMovement;
}
constexpr void GlobalNamespace::FloppyFold::__cordl_internal_set_IgnorePlayerMovement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IgnorePlayerMovement = value;
}
constexpr bool& GlobalNamespace::FloppyFold::__cordl_internal_get__IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr bool const& GlobalNamespace::FloppyFold::__cordl_internal_get__IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr void GlobalNamespace::FloppyFold::__cordl_internal_set__IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GlobalNamespace::FloppyFold::__cordl_internal_get__CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GlobalNamespace::FloppyFold::__cordl_internal_get__CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr void GlobalNamespace::FloppyFold::__cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CosmeticSelectedSide_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FloppyFold::__cordl_internal_get_rigRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FloppyFold::__cordl_internal_get_rigRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigRoot;
}
constexpr void GlobalNamespace::FloppyFold::__cordl_internal_set_rigRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigRoot = value;
}
constexpr float_t& GlobalNamespace::FloppyFold::__cordl_internal_get_angle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle;
}
constexpr float_t const& GlobalNamespace::FloppyFold::__cordl_internal_get_angle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle;
}
constexpr void GlobalNamespace::FloppyFold::__cordl_internal_set_angle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angle = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FloppyFold::__cordl_internal_get_lastWorldPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWorldPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FloppyFold::__cordl_internal_get_lastWorldPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWorldPosition;
}
constexpr void GlobalNamespace::FloppyFold::__cordl_internal_set_lastWorldPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastWorldPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FloppyFold::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FloppyFold::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void GlobalNamespace::FloppyFold::__cordl_internal_set_velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FloppyFold::__cordl_internal_get_lastRigLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRigLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FloppyFold::__cordl_internal_get_lastRigLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRigLocalPosition;
}
constexpr void GlobalNamespace::FloppyFold::__cordl_internal_set_lastRigLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRigLocalPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FloppyFold::__cordl_internal_get_lastRigLocalVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRigLocalVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FloppyFold::__cordl_internal_get_lastRigLocalVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRigLocalVelocity;
}
constexpr void GlobalNamespace::FloppyFold::__cordl_internal_set_lastRigLocalVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRigLocalVelocity = value;
}
inline bool GlobalNamespace::FloppyFold::get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::FloppyFold::set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GlobalNamespace::FloppyFold::get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GlobalNamespace::FloppyFold::set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FloppyFold::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FloppyFold::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::FloppyFold::OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FloppyFold::Reanchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"Reanchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FloppyFold::RememberInRigSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"RememberInRigSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FloppyFold::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::FloppyFold::AxisVector(::GlobalNamespace::FloppyFold_Axis  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {"AxisVector", {}, {::i2c::type_of<::GlobalNamespace::FloppyFold_Axis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, axis);
}
inline void GlobalNamespace::FloppyFold::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloppyFold*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FloppyFold* GlobalNamespace::FloppyFold::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FloppyFold*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GlobalNamespace::FloppyFold::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GlobalNamespace::FloppyFold::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloppyFold::FloppyFold()   {
}
