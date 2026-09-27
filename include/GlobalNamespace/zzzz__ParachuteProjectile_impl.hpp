#pragma once
// IWYU pragma private; include "GlobalNamespace/ParachuteProjectile.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ParachuteProjectile_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__IProjectile_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParachuteProjectile.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParachuteProjectile::*)()>(&::GlobalNamespace::ParachuteProjectile::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56566e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParachuteProjectile.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParachuteProjectile::*)()>(&::GlobalNamespace::ParachuteProjectile::OnEnable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5656738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParachuteProjectile.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParachuteProjectile::*)()>(&::GlobalNamespace::ParachuteProjectile::OnDisable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x56567f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParachuteProjectile.Launch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParachuteProjectile::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, ::GlobalNamespace::VRRig*, int32_t)>(&::GlobalNamespace::ParachuteProjectile::Launch)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x5656878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"Launch", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParachuteProjectile.OnPeakReached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParachuteProjectile::*)()>(&::GlobalNamespace::ParachuteProjectile::OnPeakReached)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5656cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"OnPeakReached", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParachuteProjectile.OnLanded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParachuteProjectile::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::ParachuteProjectile::OnLanded)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5656d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"OnLanded", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParachuteProjectile.ChangeUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParachuteProjectile::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::ParachuteProjectile::ChangeUp)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5656b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"ChangeUp", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParachuteProjectile.PlayImpactEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParachuteProjectile::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::ParachuteProjectile::PlayImpactEffects)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5656ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"PlayImpactEffects", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParachuteProjectile.OnTriggerEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParachuteProjectile::*)(bool, ::UnityEngine::Collider*)>(&::GlobalNamespace::ParachuteProjectile::OnTriggerEvent)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x565707c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"OnTriggerEvent", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParachuteProjectile.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParachuteProjectile::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::ParachuteProjectile::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5657278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParachuteProjectile.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ParachuteProjectile::*)()>(&::GlobalNamespace::ParachuteProjectile::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5657524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParachuteProjectile.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParachuteProjectile::*)(bool)>(&::GlobalNamespace::ParachuteProjectile::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565752c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParachuteProjectile.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParachuteProjectile::*)()>(&::GlobalNamespace::ParachuteProjectile::Tick)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5657534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParachuteProjectile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParachuteProjectile::*)()>(&::GlobalNamespace::ParachuteProjectile::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x565762c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshFilter>& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_monkeMeshFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkeMeshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_monkeMeshFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkeMeshFilter;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_monkeMeshFilter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___monkeMeshFilter = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_parachute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parachute;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_parachute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parachute;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_parachute(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parachute = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_launchMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_launchMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchMesh;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_launchMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchMesh = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_parachutingMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parachutingMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_parachutingMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parachutingMesh;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_parachutingMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parachutingMesh = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_landedMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landedMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_landedMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landedMesh;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_landedMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___landedMesh = value;
}
constexpr float_t& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_parachuteDeployDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parachuteDeployDelay;
}
constexpr float_t const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_parachuteDeployDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parachuteDeployDelay;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_parachuteDeployDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parachuteDeployDelay = value;
}
constexpr float_t& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_destroyOnLandDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyOnLandDelay;
}
constexpr float_t const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_destroyOnLandDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyOnLandDelay;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_destroyOnLandDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyOnLandDelay = value;
}
constexpr float_t& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_groundOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundOffset;
}
constexpr float_t const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_groundOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundOffset;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_groundOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groundOffset = value;
}
constexpr float_t& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_groudUpThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groudUpThreshold;
}
constexpr float_t const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_groudUpThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groudUpThreshold;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_groudUpThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groudUpThreshold = value;
}
constexpr float_t& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_initialDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialDrag;
}
constexpr float_t const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_initialDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialDrag;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_initialDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialDrag = value;
}
constexpr float_t& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_initialAngularDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialAngularDrag;
}
constexpr float_t const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_initialAngularDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialAngularDrag;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_initialAngularDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialAngularDrag = value;
}
constexpr float_t& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_parachuteDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parachuteDrag;
}
constexpr float_t const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_parachuteDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parachuteDrag;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_parachuteDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parachuteDrag = value;
}
constexpr float_t& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_parachuteAngularDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parachuteAngularDrag;
}
constexpr float_t const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_parachuteAngularDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parachuteAngularDrag;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_parachuteAngularDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parachuteAngularDrag = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_impactEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffect;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_impactEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffect;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_impactEffect(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___impactEffect = value;
}
constexpr float_t& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_impactEffectScaleMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffectScaleMultiplier;
}
constexpr float_t const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_impactEffectScaleMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffectScaleMultiplier;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_impactEffectScaleMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___impactEffectScaleMultiplier = value;
}
constexpr float_t& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_impactEffectOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffectOffset;
}
constexpr float_t const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_impactEffectOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactEffectOffset;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_impactEffectOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___impactEffectOffset = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr bool& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_launched()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launched;
}
constexpr bool const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_launched() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launched;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_launched(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launched = value;
}
constexpr float_t& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_launchedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchedTime;
}
constexpr float_t const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_launchedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchedTime;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_launchedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchedTime = value;
}
constexpr float_t& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_landTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landTime;
}
constexpr float_t const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_landTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landTime;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_landTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___landTime = value;
}
constexpr float_t& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_peakTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peakTime;
}
constexpr float_t const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_peakTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peakTime;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_peakTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peakTime = value;
}
constexpr bool& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_parachuteDeployed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parachuteDeployed;
}
constexpr bool const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_parachuteDeployed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parachuteDeployed;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_parachuteDeployed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parachuteDeployed = value;
}
constexpr bool& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_landed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landed;
}
constexpr bool const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get_landed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landed;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set_landed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___landed = value;
}
constexpr bool& GlobalNamespace::ParachuteProjectile::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::ParachuteProjectile::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::ParachuteProjectile::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline void GlobalNamespace::ParachuteProjectile::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParachuteProjectile::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParachuteProjectile::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParachuteProjectile::Launch(::UnityEngine::Vector3  startPosition, ::UnityEngine::Quaternion  startRotation, ::UnityEngine::Vector3  velocity, float_t  chargeFrac, ::GlobalNamespace::VRRig*  ownerRig, int32_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"Launch", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startPosition, startRotation, velocity, chargeFrac, ownerRig, progress);
}
inline void GlobalNamespace::ParachuteProjectile::OnPeakReached()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"OnPeakReached", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParachuteProjectile::OnLanded(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"OnLanded", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::ParachuteProjectile::ChangeUp(::UnityEngine::Vector3  newUp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"ChangeUp", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newUp);
}
inline void GlobalNamespace::ParachuteProjectile::PlayImpactEffects(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"PlayImpactEffects", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, normal);
}
inline void GlobalNamespace::ParachuteProjectile::OnTriggerEvent(bool  isLeft, ::UnityEngine::Collider*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"OnTriggerEvent", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeft, col);
}
inline void GlobalNamespace::ParachuteProjectile::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline bool GlobalNamespace::ParachuteProjectile::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ParachuteProjectile::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ParachuteProjectile::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParachuteProjectile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParachuteProjectile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ParachuteProjectile* GlobalNamespace::ParachuteProjectile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ParachuteProjectile*>());
}
/// @brief Convert operator to "::GorillaTag::Cosmetics::IProjectile"
constexpr  GlobalNamespace::ParachuteProjectile::operator ::GorillaTag::Cosmetics::IProjectile*() noexcept {
return static_cast<::GorillaTag::Cosmetics::IProjectile*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::Cosmetics::IProjectile"
constexpr ::GorillaTag::Cosmetics::IProjectile* GlobalNamespace::ParachuteProjectile::i___GorillaTag__Cosmetics__IProjectile() noexcept {
return static_cast<::GorillaTag::Cosmetics::IProjectile*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::ParachuteProjectile::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::ParachuteProjectile::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParachuteProjectile::ParachuteProjectile()   {
}
