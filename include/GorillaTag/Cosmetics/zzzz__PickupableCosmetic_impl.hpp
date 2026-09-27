#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/PickupableCosmetic.hpp"
#include "GorillaTag/Cosmetics/zzzz__PickupableVariant_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__PickupableCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__RigOwnedPhysicsBody_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__PickupableCosmetic__DelayedPickup_Internal_d__45_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableCosmetic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::PickupableCosmetic::*)()>(&::GorillaTag::Cosmetics::PickupableCosmetic::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d73ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableCosmetic.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::PickupableCosmetic::*)()>(&::GorillaTag::Cosmetics::PickupableCosmetic::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d73b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableCosmetic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::PickupableCosmetic::*)()>(&::GorillaTag::Cosmetics::PickupableCosmetic::OnEnable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5d73b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableCosmetic.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::PickupableCosmetic::*)()>(&::GorillaTag::Cosmetics::PickupableCosmetic::OnDisable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5d73c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableCosmetic.Pickup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::PickupableCosmetic::*)(bool)>(&::GorillaTag::Cosmetics::PickupableCosmetic::Pickup)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5d73c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableCosmetic.DelayedPickup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::PickupableCosmetic::*)()>(&::GorillaTag::Cosmetics::PickupableCosmetic::DelayedPickup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d74034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableCosmetic.DelayedPickup_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::PickupableCosmetic::*)()>(&::GorillaTag::Cosmetics::PickupableCosmetic::DelayedPickup_Internal)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d74038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"DelayedPickup_Internal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableCosmetic.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::PickupableCosmetic::*)(::GlobalNamespace::HoldableObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GorillaTag::Cosmetics::PickupableCosmetic::Release)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5d740e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableCosmetic.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::PickupableCosmetic::*)()>(&::GorillaTag::Cosmetics::PickupableCosmetic::FixedUpdate)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x5d743a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableCosmetic.SettleBanner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::PickupableCosmetic::*)(::UnityEngine::RaycastHit)>(&::GorillaTag::Cosmetics::PickupableCosmetic::SettleBanner)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5d74d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"SettleBanner", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableCosmetic.GetFibonacciSphereDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::Cosmetics::PickupableCosmetic::*)(int32_t, int32_t)>(&::GorillaTag::Cosmetics::PickupableCosmetic::GetFibonacciSphereDirection)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5d74fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"GetFibonacciSphereDirection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableCosmetic.GetCachedDirections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::GorillaTag::Cosmetics::PickupableCosmetic::*)(int32_t)>(&::GorillaTag::Cosmetics::PickupableCosmetic::GetCachedDirections)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5d749a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"GetCachedDirections", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableCosmetic.GetSafeRayOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::Cosmetics::PickupableCosmetic::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaTag::Cosmetics::PickupableCosmetic::GetSafeRayOrigin)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5d74b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"GetSafeRayOrigin", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableCosmetic.BreakPlaceable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::PickupableCosmetic::*)()>(&::GorillaTag::Cosmetics::PickupableCosmetic::BreakPlaceable)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5d75114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"BreakPlaceable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableCosmetic.OnBreakReplicated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::PickupableCosmetic::*)()>(&::GorillaTag::Cosmetics::PickupableCosmetic::OnBreakReplicated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d7499c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"OnBreakReplicated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableCosmetic.PlayBreakEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::PickupableCosmetic::*)()>(&::GorillaTag::Cosmetics::PickupableCosmetic::PlayBreakEffects)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5d752a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableCosmetic.ShowRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::PickupableCosmetic::*)(bool)>(&::GorillaTag::Cosmetics::PickupableCosmetic::ShowRenderers)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5d753d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::PickupableCosmetic::*)()>(&::GorillaTag::Cosmetics::PickupableCosmetic::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d754ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::InteractionPoint>& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_interactionPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionPoint;
}
constexpr ::UnityW<::GlobalNamespace::InteractionPoint> const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_interactionPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionPoint;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_interactionPoint(::UnityW<::GlobalNamespace::InteractionPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactionPoint = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_raycastOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_raycastOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastOrigin;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_raycastOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycastOrigin = value;
}
constexpr bool& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_allowPickupFromGround()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowPickupFromGround;
}
constexpr bool const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_allowPickupFromGround() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowPickupFromGround;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_allowPickupFromGround(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowPickupFromGround = value;
}
constexpr float_t& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_autoPickupAfterSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoPickupAfterSeconds;
}
constexpr float_t const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_autoPickupAfterSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoPickupAfterSeconds;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_autoPickupAfterSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoPickupAfterSeconds = value;
}
constexpr float_t& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_autoPickupDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoPickupDistance;
}
constexpr float_t const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_autoPickupDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoPickupDistance;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_autoPickupDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoPickupDistance = value;
}
constexpr float_t& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_placementOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placementOffset;
}
constexpr float_t const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_placementOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placementOffset;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_placementOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placementOffset = value;
}
constexpr bool& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_dontStickToWall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontStickToWall;
}
constexpr bool const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_dontStickToWall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontStickToWall;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_dontStickToWall(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dontStickToWall = value;
}
constexpr ::UnityEngine::LayerMask& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_floorLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floorLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_floorLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floorLayerMask;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_floorLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floorLayerMask = value;
}
constexpr float_t& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_RaycastCheckDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RaycastCheckDist;
}
constexpr float_t const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_RaycastCheckDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RaycastCheckDist;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_RaycastCheckDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RaycastCheckDist = value;
}
constexpr int32_t& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_RaycastChecksMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RaycastChecksMax;
}
constexpr int32_t const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_RaycastChecksMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RaycastChecksMax;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_RaycastChecksMax(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RaycastChecksMax = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_OnPickupShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPickupShared;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_OnPickupShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPickupShared;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_OnPickupShared(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPickupShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_OnPlacedShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlacedShared;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_OnPlacedShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlacedShared;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_OnPlacedShared(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlacedShared = value;
}
constexpr bool& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_isBreakable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBreakable;
}
constexpr bool const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_isBreakable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBreakable;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_isBreakable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isBreakable = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_breakEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakEffect;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_breakEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakEffect;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_breakEffect(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___breakEffect = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_hideOnBreak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideOnBreak;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_hideOnBreak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideOnBreak;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_hideOnBreak(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideOnBreak = value;
}
constexpr float_t& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_respawnDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnDelay;
}
constexpr float_t const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_respawnDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnDelay;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_respawnDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnDelay = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_OnBrokenShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnBrokenShared;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_OnBrokenShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnBrokenShared;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_OnBrokenShared(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnBrokenShared = value;
}
constexpr bool& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_placedOnFloor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placedOnFloor;
}
constexpr bool const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_placedOnFloor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placedOnFloor;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_placedOnFloor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placedOnFloor = value;
}
constexpr float_t& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_placedOnFloorTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placedOnFloorTime;
}
constexpr float_t const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_placedOnFloorTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placedOnFloorTime;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_placedOnFloorTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placedOnFloorTime = value;
}
constexpr bool& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_broken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___broken;
}
constexpr bool const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_broken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___broken;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_broken(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___broken = value;
}
constexpr float_t& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_brokenTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brokenTime;
}
constexpr float_t const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_brokenTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brokenTime;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_brokenTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___brokenTime = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_cachedLocalRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedLocalRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_cachedLocalRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedLocalRig;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_cachedLocalRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedLocalRig = value;
}
constexpr ::UnityW<::GlobalNamespace::HoldableObject>& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_holdableParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdableParent;
}
constexpr ::UnityW<::GlobalNamespace::HoldableObject> const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_holdableParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdableParent;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_holdableParent(::UnityW<::GlobalNamespace::HoldableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holdableParent = value;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_transferrableParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableParent;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_transferrableParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableParent;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_transferrableParent(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferrableParent = value;
}
constexpr ::UnityW<::GlobalNamespace::RigOwnedPhysicsBody>& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_rigOwnedPhysicsBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigOwnedPhysicsBody;
}
constexpr ::UnityW<::GlobalNamespace::RigOwnedPhysicsBody> const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_rigOwnedPhysicsBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigOwnedPhysicsBody;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_rigOwnedPhysicsBody(::UnityW<::GlobalNamespace::RigOwnedPhysicsBody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigOwnedPhysicsBody = value;
}
constexpr double_t& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_throwSettledTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSettledTime;
}
constexpr double_t const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_throwSettledTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSettledTime;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_throwSettledTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwSettledTime = value;
}
constexpr int32_t& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_landingSide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landingSide;
}
constexpr int32_t const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_landingSide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landingSide;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_landingSide(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___landingSide = value;
}
constexpr float_t& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr float_t const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_scale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scale = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_bodyCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_bodyCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollider;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyCollider = value;
}
constexpr int32_t& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_raysPerStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raysPerStep;
}
constexpr int32_t const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_raysPerStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raysPerStep;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_raysPerStep(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raysPerStep = value;
}
constexpr int32_t& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_stepEveryNFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stepEveryNFrames;
}
constexpr int32_t const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_stepEveryNFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stepEveryNFrames;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_stepEveryNFrames(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stepEveryNFrames = value;
}
constexpr float_t& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_selfSkinOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selfSkinOffset;
}
constexpr float_t const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_selfSkinOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selfSkinOffset;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_selfSkinOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selfSkinOffset = value;
}
constexpr bool& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_debugPlacementRays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPlacementRays;
}
constexpr bool const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_debugPlacementRays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPlacementRays;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_debugPlacementRays(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugPlacementRays = value;
}
constexpr int32_t& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_currentRayIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRayIndex;
}
constexpr int32_t const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_currentRayIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRayIndex;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_currentRayIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentRayIndex = value;
}
constexpr int32_t& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_frameCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameCounter;
}
constexpr int32_t const& GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_get_frameCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameCounter;
}
constexpr void GorillaTag::Cosmetics::PickupableCosmetic::__cordl_internal_set_frameCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameCounter = value;
}
inline void GorillaTag::Cosmetics::PickupableCosmetic::setStaticF_breakableBitmask(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "breakableBitmask", ::GorillaTag::Cosmetics::PickupableCosmetic*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTag::Cosmetics::PickupableCosmetic::getStaticF_breakableBitmask()  {
return ::cordl_internals::getStaticField<int32_t, "breakableBitmask", ::GorillaTag::Cosmetics::PickupableCosmetic*>();
}
inline void GorillaTag::Cosmetics::PickupableCosmetic::setStaticF_directionCache(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityEngine::Vector3>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityEngine::Vector3>>*, "directionCache", ::GorillaTag::Cosmetics::PickupableCosmetic*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityEngine::Vector3>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityEngine::Vector3>>* GorillaTag::Cosmetics::PickupableCosmetic::getStaticF_directionCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityEngine::Vector3>>*, "directionCache", ::GorillaTag::Cosmetics::PickupableCosmetic*>();
}
inline void GorillaTag::Cosmetics::PickupableCosmetic::setStaticF_tmpEmpty(::ArrayW<::UnityEngine::Vector3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "tmpEmpty", ::GorillaTag::Cosmetics::PickupableCosmetic*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> GorillaTag::Cosmetics::PickupableCosmetic::getStaticF_tmpEmpty()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "tmpEmpty", ::GorillaTag::Cosmetics::PickupableCosmetic*>();
}
inline void GorillaTag::Cosmetics::PickupableCosmetic::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::PickupableCosmetic::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::PickupableCosmetic::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::PickupableCosmetic::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::PickupableCosmetic::Pickup(bool  isAutoPickup)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isAutoPickup);
}
inline void GorillaTag::Cosmetics::PickupableCosmetic::DelayedPickup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::PickupableCosmetic::DelayedPickup_Internal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"DelayedPickup_Internal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::PickupableCosmetic::Release(::GlobalNamespace::HoldableObject*  holdable, ::UnityEngine::Vector3  startPosition, ::UnityEngine::Vector3  velocity, float_t  playerScale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, holdable, startPosition, velocity, playerScale);
}
inline void GorillaTag::Cosmetics::PickupableCosmetic::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::PickupableCosmetic::SettleBanner(::UnityEngine::RaycastHit  hitInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"SettleBanner", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitInfo);
}
inline ::UnityEngine::Vector3 GorillaTag::Cosmetics::PickupableCosmetic::GetFibonacciSphereDirection(int32_t  index, int32_t  total)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"GetFibonacciSphereDirection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, index, total);
}
inline ::ArrayW<::UnityEngine::Vector3> GorillaTag::Cosmetics::PickupableCosmetic::GetCachedDirections(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"GetCachedDirections", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method, count);
}
inline ::UnityEngine::Vector3 GorillaTag::Cosmetics::PickupableCosmetic::GetSafeRayOrigin(::UnityEngine::Vector3  rawOrigin, ::UnityEngine::Vector3  dir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"GetSafeRayOrigin", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, rawOrigin, dir);
}
inline void GorillaTag::Cosmetics::PickupableCosmetic::BreakPlaceable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"BreakPlaceable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::PickupableCosmetic::OnBreakReplicated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {"OnBreakReplicated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::PickupableCosmetic::PlayBreakEffects()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::PickupableCosmetic::ShowRenderers(bool  visible)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visible);
}
inline void GorillaTag::Cosmetics::PickupableCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::PickupableCosmetic* GorillaTag::Cosmetics::PickupableCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::PickupableCosmetic*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::PickupableCosmetic::PickupableCosmetic()   {
}
