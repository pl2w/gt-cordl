#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandMirroring.hpp"
#include "Oculus/Interaction/Input/zzzz__HandMirroring_HandSpace_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandMirroring_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandMirroring_HandSpace_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandMirroring_HandsSpace_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::HandMirroring.Mirror
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose)>(&::Oculus::Interaction::Input::HandMirroring::Mirror)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa50f084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandMirroring*>(),
                        {"Mirror", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandMirroring.Mirror
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::Input::HandMirroring::Mirror)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa50f110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandMirroring*>(),
                        {"Mirror", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandMirroring.Mirror
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::by_ref<::UnityEngine::Quaternion>)>(&::Oculus::Interaction::Input::HandMirroring::Mirror)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa50f170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandMirroring*>(),
                        {"Mirror", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandMirroring.Reflect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::by_ref<::UnityEngine::Quaternion>, ::UnityEngine::Vector3)>(&::Oculus::Interaction::Input::HandMirroring::Reflect)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa50f538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandMirroring*>(),
                        {"Reflect", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandMirroring.TransformPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::GlobalNamespace::HandMirroring_HandSpace>, ::by_ref<::GlobalNamespace::HandMirroring_HandSpace>)>(&::Oculus::Interaction::Input::HandMirroring::TransformPose)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa50f718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandMirroring*>(),
                        {"TransformPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandMirroring_HandSpace>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandMirroring_HandSpace>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandMirroring.TransformPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::GlobalNamespace::HandMirroring_HandSpace>, ::by_ref<::GlobalNamespace::HandMirroring_HandSpace>)>(&::Oculus::Interaction::Input::HandMirroring::TransformPosition)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa50f1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandMirroring*>(),
                        {"TransformPosition", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandMirroring_HandSpace>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandMirroring_HandSpace>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandMirroring.TransformRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::GlobalNamespace::HandMirroring_HandSpace>, ::by_ref<::GlobalNamespace::HandMirroring_HandSpace>)>(&::Oculus::Interaction::Input::HandMirroring::TransformRotation)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0xa50f274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandMirroring*>(),
                        {"TransformRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandMirroring_HandSpace>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandMirroring_HandSpace>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Input::HandMirroring::setStaticF_LeftHandSpace(::GlobalNamespace::HandMirroring_HandSpace  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::HandMirroring_HandSpace, "LeftHandSpace", ::Oculus::Interaction::Input::HandMirroring*>(std::forward<::GlobalNamespace::HandMirroring_HandSpace>(value));
}
inline ::GlobalNamespace::HandMirroring_HandSpace Oculus::Interaction::Input::HandMirroring::getStaticF_LeftHandSpace()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::HandMirroring_HandSpace, "LeftHandSpace", ::Oculus::Interaction::Input::HandMirroring*>();
}
inline void Oculus::Interaction::Input::HandMirroring::setStaticF_RightHandSpace(::GlobalNamespace::HandMirroring_HandSpace  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::HandMirroring_HandSpace, "RightHandSpace", ::Oculus::Interaction::Input::HandMirroring*>(std::forward<::GlobalNamespace::HandMirroring_HandSpace>(value));
}
inline ::GlobalNamespace::HandMirroring_HandSpace Oculus::Interaction::Input::HandMirroring::getStaticF_RightHandSpace()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::HandMirroring_HandSpace, "RightHandSpace", ::Oculus::Interaction::Input::HandMirroring*>();
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::HandMirroring::Mirror(::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandMirroring*>(),
                        {"Mirror", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, pose);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Input::HandMirroring::Mirror(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandMirroring*>(),
                        {"Mirror", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, position);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::Input::HandMirroring::Mirror(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandMirroring*>(),
                        {"Mirror", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, rotation);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::Input::HandMirroring::Reflect(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  rotation, ::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandMirroring*>(),
                        {"Reflect", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, rotation, normal);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::HandMirroring::TransformPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  pose, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::HandMirroring_HandSpace>  fromHand, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::HandMirroring_HandSpace>  toHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandMirroring*>(),
                        {"TransformPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandMirroring_HandSpace>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandMirroring_HandSpace>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, pose, fromHand, toHand);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Input::HandMirroring::TransformPosition(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  position, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::HandMirroring_HandSpace>  fromHand, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::HandMirroring_HandSpace>  toHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandMirroring*>(),
                        {"TransformPosition", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandMirroring_HandSpace>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandMirroring_HandSpace>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, position, fromHand, toHand);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::Input::HandMirroring::TransformRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  rotation, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::HandMirroring_HandSpace>  fromHand, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::HandMirroring_HandSpace>  toHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandMirroring*>(),
                        {"TransformRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandMirroring_HandSpace>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandMirroring_HandSpace>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, rotation, fromHand, toHand);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HandMirroring::HandMirroring()   {
}
