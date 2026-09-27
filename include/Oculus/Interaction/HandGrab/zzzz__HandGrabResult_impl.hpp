#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabResult.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabPoseScore_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabResult_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandPose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabResult::*)()>(&::Oculus::Interaction::HandGrab::HandGrabResult::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa4dca98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabResult.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabResult::*)(::Oculus::Interaction::HandGrab::HandGrabResult*)>(&::Oculus::Interaction::HandGrab::HandGrabResult::CopyFrom)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa4e215c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabResult*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::HandGrab::HandGrabResult::__cordl_internal_get_HasHandPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasHandPose;
}
constexpr bool const& Oculus::Interaction::HandGrab::HandGrabResult::__cordl_internal_get_HasHandPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasHandPose;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabResult::__cordl_internal_set_HasHandPose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HasHandPose = value;
}
constexpr ::Oculus::Interaction::HandGrab::HandPose*& Oculus::Interaction::HandGrab::HandGrabResult::__cordl_internal_get_HandPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandPose;
}
constexpr ::Oculus::Interaction::HandGrab::HandPose* const& Oculus::Interaction::HandGrab::HandGrabResult::__cordl_internal_get_HandPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandPose;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabResult::__cordl_internal_set_HandPose(::Oculus::Interaction::HandGrab::HandPose*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandPose = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::HandGrab::HandGrabResult::__cordl_internal_get_RelativePose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RelativePose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::HandGrab::HandGrabResult::__cordl_internal_get_RelativePose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RelativePose;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabResult::__cordl_internal_set_RelativePose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RelativePose = value;
}
constexpr ::Oculus::Interaction::Grab::GrabPoseScore& Oculus::Interaction::HandGrab::HandGrabResult::__cordl_internal_get_Score()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Score;
}
constexpr ::Oculus::Interaction::Grab::GrabPoseScore const& Oculus::Interaction::HandGrab::HandGrabResult::__cordl_internal_get_Score() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Score;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabResult::__cordl_internal_set_Score(::Oculus::Interaction::Grab::GrabPoseScore  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Score = value;
}
inline void Oculus::Interaction::HandGrab::HandGrabResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabResult::CopyFrom(::Oculus::Interaction::HandGrab::HandGrabResult*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabResult*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::Oculus::Interaction::HandGrab::HandGrabResult* Oculus::Interaction::HandGrab::HandGrabResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::HandGrabResult*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::HandGrabResult::HandGrabResult()   {
}
