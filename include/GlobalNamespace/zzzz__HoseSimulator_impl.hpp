#pragma once
// IWYU pragma private; include "GlobalNamespace/HoseSimulator.hpp"
#include "GlobalNamespace/zzzz__CosmeticRefID_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__HoseSimulator_def.hpp"
#include "GlobalNamespace/zzzz__HoseSimulatorAnchors_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HoseSimulator.GorillaTag_ISpawnable_get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HoseSimulator::*)()>(&::GlobalNamespace::HoseSimulator::GorillaTag_ISpawnable_get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5654450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulator*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoseSimulator.GorillaTag_ISpawnable_set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoseSimulator::*)(bool)>(&::GlobalNamespace::HoseSimulator::GorillaTag_ISpawnable_set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5654458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulator*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoseSimulator.GorillaTag_ISpawnable_get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GlobalNamespace::HoseSimulator::*)()>(&::GlobalNamespace::HoseSimulator::GorillaTag_ISpawnable_get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5654460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulator*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoseSimulator.GorillaTag_ISpawnable_set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoseSimulator::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GlobalNamespace::HoseSimulator::GorillaTag_ISpawnable_set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5654468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulator*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoseSimulator.GorillaTag_ISpawnable_OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoseSimulator::*)()>(&::GlobalNamespace::HoseSimulator::GorillaTag_ISpawnable_OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5654470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulator*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoseSimulator.GorillaTag_ISpawnable_OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoseSimulator::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::HoseSimulator::GorillaTag_ISpawnable_OnSpawn)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5654474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulator*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoseSimulator.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoseSimulator::*)()>(&::GlobalNamespace::HoseSimulator::LateUpdate)> {
  constexpr static std::size_t size = 0x850;
  constexpr static std::size_t addrs = 0x5654688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulator*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoseSimulator.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoseSimulator::*)()>(&::GlobalNamespace::HoseSimulator::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5654ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulator*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoseSimulator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoseSimulator::*)()>(&::GlobalNamespace::HoseSimulator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5654f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::HoseSimulator::__cordl_internal_get_skinnedMeshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skinnedMeshRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::HoseSimulator::__cordl_internal_get_skinnedMeshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skinnedMeshRenderer;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set_skinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skinnedMeshRenderer = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HoseSimulator::__cordl_internal_get_localBoundsOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localBoundsOverride;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HoseSimulator::__cordl_internal_get_localBoundsOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localBoundsOverride;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set_localBoundsOverride(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localBoundsOverride = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::HoseSimulator::__cordl_internal_get_miscBones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___miscBones;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::HoseSimulator::__cordl_internal_get_miscBones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___miscBones;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set_miscBones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___miscBones = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::HoseSimulator::__cordl_internal_get_hoseBones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoseBones;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::HoseSimulator::__cordl_internal_get_hoseBones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoseBones;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set_hoseBones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoseBones = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::HoseSimulator::__cordl_internal_get_hoseBoneMaxDisplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoseBoneMaxDisplacement;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::HoseSimulator::__cordl_internal_get_hoseBoneMaxDisplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoseBoneMaxDisplacement;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set_hoseBoneMaxDisplacement(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoseBoneMaxDisplacement = value;
}
constexpr ::GlobalNamespace::CosmeticRefID& GlobalNamespace::HoseSimulator::__cordl_internal_get_startAnchorRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startAnchorRef;
}
constexpr ::GlobalNamespace::CosmeticRefID const& GlobalNamespace::HoseSimulator::__cordl_internal_get_startAnchorRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startAnchorRef;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set_startAnchorRef(::GlobalNamespace::CosmeticRefID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startAnchorRef = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HoseSimulator::__cordl_internal_get_startAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HoseSimulator::__cordl_internal_get_startAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startAnchor;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set_startAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startAnchor = value;
}
constexpr float_t& GlobalNamespace::HoseSimulator::__cordl_internal_get_startStiffness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startStiffness;
}
constexpr float_t const& GlobalNamespace::HoseSimulator::__cordl_internal_get_startStiffness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startStiffness;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set_startStiffness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startStiffness = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HoseSimulator::__cordl_internal_get_endAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HoseSimulator::__cordl_internal_get_endAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endAnchor;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set_endAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endAnchor = value;
}
constexpr float_t& GlobalNamespace::HoseSimulator::__cordl_internal_get_endStiffness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endStiffness;
}
constexpr float_t const& GlobalNamespace::HoseSimulator::__cordl_internal_get_endStiffness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endStiffness;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set_endStiffness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endStiffness = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::HoseSimulator::__cordl_internal_get_hoseBonePositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoseBonePositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::HoseSimulator::__cordl_internal_get_hoseBonePositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoseBonePositions;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set_hoseBonePositions(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoseBonePositions = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::HoseSimulator::__cordl_internal_get_hoseBoneVelocities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoseBoneVelocities;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::HoseSimulator::__cordl_internal_get_hoseBoneVelocities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoseBoneVelocities;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set_hoseBoneVelocities(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoseBoneVelocities = value;
}
constexpr float_t& GlobalNamespace::HoseSimulator::__cordl_internal_get_damping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damping;
}
constexpr float_t const& GlobalNamespace::HoseSimulator::__cordl_internal_get_damping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damping;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set_damping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damping = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::HoseSimulator::__cordl_internal_get_hoseSectionLengths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoseSectionLengths;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::HoseSimulator::__cordl_internal_get_hoseSectionLengths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoseSectionLengths;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set_hoseSectionLengths(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoseSectionLengths = value;
}
constexpr float_t& GlobalNamespace::HoseSimulator::__cordl_internal_get_totalHoseLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalHoseLength;
}
constexpr float_t const& GlobalNamespace::HoseSimulator::__cordl_internal_get_totalHoseLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalHoseLength;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set_totalHoseLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalHoseLength = value;
}
constexpr bool& GlobalNamespace::HoseSimulator::__cordl_internal_get_firstUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstUpdate;
}
constexpr bool const& GlobalNamespace::HoseSimulator::__cordl_internal_get_firstUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstUpdate;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set_firstUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstUpdate = value;
}
constexpr ::UnityW<::GlobalNamespace::HoseSimulatorAnchors>& GlobalNamespace::HoseSimulator::__cordl_internal_get_anchors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchors;
}
constexpr ::UnityW<::GlobalNamespace::HoseSimulatorAnchors> const& GlobalNamespace::HoseSimulator::__cordl_internal_get_anchors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchors;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set_anchors(::UnityW<::GlobalNamespace::HoseSimulatorAnchors>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchors = value;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GlobalNamespace::HoseSimulator::__cordl_internal_get_myHoldable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myHoldable;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GlobalNamespace::HoseSimulator::__cordl_internal_get_myHoldable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myHoldable;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set_myHoldable(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myHoldable = value;
}
constexpr bool& GlobalNamespace::HoseSimulator::__cordl_internal_get_isLeftHanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHanded;
}
constexpr bool const& GlobalNamespace::HoseSimulator::__cordl_internal_get_isLeftHanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHanded;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set_isLeftHanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeftHanded = value;
}
constexpr bool& GlobalNamespace::HoseSimulator::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr bool const& GlobalNamespace::HoseSimulator::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GlobalNamespace::HoseSimulator::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GlobalNamespace::HoseSimulator::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr void GlobalNamespace::HoseSimulator::__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField = value;
}
inline bool GlobalNamespace::HoseSimulator::GorillaTag_ISpawnable_get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulator*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::HoseSimulator::GorillaTag_ISpawnable_set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulator*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GlobalNamespace::HoseSimulator::GorillaTag_ISpawnable_get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulator*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GlobalNamespace::HoseSimulator::GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulator*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HoseSimulator::GorillaTag_ISpawnable_OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulator*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HoseSimulator::GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulator*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::HoseSimulator::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulator*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HoseSimulator::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulator*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HoseSimulator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HoseSimulator* GlobalNamespace::HoseSimulator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HoseSimulator*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GlobalNamespace::HoseSimulator::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GlobalNamespace::HoseSimulator::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HoseSimulator::HoseSimulator()   {
}
