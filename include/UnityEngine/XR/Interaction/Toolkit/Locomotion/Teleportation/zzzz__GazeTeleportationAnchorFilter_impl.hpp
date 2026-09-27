#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/GazeTeleportationAnchorFilter.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__GazeTeleportationAnchorFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__ITeleportationVolumeAnchorFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportationMultiAnchorVolume_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter.get_maxGazeAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::get_maxGazeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44d660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"get_maxGazeAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter.set_maxGazeAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::set_maxGazeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44d668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"set_maxGazeAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter.get_gazeAngleScoreCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::get_gazeAngleScoreCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44d670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"get_gazeAngleScoreCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter.set_gazeAngleScoreCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::*)(::UnityEngine::AnimationCurve*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::set_gazeAngleScoreCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44d678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"set_gazeAngleScoreCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter.get_enableDistanceWeighting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::get_enableDistanceWeighting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44d680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"get_enableDistanceWeighting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter.set_enableDistanceWeighting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::set_enableDistanceWeighting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44d688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"set_enableDistanceWeighting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter.get_distanceWeightCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::get_distanceWeightCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44d690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"get_distanceWeightCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter.set_distanceWeightCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::*)(::UnityEngine::AnimationCurve*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::set_distanceWeightCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44d698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"set_distanceWeightCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::Reset)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0xb44d6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter.GetDestinationAnchorIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::GetDestinationAnchorIndex)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0xb44d95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"GetDestinationAnchorIndex", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb44dd94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::__cordl_internal_get_m_MaxGazeAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxGazeAngle;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::__cordl_internal_get_m_MaxGazeAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxGazeAngle;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::__cordl_internal_set_m_MaxGazeAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxGazeAngle = value;
}
constexpr ::UnityEngine::AnimationCurve*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::__cordl_internal_get_m_GazeAngleScoreCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GazeAngleScoreCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::__cordl_internal_get_m_GazeAngleScoreCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GazeAngleScoreCurve;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::__cordl_internal_set_m_GazeAngleScoreCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GazeAngleScoreCurve = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::__cordl_internal_get_m_EnableDistanceWeighting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableDistanceWeighting;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::__cordl_internal_get_m_EnableDistanceWeighting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableDistanceWeighting;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::__cordl_internal_set_m_EnableDistanceWeighting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableDistanceWeighting = value;
}
constexpr ::UnityEngine::AnimationCurve*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::__cordl_internal_get_m_DistanceWeightCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DistanceWeightCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::__cordl_internal_get_m_DistanceWeightCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DistanceWeightCurve;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::__cordl_internal_set_m_DistanceWeightCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DistanceWeightCurve = value;
}
constexpr ::ArrayW<float_t>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::__cordl_internal_get_m_AnchorWeights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnchorWeights;
}
constexpr ::ArrayW<float_t> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::__cordl_internal_get_m_AnchorWeights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnchorWeights;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::__cordl_internal_set_m_AnchorWeights(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AnchorWeights = value;
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::get_maxGazeAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"get_maxGazeAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::set_maxGazeAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"set_maxGazeAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::get_gazeAngleScoreCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"get_gazeAngleScoreCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::set_gazeAngleScoreCurve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"set_gazeAngleScoreCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::get_enableDistanceWeighting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"get_enableDistanceWeighting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::set_enableDistanceWeighting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"set_enableDistanceWeighting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::get_distanceWeightCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"get_distanceWeightCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::set_distanceWeightCurve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"set_distanceWeightCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::GetDestinationAnchorIndex(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*  teleportationVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {"GetDestinationAnchorIndex", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, teleportationVolume);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter"
constexpr  UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::operator ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::i___UnityEngine__XR__Interaction__Toolkit__Locomotion__Teleportation__ITeleportationVolumeAnchorFilter() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::GazeTeleportationAnchorFilter::GazeTeleportationAnchorFilter()   {
}
