#pragma once
// IWYU pragma private; include "GorillaTagScripts/SurfaceMover.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderMovingPart_BuilderMovingPartType_impl.hpp"
#include "GorillaTagScripts/zzzz__RotationAxis_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/zzzz__SurfaceMover_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__SurfaceMoverSettings_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::SurfaceMover.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SurfaceMover::*)()>(&::GorillaTagScripts::SurfaceMover::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b8225c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SurfaceMover.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SurfaceMover::*)()>(&::GorillaTagScripts::SurfaceMover::OnDestroy)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b822fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SurfaceMover.InitMovingSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SurfaceMover::*)()>(&::GorillaTagScripts::SurfaceMover::InitMovingSurface)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5b81bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"InitMovingSurface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SurfaceMover.NetworkTimeMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GorillaTagScripts::SurfaceMover::*)()>(&::GorillaTagScripts::SurfaceMover::NetworkTimeMs)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b823b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"NetworkTimeMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SurfaceMover.CycleLengthMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GorillaTagScripts::SurfaceMover::*)()>(&::GorillaTagScripts::SurfaceMover::CycleLengthMs)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b82460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"CycleLengthMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SurfaceMover.PlatformTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GorillaTagScripts::SurfaceMover::*)()>(&::GorillaTagScripts::SurfaceMover::PlatformTime)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b8248c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"PlatformTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SurfaceMover.CycleCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::SurfaceMover::*)()>(&::GorillaTagScripts::SurfaceMover::CycleCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b824e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"CycleCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SurfaceMover.CycleCompletionPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTagScripts::SurfaceMover::*)()>(&::GorillaTagScripts::SurfaceMover::CycleCompletionPercent)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b82520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"CycleCompletionPercent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SurfaceMover.IsEvenCycle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::SurfaceMover::*)()>(&::GorillaTagScripts::SurfaceMover::IsEvenCycle)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b82598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"IsEvenCycle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SurfaceMover.Move
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SurfaceMover::*)()>(&::GorillaTagScripts::SurfaceMover::Move)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b82100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"Move", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SurfaceMover.UpdatePointToPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTagScripts::SurfaceMover::*)(float_t)>(&::GorillaTagScripts::SurfaceMover::UpdatePointToPoint)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b82670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"UpdatePointToPoint", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SurfaceMover.UpdateRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SurfaceMover::*)(float_t)>(&::GorillaTagScripts::SurfaceMover::UpdateRotation)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5b82710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"UpdateRotation", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SurfaceMover.Progress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SurfaceMover::*)()>(&::GorillaTagScripts::SurfaceMover::Progress)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b825e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"Progress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SurfaceMover.CopySettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SurfaceMover::*)(::GT_CustomMapSupportRuntime::SurfaceMoverSettings*)>(&::GorillaTagScripts::SurfaceMover::CopySettings)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5b828e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"CopySettings", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::SurfaceMoverSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SurfaceMover._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SurfaceMover::*)()>(&::GorillaTagScripts::SurfaceMover::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b82af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BuilderMovingPart_BuilderMovingPartType& GorillaTagScripts::SurfaceMover::__cordl_internal_get_moveType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveType;
}
constexpr ::GlobalNamespace::BuilderMovingPart_BuilderMovingPartType const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_moveType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveType;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_moveType(::GlobalNamespace::BuilderMovingPart_BuilderMovingPartType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moveType = value;
}
constexpr float_t& GorillaTagScripts::SurfaceMover::__cordl_internal_get_startPercentage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPercentage;
}
constexpr float_t const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_startPercentage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPercentage;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_startPercentage(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPercentage = value;
}
constexpr float_t& GorillaTagScripts::SurfaceMover::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr float_t const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_velocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr bool& GorillaTagScripts::SurfaceMover::__cordl_internal_get_reverseDirOnCycle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseDirOnCycle;
}
constexpr bool const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_reverseDirOnCycle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseDirOnCycle;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_reverseDirOnCycle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseDirOnCycle = value;
}
constexpr bool& GorillaTagScripts::SurfaceMover::__cordl_internal_get_reverseDir()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseDir;
}
constexpr bool const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_reverseDir() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseDir;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_reverseDir(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseDir = value;
}
constexpr float_t& GorillaTagScripts::SurfaceMover::__cordl_internal_get_cycleDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cycleDelay;
}
constexpr float_t const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_cycleDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cycleDelay;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_cycleDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cycleDelay = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::SurfaceMover::__cordl_internal_get_startXf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startXf;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_startXf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startXf;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_startXf(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startXf = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::SurfaceMover::__cordl_internal_get_endXf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endXf;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_endXf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endXf;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_endXf(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endXf = value;
}
constexpr ::GorillaTagScripts::RotationAxis& GorillaTagScripts::SurfaceMover::__cordl_internal_get_rotationAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationAxis;
}
constexpr ::GorillaTagScripts::RotationAxis const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_rotationAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationAxis;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_rotationAxis(::GorillaTagScripts::RotationAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationAxis = value;
}
constexpr float_t& GorillaTagScripts::SurfaceMover::__cordl_internal_get_rotationAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationAmount;
}
constexpr float_t const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_rotationAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationAmount;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_rotationAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationAmount = value;
}
constexpr bool& GorillaTagScripts::SurfaceMover::__cordl_internal_get_rotationRelativeToStarting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationRelativeToStarting;
}
constexpr bool const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_rotationRelativeToStarting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationRelativeToStarting;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_rotationRelativeToStarting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationRelativeToStarting = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTagScripts::SurfaceMover::__cordl_internal_get_lerpAlpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpAlpha;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_lerpAlpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpAlpha;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_lerpAlpha(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpAlpha = value;
}
constexpr float_t& GorillaTagScripts::SurfaceMover::__cordl_internal_get_cycleDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cycleDuration;
}
constexpr float_t const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_cycleDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cycleDuration;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_cycleDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cycleDuration = value;
}
constexpr float_t& GorillaTagScripts::SurfaceMover::__cordl_internal_get_distance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distance;
}
constexpr float_t const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_distance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distance;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_distance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distance = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::SurfaceMover::__cordl_internal_get_startingRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingRotation;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_startingRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingRotation;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_startingRotation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingRotation = value;
}
constexpr float_t& GorillaTagScripts::SurfaceMover::__cordl_internal_get_currT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currT;
}
constexpr float_t const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_currT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currT;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_currT(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currT = value;
}
constexpr float_t& GorillaTagScripts::SurfaceMover::__cordl_internal_get_percent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___percent;
}
constexpr float_t const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_percent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___percent;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_percent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___percent = value;
}
constexpr bool& GorillaTagScripts::SurfaceMover::__cordl_internal_get_currForward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currForward;
}
constexpr bool const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_currForward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currForward;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_currForward(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currForward = value;
}
constexpr float_t& GorillaTagScripts::SurfaceMover::__cordl_internal_get_dtSinceServerUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dtSinceServerUpdate;
}
constexpr float_t const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_dtSinceServerUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dtSinceServerUpdate;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_dtSinceServerUpdate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dtSinceServerUpdate = value;
}
constexpr int32_t& GorillaTagScripts::SurfaceMover::__cordl_internal_get_lastServerTimeStamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastServerTimeStamp;
}
constexpr int32_t const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_lastServerTimeStamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastServerTimeStamp;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_lastServerTimeStamp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastServerTimeStamp = value;
}
constexpr float_t& GorillaTagScripts::SurfaceMover::__cordl_internal_get_rotateStartAmt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateStartAmt;
}
constexpr float_t const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_rotateStartAmt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateStartAmt;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_rotateStartAmt(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateStartAmt = value;
}
constexpr float_t& GorillaTagScripts::SurfaceMover::__cordl_internal_get_rotateAmt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateAmt;
}
constexpr float_t const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_rotateAmt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateAmt;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_rotateAmt(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateAmt = value;
}
constexpr uint32_t& GorillaTagScripts::SurfaceMover::__cordl_internal_get_startPercentageCycleOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPercentageCycleOffset;
}
constexpr uint32_t const& GorillaTagScripts::SurfaceMover::__cordl_internal_get_startPercentageCycleOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPercentageCycleOffset;
}
constexpr void GorillaTagScripts::SurfaceMover::__cordl_internal_set_startPercentageCycleOffset(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPercentageCycleOffset = value;
}
inline void GorillaTagScripts::SurfaceMover::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::SurfaceMover::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::SurfaceMover::InitMovingSurface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"InitMovingSurface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t GorillaTagScripts::SurfaceMover::NetworkTimeMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"NetworkTimeMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t GorillaTagScripts::SurfaceMover::CycleLengthMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"CycleLengthMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline double_t GorillaTagScripts::SurfaceMover::PlatformTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"PlatformTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::SurfaceMover::CycleCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"CycleCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t GorillaTagScripts::SurfaceMover::CycleCompletionPercent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"CycleCompletionPercent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GorillaTagScripts::SurfaceMover::IsEvenCycle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"IsEvenCycle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::SurfaceMover::Move()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"Move", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaTagScripts::SurfaceMover::UpdatePointToPoint(float_t  perc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"UpdatePointToPoint", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, perc);
}
inline void GorillaTagScripts::SurfaceMover::UpdateRotation(float_t  perc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"UpdateRotation", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, perc);
}
inline void GorillaTagScripts::SurfaceMover::Progress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"Progress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::SurfaceMover::CopySettings(::GT_CustomMapSupportRuntime::SurfaceMoverSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {"CopySettings", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::SurfaceMoverSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GorillaTagScripts::SurfaceMover::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SurfaceMover*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::SurfaceMover* GorillaTagScripts::SurfaceMover::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::SurfaceMover*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::SurfaceMover::SurfaceMover()   {
}
