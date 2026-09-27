#pragma once
// IWYU pragma private; include "Unity/Cinemachine/UnityVectorExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__UnityVectorExtensions_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::UnityVectorExtensions.IsNaN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2)>(&::Unity::Cinemachine::UnityVectorExtensions::IsNaN)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaebffb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"IsNaN", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityVectorExtensions.IsNaN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::UnityVectorExtensions::IsNaN)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaebffd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"IsNaN", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityVectorExtensions.ClosestPointOnSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::UnityVectorExtensions::ClosestPointOnSegment)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaec0018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"ClosestPointOnSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityVectorExtensions.ClosestPointOnSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Unity::Cinemachine::UnityVectorExtensions::ClosestPointOnSegment)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaec0098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"ClosestPointOnSegment", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityVectorExtensions.ProjectOntoPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::UnityVectorExtensions::ProjectOntoPlane)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaec00f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"ProjectOntoPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityVectorExtensions.SquareNormalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::Unity::Cinemachine::UnityVectorExtensions::SquareNormalize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaec0128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"SquareNormalize", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityVectorExtensions.FindIntersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>)>(&::Unity::Cinemachine::UnityVectorExtensions::FindIntersection)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xaec0194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"FindIntersection", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityVectorExtensions.Cross
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Unity::Cinemachine::UnityVectorExtensions::Cross)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaec0434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"Cross", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityVectorExtensions.Abs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::Unity::Cinemachine::UnityVectorExtensions::Abs)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaec0444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"Abs", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityVectorExtensions.Abs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::UnityVectorExtensions::Abs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaec0450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"Abs", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityVectorExtensions.IsUniform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2)>(&::Unity::Cinemachine::UnityVectorExtensions::IsUniform)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaec0460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"IsUniform", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityVectorExtensions.IsUniform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::UnityVectorExtensions::IsUniform)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xaec04d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"IsUniform", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityVectorExtensions.AlmostZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::UnityVectorExtensions::AlmostZero)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaebe5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"AlmostZero", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityVectorExtensions.ConservativeSetPositionAndRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::UnityVectorExtensions::ConservativeSetPositionAndRotation)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xaec0570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"ConservativeSetPositionAndRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityVectorExtensions.Angle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::UnityVectorExtensions::Angle)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0xaec0688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"Angle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityVectorExtensions.SignedAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::UnityVectorExtensions::SignedAngle)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xaec08c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"SignedAngle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityVectorExtensions.SafeFromToRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::UnityVectorExtensions::SafeFromToRotation)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0xaec0964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"SafeFromToRotation", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityVectorExtensions.SlerpWithReferenceUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::UnityVectorExtensions::SlerpWithReferenceUp)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0xaec0e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"SlerpWithReferenceUp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityVectorExtensions.NormalizeAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Unity::Cinemachine::UnityVectorExtensions::NormalizeAngle)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaec1510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"NormalizeAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Unity::Cinemachine::UnityVectorExtensions::IsNaN(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"IsNaN", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v);
}
inline bool Unity::Cinemachine::UnityVectorExtensions::IsNaN(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"IsNaN", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v);
}
inline float_t Unity::Cinemachine::UnityVectorExtensions::ClosestPointOnSegment(::UnityEngine::Vector3  p, ::UnityEngine::Vector3  s0, ::UnityEngine::Vector3  s1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"ClosestPointOnSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, p, s0, s1);
}
inline float_t Unity::Cinemachine::UnityVectorExtensions::ClosestPointOnSegment(::UnityEngine::Vector2  p, ::UnityEngine::Vector2  s0, ::UnityEngine::Vector2  s1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"ClosestPointOnSegment", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, p, s0, s1);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::UnityVectorExtensions::ProjectOntoPlane(::UnityEngine::Vector3  vector, ::UnityEngine::Vector3  planeNormal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"ProjectOntoPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vector, planeNormal);
}
inline ::UnityEngine::Vector2 Unity::Cinemachine::UnityVectorExtensions::SquareNormalize(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"SquareNormalize", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline int32_t Unity::Cinemachine::UnityVectorExtensions::FindIntersection(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2>  p1, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2>  p2, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2>  q1, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2>  q2, ::by_ref<::UnityEngine::Vector2>  intersection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"FindIntersection", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, p1, p2, q1, q2, intersection);
}
inline float_t Unity::Cinemachine::UnityVectorExtensions::Cross(::UnityEngine::Vector2  v1, ::UnityEngine::Vector2  v2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"Cross", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v1, v2);
}
inline ::UnityEngine::Vector2 Unity::Cinemachine::UnityVectorExtensions::Abs(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"Abs", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::UnityVectorExtensions::Abs(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"Abs", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline bool Unity::Cinemachine::UnityVectorExtensions::IsUniform(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"IsUniform", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v);
}
inline bool Unity::Cinemachine::UnityVectorExtensions::IsUniform(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"IsUniform", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v);
}
inline bool Unity::Cinemachine::UnityVectorExtensions::AlmostZero(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"AlmostZero", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v);
}
inline void Unity::Cinemachine::UnityVectorExtensions::ConservativeSetPositionAndRotation(::UnityEngine::Transform*  t, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"ConservativeSetPositionAndRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, pos, rot);
}
inline float_t Unity::Cinemachine::UnityVectorExtensions::Angle(::UnityEngine::Vector3  v1, ::UnityEngine::Vector3  v2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"Angle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v1, v2);
}
inline float_t Unity::Cinemachine::UnityVectorExtensions::SignedAngle(::UnityEngine::Vector3  v1, ::UnityEngine::Vector3  v2, ::UnityEngine::Vector3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"SignedAngle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v1, v2, up);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::UnityVectorExtensions::SafeFromToRotation(::UnityEngine::Vector3  v1, ::UnityEngine::Vector3  v2, ::UnityEngine::Vector3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"SafeFromToRotation", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, v1, v2, up);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::UnityVectorExtensions::SlerpWithReferenceUp(::UnityEngine::Vector3  vA, ::UnityEngine::Vector3  vB, float_t  t, ::UnityEngine::Vector3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"SlerpWithReferenceUp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vA, vB, t, up);
}
inline float_t Unity::Cinemachine::UnityVectorExtensions::NormalizeAngle(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityVectorExtensions*>(),
                        {"NormalizeAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, angle);
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::UnityVectorExtensions::UnityVectorExtensions()   {
}
