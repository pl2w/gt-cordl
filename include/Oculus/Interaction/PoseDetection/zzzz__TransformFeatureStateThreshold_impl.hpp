#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureStateThreshold.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureStateThreshold_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFeatureStateThreshold_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a8314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::*)(float_t, float_t, ::StringW, ::StringW)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4a831c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold.get_ToFirstWhenBelow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::get_ToFirstWhenBelow)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4a8374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>(),
                        {"get_ToFirstWhenBelow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold.get_ToSecondWhenAbove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::get_ToSecondWhenAbove)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4a8388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>(),
                        {"get_ToSecondWhenAbove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold.get_FirstState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::get_FirstState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a839c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>(),
                        {"get_FirstState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold.get_SecondState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::get_SecondState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a83a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>(),
                        {"get_SecondState", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::__cordl_internal_get__thresholdMidpoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresholdMidpoint;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::__cordl_internal_get__thresholdMidpoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresholdMidpoint;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::__cordl_internal_set__thresholdMidpoint(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thresholdMidpoint = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::__cordl_internal_get__thresholdWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresholdWidth;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::__cordl_internal_get__thresholdWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresholdWidth;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::__cordl_internal_set__thresholdWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thresholdWidth = value;
}
constexpr ::StringW& Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::__cordl_internal_get__firstState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstState;
}
constexpr ::StringW const& Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::__cordl_internal_get__firstState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstState;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::__cordl_internal_set__firstState(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstState = value;
}
constexpr ::StringW& Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::__cordl_internal_get__secondState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondState;
}
constexpr ::StringW const& Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::__cordl_internal_get__secondState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondState;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::__cordl_internal_set__secondState(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____secondState = value;
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::_ctor(float_t  thresholdMidpoint, float_t  thresholdWidth, ::StringW  firstState, ::StringW  secondState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thresholdMidpoint, thresholdWidth, firstState, secondState);
}
inline float_t Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::get_ToFirstWhenBelow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>(),
                        {"get_ToFirstWhenBelow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::get_ToSecondWhenAbove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>(),
                        {"get_ToSecondWhenAbove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::StringW Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::get_FirstState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>(),
                        {"get_FirstState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::get_SecondState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>(),
                        {"get_SecondState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold* Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>());
}
inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold* Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::New_ctor(float_t  thresholdMidpoint, float_t  thresholdWidth, ::StringW  firstState, ::StringW  secondState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>(thresholdMidpoint, thresholdWidth, firstState, secondState));
}
/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>"
constexpr  Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::operator ::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>"
constexpr ::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>* Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::i___Oculus__Interaction__PoseDetection__IFeatureStateThreshold_1___StringW_() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold::TransformFeatureStateThreshold()   {
}
