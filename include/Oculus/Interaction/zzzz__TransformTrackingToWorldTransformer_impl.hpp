#pragma once
// IWYU pragma private; include "Oculus/Interaction/TransformTrackingToWorldTransformer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Oculus/Interaction/zzzz__TransformTrackingToWorldTransformer_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ITrackingToWorldTransformer_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::TransformTrackingToWorldTransformer.get_Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::TransformTrackingToWorldTransformer::*)()>(&::Oculus::Interaction::TransformTrackingToWorldTransformer::get_Transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4089f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformTrackingToWorldTransformer*>(),
                        {"get_Transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformTrackingToWorldTransformer.ToWorldPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::TransformTrackingToWorldTransformer::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::TransformTrackingToWorldTransformer::ToWorldPose)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa4089f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformTrackingToWorldTransformer*>(),
                        {"ToWorldPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformTrackingToWorldTransformer.ToTrackingPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::TransformTrackingToWorldTransformer::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::TransformTrackingToWorldTransformer::ToTrackingPose)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa408ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformTrackingToWorldTransformer*>(),
                        {"ToTrackingPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformTrackingToWorldTransformer.get_WorldToTrackingWristJointFixup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::TransformTrackingToWorldTransformer::*)()>(&::Oculus::Interaction::TransformTrackingToWorldTransformer::get_WorldToTrackingWristJointFixup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa408be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformTrackingToWorldTransformer*>(),
                        {"get_WorldToTrackingWristJointFixup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformTrackingToWorldTransformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TransformTrackingToWorldTransformer::*)()>(&::Oculus::Interaction::TransformTrackingToWorldTransformer::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa408bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformTrackingToWorldTransformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformTrackingToWorldTransformer.Oculus_Interaction_Input_ITrackingToWorldTransformer_ToTrackingPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::TransformTrackingToWorldTransformer::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::TransformTrackingToWorldTransformer::Oculus_Interaction_Input_ITrackingToWorldTransformer_ToTrackingPose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa408c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformTrackingToWorldTransformer*>(),
                        {"Oculus.Interaction.Input.ITrackingToWorldTransformer.ToTrackingPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::TransformTrackingToWorldTransformer::__cordl_internal_get_TrackingSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackingSpace;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::TransformTrackingToWorldTransformer::__cordl_internal_get_TrackingSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackingSpace;
}
constexpr void Oculus::Interaction::TransformTrackingToWorldTransformer::__cordl_internal_set_TrackingSpace(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackingSpace = value;
}
constexpr ::UnityEngine::Quaternion& Oculus::Interaction::TransformTrackingToWorldTransformer::__cordl_internal_get__WorldToTrackingWristJointFixup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WorldToTrackingWristJointFixup_k__BackingField;
}
constexpr ::UnityEngine::Quaternion const& Oculus::Interaction::TransformTrackingToWorldTransformer::__cordl_internal_get__WorldToTrackingWristJointFixup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WorldToTrackingWristJointFixup_k__BackingField;
}
constexpr void Oculus::Interaction::TransformTrackingToWorldTransformer::__cordl_internal_set__WorldToTrackingWristJointFixup_k__BackingField(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WorldToTrackingWristJointFixup_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::TransformTrackingToWorldTransformer::get_Transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformTrackingToWorldTransformer*>(),
                        {"get_Transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::TransformTrackingToWorldTransformer::ToWorldPose(::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformTrackingToWorldTransformer*>(),
                        {"ToWorldPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, pose);
}
inline ::UnityEngine::Pose Oculus::Interaction::TransformTrackingToWorldTransformer::ToTrackingPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  worldPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformTrackingToWorldTransformer*>(),
                        {"ToTrackingPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, worldPose);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::TransformTrackingToWorldTransformer::get_WorldToTrackingWristJointFixup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformTrackingToWorldTransformer*>(),
                        {"get_WorldToTrackingWristJointFixup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Oculus::Interaction::TransformTrackingToWorldTransformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformTrackingToWorldTransformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::TransformTrackingToWorldTransformer::Oculus_Interaction_Input_ITrackingToWorldTransformer_ToTrackingPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  worldPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformTrackingToWorldTransformer*>(),
                        {"Oculus.Interaction.Input.ITrackingToWorldTransformer.ToTrackingPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, worldPose);
}
inline ::Oculus::Interaction::TransformTrackingToWorldTransformer* Oculus::Interaction::TransformTrackingToWorldTransformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TransformTrackingToWorldTransformer*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::ITrackingToWorldTransformer"
constexpr  Oculus::Interaction::TransformTrackingToWorldTransformer::operator ::Oculus::Interaction::Input::ITrackingToWorldTransformer*() noexcept {
return static_cast<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::ITrackingToWorldTransformer"
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* Oculus::Interaction::TransformTrackingToWorldTransformer::i___Oculus__Interaction__Input__ITrackingToWorldTransformer() noexcept {
return static_cast<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TransformTrackingToWorldTransformer::TransformTrackingToWorldTransformer()   {
}
