#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/LazyFollow.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__LazyFollow_PositionFollowMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__LazyFollow_RotationFollowMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__LazyFollow_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/zzzz__BindingsGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__LazyFollow_PositionFollowMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__LazyFollow_RotationFollowMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/SmartTweenableVariables/zzzz__SmartFollowQuaternionTweenableVariable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/SmartTweenableVariables/zzzz__SmartFollowVector3TweenableVariable_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.get_target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_target", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.set_target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_target", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.get_targetOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_targetOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb430b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_targetOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.set_targetOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_targetOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb430b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_targetOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.get_followInLocalSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_followInLocalSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_followInLocalSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.set_followInLocalSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_followInLocalSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_followInLocalSpace", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.get_applyTargetInLocalSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_applyTargetInLocalSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_applyTargetInLocalSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.set_applyTargetInLocalSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_applyTargetInLocalSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_applyTargetInLocalSpace", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.get_movementSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_movementSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_movementSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.set_movementSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_movementSpeed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb430c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_movementSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.get_movementSpeedVariancePercentage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_movementSpeedVariancePercentage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_movementSpeedVariancePercentage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.set_movementSpeedVariancePercentage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_movementSpeedVariancePercentage)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb430cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_movementSpeedVariancePercentage", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.get_snapOnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_snapOnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_snapOnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.set_snapOnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_snapOnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_snapOnEnable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.get_positionFollowMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LazyFollow_PositionFollowMode (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_positionFollowMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_positionFollowMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.set_positionFollowMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)(::GlobalNamespace::LazyFollow_PositionFollowMode)>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_positionFollowMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_positionFollowMode", {}, {::i2c::type_of<::GlobalNamespace::LazyFollow_PositionFollowMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.get_minDistanceAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_minDistanceAllowed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_minDistanceAllowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.set_minDistanceAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_minDistanceAllowed)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb430d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_minDistanceAllowed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.get_maxDistanceAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_maxDistanceAllowed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_maxDistanceAllowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.set_maxDistanceAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_maxDistanceAllowed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb430d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_maxDistanceAllowed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.get_timeUntilThresholdReachesMaxDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_timeUntilThresholdReachesMaxDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_timeUntilThresholdReachesMaxDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.set_timeUntilThresholdReachesMaxDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_timeUntilThresholdReachesMaxDistance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb430d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_timeUntilThresholdReachesMaxDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.get_rotationFollowMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LazyFollow_RotationFollowMode (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_rotationFollowMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_rotationFollowMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.set_rotationFollowMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)(::GlobalNamespace::LazyFollow_RotationFollowMode)>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_rotationFollowMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_rotationFollowMode", {}, {::i2c::type_of<::GlobalNamespace::LazyFollow_RotationFollowMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.get_minAngleAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_minAngleAllowed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_minAngleAllowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.set_minAngleAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_minAngleAllowed)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb430da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_minAngleAllowed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.get_maxAngleAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_maxAngleAllowed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_maxAngleAllowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.set_maxAngleAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_maxAngleAllowed)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb430dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_maxAngleAllowed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.get_timeUntilThresholdReachesMaxAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_timeUntilThresholdReachesMaxAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_timeUntilThresholdReachesMaxAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.set_timeUntilThresholdReachesMaxAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_timeUntilThresholdReachesMaxAngle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb430ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_timeUntilThresholdReachesMaxAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::OnValidate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb430df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::Awake)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb430e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::OnEnable)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0xb430f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::OnDisable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4312d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::OnDestroy)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4312f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::LateUpdate)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xb431348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.UpdatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)(::Unity::Mathematics::float3)>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::UpdatePosition)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb431518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"UpdatePosition", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.UpdateRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)(::UnityEngine::Quaternion)>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::UpdateRotation)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb4315a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"UpdateRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.TryGetThresholdTargetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)(::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::TryGetThresholdTargetPosition)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xb431620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.TryGetThresholdTargetRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)(::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::TryGetThresholdTargetRotation)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0xb4317ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.ValidateFollowMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::ValidateFollowMode)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb430b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"ValidateFollowMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow.UpdateUpperAndLowerSpeedBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::UpdateUpperAndLowerSpeedBounds)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb430c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"UpdateUpperAndLowerSpeedBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::_ctor)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0xb431c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Target;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_Target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Target = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_TargetOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetOffset;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_TargetOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetOffset;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_TargetOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetOffset = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_FollowInLocalSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FollowInLocalSpace;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_FollowInLocalSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FollowInLocalSpace;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_FollowInLocalSpace(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FollowInLocalSpace = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_ApplyTargetInLocalSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ApplyTargetInLocalSpace;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_ApplyTargetInLocalSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ApplyTargetInLocalSpace;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_ApplyTargetInLocalSpace(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ApplyTargetInLocalSpace = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_MovementSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MovementSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_MovementSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MovementSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_MovementSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MovementSpeed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_MovementSpeedVariancePercentage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MovementSpeedVariancePercentage;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_MovementSpeedVariancePercentage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MovementSpeedVariancePercentage;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_MovementSpeedVariancePercentage(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MovementSpeedVariancePercentage = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_SnapOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapOnEnable;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_SnapOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapOnEnable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_SnapOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SnapOnEnable = value;
}
constexpr ::GlobalNamespace::LazyFollow_PositionFollowMode& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_PositionFollowMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionFollowMode;
}
constexpr ::GlobalNamespace::LazyFollow_PositionFollowMode const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_PositionFollowMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionFollowMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_PositionFollowMode(::GlobalNamespace::LazyFollow_PositionFollowMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PositionFollowMode = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_MinDistanceAllowed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinDistanceAllowed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_MinDistanceAllowed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinDistanceAllowed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_MinDistanceAllowed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinDistanceAllowed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_MaxDistanceAllowed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxDistanceAllowed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_MaxDistanceAllowed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxDistanceAllowed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_MaxDistanceAllowed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxDistanceAllowed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_TimeUntilThresholdReachesMaxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeUntilThresholdReachesMaxDistance;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_TimeUntilThresholdReachesMaxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeUntilThresholdReachesMaxDistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_TimeUntilThresholdReachesMaxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TimeUntilThresholdReachesMaxDistance = value;
}
constexpr ::GlobalNamespace::LazyFollow_RotationFollowMode& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_RotationFollowMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotationFollowMode;
}
constexpr ::GlobalNamespace::LazyFollow_RotationFollowMode const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_RotationFollowMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotationFollowMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_RotationFollowMode(::GlobalNamespace::LazyFollow_RotationFollowMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotationFollowMode = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_MinAngleAllowed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinAngleAllowed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_MinAngleAllowed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinAngleAllowed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_MinAngleAllowed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinAngleAllowed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_MaxAngleAllowed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxAngleAllowed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_MaxAngleAllowed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxAngleAllowed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_MaxAngleAllowed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxAngleAllowed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_TimeUntilThresholdReachesMaxAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeUntilThresholdReachesMaxAngle;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_TimeUntilThresholdReachesMaxAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeUntilThresholdReachesMaxAngle;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_TimeUntilThresholdReachesMaxAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TimeUntilThresholdReachesMaxAngle = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_LowerMovementSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LowerMovementSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_LowerMovementSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LowerMovementSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_LowerMovementSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LowerMovementSpeed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_UpperMovementSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpperMovementSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_UpperMovementSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpperMovementSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_UpperMovementSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UpperMovementSpeed = value;
}
constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup*& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_BindingsGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsGroup;
}
constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup* const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_BindingsGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsGroup;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_BindingsGroup(::Unity::XR::CoreUtils::Bindings::BindingsGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BindingsGroup = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable*& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_Vector3TweenableVariable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Vector3TweenableVariable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable* const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_Vector3TweenableVariable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Vector3TweenableVariable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_Vector3TweenableVariable(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Vector3TweenableVariable = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable*& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_QuaternionTweenableVariable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_QuaternionTweenableVariable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable* const& UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_get_m_QuaternionTweenableVariable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_QuaternionTweenableVariable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::__cordl_internal_set_m_QuaternionTweenableVariable(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_QuaternionTweenableVariable = value;
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_target()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_target", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_target(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_target", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_targetOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_targetOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_targetOffset(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_targetOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_followInLocalSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_followInLocalSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_followInLocalSpace(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_followInLocalSpace", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_applyTargetInLocalSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_applyTargetInLocalSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_applyTargetInLocalSpace(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_applyTargetInLocalSpace", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_movementSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_movementSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_movementSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_movementSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_movementSpeedVariancePercentage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_movementSpeedVariancePercentage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_movementSpeedVariancePercentage(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_movementSpeedVariancePercentage", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_snapOnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_snapOnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_snapOnEnable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_snapOnEnable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::LazyFollow_PositionFollowMode UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_positionFollowMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_positionFollowMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LazyFollow_PositionFollowMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_positionFollowMode(::GlobalNamespace::LazyFollow_PositionFollowMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_positionFollowMode", {}, {::i2c::type_of<::GlobalNamespace::LazyFollow_PositionFollowMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_minDistanceAllowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_minDistanceAllowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_minDistanceAllowed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_minDistanceAllowed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_maxDistanceAllowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_maxDistanceAllowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_maxDistanceAllowed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_maxDistanceAllowed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_timeUntilThresholdReachesMaxDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_timeUntilThresholdReachesMaxDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_timeUntilThresholdReachesMaxDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_timeUntilThresholdReachesMaxDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::LazyFollow_RotationFollowMode UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_rotationFollowMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_rotationFollowMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LazyFollow_RotationFollowMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_rotationFollowMode(::GlobalNamespace::LazyFollow_RotationFollowMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_rotationFollowMode", {}, {::i2c::type_of<::GlobalNamespace::LazyFollow_RotationFollowMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_minAngleAllowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_minAngleAllowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_minAngleAllowed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_minAngleAllowed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_maxAngleAllowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_maxAngleAllowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_maxAngleAllowed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_maxAngleAllowed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::get_timeUntilThresholdReachesMaxAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"get_timeUntilThresholdReachesMaxAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::set_timeUntilThresholdReachesMaxAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"set_timeUntilThresholdReachesMaxAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::UpdatePosition(::Unity::Mathematics::float3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"UpdatePosition", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::UpdateRotation(::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"UpdateRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rotation);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::TryGetThresholdTargetPosition(::by_ref<::UnityEngine::Vector3>  newTarget)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newTarget);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::TryGetThresholdTargetRotation(::by_ref<::UnityEngine::Quaternion>  newTarget)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newTarget);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::ValidateFollowMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"ValidateFollowMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::UpdateUpperAndLowerSpeedBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {"UpdateUpperAndLowerSpeedBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow* UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow::LazyFollow()   {
}
