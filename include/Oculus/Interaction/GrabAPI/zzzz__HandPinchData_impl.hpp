#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/HandPinchData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__HandPinchData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandPinchData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::HandPinchData::*)()>(&::Oculus::Interaction::GrabAPI::HandPinchData::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa4fca04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandPinchData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandPinchData.SetJoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::HandPinchData::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*)>(&::Oculus::Interaction::GrabAPI::HandPinchData::SetJoints)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa4fca68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandPinchData*>(),
                        {"SetJoints", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandPinchData.SetJoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::HandPinchData::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*)>(&::Oculus::Interaction::GrabAPI::HandPinchData::SetJoints)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa4fcb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandPinchData*>(),
                        {"SetJoints", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& Oculus::Interaction::GrabAPI::HandPinchData::__cordl_internal_get__jointPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointPositions;
}
constexpr ::ArrayW<float_t> const& Oculus::Interaction::GrabAPI::HandPinchData::__cordl_internal_get__jointPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointPositions;
}
constexpr void Oculus::Interaction::GrabAPI::HandPinchData::__cordl_internal_set__jointPositions(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointPositions = value;
}
inline void Oculus::Interaction::GrabAPI::HandPinchData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandPinchData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::HandPinchData::SetJoints(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*  poses)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandPinchData*>(),
                        {"SetJoints", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poses);
}
inline void Oculus::Interaction::GrabAPI::HandPinchData::SetJoints(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandPinchData*>(),
                        {"SetJoints", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positions);
}
inline ::Oculus::Interaction::GrabAPI::HandPinchData* Oculus::Interaction::GrabAPI::HandPinchData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabAPI::HandPinchData*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabAPI::HandPinchData::HandPinchData()   {
}
