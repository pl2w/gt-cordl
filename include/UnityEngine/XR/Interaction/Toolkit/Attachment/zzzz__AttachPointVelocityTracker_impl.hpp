#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Attachment/AttachPointVelocityTracker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__AttachPointVelocityTracker_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__IAttachPointVelocityProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__IAttachPointVelocityTracker_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Collections/zzzz__CircularBuffer_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker.UpdateAttachPointVelocityData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::UpdateAttachPointVelocityData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4ad330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*>(),
                        {"UpdateAttachPointVelocityData", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker.UpdateAttachPointVelocityData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::UpdateAttachPointVelocityData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4ad67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*>(),
                        {"UpdateAttachPointVelocityData", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker.UpdateAttachPointVelocityData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::*)(::UnityEngine::Transform*, bool, ::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::UpdateAttachPointVelocityData)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0xb4ad33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*>(),
                        {"UpdateAttachPointVelocityData", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker.CalculateVelocityWithWeightedLinearRegression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::CalculateVelocityWithWeightedLinearRegression)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0xb4ad688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*>(),
                        {"CalculateVelocityWithWeightedLinearRegression", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker.CalculateAngularVelocityWithWeightedRegression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::CalculateAngularVelocityWithWeightedRegression)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0xb4ada10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*>(),
                        {"CalculateAngularVelocityWithWeightedRegression", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker.ResetVelocityTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::ResetVelocityTracking)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb4ade2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*>(),
                        {"ResetVelocityTracking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker.GetAttachPointVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::GetAttachPointVelocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4adef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*>(),
                        {"GetAttachPointVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker.GetAttachPointAngularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::GetAttachPointAngularVelocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4adf04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*>(),
                        {"GetAttachPointAngularVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb4adf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*& UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::__cordl_internal_get_m_PositionTimeBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionTimeBuffer;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>* const& UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::__cordl_internal_get_m_PositionTimeBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionTimeBuffer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::__cordl_internal_set_m_PositionTimeBuffer(::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PositionTimeBuffer = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<::System::ValueTuple_2<::UnityEngine::Quaternion,float_t>>*& UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::__cordl_internal_get_m_RotationTimeBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotationTimeBuffer;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<::System::ValueTuple_2<::UnityEngine::Quaternion,float_t>>* const& UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::__cordl_internal_get_m_RotationTimeBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotationTimeBuffer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::__cordl_internal_set_m_RotationTimeBuffer(::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<::System::ValueTuple_2<::UnityEngine::Quaternion,float_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotationTimeBuffer = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::__cordl_internal_get_m_AttachPointVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttachPointVelocity;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::__cordl_internal_get_m_AttachPointVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttachPointVelocity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::__cordl_internal_set_m_AttachPointVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AttachPointVelocity = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::__cordl_internal_get_m_AttachPointAngularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttachPointAngularVelocity;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::__cordl_internal_get_m_AttachPointAngularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttachPointAngularVelocity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::__cordl_internal_set_m_AttachPointAngularVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AttachPointAngularVelocity = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::UpdateAttachPointVelocityData(::UnityEngine::Transform*  attachTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*>(),
                        {"UpdateAttachPointVelocityData", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attachTransform);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::UpdateAttachPointVelocityData(::UnityEngine::Transform*  attachTransform, ::UnityEngine::Transform*  xrOriginTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*>(),
                        {"UpdateAttachPointVelocityData", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attachTransform, xrOriginTransform);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::UpdateAttachPointVelocityData(::UnityEngine::Transform*  attachTransform, bool  useXROriginTransform, ::UnityEngine::Transform*  xrOriginTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*>(),
                        {"UpdateAttachPointVelocityData", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attachTransform, useXROriginTransform, xrOriginTransform);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::CalculateVelocityWithWeightedLinearRegression()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*>(),
                        {"CalculateVelocityWithWeightedLinearRegression", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::CalculateAngularVelocityWithWeightedRegression()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*>(),
                        {"CalculateAngularVelocityWithWeightedRegression", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::ResetVelocityTracking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*>(),
                        {"ResetVelocityTracking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::GetAttachPointVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*>(),
                        {"GetAttachPointVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::GetAttachPointAngularVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*>(),
                        {"GetAttachPointAngularVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker* UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker"
constexpr  UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::operator ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker* UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::i___UnityEngine__XR__Interaction__Toolkit__Attachment__IAttachPointVelocityTracker() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider"
constexpr  UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::operator ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider* UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::i___UnityEngine__XR__Interaction__Toolkit__Attachment__IAttachPointVelocityProvider() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker::AttachPointVelocityTracker()   {
}
