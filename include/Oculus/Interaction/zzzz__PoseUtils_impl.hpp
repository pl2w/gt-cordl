#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__PoseUtils_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Space_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.SetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::by_ref<::UnityEngine::Pose>, ::UnityEngine::Space)>(&::Oculus::Interaction::PoseUtils::SetPose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa47a654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"SetPose", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.GetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Transform*, ::UnityEngine::Space)>(&::Oculus::Interaction::PoseUtils::GetPose)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa477d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"GetPose", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::PoseUtils::Multiply)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa474ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Multiply", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::PoseUtils::Multiply)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa48c084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Multiply", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.Premultiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::PoseUtils::Premultiply)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48c0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Premultiply", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.Postmultiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::PoseUtils::Postmultiply)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa47a644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Postmultiply", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, float_t)>(&::Oculus::Interaction::PoseUtils::Lerp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47e130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Lerp", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, float_t, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::PoseUtils::Lerp)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa48c0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Lerp", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.Inverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::PoseUtils::Inverse)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa48c138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Inverse", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.Invert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::PoseUtils::Invert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48c190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Invert", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::PoseUtils::CopyFrom)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa48c198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.Delta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::Oculus::Interaction::PoseUtils::Delta)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa48c1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Delta", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.Delta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Transform*, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::PoseUtils::Delta)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa48c2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Delta", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.Delta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::PoseUtils::Delta)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa48c3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Delta", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.Delta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::PoseUtils::Delta)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa474c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Delta", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.Delta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Oculus::Interaction::PoseUtils::Delta)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa48c2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Delta", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.Delta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::PoseUtils::Delta)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa48c484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Delta", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.DeltaScaled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::Oculus::Interaction::PoseUtils::DeltaScaled)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa48c5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"DeltaScaled", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.DeltaScaled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Transform*, ::UnityEngine::Pose)>(&::Oculus::Interaction::PoseUtils::DeltaScaled)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa48c6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"DeltaScaled", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.GlobalPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Transform*, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::PoseUtils::GlobalPose)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa48c7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"GlobalPose", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.GlobalPoseScaled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Transform*, ::UnityEngine::Pose)>(&::Oculus::Interaction::PoseUtils::GlobalPoseScaled)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa48c8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"GlobalPoseScaled", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseUtils.MirrorPoseRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Oculus::Interaction::PoseUtils::MirrorPoseRotation)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0xa48c9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"MirrorPoseRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::PoseUtils::SetPose(::UnityEngine::Transform*  transform, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  pose, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"SetPose", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, pose, space);
}
inline ::UnityEngine::Pose Oculus::Interaction::PoseUtils::GetPose(::UnityEngine::Transform*  transform, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"GetPose", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, transform, space);
}
inline void Oculus::Interaction::PoseUtils::Multiply(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  b, ::by_ref<::UnityEngine::Pose>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Multiply", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b, result);
}
inline ::UnityEngine::Pose Oculus::Interaction::PoseUtils::Multiply(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Multiply", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, a, b);
}
inline void Oculus::Interaction::PoseUtils::Premultiply(::by_ref<::UnityEngine::Pose>  a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Premultiply", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
inline void Oculus::Interaction::PoseUtils::Postmultiply(::by_ref<::UnityEngine::Pose>  a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Postmultiply", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
inline void Oculus::Interaction::PoseUtils::Lerp(::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Lerp", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, t);
}
inline void Oculus::Interaction::PoseUtils::Lerp(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to, float_t  t, ::by_ref<::UnityEngine::Pose>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Lerp", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, t, result);
}
inline void Oculus::Interaction::PoseUtils::Inverse(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  a, ::by_ref<::UnityEngine::Pose>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Inverse", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, result);
}
inline void Oculus::Interaction::PoseUtils::Invert(::by_ref<::UnityEngine::Pose>  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Invert", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a);
}
inline void Oculus::Interaction::PoseUtils::CopyFrom(::by_ref<::UnityEngine::Pose>  to, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, to, from);
}
inline ::UnityEngine::Pose Oculus::Interaction::PoseUtils::Delta(::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Delta", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, from, to);
}
inline ::UnityEngine::Pose Oculus::Interaction::PoseUtils::Delta(::UnityEngine::Transform*  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Delta", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, from, to);
}
inline void Oculus::Interaction::PoseUtils::Delta(::UnityEngine::Transform*  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to, ::by_ref<::UnityEngine::Pose>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Delta", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, result);
}
inline ::UnityEngine::Pose Oculus::Interaction::PoseUtils::Delta(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Delta", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, from, to);
}
inline ::UnityEngine::Pose Oculus::Interaction::PoseUtils::Delta(::UnityEngine::Vector3  fromPosition, ::UnityEngine::Quaternion  fromRotation, ::UnityEngine::Vector3  toPosition, ::UnityEngine::Quaternion  toRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Delta", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, fromPosition, fromRotation, toPosition, toRotation);
}
inline void Oculus::Interaction::PoseUtils::Delta(::UnityEngine::Vector3  fromPosition, ::UnityEngine::Quaternion  fromRotation, ::UnityEngine::Vector3  toPosition, ::UnityEngine::Quaternion  toRotation, ::by_ref<::UnityEngine::Pose>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"Delta", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fromPosition, fromRotation, toPosition, toRotation, result);
}
inline ::UnityEngine::Pose Oculus::Interaction::PoseUtils::DeltaScaled(::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"DeltaScaled", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, from, to);
}
inline ::UnityEngine::Pose Oculus::Interaction::PoseUtils::DeltaScaled(::UnityEngine::Transform*  from, ::UnityEngine::Pose  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"DeltaScaled", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, from, to);
}
inline ::UnityEngine::Pose Oculus::Interaction::PoseUtils::GlobalPose(::UnityEngine::Transform*  reference, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"GlobalPose", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, reference, offset);
}
inline ::UnityEngine::Pose Oculus::Interaction::PoseUtils::GlobalPoseScaled(::UnityEngine::Transform*  relativeTo, ::UnityEngine::Pose  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"GlobalPoseScaled", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, relativeTo, offset);
}
inline ::UnityEngine::Pose Oculus::Interaction::PoseUtils::MirrorPoseRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  pose, ::UnityEngine::Vector3  normal, ::UnityEngine::Vector3  tangent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseUtils*>(),
                        {"MirrorPoseRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, pose, normal, tangent);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseUtils::PoseUtils()   {
}
