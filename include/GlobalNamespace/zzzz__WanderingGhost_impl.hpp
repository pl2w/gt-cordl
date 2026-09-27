#pragma once
// IWYU pragma private; include "GlobalNamespace/WanderingGhost.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__ThrowableSetDressing_impl.hpp"
#include "GlobalNamespace/zzzz__WanderingGhost_Waypoint_impl.hpp"
#include "GlobalNamespace/zzzz__WanderingGhost_ghostState_impl.hpp"
#include "GlobalNamespace/zzzz__ZoneBasedObject_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__WanderingGhost_def.hpp"
#include "GlobalNamespace/zzzz__WanderingGhost_Waypoint_def.hpp"
#include "GlobalNamespace/zzzz__WanderingGhost_ghostState_def.hpp"
#include "GlobalNamespace/zzzz__ZoneBasedObject_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost::*)()>(&::GlobalNamespace::WanderingGhost::Start)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5a11350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                    {::i2c::class_of<::GlobalNamespace::WanderingGhost*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.DelayedStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost::*)()>(&::GlobalNamespace::WanderingGhost::DelayedStart)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a1144c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"DelayedStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost::*)()>(&::GlobalNamespace::WanderingGhost::LateUpdate)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5a11b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.PickNextWaypoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost::*)()>(&::GlobalNamespace::WanderingGhost::PickNextWaypoint)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x5a114b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"PickNextWaypoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.Patrol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost::*)()>(&::GlobalNamespace::WanderingGhost::Patrol)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5a12200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"Patrol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.MaybeHideGhost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::WanderingGhost::*)()>(&::GlobalNamespace::WanderingGhost::MaybeHideGhost)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5a12510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"MaybeHideGhost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.ChangeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost::*)(::GlobalNamespace::WanderingGhost_ghostState)>(&::GlobalNamespace::WanderingGhost::ChangeState)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5a119f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"ChangeState", {}, {::i2c::type_of<::GlobalNamespace::WanderingGhost_ghostState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost::*)()>(&::GlobalNamespace::WanderingGhost::UpdateState)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5a11db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"UpdateState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.HauntObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost::*)()>(&::GlobalNamespace::WanderingGhost::HauntObjects)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5a12a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"HauntObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::WanderingGhost_ghostState (::GlobalNamespace::WanderingGhost::*)()>(&::GlobalNamespace::WanderingGhost::get_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a12bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost::*)(::GlobalNamespace::WanderingGhost_ghostState)>(&::GlobalNamespace::WanderingGhost::set_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a12c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::WanderingGhost_ghostState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost::*)()>(&::GlobalNamespace::WanderingGhost::WriteDataFusion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a12ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                    {::i2c::class_of<::GlobalNamespace::WanderingGhost*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost::*)()>(&::GlobalNamespace::WanderingGhost::ReadDataFusion)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a12cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                    {::i2c::class_of<::GlobalNamespace::WanderingGhost*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::WanderingGhost::WriteDataPUN)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5a12cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                    {::i2c::class_of<::GlobalNamespace::WanderingGhost*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::WanderingGhost::ReadDataPUN)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5a12db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                    {::i2c::class_of<::GlobalNamespace::WanderingGhost*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.ReadDataShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost::*)(::GlobalNamespace::WanderingGhost_ghostState)>(&::GlobalNamespace::WanderingGhost::ReadDataShared)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a12ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"ReadDataShared", {}, {::i2c::type_of<::GlobalNamespace::WanderingGhost_ghostState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.OnOwnerChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost::*)(::Photon::Realtime::Player*, ::Photon::Realtime::Player*)>(&::GlobalNamespace::WanderingGhost::OnOwnerChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a12e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                    {::i2c::class_of<::GlobalNamespace::WanderingGhost*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.SpawnFlowerNearby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost::*)()>(&::GlobalNamespace::WanderingGhost::SpawnFlowerNearby)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x5a12680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"SpawnFlowerNearby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost::*)()>(&::GlobalNamespace::WanderingGhost::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5a12f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost::*)(bool)>(&::GlobalNamespace::WanderingGhost::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a13004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                    {::i2c::class_of<::GlobalNamespace::WanderingGhost*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost::*)()>(&::GlobalNamespace::WanderingGhost::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a13024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                    {::i2c::class_of<::GlobalNamespace::WanderingGhost*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::WanderingGhost::__cordl_internal_get_patrolSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolSpeed;
}
constexpr float_t const& GlobalNamespace::WanderingGhost::__cordl_internal_get_patrolSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolSpeed;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_patrolSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolSpeed = value;
}
constexpr float_t& GlobalNamespace::WanderingGhost::__cordl_internal_get_idleStayDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleStayDuration;
}
constexpr float_t const& GlobalNamespace::WanderingGhost::__cordl_internal_get_idleStayDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleStayDuration;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_idleStayDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idleStayDuration = value;
}
constexpr float_t& GlobalNamespace::WanderingGhost::__cordl_internal_get_sphereColliderRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sphereColliderRadius;
}
constexpr float_t const& GlobalNamespace::WanderingGhost::__cordl_internal_get_sphereColliderRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sphereColliderRadius;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_sphereColliderRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sphereColliderRadius = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ThrowableSetDressing>>& GlobalNamespace::WanderingGhost::__cordl_internal_get_allFlowers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allFlowers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ThrowableSetDressing>> const& GlobalNamespace::WanderingGhost::__cordl_internal_get_allFlowers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allFlowers;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_allFlowers(::ArrayW<::UnityW<::GlobalNamespace::ThrowableSetDressing>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allFlowers = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::WanderingGhost::__cordl_internal_get_flowerDisabledPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowerDisabledPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::WanderingGhost::__cordl_internal_get_flowerDisabledPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowerDisabledPosition;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_flowerDisabledPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flowerDisabledPosition = value;
}
constexpr float_t& GlobalNamespace::WanderingGhost::__cordl_internal_get_flowerSpawnRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowerSpawnRadius;
}
constexpr float_t const& GlobalNamespace::WanderingGhost::__cordl_internal_get_flowerSpawnRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowerSpawnRadius;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_flowerSpawnRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flowerSpawnRadius = value;
}
constexpr float_t& GlobalNamespace::WanderingGhost::__cordl_internal_get_flowerSpawnDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowerSpawnDuration;
}
constexpr float_t const& GlobalNamespace::WanderingGhost::__cordl_internal_get_flowerSpawnDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowerSpawnDuration;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_flowerSpawnDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flowerSpawnDuration = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::WanderingGhost::__cordl_internal_get_flowerGroundMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowerGroundMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::WanderingGhost::__cordl_internal_get_flowerGroundMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowerGroundMask;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_flowerGroundMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flowerGroundMask = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::WanderingGhost::__cordl_internal_get_mrenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mrenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::WanderingGhost::__cordl_internal_get_mrenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mrenderer;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_mrenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mrenderer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::WanderingGhost::__cordl_internal_get_visibleMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::WanderingGhost::__cordl_internal_get_visibleMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleMaterial;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_visibleMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visibleMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::WanderingGhost::__cordl_internal_get_scryableMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryableMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::WanderingGhost::__cordl_internal_get_scryableMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryableMaterial;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_scryableMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scryableMaterial = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::WanderingGhost::__cordl_internal_get_waypointsContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waypointsContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::WanderingGhost::__cordl_internal_get_waypointsContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waypointsContainer;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_waypointsContainer(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waypointsContainer = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>>& GlobalNamespace::WanderingGhost::__cordl_internal_get_waypointRegions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waypointRegions;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>> const& GlobalNamespace::WanderingGhost::__cordl_internal_get_waypointRegions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waypointRegions;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_waypointRegions(::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waypointRegions = value;
}
constexpr ::UnityW<::GlobalNamespace::ZoneBasedObject>& GlobalNamespace::WanderingGhost::__cordl_internal_get_lastWaypointRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWaypointRegion;
}
constexpr ::UnityW<::GlobalNamespace::ZoneBasedObject> const& GlobalNamespace::WanderingGhost::__cordl_internal_get_lastWaypointRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWaypointRegion;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_lastWaypointRegion(::UnityW<::GlobalNamespace::ZoneBasedObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastWaypointRegion = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::WanderingGhost_Waypoint>*& GlobalNamespace::WanderingGhost::__cordl_internal_get_waypoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waypoints;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::WanderingGhost_Waypoint>* const& GlobalNamespace::WanderingGhost::__cordl_internal_get_waypoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waypoints;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_waypoints(::System::Collections::Generic::List_1<::GlobalNamespace::WanderingGhost_Waypoint>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waypoints = value;
}
constexpr ::GlobalNamespace::WanderingGhost_Waypoint& GlobalNamespace::WanderingGhost::__cordl_internal_get_currentWaypoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentWaypoint;
}
constexpr ::GlobalNamespace::WanderingGhost_Waypoint const& GlobalNamespace::WanderingGhost::__cordl_internal_get_currentWaypoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentWaypoint;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_currentWaypoint(::GlobalNamespace::WanderingGhost_Waypoint  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentWaypoint = value;
}
constexpr ::StringW& GlobalNamespace::WanderingGhost::__cordl_internal_get_debugForceWaypointRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugForceWaypointRegion;
}
constexpr ::StringW const& GlobalNamespace::WanderingGhost::__cordl_internal_get_debugForceWaypointRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugForceWaypointRegion;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_debugForceWaypointRegion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugForceWaypointRegion = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::WanderingGhost::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::WanderingGhost::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::WanderingGhost::__cordl_internal_get_appearAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appearAudio;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::WanderingGhost::__cordl_internal_get_appearAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appearAudio;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_appearAudio(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___appearAudio = value;
}
constexpr float_t& GlobalNamespace::WanderingGhost::__cordl_internal_get_idleVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleVolume;
}
constexpr float_t const& GlobalNamespace::WanderingGhost::__cordl_internal_get_idleVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleVolume;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_idleVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idleVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::WanderingGhost::__cordl_internal_get_patrolAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::WanderingGhost::__cordl_internal_get_patrolAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolAudio;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_patrolAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolAudio = value;
}
constexpr float_t& GlobalNamespace::WanderingGhost::__cordl_internal_get_patrolVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolVolume;
}
constexpr float_t const& GlobalNamespace::WanderingGhost::__cordl_internal_get_patrolVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolVolume;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_patrolVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolVolume = value;
}
constexpr ::GlobalNamespace::WanderingGhost_ghostState& GlobalNamespace::WanderingGhost::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::WanderingGhost_ghostState const& GlobalNamespace::WanderingGhost::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_currentState(::GlobalNamespace::WanderingGhost_ghostState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr float_t& GlobalNamespace::WanderingGhost::__cordl_internal_get_idlePassedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idlePassedTime;
}
constexpr float_t const& GlobalNamespace::WanderingGhost::__cordl_internal_get_idlePassedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idlePassedTime;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_idlePassedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idlePassedTime = value;
}
constexpr ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::WanderingGhost::__cordl_internal_get_TriggerHauntedObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggerHauntedObjects;
}
constexpr ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::WanderingGhost::__cordl_internal_get_TriggerHauntedObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggerHauntedObjects;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_TriggerHauntedObjects(::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TriggerHauntedObjects = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::WanderingGhost::__cordl_internal_get_hoverVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::WanderingGhost::__cordl_internal_get_hoverVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverVelocity;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_hoverVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverVelocity = value;
}
constexpr float_t& GlobalNamespace::WanderingGhost::__cordl_internal_get_hoverRectifyForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverRectifyForce;
}
constexpr float_t const& GlobalNamespace::WanderingGhost::__cordl_internal_get_hoverRectifyForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverRectifyForce;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_hoverRectifyForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverRectifyForce = value;
}
constexpr float_t& GlobalNamespace::WanderingGhost::__cordl_internal_get_hoverRandomForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverRandomForce;
}
constexpr float_t const& GlobalNamespace::WanderingGhost::__cordl_internal_get_hoverRandomForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverRandomForce;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_hoverRandomForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverRandomForce = value;
}
constexpr float_t& GlobalNamespace::WanderingGhost::__cordl_internal_get_hoverDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverDrag;
}
constexpr float_t const& GlobalNamespace::WanderingGhost::__cordl_internal_get_hoverDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverDrag;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_hoverDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverDrag = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::WanderingGhost::__cordl_internal_get_hitColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitColliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::WanderingGhost::__cordl_internal_get_hitColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitColliders;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set_hitColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitColliders = value;
}
constexpr ::GlobalNamespace::WanderingGhost_ghostState& GlobalNamespace::WanderingGhost::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::GlobalNamespace::WanderingGhost_ghostState const& GlobalNamespace::WanderingGhost::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GlobalNamespace::WanderingGhost::__cordl_internal_set__Data(::GlobalNamespace::WanderingGhost_ghostState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline void GlobalNamespace::WanderingGhost::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WanderingGhost*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WanderingGhost::DelayedStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"DelayedStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WanderingGhost::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WanderingGhost::PickNextWaypoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"PickNextWaypoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WanderingGhost::Patrol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"Patrol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::WanderingGhost::MaybeHideGhost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"MaybeHideGhost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::WanderingGhost::ChangeState(::GlobalNamespace::WanderingGhost_ghostState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"ChangeState", {}, {::i2c::type_of<::GlobalNamespace::WanderingGhost_ghostState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::WanderingGhost::UpdateState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"UpdateState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WanderingGhost::HauntObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"HauntObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WanderingGhost_ghostState GlobalNamespace::WanderingGhost::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WanderingGhost_ghostState>(this, ___internal_method);
}
inline void GlobalNamespace::WanderingGhost::set_Data(::GlobalNamespace::WanderingGhost_ghostState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::WanderingGhost_ghostState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::WanderingGhost::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WanderingGhost*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WanderingGhost::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WanderingGhost*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WanderingGhost::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WanderingGhost*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::WanderingGhost::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WanderingGhost*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::WanderingGhost::ReadDataShared(::GlobalNamespace::WanderingGhost_ghostState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"ReadDataShared", {}, {::i2c::type_of<::GlobalNamespace::WanderingGhost_ghostState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::WanderingGhost::OnOwnerChange(::Photon::Realtime::Player*  newOwner, ::Photon::Realtime::Player*  previousOwner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WanderingGhost*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOwner, previousOwner);
}
inline void GlobalNamespace::WanderingGhost::SpawnFlowerNearby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {"SpawnFlowerNearby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WanderingGhost::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WanderingGhost::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WanderingGhost*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::WanderingGhost::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WanderingGhost*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WanderingGhost* GlobalNamespace::WanderingGhost::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WanderingGhost*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WanderingGhost::WanderingGhost()   {
}
