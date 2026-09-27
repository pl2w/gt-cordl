#pragma once
// IWYU pragma private; include "GlobalNamespace/LeafBlowerEffects.hpp"
#include "GlobalNamespace/zzzz__CosmeticRefID_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LeafBlowerEffects_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticFan_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LeafBlowerEffects.GorillaTag_ISpawnable_get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LeafBlowerEffects::*)()>(&::GlobalNamespace::LeafBlowerEffects::GorillaTag_ISpawnable_get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5655000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeafBlowerEffects.GorillaTag_ISpawnable_set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeafBlowerEffects::*)(bool)>(&::GlobalNamespace::LeafBlowerEffects::GorillaTag_ISpawnable_set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5655008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeafBlowerEffects.GorillaTag_ISpawnable_get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GlobalNamespace::LeafBlowerEffects::*)()>(&::GlobalNamespace::LeafBlowerEffects::GorillaTag_ISpawnable_get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5655010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeafBlowerEffects.GorillaTag_ISpawnable_set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeafBlowerEffects::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GlobalNamespace::LeafBlowerEffects::GorillaTag_ISpawnable_set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5655018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeafBlowerEffects.GorillaTag_ISpawnable_OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeafBlowerEffects::*)()>(&::GlobalNamespace::LeafBlowerEffects::GorillaTag_ISpawnable_OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5655020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeafBlowerEffects.GorillaTag_ISpawnable_OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeafBlowerEffects::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::LeafBlowerEffects::GorillaTag_ISpawnable_OnSpawn)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5655024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeafBlowerEffects.StartFan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeafBlowerEffects::*)()>(&::GlobalNamespace::LeafBlowerEffects::StartFan)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56550d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"StartFan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeafBlowerEffects.StopFan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeafBlowerEffects::*)()>(&::GlobalNamespace::LeafBlowerEffects::StopFan)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56550e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"StopFan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeafBlowerEffects.UpdateEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeafBlowerEffects::*)()>(&::GlobalNamespace::LeafBlowerEffects::UpdateEffects)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5655100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"UpdateEffects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeafBlowerEffects.ProjectParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeafBlowerEffects::*)()>(&::GlobalNamespace::LeafBlowerEffects::ProjectParticles)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x5655118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"ProjectParticles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeafBlowerEffects.StopEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeafBlowerEffects::*)()>(&::GlobalNamespace::LeafBlowerEffects::StopEffects)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x56559c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"StopEffects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeafBlowerEffects.BlowFaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeafBlowerEffects::*)()>(&::GlobalNamespace::LeafBlowerEffects::BlowFaces)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x5655568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"BlowFaces", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeafBlowerEffects.TryBlowFace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeafBlowerEffects::*)(::GlobalNamespace::VRRig*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::LeafBlowerEffects::TryBlowFace)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5655a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"TryBlowFace", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeafBlowerEffects._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeafBlowerEffects::*)()>(&::GlobalNamespace::LeafBlowerEffects::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5655c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_gunBarrel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gunBarrel;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_gunBarrel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gunBarrel;
}
constexpr void GlobalNamespace::LeafBlowerEffects::__cordl_internal_set_gunBarrel(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gunBarrel = value;
}
constexpr float_t& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_projectionRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectionRange;
}
constexpr float_t const& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_projectionRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectionRange;
}
constexpr void GlobalNamespace::LeafBlowerEffects::__cordl_internal_set_projectionRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectionRange = value;
}
constexpr float_t& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_projectionWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectionWidth;
}
constexpr float_t const& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_projectionWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectionWidth;
}
constexpr void GlobalNamespace::LeafBlowerEffects::__cordl_internal_set_projectionWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectionWidth = value;
}
constexpr float_t& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_headToleranceAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headToleranceAngle;
}
constexpr float_t const& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_headToleranceAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headToleranceAngle;
}
constexpr void GlobalNamespace::LeafBlowerEffects::__cordl_internal_set_headToleranceAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headToleranceAngle = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_raycastLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastLayers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_raycastLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastLayers;
}
constexpr void GlobalNamespace::LeafBlowerEffects::__cordl_internal_set_raycastLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycastLayers = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_angledHitParticleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angledHitParticleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_angledHitParticleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angledHitParticleSystem;
}
constexpr void GlobalNamespace::LeafBlowerEffects::__cordl_internal_set_angledHitParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angledHitParticleSystem = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_squareHitParticleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squareHitParticleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_squareHitParticleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squareHitParticleSystem;
}
constexpr void GlobalNamespace::LeafBlowerEffects::__cordl_internal_set_squareHitParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___squareHitParticleSystem = value;
}
constexpr float_t& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_squareHitAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squareHitAngle;
}
constexpr float_t const& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_squareHitAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squareHitAngle;
}
constexpr void GlobalNamespace::LeafBlowerEffects::__cordl_internal_set_squareHitAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___squareHitAngle = value;
}
constexpr ::GlobalNamespace::CosmeticRefID& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_fanRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fanRef;
}
constexpr ::GlobalNamespace::CosmeticRefID const& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_fanRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fanRef;
}
constexpr void GlobalNamespace::LeafBlowerEffects::__cordl_internal_set_fanRef(::GlobalNamespace::CosmeticRefID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fanRef = value;
}
constexpr float_t& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_headToleranceAngleCos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headToleranceAngleCos;
}
constexpr float_t const& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_headToleranceAngleCos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headToleranceAngleCos;
}
constexpr void GlobalNamespace::LeafBlowerEffects::__cordl_internal_set_headToleranceAngleCos(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headToleranceAngleCos = value;
}
constexpr float_t& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_squareHitAngleCos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squareHitAngleCos;
}
constexpr float_t const& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_squareHitAngleCos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squareHitAngleCos;
}
constexpr void GlobalNamespace::LeafBlowerEffects::__cordl_internal_set_squareHitAngleCos(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___squareHitAngleCos = value;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticFan>& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_fan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fan;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticFan> const& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get_fan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fan;
}
constexpr void GlobalNamespace::LeafBlowerEffects::__cordl_internal_set_fan(::UnityW<::GlobalNamespace::CosmeticFan>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fan = value;
}
constexpr bool& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr bool const& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr void GlobalNamespace::LeafBlowerEffects::__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GlobalNamespace::LeafBlowerEffects::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr void GlobalNamespace::LeafBlowerEffects::__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField = value;
}
inline bool GlobalNamespace::LeafBlowerEffects::GorillaTag_ISpawnable_get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LeafBlowerEffects::GorillaTag_ISpawnable_set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GlobalNamespace::LeafBlowerEffects::GorillaTag_ISpawnable_get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GlobalNamespace::LeafBlowerEffects::GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LeafBlowerEffects::GorillaTag_ISpawnable_OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LeafBlowerEffects::GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::LeafBlowerEffects::StartFan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"StartFan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LeafBlowerEffects::StopFan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"StopFan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LeafBlowerEffects::UpdateEffects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"UpdateEffects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LeafBlowerEffects::ProjectParticles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"ProjectParticles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LeafBlowerEffects::StopEffects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"StopEffects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LeafBlowerEffects::BlowFaces()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"BlowFaces", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LeafBlowerEffects::TryBlowFace(::GlobalNamespace::VRRig*  rig, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  directionNormalized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {"TryBlowFace", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, origin, directionNormalized);
}
inline void GlobalNamespace::LeafBlowerEffects::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LeafBlowerEffects*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LeafBlowerEffects* GlobalNamespace::LeafBlowerEffects::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LeafBlowerEffects*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GlobalNamespace::LeafBlowerEffects::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GlobalNamespace::LeafBlowerEffects::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeafBlowerEffects::LeafBlowerEffects()   {
}
