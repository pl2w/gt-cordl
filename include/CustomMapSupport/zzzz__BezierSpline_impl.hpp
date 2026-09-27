#pragma once
// IWYU pragma private; include "CustomMapSupport/BezierSpline.hpp"
#include "CustomMapSupport/zzzz__BezierControlPointMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "CustomMapSupport/zzzz__BezierSpline_def.hpp"
#include "CustomMapSupport/zzzz__BezierControlPointMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CustomMapSupport::BezierSpline::*)()>(&::CustomMapSupport::BezierSpline::Awake)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x9caeeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.buildTimesLengthsTables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CustomMapSupport::BezierSpline::*)(int32_t)>(&::CustomMapSupport::BezierSpline::buildTimesLengthsTables)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x9caf0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"buildTimesLengthsTables", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.getPathFromTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::CustomMapSupport::BezierSpline::*)(float_t)>(&::CustomMapSupport::BezierSpline::getPathFromTime)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x9caf440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"getPathFromTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.get_Loop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::CustomMapSupport::BezierSpline::*)()>(&::CustomMapSupport::BezierSpline::get_Loop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9caf640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"get_Loop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.set_Loop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CustomMapSupport::BezierSpline::*)(bool)>(&::CustomMapSupport::BezierSpline::set_Loop)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9caf648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"set_Loop", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.GetControlPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::CustomMapSupport::BezierSpline::*)()>(&::CustomMapSupport::BezierSpline::GetControlPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9caf8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetControlPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.GetControlPointModes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::CustomMapSupport::BezierControlPointMode> (::CustomMapSupport::BezierSpline::*)()>(&::CustomMapSupport::BezierSpline::GetControlPointModes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9caf8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetControlPointModes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.get_ControlPointCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::CustomMapSupport::BezierSpline::*)()>(&::CustomMapSupport::BezierSpline::get_ControlPointCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9caf8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"get_ControlPointCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.GetControlPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::CustomMapSupport::BezierSpline::*)(int32_t)>(&::CustomMapSupport::BezierSpline::GetControlPoint)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9caf8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetControlPoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.SetControlPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CustomMapSupport::BezierSpline::*)(int32_t, ::UnityEngine::Vector3)>(&::CustomMapSupport::BezierSpline::SetControlPoint)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x9caf6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"SetControlPoint", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.GetControlPointMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::CustomMapSupport::BezierControlPointMode (::CustomMapSupport::BezierSpline::*)(int32_t)>(&::CustomMapSupport::BezierSpline::GetControlPointMode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9cafbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetControlPointMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.SetControlPointMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CustomMapSupport::BezierSpline::*)(int32_t, ::CustomMapSupport::BezierControlPointMode)>(&::CustomMapSupport::BezierSpline::SetControlPointMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9cafc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"SetControlPointMode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::CustomMapSupport::BezierControlPointMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.EnforceMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CustomMapSupport::BezierSpline::*)(int32_t)>(&::CustomMapSupport::BezierSpline::EnforceMode)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x9caf964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"EnforceMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.get_CurveCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::CustomMapSupport::BezierSpline::*)()>(&::CustomMapSupport::BezierSpline::get_CurveCount)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9cafcbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"get_CurveCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.GetPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::CustomMapSupport::BezierSpline::*)(float_t, bool)>(&::CustomMapSupport::BezierSpline::GetPoint)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9cafcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetPoint", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.GetPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::CustomMapSupport::BezierSpline::*)(float_t)>(&::CustomMapSupport::BezierSpline::GetPoint)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x9caf2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetPoint", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.GetPointLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::CustomMapSupport::BezierSpline::*)(float_t)>(&::CustomMapSupport::BezierSpline::GetPointLocal)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9cafd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetPointLocal", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.GetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::CustomMapSupport::BezierSpline::*)(float_t)>(&::CustomMapSupport::BezierSpline::GetVelocity)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x9cafe68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetVelocity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.GetDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::CustomMapSupport::BezierSpline::*)(float_t, bool)>(&::CustomMapSupport::BezierSpline::GetDirection)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9cb0038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetDirection", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.GetDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::CustomMapSupport::BezierSpline::*)(float_t)>(&::CustomMapSupport::BezierSpline::GetDirection)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9cb0058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetDirection", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.AddCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CustomMapSupport::BezierSpline::*)()>(&::CustomMapSupport::BezierSpline::AddCurve)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x9cb012c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"AddCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.RemoveLastCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CustomMapSupport::BezierSpline::*)()>(&::CustomMapSupport::BezierSpline::RemoveLastCurve)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9cb0340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"RemoveLastCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.RemoveCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CustomMapSupport::BezierSpline::*)(int32_t)>(&::CustomMapSupport::BezierSpline::RemoveCurve)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x9cb03ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"RemoveCurve", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CustomMapSupport::BezierSpline::*)()>(&::CustomMapSupport::BezierSpline::Reset)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9cb05a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CustomMapSupport::BezierSpline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CustomMapSupport::BezierSpline::*)()>(&::CustomMapSupport::BezierSpline::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cb0688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector3>& CustomMapSupport::BezierSpline::__cordl_internal_get_points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___points;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& CustomMapSupport::BezierSpline::__cordl_internal_get_points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___points;
}
constexpr void CustomMapSupport::BezierSpline::__cordl_internal_set_points(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___points = value;
}
constexpr ::ArrayW<::CustomMapSupport::BezierControlPointMode>& CustomMapSupport::BezierSpline::__cordl_internal_get_modes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modes;
}
constexpr ::ArrayW<::CustomMapSupport::BezierControlPointMode> const& CustomMapSupport::BezierSpline::__cordl_internal_get_modes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modes;
}
constexpr void CustomMapSupport::BezierSpline::__cordl_internal_set_modes(::ArrayW<::CustomMapSupport::BezierControlPointMode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modes = value;
}
constexpr bool& CustomMapSupport::BezierSpline::__cordl_internal_get_loop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop;
}
constexpr bool const& CustomMapSupport::BezierSpline::__cordl_internal_get_loop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop;
}
constexpr void CustomMapSupport::BezierSpline::__cordl_internal_set_loop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loop = value;
}
constexpr float_t& CustomMapSupport::BezierSpline::__cordl_internal_get__totalArcLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalArcLength;
}
constexpr float_t const& CustomMapSupport::BezierSpline::__cordl_internal_get__totalArcLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalArcLength;
}
constexpr void CustomMapSupport::BezierSpline::__cordl_internal_set__totalArcLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalArcLength = value;
}
constexpr ::ArrayW<float_t>& CustomMapSupport::BezierSpline::__cordl_internal_get__timesTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timesTable;
}
constexpr ::ArrayW<float_t> const& CustomMapSupport::BezierSpline::__cordl_internal_get__timesTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timesTable;
}
constexpr void CustomMapSupport::BezierSpline::__cordl_internal_set__timesTable(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timesTable = value;
}
constexpr ::ArrayW<float_t>& CustomMapSupport::BezierSpline::__cordl_internal_get__lengthsTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lengthsTable;
}
constexpr ::ArrayW<float_t> const& CustomMapSupport::BezierSpline::__cordl_internal_get__lengthsTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lengthsTable;
}
constexpr void CustomMapSupport::BezierSpline::__cordl_internal_set__lengthsTable(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lengthsTable = value;
}
inline void CustomMapSupport::BezierSpline::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CustomMapSupport::BezierSpline::buildTimesLengthsTables(int32_t  subdivisions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"buildTimesLengthsTables", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subdivisions);
}
inline float_t CustomMapSupport::BezierSpline::getPathFromTime(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"getPathFromTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, t);
}
inline bool CustomMapSupport::BezierSpline::get_Loop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"get_Loop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void CustomMapSupport::BezierSpline::set_Loop(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"set_Loop", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector3> CustomMapSupport::BezierSpline::GetControlPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetControlPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline ::ArrayW<::CustomMapSupport::BezierControlPointMode> CustomMapSupport::BezierSpline::GetControlPointModes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetControlPointModes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::CustomMapSupport::BezierControlPointMode>>(this, ___internal_method);
}
inline int32_t CustomMapSupport::BezierSpline::get_ControlPointCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"get_ControlPointCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 CustomMapSupport::BezierSpline::GetControlPoint(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetControlPoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, index);
}
inline void CustomMapSupport::BezierSpline::SetControlPoint(int32_t  index, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"SetControlPoint", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, point);
}
inline ::CustomMapSupport::BezierControlPointMode CustomMapSupport::BezierSpline::GetControlPointMode(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetControlPointMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::CustomMapSupport::BezierControlPointMode>(this, ___internal_method, index);
}
inline void CustomMapSupport::BezierSpline::SetControlPointMode(int32_t  index, ::CustomMapSupport::BezierControlPointMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"SetControlPointMode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::CustomMapSupport::BezierControlPointMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, mode);
}
inline void CustomMapSupport::BezierSpline::EnforceMode(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"EnforceMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline int32_t CustomMapSupport::BezierSpline::get_CurveCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"get_CurveCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 CustomMapSupport::BezierSpline::GetPoint(float_t  t, bool  ConstantVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetPoint", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t, ConstantVelocity);
}
inline ::UnityEngine::Vector3 CustomMapSupport::BezierSpline::GetPoint(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetPoint", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t);
}
inline ::UnityEngine::Vector3 CustomMapSupport::BezierSpline::GetPointLocal(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetPointLocal", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t);
}
inline ::UnityEngine::Vector3 CustomMapSupport::BezierSpline::GetVelocity(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetVelocity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t);
}
inline ::UnityEngine::Vector3 CustomMapSupport::BezierSpline::GetDirection(float_t  t, bool  ConstantVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetDirection", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t, ConstantVelocity);
}
inline ::UnityEngine::Vector3 CustomMapSupport::BezierSpline::GetDirection(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"GetDirection", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t);
}
inline void CustomMapSupport::BezierSpline::AddCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"AddCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CustomMapSupport::BezierSpline::RemoveLastCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"RemoveLastCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CustomMapSupport::BezierSpline::RemoveCurve(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"RemoveCurve", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void CustomMapSupport::BezierSpline::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CustomMapSupport::BezierSpline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CustomMapSupport::BezierSpline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CustomMapSupport::BezierSpline* CustomMapSupport::BezierSpline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CustomMapSupport::BezierSpline*>());
}
// Ctor Parameters []
constexpr ::CustomMapSupport::BezierSpline::BezierSpline()   {
}
