#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/DicePhysics.hpp"
#include "GorillaTag/Cosmetics/zzzz__DicePhysics_CosmeticRollOverride_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__DicePhysics_DiceType_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__DicePhysics_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__DiceHoldable_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__DicePhysics_CosmeticRollOverride_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__DicePhysics_DiceType_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::DicePhysics.GetRandomSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::Cosmetics::DicePhysics::*)()>(&::GorillaTag::Cosmetics::DicePhysics::GetRandomSide)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d62350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DicePhysics*>(),
                        {"GetRandomSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DicePhysics.GetSideDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::Cosmetics::DicePhysics::*)(int32_t)>(&::GorillaTag::Cosmetics::DicePhysics::GetSideDirection)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d62b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DicePhysics*>(),
                        {"GetSideDirection", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DicePhysics.StartThrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DicePhysics::*)(::GorillaTag::Cosmetics::DiceHoldable*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, double_t)>(&::GorillaTag::Cosmetics::DicePhysics::StartThrow)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5d623e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DicePhysics*>(),
                        {"StartThrow", {}, {::i2c::type_of<::GorillaTag::Cosmetics::DiceHoldable*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DicePhysics.EndThrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DicePhysics::*)()>(&::GorillaTag::Cosmetics::DicePhysics::EndThrow)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5d61868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DicePhysics*>(),
                        {"EndThrow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DicePhysics.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DicePhysics::*)()>(&::GorillaTag::Cosmetics::DicePhysics::FixedUpdate)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x5d62b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DicePhysics*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DicePhysics.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DicePhysics::*)(::UnityEngine::Collision*)>(&::GorillaTag::Cosmetics::DicePhysics::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5d6325c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DicePhysics*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DicePhysics.InvokeLandingEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DicePhysics::*)(int32_t)>(&::GorillaTag::Cosmetics::DicePhysics::InvokeLandingEffects)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5d63208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DicePhysics*>(),
                        {"InvokeLandingEffects", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DicePhysics.CheckCosmeticRollOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::DicePhysics::*)(::by_ref<int32_t>)>(&::GorillaTag::Cosmetics::DicePhysics::CheckCosmeticRollOverride)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x5d62688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DicePhysics*>(),
                        {"CheckCosmeticRollOverride", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DicePhysics._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DicePhysics::*)()>(&::GorillaTag::Cosmetics::DicePhysics::_ctor)> {
  constexpr static std::size_t size = 0x1d8c;
  constexpr static std::size_t addrs = 0x5d6338c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DicePhysics*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DicePhysics_DiceType& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_diceType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diceType;
}
constexpr ::GlobalNamespace::DicePhysics_DiceType const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_diceType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diceType;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_diceType(::GlobalNamespace::DicePhysics_DiceType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diceType = value;
}
constexpr float_t& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_landingTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landingTime;
}
constexpr float_t const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_landingTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landingTime;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_landingTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___landingTime = value;
}
constexpr float_t& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_postLandingTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postLandingTime;
}
constexpr float_t const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_postLandingTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postLandingTime;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_postLandingTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postLandingTime = value;
}
constexpr ::UnityEngine::LayerMask& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_surfaceLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceLayers;
}
constexpr ::UnityEngine::LayerMask const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_surfaceLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceLayers;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_surfaceLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceLayers = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_angleDeltaVsStrengthCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleDeltaVsStrengthCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_angleDeltaVsStrengthCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleDeltaVsStrengthCurve;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_angleDeltaVsStrengthCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angleDeltaVsStrengthCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_landingTimeVsStrengthCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landingTimeVsStrengthCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_landingTimeVsStrengthCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landingTimeVsStrengthCurve;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_landingTimeVsStrengthCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___landingTimeVsStrengthCurve = value;
}
constexpr float_t& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_strength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strength;
}
constexpr float_t const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_strength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strength;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_strength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strength = value;
}
constexpr float_t& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_damping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damping;
}
constexpr float_t const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_damping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damping;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_damping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damping = value;
}
constexpr bool& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_forceLandingSide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceLandingSide;
}
constexpr bool const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_forceLandingSide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceLandingSide;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_forceLandingSide(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceLandingSide = value;
}
constexpr int32_t& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_forcedLandingSide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forcedLandingSide;
}
constexpr int32_t const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_forcedLandingSide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forcedLandingSide;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_forcedLandingSide(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forcedLandingSide = value;
}
constexpr bool& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_allowPickupFromGround()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowPickupFromGround;
}
constexpr bool const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_allowPickupFromGround() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowPickupFromGround;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_allowPickupFromGround(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowPickupFromGround = value;
}
constexpr float_t& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_bounceAmplification()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceAmplification;
}
constexpr float_t const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_bounceAmplification() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceAmplification;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_bounceAmplification(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounceAmplification = value;
}
constexpr ::ArrayW<::GlobalNamespace::DicePhysics_CosmeticRollOverride>& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_cosmeticRollOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticRollOverrides;
}
constexpr ::ArrayW<::GlobalNamespace::DicePhysics_CosmeticRollOverride> const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_cosmeticRollOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticRollOverrides;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_cosmeticRollOverrides(::ArrayW<::GlobalNamespace::DicePhysics_CosmeticRollOverride>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticRollOverrides = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_onBestRoll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBestRoll;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_onBestRoll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBestRoll;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_onBestRoll(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onBestRoll = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_onWorstRoll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onWorstRoll;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_onWorstRoll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onWorstRoll;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_onWorstRoll(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onWorstRoll = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_onRollFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRollFinished;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_onRollFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRollFinished;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_onRollFinished(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onRollFinished = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr ::UnityW<::GlobalNamespace::InteractionPoint>& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_interactionPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionPoint;
}
constexpr ::UnityW<::GlobalNamespace::InteractionPoint> const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_interactionPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionPoint;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_interactionPoint(::UnityW<::GlobalNamespace::InteractionPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactionPoint = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_cachedLocalRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedLocalRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_cachedLocalRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedLocalRig;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_cachedLocalRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedLocalRig = value;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::DiceHoldable>& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_holdableParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdableParent;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::DiceHoldable> const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_holdableParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdableParent;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_holdableParent(::UnityW<::GorillaTag::Cosmetics::DiceHoldable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holdableParent = value;
}
constexpr double_t& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_throwStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwStartTime;
}
constexpr double_t const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_throwStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwStartTime;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_throwStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwStartTime = value;
}
constexpr double_t& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_throwSettledTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSettledTime;
}
constexpr double_t const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_throwSettledTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSettledTime;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_throwSettledTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwSettledTime = value;
}
constexpr int32_t& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_landingSide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landingSide;
}
constexpr int32_t const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_landingSide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landingSide;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_landingSide(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___landingSide = value;
}
constexpr float_t& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr float_t const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_scale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scale = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_prevVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevVelocity;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_prevVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevVelocity;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_prevVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevVelocity = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_d20SideDirections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___d20SideDirections;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_d20SideDirections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___d20SideDirections;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_d20SideDirections(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___d20SideDirections = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_d6SideDirections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___d6SideDirections;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GorillaTag::Cosmetics::DicePhysics::__cordl_internal_get_d6SideDirections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___d6SideDirections;
}
constexpr void GorillaTag::Cosmetics::DicePhysics::__cordl_internal_set_d6SideDirections(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___d6SideDirections = value;
}
inline int32_t GorillaTag::Cosmetics::DicePhysics::GetRandomSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DicePhysics*>(),
                        {"GetRandomSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaTag::Cosmetics::DicePhysics::GetSideDirection(int32_t  side)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DicePhysics*>(),
                        {"GetSideDirection", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, side);
}
inline void GorillaTag::Cosmetics::DicePhysics::StartThrow(::GorillaTag::Cosmetics::DiceHoldable*  holdable, ::UnityEngine::Vector3  startPosition, ::UnityEngine::Vector3  velocity, float_t  playerScale, int32_t  side, double_t  startTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DicePhysics*>(),
                        {"StartThrow", {}, {::i2c::type_of<::GorillaTag::Cosmetics::DiceHoldable*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, holdable, startPosition, velocity, playerScale, side, startTime);
}
inline void GorillaTag::Cosmetics::DicePhysics::EndThrow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DicePhysics*>(),
                        {"EndThrow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DicePhysics::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DicePhysics*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DicePhysics::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DicePhysics*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GorillaTag::Cosmetics::DicePhysics::InvokeLandingEffects(int32_t  side)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DicePhysics*>(),
                        {"InvokeLandingEffects", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, side);
}
inline bool GorillaTag::Cosmetics::DicePhysics::CheckCosmeticRollOverride(::by_ref<int32_t>  rollSide)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DicePhysics*>(),
                        {"CheckCosmeticRollOverride", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rollSide);
}
inline void GorillaTag::Cosmetics::DicePhysics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DicePhysics*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::DicePhysics* GorillaTag::Cosmetics::DicePhysics::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::DicePhysics*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::DicePhysics::DicePhysics()   {
}
