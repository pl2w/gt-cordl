#pragma once
// IWYU pragma private; include "GlobalNamespace/DrumsItem.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "UnityEngine/zzzz__AudioSource_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__DrumsItem_def.hpp"
#include "GlobalNamespace/zzzz__Drum_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerColliderHandIndicator_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DrumsItem.GorillaTag_ISpawnable_get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DrumsItem::*)()>(&::GlobalNamespace::DrumsItem::GorillaTag_ISpawnable_get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5756b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrumsItem.GorillaTag_ISpawnable_set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrumsItem::*)(bool)>(&::GlobalNamespace::DrumsItem::GorillaTag_ISpawnable_set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5756b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrumsItem.GorillaTag_ISpawnable_get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GlobalNamespace::DrumsItem::*)()>(&::GlobalNamespace::DrumsItem::GorillaTag_ISpawnable_get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5756b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrumsItem.GorillaTag_ISpawnable_set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrumsItem::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GlobalNamespace::DrumsItem::GorillaTag_ISpawnable_set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5756b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrumsItem.GorillaTag_ISpawnable_OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrumsItem::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::DrumsItem::GorillaTag_ISpawnable_OnSpawn)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5756b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrumsItem.GorillaTag_ISpawnable_OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrumsItem::*)()>(&::GlobalNamespace::DrumsItem::GorillaTag_ISpawnable_OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5756dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrumsItem.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrumsItem::*)()>(&::GlobalNamespace::DrumsItem::LateUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5756db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrumsItem.CheckHandHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrumsItem::*)(::by_ref<bool>, ::by_ref<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>, bool)>(&::GlobalNamespace::DrumsItem::CheckHandHit)> {
  constexpr static std::size_t size = 0x860;
  constexpr static std::size_t addrs = 0x5756de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"CheckHandHit", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrumsItem.RayCastHitCompare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::DrumsItem::*)(::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit)>(&::GlobalNamespace::DrumsItem::RayCastHitCompare)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5757b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"RayCastHitCompare", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrumsItem.DrumHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrumsItem::*)(::GlobalNamespace::Drum*, bool, float_t)>(&::GlobalNamespace::DrumsItem::DrumHit)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x5757640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"DrumHit", {}, {::i2c::type_of<::GlobalNamespace::Drum*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrumsItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrumsItem::*)()>(&::GlobalNamespace::DrumsItem::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5757b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::DrumsItem::__cordl_internal_get_collidersForThisDrum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersForThisDrum;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::DrumsItem::__cordl_internal_get_collidersForThisDrum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersForThisDrum;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_collidersForThisDrum(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collidersForThisDrum = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::DrumsItem::__cordl_internal_get_collidersForThisDrumList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersForThisDrumList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::DrumsItem::__cordl_internal_get_collidersForThisDrumList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersForThisDrumList;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_collidersForThisDrumList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collidersForThisDrumList = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& GlobalNamespace::DrumsItem::__cordl_internal_get_drumsAS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drumsAS;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& GlobalNamespace::DrumsItem::__cordl_internal_get_drumsAS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drumsAS;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_drumsAS(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drumsAS = value;
}
constexpr float_t& GlobalNamespace::DrumsItem::__cordl_internal_get_maxDrumVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDrumVolume;
}
constexpr float_t const& GlobalNamespace::DrumsItem::__cordl_internal_get_maxDrumVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDrumVolume;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_maxDrumVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDrumVolume = value;
}
constexpr float_t& GlobalNamespace::DrumsItem::__cordl_internal_get_minDrumVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDrumVolume;
}
constexpr float_t const& GlobalNamespace::DrumsItem::__cordl_internal_get_minDrumVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDrumVolume;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_minDrumVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDrumVolume = value;
}
constexpr float_t& GlobalNamespace::DrumsItem::__cordl_internal_get_maxDrumVolumeVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDrumVolumeVelocity;
}
constexpr float_t const& GlobalNamespace::DrumsItem::__cordl_internal_get_maxDrumVolumeVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDrumVolumeVelocity;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_maxDrumVolumeVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDrumVolumeVelocity = value;
}
constexpr bool& GlobalNamespace::DrumsItem::__cordl_internal_get_rightHandIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandIn;
}
constexpr bool const& GlobalNamespace::DrumsItem::__cordl_internal_get_rightHandIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandIn;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_rightHandIn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandIn = value;
}
constexpr bool& GlobalNamespace::DrumsItem::__cordl_internal_get_leftHandIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandIn;
}
constexpr bool const& GlobalNamespace::DrumsItem::__cordl_internal_get_leftHandIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandIn;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_leftHandIn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandIn = value;
}
constexpr float_t& GlobalNamespace::DrumsItem::__cordl_internal_get_volToPlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volToPlay;
}
constexpr float_t const& GlobalNamespace::DrumsItem::__cordl_internal_get_volToPlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volToPlay;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_volToPlay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volToPlay = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>& GlobalNamespace::DrumsItem::__cordl_internal_get_rightHandIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandIndicator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator> const& GlobalNamespace::DrumsItem::__cordl_internal_get_rightHandIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandIndicator;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_rightHandIndicator(::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandIndicator = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>& GlobalNamespace::DrumsItem::__cordl_internal_get_leftHandIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandIndicator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator> const& GlobalNamespace::DrumsItem::__cordl_internal_get_leftHandIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandIndicator;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_leftHandIndicator(::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandIndicator = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::DrumsItem::__cordl_internal_get_collidersHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersHit;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::DrumsItem::__cordl_internal_get_collidersHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersHit;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_collidersHit(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collidersHit = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::DrumsItem::__cordl_internal_get_actualColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actualColliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::DrumsItem::__cordl_internal_get_actualColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actualColliders;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_actualColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actualColliders = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::DrumsItem::__cordl_internal_get_drumsTouchable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drumsTouchable;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::DrumsItem::__cordl_internal_get_drumsTouchable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drumsTouchable;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_drumsTouchable(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drumsTouchable = value;
}
constexpr float_t& GlobalNamespace::DrumsItem::__cordl_internal_get_sphereRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sphereRadius;
}
constexpr float_t const& GlobalNamespace::DrumsItem::__cordl_internal_get_sphereRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sphereRadius;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_sphereRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sphereRadius = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::DrumsItem::__cordl_internal_get_spherecastSweep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spherecastSweep;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DrumsItem::__cordl_internal_get_spherecastSweep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spherecastSweep;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_spherecastSweep(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spherecastSweep = value;
}
constexpr int32_t& GlobalNamespace::DrumsItem::__cordl_internal_get_collidersHitCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersHitCount;
}
constexpr int32_t const& GlobalNamespace::DrumsItem::__cordl_internal_get_collidersHitCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersHitCount;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_collidersHitCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collidersHitCount = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*& GlobalNamespace::DrumsItem::__cordl_internal_get_hitList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* const& GlobalNamespace::DrumsItem::__cordl_internal_get_hitList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitList;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_hitList(::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitList = value;
}
constexpr ::UnityW<::GlobalNamespace::Drum>& GlobalNamespace::DrumsItem::__cordl_internal_get_tempDrum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempDrum;
}
constexpr ::UnityW<::GlobalNamespace::Drum> const& GlobalNamespace::DrumsItem::__cordl_internal_get_tempDrum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempDrum;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_tempDrum(::UnityW<::GlobalNamespace::Drum>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempDrum = value;
}
constexpr bool& GlobalNamespace::DrumsItem::__cordl_internal_get_drumHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drumHit;
}
constexpr bool const& GlobalNamespace::DrumsItem::__cordl_internal_get_drumHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drumHit;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_drumHit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drumHit = value;
}
constexpr ::UnityEngine::RaycastHit& GlobalNamespace::DrumsItem::__cordl_internal_get_nullHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nullHit;
}
constexpr ::UnityEngine::RaycastHit const& GlobalNamespace::DrumsItem::__cordl_internal_get_nullHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nullHit;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_nullHit(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nullHit = value;
}
constexpr int32_t& GlobalNamespace::DrumsItem::__cordl_internal_get_onlineOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlineOffset;
}
constexpr int32_t const& GlobalNamespace::DrumsItem::__cordl_internal_get_onlineOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlineOffset;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_onlineOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlineOffset = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::DrumsItem::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::DrumsItem::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr bool& GlobalNamespace::DrumsItem::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr bool const& GlobalNamespace::DrumsItem::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GlobalNamespace::DrumsItem::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GlobalNamespace::DrumsItem::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr void GlobalNamespace::DrumsItem::__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField = value;
}
inline bool GlobalNamespace::DrumsItem::GorillaTag_ISpawnable_get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::DrumsItem::GorillaTag_ISpawnable_set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GlobalNamespace::DrumsItem::GorillaTag_ISpawnable_get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GlobalNamespace::DrumsItem::GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DrumsItem::GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::DrumsItem::GorillaTag_ISpawnable_OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DrumsItem::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DrumsItem::CheckHandHit(::by_ref<bool>  handIn, ::by_ref<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>  handIndicator, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"CheckHandHit", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handIn, handIndicator, isLeftHand);
}
inline int32_t GlobalNamespace::DrumsItem::RayCastHitCompare(::UnityEngine::RaycastHit  a, ::UnityEngine::RaycastHit  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"RayCastHitCompare", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline void GlobalNamespace::DrumsItem::DrumHit(::GlobalNamespace::Drum*  tempDrumInner, bool  isLeftHand, float_t  hitVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {"DrumHit", {}, {::i2c::type_of<::GlobalNamespace::Drum*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tempDrumInner, isLeftHand, hitVelocity);
}
inline void GlobalNamespace::DrumsItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrumsItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DrumsItem* GlobalNamespace::DrumsItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DrumsItem*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GlobalNamespace::DrumsItem::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GlobalNamespace::DrumsItem::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrumsItem::DrumsItem()   {
}
