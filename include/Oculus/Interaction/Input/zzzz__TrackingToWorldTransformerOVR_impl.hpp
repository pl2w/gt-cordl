#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/TrackingToWorldTransformerOVR.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__TrackingToWorldTransformerOVR_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IOVRCameraRigRef_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ITrackingToWorldTransformer_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::TrackingToWorldTransformerOVR.get_CameraRigRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IOVRCameraRigRef* (::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::*)()>(&::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::get_CameraRigRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa421488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {"get_CameraRigRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::TrackingToWorldTransformerOVR.set_CameraRigRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::*)(::Oculus::Interaction::Input::IOVRCameraRigRef*)>(&::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::set_CameraRigRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa421490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {"set_CameraRigRef", {}, {::i2c::type_of<::Oculus::Interaction::Input::IOVRCameraRigRef*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::TrackingToWorldTransformerOVR.get_Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::*)()>(&::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::get_Transform)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa421498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {"get_Transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::TrackingToWorldTransformerOVR.ToWorldPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::ToWorldPose)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa421544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {"ToWorldPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::TrackingToWorldTransformerOVR.ToTrackingPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::ToTrackingPose)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa42161c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {"ToTrackingPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::TrackingToWorldTransformerOVR.get_WorldToTrackingWristJointFixup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::*)()>(&::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::get_WorldToTrackingWristJointFixup)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa42172c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {"get_WorldToTrackingWristJointFixup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::TrackingToWorldTransformerOVR.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::*)()>(&::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4217b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::TrackingToWorldTransformerOVR.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::*)()>(&::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa421810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::TrackingToWorldTransformerOVR.InjectAllTrackingToWorldTransformerOVR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::*)(::Oculus::Interaction::Input::IOVRCameraRigRef*)>(&::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::InjectAllTrackingToWorldTransformerOVR)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa421814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {"InjectAllTrackingToWorldTransformerOVR", {}, {::i2c::type_of<::Oculus::Interaction::Input::IOVRCameraRigRef*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::TrackingToWorldTransformerOVR.InjectCameraRigRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::*)(::Oculus::Interaction::Input::IOVRCameraRigRef*)>(&::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::InjectCameraRigRef)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa421818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {"InjectCameraRigRef", {}, {::i2c::type_of<::Oculus::Interaction::Input::IOVRCameraRigRef*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::TrackingToWorldTransformerOVR._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::*)()>(&::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4218e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::TrackingToWorldTransformerOVR.Oculus_Interaction_Input_ITrackingToWorldTransformer_ToTrackingPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::Oculus_Interaction_Input_ITrackingToWorldTransformer_ToTrackingPose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4218f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {"Oculus.Interaction.Input.ITrackingToWorldTransformer.ToTrackingPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::TrackingToWorldTransformerOVR::__cordl_internal_get__cameraRigRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRigRef;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::TrackingToWorldTransformerOVR::__cordl_internal_get__cameraRigRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRigRef;
}
constexpr void Oculus::Interaction::Input::TrackingToWorldTransformerOVR::__cordl_internal_set__cameraRigRef(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraRigRef = value;
}
constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef*& Oculus::Interaction::Input::TrackingToWorldTransformerOVR::__cordl_internal_get__CameraRigRef_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraRigRef_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef* const& Oculus::Interaction::Input::TrackingToWorldTransformerOVR::__cordl_internal_get__CameraRigRef_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraRigRef_k__BackingField;
}
constexpr void Oculus::Interaction::Input::TrackingToWorldTransformerOVR::__cordl_internal_set__CameraRigRef_k__BackingField(::Oculus::Interaction::Input::IOVRCameraRigRef*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraRigRef_k__BackingField = value;
}
inline ::Oculus::Interaction::Input::IOVRCameraRigRef* Oculus::Interaction::Input::TrackingToWorldTransformerOVR::get_CameraRigRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {"get_CameraRigRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IOVRCameraRigRef*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::TrackingToWorldTransformerOVR::set_CameraRigRef(::Oculus::Interaction::Input::IOVRCameraRigRef*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {"set_CameraRigRef", {}, {::i2c::type_of<::Oculus::Interaction::Input::IOVRCameraRigRef*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Input::TrackingToWorldTransformerOVR::get_Transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {"get_Transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::TrackingToWorldTransformerOVR::ToWorldPose(::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {"ToWorldPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, pose);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::TrackingToWorldTransformerOVR::ToTrackingPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  worldPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {"ToTrackingPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, worldPose);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::Input::TrackingToWorldTransformerOVR::get_WorldToTrackingWristJointFixup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {"get_WorldToTrackingWristJointFixup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::TrackingToWorldTransformerOVR::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::TrackingToWorldTransformerOVR::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::TrackingToWorldTransformerOVR::InjectAllTrackingToWorldTransformerOVR(::Oculus::Interaction::Input::IOVRCameraRigRef*  cameraRigRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {"InjectAllTrackingToWorldTransformerOVR", {}, {::i2c::type_of<::Oculus::Interaction::Input::IOVRCameraRigRef*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraRigRef);
}
inline void Oculus::Interaction::Input::TrackingToWorldTransformerOVR::InjectCameraRigRef(::Oculus::Interaction::Input::IOVRCameraRigRef*  cameraRigRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {"InjectCameraRigRef", {}, {::i2c::type_of<::Oculus::Interaction::Input::IOVRCameraRigRef*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraRigRef);
}
inline void Oculus::Interaction::Input::TrackingToWorldTransformerOVR::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::TrackingToWorldTransformerOVR::Oculus_Interaction_Input_ITrackingToWorldTransformer_ToTrackingPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  worldPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>(),
                        {"Oculus.Interaction.Input.ITrackingToWorldTransformer.ToTrackingPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, worldPose);
}
inline ::Oculus::Interaction::Input::TrackingToWorldTransformerOVR* Oculus::Interaction::Input::TrackingToWorldTransformerOVR::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::ITrackingToWorldTransformer"
constexpr  Oculus::Interaction::Input::TrackingToWorldTransformerOVR::operator ::Oculus::Interaction::Input::ITrackingToWorldTransformer*() noexcept {
return static_cast<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::ITrackingToWorldTransformer"
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* Oculus::Interaction::Input::TrackingToWorldTransformerOVR::i___Oculus__Interaction__Input__ITrackingToWorldTransformer() noexcept {
return static_cast<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::TrackingToWorldTransformerOVR::TrackingToWorldTransformerOVR()   {
}
