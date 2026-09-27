#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_UVTransformUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_UVTransformUtility_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__DRect_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__DVector2_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_UVTransformUtility.Test
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::DigitalOpus::MB::Core::MB3_UVTransformUtility::Test)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x9dbce6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"Test", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_UVTransformUtility.TransformX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::DigitalOpus::MB::Core::DRect, double_t)>(&::DigitalOpus::MB::Core::MB3_UVTransformUtility::TransformX)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9dbd104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"TransformX", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DRect>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_UVTransformUtility.CombineTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::DRect (*)(::by_ref<::DigitalOpus::MB::Core::DRect>, ::by_ref<::DigitalOpus::MB::Core::DRect>)>(&::DigitalOpus::MB::Core::MB3_UVTransformUtility::CombineTransforms)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9dbd0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"CombineTransforms", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_UVTransformUtility.CombineTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Rect>)>(&::DigitalOpus::MB::Core::MB3_UVTransformUtility::CombineTransforms)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9dbd114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"CombineTransforms", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_UVTransformUtility.InverseTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::DRect (*)(::by_ref<::DigitalOpus::MB::Core::DRect>)>(&::DigitalOpus::MB::Core::MB3_UVTransformUtility::InverseTransform)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9dbd090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"InverseTransform", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_UVTransformUtility.GetShiftTransformToFitBinA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::DRect (*)(::by_ref<::DigitalOpus::MB::Core::DRect>, ::by_ref<::DigitalOpus::MB::Core::DRect>)>(&::DigitalOpus::MB::Core::MB3_UVTransformUtility::GetShiftTransformToFitBinA)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9dbd134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"GetShiftTransformToFitBinA", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_UVTransformUtility.GetEncapsulatingRectShifted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::DRect (*)(::by_ref<::DigitalOpus::MB::Core::DRect>, ::by_ref<::DigitalOpus::MB::Core::DRect>)>(&::DigitalOpus::MB::Core::MB3_UVTransformUtility::GetEncapsulatingRectShifted)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x9dbd238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"GetEncapsulatingRectShifted", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_UVTransformUtility.GetEncapsulatingRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::DRect (*)(::by_ref<::DigitalOpus::MB::Core::DRect>, ::by_ref<::DigitalOpus::MB::Core::DRect>)>(&::DigitalOpus::MB::Core::MB3_UVTransformUtility::GetEncapsulatingRect)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9dbd3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"GetEncapsulatingRect", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_UVTransformUtility.RectContainsShifted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::DigitalOpus::MB::Core::DRect>, ::by_ref<::DigitalOpus::MB::Core::DRect>)>(&::DigitalOpus::MB::Core::MB3_UVTransformUtility::RectContainsShifted)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9dbd40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"RectContainsShifted", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_UVTransformUtility.RectContainsShifted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Rect>)>(&::DigitalOpus::MB::Core::MB3_UVTransformUtility::RectContainsShifted)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9dbd518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"RectContainsShifted", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_UVTransformUtility.LineSegmentContainsShifted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t, float_t, float_t)>(&::DigitalOpus::MB::Core::MB3_UVTransformUtility::LineSegmentContainsShifted)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9dbd6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"LineSegmentContainsShifted", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_UVTransformUtility.RectContains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::DigitalOpus::MB::Core::DRect>, ::by_ref<::DigitalOpus::MB::Core::DRect>)>(&::DigitalOpus::MB::Core::MB3_UVTransformUtility::RectContains)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9dbd780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"RectContains", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_UVTransformUtility.RectContains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Rect>)>(&::DigitalOpus::MB::Core::MB3_UVTransformUtility::RectContains)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9dbd620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"RectContains", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_UVTransformUtility.TransformPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::by_ref<::DigitalOpus::MB::Core::DRect>, ::UnityEngine::Vector2)>(&::DigitalOpus::MB::Core::MB3_UVTransformUtility::TransformPoint)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9dbd0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"TransformPoint", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_UVTransformUtility.TransformPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::DVector2 (*)(::by_ref<::DigitalOpus::MB::Core::DRect>, ::DigitalOpus::MB::Core::DVector2)>(&::DigitalOpus::MB::Core::MB3_UVTransformUtility::TransformPoint)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9dbd800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"TransformPoint", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>(), ::i2c::type_of<::DigitalOpus::MB::Core::DVector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_UVTransformUtility._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_UVTransformUtility::*)()>(&::DigitalOpus::MB::Core::MB3_UVTransformUtility::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dbd818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::MB3_UVTransformUtility::Test()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"Test", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline float_t DigitalOpus::MB::Core::MB3_UVTransformUtility::TransformX(::DigitalOpus::MB::Core::DRect  r, double_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"TransformX", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DRect>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, r, x);
}
inline ::DigitalOpus::MB::Core::DRect DigitalOpus::MB::Core::MB3_UVTransformUtility::CombineTransforms(::by_ref<::DigitalOpus::MB::Core::DRect>  r1, ::by_ref<::DigitalOpus::MB::Core::DRect>  r2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"CombineTransforms", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::DRect>(nullptr, ___internal_method, r1, r2);
}
inline ::UnityEngine::Rect DigitalOpus::MB::Core::MB3_UVTransformUtility::CombineTransforms(::by_ref<::UnityEngine::Rect>  r1, ::by_ref<::UnityEngine::Rect>  r2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"CombineTransforms", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, r1, r2);
}
inline ::DigitalOpus::MB::Core::DRect DigitalOpus::MB::Core::MB3_UVTransformUtility::InverseTransform(::by_ref<::DigitalOpus::MB::Core::DRect>  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"InverseTransform", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::DRect>(nullptr, ___internal_method, t);
}
inline ::DigitalOpus::MB::Core::DRect DigitalOpus::MB::Core::MB3_UVTransformUtility::GetShiftTransformToFitBinA(::by_ref<::DigitalOpus::MB::Core::DRect>  A, ::by_ref<::DigitalOpus::MB::Core::DRect>  B)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"GetShiftTransformToFitBinA", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::DRect>(nullptr, ___internal_method, A, B);
}
inline ::DigitalOpus::MB::Core::DRect DigitalOpus::MB::Core::MB3_UVTransformUtility::GetEncapsulatingRectShifted(::by_ref<::DigitalOpus::MB::Core::DRect>  uvRect1, ::by_ref<::DigitalOpus::MB::Core::DRect>  willBeIn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"GetEncapsulatingRectShifted", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::DRect>(nullptr, ___internal_method, uvRect1, willBeIn);
}
inline ::DigitalOpus::MB::Core::DRect DigitalOpus::MB::Core::MB3_UVTransformUtility::GetEncapsulatingRect(::by_ref<::DigitalOpus::MB::Core::DRect>  uvRect1, ::by_ref<::DigitalOpus::MB::Core::DRect>  uvRect2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"GetEncapsulatingRect", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::DRect>(nullptr, ___internal_method, uvRect1, uvRect2);
}
inline bool DigitalOpus::MB::Core::MB3_UVTransformUtility::RectContainsShifted(::by_ref<::DigitalOpus::MB::Core::DRect>  bucket, ::by_ref<::DigitalOpus::MB::Core::DRect>  tryFit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"RectContainsShifted", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bucket, tryFit);
}
inline bool DigitalOpus::MB::Core::MB3_UVTransformUtility::RectContainsShifted(::by_ref<::UnityEngine::Rect>  bucket, ::by_ref<::UnityEngine::Rect>  tryFit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"RectContainsShifted", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bucket, tryFit);
}
inline bool DigitalOpus::MB::Core::MB3_UVTransformUtility::LineSegmentContainsShifted(float_t  bucketOffset, float_t  bucketLength, float_t  tryFitOffset, float_t  tryFitLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"LineSegmentContainsShifted", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bucketOffset, bucketLength, tryFitOffset, tryFitLength);
}
inline bool DigitalOpus::MB::Core::MB3_UVTransformUtility::RectContains(::by_ref<::DigitalOpus::MB::Core::DRect>  bigRect, ::by_ref<::DigitalOpus::MB::Core::DRect>  smallToTestIfFits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"RectContains", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bigRect, smallToTestIfFits);
}
inline bool DigitalOpus::MB::Core::MB3_UVTransformUtility::RectContains(::by_ref<::UnityEngine::Rect>  bigRect, ::by_ref<::UnityEngine::Rect>  smallToTestIfFits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"RectContains", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bigRect, smallToTestIfFits);
}
inline ::UnityEngine::Vector2 DigitalOpus::MB::Core::MB3_UVTransformUtility::TransformPoint(::by_ref<::DigitalOpus::MB::Core::DRect>  r, ::UnityEngine::Vector2  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"TransformPoint", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, r, p);
}
inline ::DigitalOpus::MB::Core::DVector2 DigitalOpus::MB::Core::MB3_UVTransformUtility::TransformPoint(::by_ref<::DigitalOpus::MB::Core::DRect>  r, ::DigitalOpus::MB::Core::DVector2  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {"TransformPoint", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::DRect>>(), ::i2c::type_of<::DigitalOpus::MB::Core::DVector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::DVector2>(nullptr, ___internal_method, r, p);
}
inline void DigitalOpus::MB::Core::MB3_UVTransformUtility::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_UVTransformUtility* DigitalOpus::MB::Core::MB3_UVTransformUtility::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_UVTransformUtility*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_UVTransformUtility::MB3_UVTransformUtility()   {
}
