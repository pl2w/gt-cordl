#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/DistanceCheckerCosmetic.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__DistanceCheckerCosmetic_DistanceCondition_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__DistanceCheckerCosmetic_State_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__DistanceCheckerCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__DistanceCheckerCosmetic_DistanceCondition_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__DistanceCheckerCosmetic_State_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::DistanceCheckerCosmetic.get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::DistanceCheckerCosmetic::*)()>(&::GorillaTag::Cosmetics::DistanceCheckerCosmetic::get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8bfec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DistanceCheckerCosmetic.set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DistanceCheckerCosmetic::*)(bool)>(&::GorillaTag::Cosmetics::DistanceCheckerCosmetic::set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8bff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DistanceCheckerCosmetic.get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GorillaTag::Cosmetics::DistanceCheckerCosmetic::*)()>(&::GorillaTag::Cosmetics::DistanceCheckerCosmetic::get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8bffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DistanceCheckerCosmetic.set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DistanceCheckerCosmetic::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GorillaTag::Cosmetics::DistanceCheckerCosmetic::set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8c004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DistanceCheckerCosmetic.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DistanceCheckerCosmetic::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::DistanceCheckerCosmetic::OnSpawn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8c00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DistanceCheckerCosmetic.OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DistanceCheckerCosmetic::*)()>(&::GorillaTag::Cosmetics::DistanceCheckerCosmetic::OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d8c014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DistanceCheckerCosmetic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DistanceCheckerCosmetic::*)()>(&::GorillaTag::Cosmetics::DistanceCheckerCosmetic::OnEnable)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5d8c018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DistanceCheckerCosmetic.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DistanceCheckerCosmetic::*)()>(&::GorillaTag::Cosmetics::DistanceCheckerCosmetic::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d8c220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DistanceCheckerCosmetic.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DistanceCheckerCosmetic::*)()>(&::GorillaTag::Cosmetics::DistanceCheckerCosmetic::SliceUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d8c22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DistanceCheckerCosmetic.IsBelowThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::DistanceCheckerCosmetic::*)(::UnityEngine::Vector3)>(&::GorillaTag::Cosmetics::DistanceCheckerCosmetic::IsBelowThreshold)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d8cb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"IsBelowThreshold", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DistanceCheckerCosmetic.IsAboveThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::DistanceCheckerCosmetic::*)(::UnityEngine::Vector3)>(&::GorillaTag::Cosmetics::DistanceCheckerCosmetic::IsAboveThreshold)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d8cbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"IsAboveThreshold", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DistanceCheckerCosmetic.UpdateClosestPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DistanceCheckerCosmetic::*)(bool)>(&::GorillaTag::Cosmetics::DistanceCheckerCosmetic::UpdateClosestPlayer)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0x5d8cc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"UpdateClosestPlayer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DistanceCheckerCosmetic.ResetClosestPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DistanceCheckerCosmetic::*)()>(&::GorillaTag::Cosmetics::DistanceCheckerCosmetic::ResetClosestPlayer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d8c1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"ResetClosestPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DistanceCheckerCosmetic.UpdateDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DistanceCheckerCosmetic::*)()>(&::GorillaTag::Cosmetics::DistanceCheckerCosmetic::UpdateDistance)> {
  constexpr static std::size_t size = 0x904;
  constexpr static std::size_t addrs = 0x5d8c230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"UpdateDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DistanceCheckerCosmetic.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DistanceCheckerCosmetic::*)(::GlobalNamespace::DistanceCheckerCosmetic_State)>(&::GorillaTag::Cosmetics::DistanceCheckerCosmetic::UpdateState)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d8d248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::DistanceCheckerCosmetic_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DistanceCheckerCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DistanceCheckerCosmetic::*)()>(&::GorillaTag::Cosmetics::DistanceCheckerCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8d280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_distanceFrom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceFrom;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_distanceFrom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceFrom;
}
constexpr void GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_set_distanceFrom(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceFrom = value;
}
constexpr ::GlobalNamespace::DistanceCheckerCosmetic_DistanceCondition& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_distanceTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceTo;
}
constexpr ::GlobalNamespace::DistanceCheckerCosmetic_DistanceCondition const& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_distanceTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceTo;
}
constexpr void GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_set_distanceTo(::GlobalNamespace::DistanceCheckerCosmetic_DistanceCondition  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceTo = value;
}
constexpr float_t& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_distanceThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceThreshold;
}
constexpr float_t const& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_distanceThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceThreshold;
}
constexpr void GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_set_distanceThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceThreshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_onOneIsBelowThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onOneIsBelowThreshold;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_onOneIsBelowThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onOneIsBelowThreshold;
}
constexpr void GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_set_onOneIsBelowThreshold(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onOneIsBelowThreshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_onAllAreAboveThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAllAreAboveThreshold;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_onAllAreAboveThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAllAreAboveThreshold;
}
constexpr void GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_set_onAllAreAboveThreshold(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onAllAreAboveThreshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::VRRig>,float_t>*& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_onClosestPlayerBelowThresholdChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onClosestPlayerBelowThresholdChanged;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::VRRig>,float_t>* const& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_onClosestPlayerBelowThresholdChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onClosestPlayerBelowThresholdChanged;
}
constexpr void GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_set_onClosestPlayerBelowThresholdChanged(::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::VRRig>,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onClosestPlayerBelowThresholdChanged = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr ::GlobalNamespace::DistanceCheckerCosmetic_State& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::DistanceCheckerCosmetic_State const& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_set_currentState(::GlobalNamespace::DistanceCheckerCosmetic_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_closestDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closestDistance;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_closestDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closestDistance;
}
constexpr void GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_set_closestDistance(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closestDistance = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_currentClosestPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentClosestPlayer;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_currentClosestPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentClosestPlayer;
}
constexpr void GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_set_currentClosestPlayer(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentClosestPlayer = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_ownerRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_ownerRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerRig;
}
constexpr void GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownerRig = value;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_transferableObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferableObject;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get_transferableObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferableObject;
}
constexpr void GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_set_transferableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferableObject = value;
}
constexpr bool& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get__IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get__IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_set__IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get__CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_get__CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::DistanceCheckerCosmetic::__cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CosmeticSelectedSide_k__BackingField = value;
}
inline bool GorillaTag::Cosmetics::DistanceCheckerCosmetic::get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DistanceCheckerCosmetic::set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag::Cosmetics::DistanceCheckerCosmetic::get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DistanceCheckerCosmetic::set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::DistanceCheckerCosmetic::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GorillaTag::Cosmetics::DistanceCheckerCosmetic::OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DistanceCheckerCosmetic::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DistanceCheckerCosmetic::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DistanceCheckerCosmetic::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::DistanceCheckerCosmetic::IsBelowThreshold(::UnityEngine::Vector3  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"IsBelowThreshold", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, distance);
}
inline bool GorillaTag::Cosmetics::DistanceCheckerCosmetic::IsAboveThreshold(::UnityEngine::Vector3  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"IsAboveThreshold", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, distance);
}
inline void GorillaTag::Cosmetics::DistanceCheckerCosmetic::UpdateClosestPlayer(bool  others)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"UpdateClosestPlayer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, others);
}
inline void GorillaTag::Cosmetics::DistanceCheckerCosmetic::ResetClosestPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"ResetClosestPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DistanceCheckerCosmetic::UpdateDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"UpdateDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DistanceCheckerCosmetic::UpdateState(::GlobalNamespace::DistanceCheckerCosmetic_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::DistanceCheckerCosmetic_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GorillaTag::Cosmetics::DistanceCheckerCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::DistanceCheckerCosmetic* GorillaTag::Cosmetics::DistanceCheckerCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::DistanceCheckerCosmetic*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GorillaTag::Cosmetics::DistanceCheckerCosmetic::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GorillaTag::Cosmetics::DistanceCheckerCosmetic::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GorillaTag::Cosmetics::DistanceCheckerCosmetic::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GorillaTag::Cosmetics::DistanceCheckerCosmetic::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::DistanceCheckerCosmetic::DistanceCheckerCosmetic()   {
}
