#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtTabletFollower.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtTabletFollower_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GTLckController_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtCounter_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtTabletFollower_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtToggle_def.hpp"
#include "Liv/Lck/zzzz__ILckCamera_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletFollower::*)()>(&::Liv::Lck::GorillaTag::GtTabletFollower::OnEnable)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x9d2e204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower.OnCameraModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletFollower::*)(::Liv::Lck::GorillaTag::CameraMode, ::Liv::Lck::ILckCamera*)>(&::Liv::Lck::GorillaTag::GtTabletFollower::OnCameraModeChanged)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d2e41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"OnCameraModeChanged", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>(), ::i2c::type_of<::Liv::Lck::ILckCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletFollower::*)()>(&::Liv::Lck::GorillaTag::GtTabletFollower::OnDisable)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x9d2e430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletFollower::*)()>(&::Liv::Lck::GorillaTag::GtTabletFollower::Start)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9d2e648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletFollower::*)()>(&::Liv::Lck::GorillaTag::GtTabletFollower::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d2e778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower.SetPlayerSizeModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletFollower::*)(bool, float_t)>(&::Liv::Lck::GorillaTag::GtTabletFollower::SetPlayerSizeModifier)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9d2eb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"SetPlayerSizeModifier", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower.GetPlayerSizeModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::GorillaTag::GtTabletFollower::*)()>(&::Liv::Lck::GorillaTag::GtTabletFollower::GetPlayerSizeModifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2ec24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"GetPlayerSizeModifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower.SetCanUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletFollower::*)(bool)>(&::Liv::Lck::GorillaTag::GtTabletFollower::SetCanUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2ec2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"SetCanUpdate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower.RepositionNearPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletFollower::*)()>(&::Liv::Lck::GorillaTag::GtTabletFollower::RepositionNearPlayer)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x9d2ec34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"RepositionNearPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower.ResetFollowTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletFollower::*)()>(&::Liv::Lck::GorillaTag::GtTabletFollower::ResetFollowTarget)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9d2f0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"ResetFollowTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower.IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletFollower::*)(bool)>(&::Liv::Lck::GorillaTag::GtTabletFollower::IsEnabled)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d2f1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"IsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower.ProcessTabletFollowing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletFollower::*)()>(&::Liv::Lck::GorillaTag::GtTabletFollower::ProcessTabletFollowing)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x9d2e77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"ProcessTabletFollowing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower.InvertSmoothingValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::GorillaTag::GtTabletFollower::*)(float_t)>(&::Liv::Lck::GorillaTag::GtTabletFollower::InvertSmoothingValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9d2f1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"InvertSmoothingValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower.FindPlayerHeadTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Liv::Lck::GorillaTag::GtTabletFollower::*)()>(&::Liv::Lck::GorillaTag::GtTabletFollower::FindPlayerHeadTransform)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9d2e694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"FindPlayerHeadTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower.RepositioningAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Liv::Lck::GorillaTag::GtTabletFollower::*)(::UnityEngine::Vector3)>(&::Liv::Lck::GorillaTag::GtTabletFollower::RepositioningAnimation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d2f040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"RepositioningAnimation", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower.SetIsFollowing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletFollower::*)(bool)>(&::Liv::Lck::GorillaTag::GtTabletFollower::SetIsFollowing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2f2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"SetIsFollowing", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower.SetMinDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletFollower::*)(int32_t)>(&::Liv::Lck::GorillaTag::GtTabletFollower::SetMinDistance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d2f2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"SetMinDistance", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower.SetSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletFollower::*)(int32_t)>(&::Liv::Lck::GorillaTag::GtTabletFollower::SetSmoothing)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d2f2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"SetSmoothing", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletFollower::*)()>(&::Liv::Lck::GorillaTag::GtTabletFollower::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9d2f304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__heightOffsetForPlayerHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heightOffsetForPlayerHead;
}
constexpr float_t const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__heightOffsetForPlayerHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heightOffsetForPlayerHead;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__heightOffsetForPlayerHead(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____heightOffsetForPlayerHead = value;
}
constexpr float_t& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__rotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationSpeed;
}
constexpr float_t const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__rotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationSpeed;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__rotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationSpeed = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__smoothRepositioning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothRepositioning;
}
constexpr bool const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__smoothRepositioning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothRepositioning;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__smoothRepositioning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smoothRepositioning = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__repositionInFrontOfPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____repositionInFrontOfPlayer;
}
constexpr bool const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__repositionInFrontOfPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____repositionInFrontOfPlayer;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__repositionInFrontOfPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____repositionInFrontOfPlayer = value;
}
constexpr float_t& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__repositioningDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____repositioningDuration;
}
constexpr float_t const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__repositioningDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____repositioningDuration;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__repositioningDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____repositioningDuration = value;
}
constexpr ::UnityEngine::AnimationCurve*& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__repositioningCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____repositioningCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__repositioningCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____repositioningCurve;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__repositioningCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____repositioningCurve = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle>& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__isFollowingToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFollowingToggle;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle> const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__isFollowingToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFollowingToggle;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__isFollowingToggle(::UnityW<::Liv::Lck::GorillaTag::GtToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isFollowingToggle = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter>& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__minDistanceCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDistanceCounter;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter> const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__minDistanceCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDistanceCounter;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__minDistanceCounter(::UnityW<::Liv::Lck::GorillaTag::GtCounter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minDistanceCounter = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter>& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__smoothingCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothingCounter;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter> const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__smoothingCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothingCounter;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__smoothingCounter(::UnityW<::Liv::Lck::GorillaTag::GtCounter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smoothingCounter = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController>& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController> const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__controller(::UnityW<::Liv::Lck::GorillaTag::GTLckController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__canUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canUpdate;
}
constexpr bool const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__canUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canUpdate;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__canUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canUpdate = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__isEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEnabled;
}
constexpr bool const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__isEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEnabled;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__isEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isEnabled = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__isFollowing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFollowing;
}
constexpr bool const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__isFollowing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFollowing;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__isFollowing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isFollowing = value;
}
constexpr float_t& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__minDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDistance;
}
constexpr float_t const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__minDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDistance;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__minDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minDistance = value;
}
constexpr float_t& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__smoothing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothing;
}
constexpr float_t const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__smoothing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothing;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__smoothing(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smoothing = value;
}
constexpr ::UnityEngine::Coroutine*& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__repositioningAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____repositioningAnimation;
}
constexpr ::UnityEngine::Coroutine* const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__repositioningAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____repositioningAnimation;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__repositioningAnimation(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____repositioningAnimation = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__followVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followVelocity;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__followVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followVelocity;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__followVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____followVelocity = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__targetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPosition;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__targetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPosition;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__targetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetPosition = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__playerCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__playerCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerCamera;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__playerCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerCamera = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__playerHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerHead;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__playerHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerHead;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__playerHead(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerHead = value;
}
constexpr ::Liv::Lck::GorillaTag::CameraMode& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__currentCameraMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentCameraMode;
}
constexpr ::Liv::Lck::GorillaTag::CameraMode const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__currentCameraMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentCameraMode;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__currentCameraMode(::Liv::Lck::GorillaTag::CameraMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentCameraMode = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__playerSizeOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerSizeOffset;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__playerSizeOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerSizeOffset;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__playerSizeOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerSizeOffset = value;
}
constexpr float_t& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__playerSizeModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerSizeModifier;
}
constexpr float_t const& Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_get__playerSizeModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerSizeModifier;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower::__cordl_internal_set__playerSizeModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerSizeModifier = value;
}
inline void Liv::Lck::GorillaTag::GtTabletFollower::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtTabletFollower::OnCameraModeChanged(::Liv::Lck::GorillaTag::CameraMode  mode, ::Liv::Lck::ILckCamera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"OnCameraModeChanged", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>(), ::i2c::type_of<::Liv::Lck::ILckCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode, camera);
}
inline void Liv::Lck::GorillaTag::GtTabletFollower::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtTabletFollower::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtTabletFollower::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtTabletFollower::SetPlayerSizeModifier(bool  isDefaultScale, float_t  modifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"SetPlayerSizeModifier", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDefaultScale, modifier);
}
inline float_t Liv::Lck::GorillaTag::GtTabletFollower::GetPlayerSizeModifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"GetPlayerSizeModifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtTabletFollower::SetCanUpdate(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"SetCanUpdate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GtTabletFollower::RepositionNearPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"RepositionNearPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtTabletFollower::ResetFollowTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"ResetFollowTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtTabletFollower::IsEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"IsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GtTabletFollower::ProcessTabletFollowing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"ProcessTabletFollowing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Liv::Lck::GorillaTag::GtTabletFollower::InvertSmoothingValue(float_t  originalValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"InvertSmoothingValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, originalValue);
}
inline ::UnityW<::UnityEngine::Transform> Liv::Lck::GorillaTag::GtTabletFollower::FindPlayerHeadTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"FindPlayerHeadTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Liv::Lck::GorillaTag::GtTabletFollower::RepositioningAnimation(::UnityEngine::Vector3  targetPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"RepositioningAnimation", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, targetPosition);
}
inline void Liv::Lck::GorillaTag::GtTabletFollower::SetIsFollowing(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"SetIsFollowing", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GtTabletFollower::SetMinDistance(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"SetMinDistance", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GtTabletFollower::SetSmoothing(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {"SetSmoothing", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GtTabletFollower::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::GtTabletFollower* Liv::Lck::GorillaTag::GtTabletFollower::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtTabletFollower*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtTabletFollower::GtTabletFollower()   {
}
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::*)(int32_t)>(&::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d2f2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::*)()>(&::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d2f374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::*)()>(&::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9d2f378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::*)()>(&::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2f4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::*)()>(&::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d2f4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::*)()>(&::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2f4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtTabletFollower>& Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtTabletFollower> const& Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::__cordl_internal_set___4__this(::UnityW<::Liv::Lck::GorillaTag::GtTabletFollower>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::__cordl_internal_get_targetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPosition;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::__cordl_internal_get_targetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPosition;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::__cordl_internal_set_targetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPosition = value;
}
constexpr float_t& Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::__cordl_internal_get__time_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time_5__2;
}
constexpr float_t const& Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::__cordl_internal_get__time_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time_5__2;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::__cordl_internal_set__time_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____time_5__2 = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::__cordl_internal_get__startPosition_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPosition_5__3;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::__cordl_internal_get__startPosition_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPosition_5__3;
}
constexpr void Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::__cordl_internal_set__startPosition_5__3(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startPosition_5__3 = value;
}
inline void Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37* Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37::GtTabletFollower__RepositioningAnimation_d__37()   {
}
