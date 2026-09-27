#pragma once
// IWYU pragma private; include "UnityEngine/Splines/NativeSpline.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/Splines/zzzz__BezierCurve_impl.hpp"
#include "UnityEngine/Splines/zzzz__BezierKnot_impl.hpp"
#include "UnityEngine/Splines/zzzz__DistanceToInterpolation_impl.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierCurve_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierKnot_def.hpp"
#include "UnityEngine/Splines/zzzz__ISpline_def.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_Slice_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline.get_Knots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierKnot> (::UnityEngine::Splines::NativeSpline::*)()>(&::UnityEngine::Splines::NativeSpline::get_Knots)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb310fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"get_Knots", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline.get_Curves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierCurve> (::UnityEngine::Splines::NativeSpline::*)()>(&::UnityEngine::Splines::NativeSpline::get_Curves)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb310fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"get_Curves", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline.get_Closed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::NativeSpline::*)()>(&::UnityEngine::Splines::NativeSpline::get_Closed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb310ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"get_Closed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::NativeSpline::*)()>(&::UnityEngine::Splines::NativeSpline::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb310ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline.GetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::NativeSpline::*)()>(&::UnityEngine::Splines::NativeSpline::GetLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb311004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"GetLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::BezierKnot (::UnityEngine::Splines::NativeSpline::*)(int32_t)>(&::UnityEngine::Splines::NativeSpline::get_Item)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb31100c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>* (::UnityEngine::Splines::NativeSpline::*)()>(&::UnityEngine::Splines::NativeSpline::GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb311038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Splines::NativeSpline::*)()>(&::UnityEngine::Splines::NativeSpline::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb3110c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::NativeSpline::*)(::UnityEngine::Splines::ISpline*, ::Unity::Collections::Allocator)>(&::UnityEngine::Splines::NativeSpline::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb3110cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::NativeSpline::*)(::UnityEngine::Splines::ISpline*, bool, ::Unity::Collections::Allocator)>(&::UnityEngine::Splines::NativeSpline::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb3112f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::NativeSpline::*)(::UnityEngine::Splines::ISpline*, ::Unity::Mathematics::float4x4, ::Unity::Collections::Allocator)>(&::UnityEngine::Splines::NativeSpline::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xb311384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::NativeSpline::*)(::UnityEngine::Splines::ISpline*, ::Unity::Mathematics::float4x4, bool, ::Unity::Collections::Allocator)>(&::UnityEngine::Splines::NativeSpline::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb311154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::NativeSpline::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*, bool, ::Unity::Mathematics::float4x4, ::Unity::Collections::Allocator)>(&::UnityEngine::Splines::NativeSpline::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb311f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::NativeSpline::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*, bool, ::Unity::Mathematics::float4x4, bool, ::Unity::Collections::Allocator)>(&::UnityEngine::Splines::NativeSpline::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb311f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::NativeSpline::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*, ::System::Collections::Generic::IReadOnlyList_1<int32_t>*, bool, ::Unity::Mathematics::float4x4, ::Unity::Collections::Allocator)>(&::UnityEngine::Splines::NativeSpline::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb311fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<int32_t>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::NativeSpline::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*, ::System::Collections::Generic::IReadOnlyList_1<int32_t>*, bool, ::Unity::Mathematics::float4x4, bool, ::Unity::Collections::Allocator)>(&::UnityEngine::Splines::NativeSpline::_ctor)> {
  constexpr static std::size_t size = 0xa30;
  constexpr static std::size_t addrs = 0xb31151c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<int32_t>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline.GetCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::BezierCurve (::UnityEngine::Splines::NativeSpline::*)(int32_t)>(&::UnityEngine::Splines::NativeSpline::GetCurve)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb312000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"GetCurve", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline.GetCurveLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::NativeSpline::*)(int32_t)>(&::UnityEngine::Splines::NativeSpline::GetCurveLength)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb312024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"GetCurveLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline.GetCurveUpVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::Splines::NativeSpline::*)(int32_t, float_t)>(&::UnityEngine::Splines::NativeSpline::GetCurveUpVector)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb312040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"GetCurveUpVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::NativeSpline::*)()>(&::UnityEngine::Splines::NativeSpline::Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb312170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::NativeSpline.GetCurveInterpolation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::NativeSpline::*)(int32_t, float_t)>(&::UnityEngine::Splines::NativeSpline::GetCurveInterpolation)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb312228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"GetCurveInterpolation", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierKnot> UnityEngine::Splines::NativeSpline::get_Knots()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"get_Knots", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierKnot>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierCurve> UnityEngine::Splines::NativeSpline::get_Curves()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"get_Curves", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierCurve>>(*this, ___internal_method);
}
inline bool UnityEngine::Splines::NativeSpline::get_Closed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"get_Closed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t UnityEngine::Splines::NativeSpline::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline float_t UnityEngine::Splines::NativeSpline::GetLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"GetLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityEngine::Splines::BezierKnot UnityEngine::Splines::NativeSpline::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierKnot>(*this, ___internal_method, index);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::NativeSpline::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>*>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::Splines::NativeSpline::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
inline void UnityEngine::Splines::NativeSpline::_ctor(::UnityEngine::Splines::ISpline*  spline, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, spline, allocator);
}
inline void UnityEngine::Splines::NativeSpline::_ctor(::UnityEngine::Splines::ISpline*  spline, bool  cacheUpVectors, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, spline, cacheUpVectors, allocator);
}
inline void UnityEngine::Splines::NativeSpline::_ctor(::UnityEngine::Splines::ISpline*  spline, ::Unity::Mathematics::float4x4  transform, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, spline, transform, allocator);
}
inline void UnityEngine::Splines::NativeSpline::_ctor(::UnityEngine::Splines::ISpline*  spline, ::Unity::Mathematics::float4x4  transform, bool  cacheUpVectors, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, spline, transform, cacheUpVectors, allocator);
}
inline void UnityEngine::Splines::NativeSpline::_ctor(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*  knots, bool  closed, ::Unity::Mathematics::float4x4  transform, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, knots, closed, transform, allocator);
}
inline void UnityEngine::Splines::NativeSpline::_ctor(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*  knots, bool  closed, ::Unity::Mathematics::float4x4  transform, bool  cacheUpVectors, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, knots, closed, transform, cacheUpVectors, allocator);
}
inline void UnityEngine::Splines::NativeSpline::_ctor(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*  knots, ::System::Collections::Generic::IReadOnlyList_1<int32_t>*  splits, bool  closed, ::Unity::Mathematics::float4x4  transform, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<int32_t>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, knots, splits, closed, transform, allocator);
}
inline void UnityEngine::Splines::NativeSpline::_ctor(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*  knots, ::System::Collections::Generic::IReadOnlyList_1<int32_t>*  splits, bool  closed, ::Unity::Mathematics::float4x4  transform, bool  cacheUpVectors, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<int32_t>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, knots, splits, closed, transform, cacheUpVectors, allocator);
}
inline ::UnityEngine::Splines::BezierCurve UnityEngine::Splines::NativeSpline::GetCurve(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"GetCurve", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierCurve>(*this, ___internal_method, index);
}
inline float_t UnityEngine::Splines::NativeSpline::GetCurveLength(int32_t  curveIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"GetCurveLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, curveIndex);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::NativeSpline::GetCurveUpVector(int32_t  index, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"GetCurveUpVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, index, t);
}
inline void UnityEngine::Splines::NativeSpline::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline float_t UnityEngine::Splines::NativeSpline::GetCurveInterpolation(int32_t  curveIndex, float_t  curveDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::NativeSpline>(),
                        {"GetCurveInterpolation", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, curveIndex, curveDistance);
}
/// @brief Convert operator to "::UnityEngine::Splines::ISpline"
constexpr  UnityEngine::Splines::NativeSpline::operator ::UnityEngine::Splines::ISpline*()  {
return static_cast<::UnityEngine::Splines::ISpline*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Splines::ISpline"
constexpr ::UnityEngine::Splines::ISpline* UnityEngine::Splines::NativeSpline::i___UnityEngine__Splines__ISpline()  {
return static_cast<::UnityEngine::Splines::ISpline*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
constexpr  UnityEngine::Splines::NativeSpline::operator ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*()  {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::NativeSpline::i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__Splines__BezierKnot_()  {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
constexpr  UnityEngine::Splines::NativeSpline::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::NativeSpline::i___System__Collections__Generic__IEnumerable_1___UnityEngine__Splines__BezierKnot_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::Splines::NativeSpline::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::Splines::NativeSpline::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr  UnityEngine::Splines::NativeSpline::operator ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*()  {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::NativeSpline::i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__Splines__BezierKnot_()  {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Splines::NativeSpline::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Splines::NativeSpline::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Knots", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierKnot>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Curves", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierCurve>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SegmentLengthsLookupTable", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Splines::DistanceToInterpolation>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_UpVectorsLookupTable", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Closed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Length", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Splines::NativeSpline::NativeSpline(::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierKnot>  m_Knots, ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierCurve>  m_Curves, ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::DistanceToInterpolation>  m_SegmentLengthsLookupTable, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  m_UpVectorsLookupTable, bool  m_Closed, float_t  m_Length) noexcept  {
this->m_Knots = m_Knots;
this->m_Curves = m_Curves;
this->m_SegmentLengthsLookupTable = m_SegmentLengthsLookupTable;
this->m_UpVectorsLookupTable = m_UpVectorsLookupTable;
this->m_Closed = m_Closed;
this->m_Length = m_Length;
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::NativeSpline::NativeSpline()   {
}
