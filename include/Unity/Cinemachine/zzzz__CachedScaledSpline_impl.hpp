#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CachedScaledSpline.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CachedScaledSpline_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierCurve_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierKnot_def.hpp"
#include "UnityEngine/Splines/zzzz__ISpline_def.hpp"
#include "UnityEngine/Splines/zzzz__Spline_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CachedScaledSpline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CachedScaledSpline::*)(::UnityEngine::Splines::Spline*, ::UnityEngine::Transform*, ::Unity::Collections::Allocator)>(&::Unity::Cinemachine::CachedScaledSpline::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xaebe404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CachedScaledSpline.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CachedScaledSpline::*)()>(&::Unity::Cinemachine::CachedScaledSpline::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaebe5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CachedScaledSpline.IsCrudelyValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CachedScaledSpline::*)(::UnityEngine::Splines::Spline*, ::UnityEngine::Transform*)>(&::Unity::Cinemachine::CachedScaledSpline::IsCrudelyValid)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xaebe2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"IsCrudelyValid", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CachedScaledSpline.KnotsAreValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CachedScaledSpline::*)(::UnityEngine::Splines::Spline*, ::UnityEngine::Transform*)>(&::Unity::Cinemachine::CachedScaledSpline::KnotsAreValid)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0xaebe5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"KnotsAreValid", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CachedScaledSpline.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::BezierKnot (::Unity::Cinemachine::CachedScaledSpline::*)(int32_t)>(&::Unity::Cinemachine::CachedScaledSpline::get_Item)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaebe9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CachedScaledSpline.get_Closed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CachedScaledSpline::*)()>(&::Unity::Cinemachine::CachedScaledSpline::get_Closed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaebe9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"get_Closed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CachedScaledSpline.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::CachedScaledSpline::*)()>(&::Unity::Cinemachine::CachedScaledSpline::get_Count)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaebe9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CachedScaledSpline.GetCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::BezierCurve (::Unity::Cinemachine::CachedScaledSpline::*)(int32_t)>(&::Unity::Cinemachine::CachedScaledSpline::GetCurve)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaebea08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"GetCurve", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CachedScaledSpline.GetCurveInterpolation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CachedScaledSpline::*)(int32_t, float_t)>(&::Unity::Cinemachine::CachedScaledSpline::GetCurveInterpolation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaebea40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"GetCurveInterpolation", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CachedScaledSpline.GetCurveLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CachedScaledSpline::*)(int32_t)>(&::Unity::Cinemachine::CachedScaledSpline::GetCurveLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaebea4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"GetCurveLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CachedScaledSpline.GetCurveUpVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Cinemachine::CachedScaledSpline::*)(int32_t, float_t)>(&::Unity::Cinemachine::CachedScaledSpline::GetCurveUpVector)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaebea58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"GetCurveUpVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CachedScaledSpline.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>* (::Unity::Cinemachine::CachedScaledSpline::*)()>(&::Unity::Cinemachine::CachedScaledSpline::GetEnumerator)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaebe9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CachedScaledSpline.GetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CachedScaledSpline::*)()>(&::Unity::Cinemachine::CachedScaledSpline::GetLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaebea64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"GetLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CachedScaledSpline.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Unity::Cinemachine::CachedScaledSpline::*)()>(&::Unity::Cinemachine::CachedScaledSpline::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaebea6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Splines::NativeSpline& Unity::Cinemachine::CachedScaledSpline::__cordl_internal_get_m_NativeSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NativeSpline;
}
constexpr ::UnityEngine::Splines::NativeSpline const& Unity::Cinemachine::CachedScaledSpline::__cordl_internal_get_m_NativeSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NativeSpline;
}
constexpr void Unity::Cinemachine::CachedScaledSpline::__cordl_internal_set_m_NativeSpline(::UnityEngine::Splines::NativeSpline  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NativeSpline = value;
}
constexpr ::UnityEngine::Splines::Spline*& Unity::Cinemachine::CachedScaledSpline::__cordl_internal_get_m_CachedSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedSource;
}
constexpr ::UnityEngine::Splines::Spline* const& Unity::Cinemachine::CachedScaledSpline::__cordl_internal_get_m_CachedSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedSource;
}
constexpr void Unity::Cinemachine::CachedScaledSpline::__cordl_internal_set_m_CachedSource(::UnityEngine::Splines::Spline*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedSource = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CachedScaledSpline::__cordl_internal_get_m_CachedScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedScale;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CachedScaledSpline::__cordl_internal_get_m_CachedScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedScale;
}
constexpr void Unity::Cinemachine::CachedScaledSpline::__cordl_internal_set_m_CachedScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedScale = value;
}
constexpr bool& Unity::Cinemachine::CachedScaledSpline::__cordl_internal_get_m_IsAllocated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsAllocated;
}
constexpr bool const& Unity::Cinemachine::CachedScaledSpline::__cordl_internal_get_m_IsAllocated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsAllocated;
}
constexpr void Unity::Cinemachine::CachedScaledSpline::__cordl_internal_set_m_IsAllocated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsAllocated = value;
}
inline void Unity::Cinemachine::CachedScaledSpline::_ctor(::UnityEngine::Splines::Spline*  spline, ::UnityEngine::Transform*  transform, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spline, transform, allocator);
}
inline void Unity::Cinemachine::CachedScaledSpline::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CachedScaledSpline::IsCrudelyValid(::UnityEngine::Splines::Spline*  spline, ::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"IsCrudelyValid", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, spline, transform);
}
inline bool Unity::Cinemachine::CachedScaledSpline::KnotsAreValid(::UnityEngine::Splines::Spline*  spline, ::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"KnotsAreValid", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, spline, transform);
}
inline ::UnityEngine::Splines::BezierKnot Unity::Cinemachine::CachedScaledSpline::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierKnot>(this, ___internal_method, index);
}
inline bool Unity::Cinemachine::CachedScaledSpline::get_Closed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"get_Closed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Unity::Cinemachine::CachedScaledSpline::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Splines::BezierCurve Unity::Cinemachine::CachedScaledSpline::GetCurve(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"GetCurve", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierCurve>(this, ___internal_method, index);
}
inline float_t Unity::Cinemachine::CachedScaledSpline::GetCurveInterpolation(int32_t  curveIndex, float_t  curveDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"GetCurveInterpolation", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, curveIndex, curveDistance);
}
inline float_t Unity::Cinemachine::CachedScaledSpline::GetCurveLength(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"GetCurveLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline ::Unity::Mathematics::float3 Unity::Cinemachine::CachedScaledSpline::GetCurveUpVector(int32_t  index, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"GetCurveUpVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, index, t);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>* Unity::Cinemachine::CachedScaledSpline::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>*>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CachedScaledSpline::GetLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"GetLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Unity::Cinemachine::CachedScaledSpline::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CachedScaledSpline*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CachedScaledSpline* Unity::Cinemachine::CachedScaledSpline::New_ctor(::UnityEngine::Splines::Spline*  spline, ::UnityEngine::Transform*  transform, ::Unity::Collections::Allocator  allocator)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CachedScaledSpline*>(spline, transform, allocator));
}
/// @brief Convert operator to "::UnityEngine::Splines::ISpline"
constexpr  Unity::Cinemachine::CachedScaledSpline::operator ::UnityEngine::Splines::ISpline*() noexcept {
return static_cast<::UnityEngine::Splines::ISpline*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Splines::ISpline"
constexpr ::UnityEngine::Splines::ISpline* Unity::Cinemachine::CachedScaledSpline::i___UnityEngine__Splines__ISpline() noexcept {
return static_cast<::UnityEngine::Splines::ISpline*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
constexpr  Unity::Cinemachine::CachedScaledSpline::operator ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>* Unity::Cinemachine::CachedScaledSpline::i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__Splines__BezierKnot_() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
constexpr  Unity::Cinemachine::CachedScaledSpline::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>* Unity::Cinemachine::CachedScaledSpline::i___System__Collections__Generic__IEnumerable_1___UnityEngine__Splines__BezierKnot_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Unity::Cinemachine::CachedScaledSpline::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Unity::Cinemachine::CachedScaledSpline::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr  Unity::Cinemachine::CachedScaledSpline::operator ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>* Unity::Cinemachine::CachedScaledSpline::i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__Splines__BezierKnot_() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Unity::Cinemachine::CachedScaledSpline::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Cinemachine::CachedScaledSpline::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CachedScaledSpline::CachedScaledSpline()   {
}
