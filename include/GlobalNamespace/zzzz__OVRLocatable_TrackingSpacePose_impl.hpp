#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRLocatable_TrackingSpacePose.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceLocationFlags_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRLocatable_TrackingSpacePose_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceLocationFlags_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TrackingSpacePose.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Vector3> (::GlobalNamespace::OVRLocatable_TrackingSpacePose::*)()>(&::GlobalNamespace::OVRLocatable_TrackingSpacePose::get_Position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa5750f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TrackingSpacePose.get_Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Quaternion> (::GlobalNamespace::OVRLocatable_TrackingSpacePose::*)()>(&::GlobalNamespace::OVRLocatable_TrackingSpacePose::get_Rotation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa5750fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
                        {"get_Rotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TrackingSpacePose.get_IsPositionTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRLocatable_TrackingSpacePose::*)()>(&::GlobalNamespace::OVRLocatable_TrackingSpacePose::get_IsPositionTracked)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa575110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
                        {"get_IsPositionTracked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TrackingSpacePose.get_IsRotationTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRLocatable_TrackingSpacePose::*)()>(&::GlobalNamespace::OVRLocatable_TrackingSpacePose::get_IsRotationTracked)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa57516c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
                        {"get_IsRotationTracked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TrackingSpacePose._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRLocatable_TrackingSpacePose::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::GlobalNamespace::OVRPlugin_SpaceLocationFlags)>(&::GlobalNamespace::OVRLocatable_TrackingSpacePose::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa573e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceLocationFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TrackingSpacePose.ComputeWorldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Vector3> (::GlobalNamespace::OVRLocatable_TrackingSpacePose::*)(::UnityEngine::Camera*)>(&::GlobalNamespace::OVRLocatable_TrackingSpacePose::ComputeWorldPosition)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xa5751c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
                        {"ComputeWorldPosition", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TrackingSpacePose.ComputeWorldRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Quaternion> (::GlobalNamespace::OVRLocatable_TrackingSpacePose::*)(::UnityEngine::Camera*)>(&::GlobalNamespace::OVRLocatable_TrackingSpacePose::ComputeWorldRotation)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0xa575a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
                        {"ComputeWorldRotation", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TrackingSpacePose.ComputeWorldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Vector3> (::GlobalNamespace::OVRLocatable_TrackingSpacePose::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::OVRLocatable_TrackingSpacePose::ComputeWorldPosition)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa575d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
                        {"ComputeWorldPosition", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TrackingSpacePose.ComputeWorldRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Quaternion> (::GlobalNamespace::OVRLocatable_TrackingSpacePose::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::OVRLocatable_TrackingSpacePose::ComputeWorldRotation)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xa575ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
                        {"ComputeWorldRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::UnityEngine::Vector3> GlobalNamespace::OVRLocatable_TrackingSpacePose::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Vector3>>(*this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::Quaternion> GlobalNamespace::OVRLocatable_TrackingSpacePose::get_Rotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
                        {"get_Rotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Quaternion>>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRLocatable_TrackingSpacePose::get_IsPositionTracked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
                        {"get_IsPositionTracked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRLocatable_TrackingSpacePose::get_IsRotationTracked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
                        {"get_IsRotationTracked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRLocatable_TrackingSpacePose::_ctor(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::GlobalNamespace::OVRPlugin_SpaceLocationFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceLocationFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, flags);
}
inline ::System::Nullable_1<::UnityEngine::Vector3> GlobalNamespace::OVRLocatable_TrackingSpacePose::ComputeWorldPosition(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
                        {"ComputeWorldPosition", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Vector3>>(*this, ___internal_method, camera);
}
inline ::System::Nullable_1<::UnityEngine::Quaternion> GlobalNamespace::OVRLocatable_TrackingSpacePose::ComputeWorldRotation(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
                        {"ComputeWorldRotation", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Quaternion>>(*this, ___internal_method, camera);
}
inline ::System::Nullable_1<::UnityEngine::Vector3> GlobalNamespace::OVRLocatable_TrackingSpacePose::ComputeWorldPosition(::UnityEngine::Transform*  trackingSpaceToWorldSpaceTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
                        {"ComputeWorldPosition", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Vector3>>(*this, ___internal_method, trackingSpaceToWorldSpaceTransform);
}
inline ::System::Nullable_1<::UnityEngine::Quaternion> GlobalNamespace::OVRLocatable_TrackingSpacePose::ComputeWorldRotation(::UnityEngine::Transform*  trackingSpaceToWorldSpaceTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
                        {"ComputeWorldRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Quaternion>>(*this, ___internal_method, trackingSpaceToWorldSpaceTransform);
}
// Ctor Parameters [CppParam { name: "_Position_k__BackingField", ty: "::System::Nullable_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Rotation_k__BackingField", ty: "::System::Nullable_1<::UnityEngine::Quaternion>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Flags", ty: "::GlobalNamespace::OVRPlugin_SpaceLocationFlags", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRLocatable_TrackingSpacePose::OVRLocatable_TrackingSpacePose(::System::Nullable_1<::UnityEngine::Vector3>  _Position_k__BackingField, ::System::Nullable_1<::UnityEngine::Quaternion>  _Rotation_k__BackingField, ::GlobalNamespace::OVRPlugin_SpaceLocationFlags  Flags) noexcept  {
this->_Position_k__BackingField = _Position_k__BackingField;
this->_Rotation_k__BackingField = _Rotation_k__BackingField;
this->Flags = Flags;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRLocatable_TrackingSpacePose::OVRLocatable_TrackingSpacePose()   {
}
