#pragma once
// IWYU pragma private; include "GlobalNamespace/BezierSpline.hpp"
#include "GlobalNamespace/zzzz__BezierControlPointMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BezierSpline_def.hpp"
#include "GlobalNamespace/zzzz__BezierControlPointMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline::*)()>(&::GlobalNamespace::BezierSpline::Awake)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5b11f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.buildTimesLenghtsTables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline::*)(int32_t)>(&::GlobalNamespace::BezierSpline::buildTimesLenghtsTables)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5b120f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"buildTimesLenghtsTables", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.getPathFromTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BezierSpline::*)(float_t)>(&::GlobalNamespace::BezierSpline::getPathFromTime)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5b1241c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"getPathFromTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.BuildSplineFromPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::GlobalNamespace::BezierControlPointMode>, bool)>(&::GlobalNamespace::BezierSpline::BuildSplineFromPoints)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5b12578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"BuildSplineFromPoints", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::BezierControlPointMode>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.get_Loop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BezierSpline::*)()>(&::GlobalNamespace::BezierSpline::get_Loop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b12754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"get_Loop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.set_Loop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline::*)(bool)>(&::GlobalNamespace::BezierSpline::set_Loop)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b1275c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"set_Loop", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.get_ControlPointCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BezierSpline::*)()>(&::GlobalNamespace::BezierSpline::get_ControlPointCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b129d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"get_ControlPointCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.GetControlPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BezierSpline::*)(int32_t)>(&::GlobalNamespace::BezierSpline::GetControlPoint)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b129f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"GetControlPoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.SetControlPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline::*)(int32_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::BezierSpline::SetControlPoint)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5b127c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"SetControlPoint", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.GetControlPointMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BezierControlPointMode (::GlobalNamespace::BezierSpline::*)(int32_t)>(&::GlobalNamespace::BezierSpline::GetControlPointMode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b12cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"GetControlPointMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.SetControlPointMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline::*)(int32_t, ::GlobalNamespace::BezierControlPointMode)>(&::GlobalNamespace::BezierSpline::SetControlPointMode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b12d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"SetControlPointMode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BezierControlPointMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.EnforceMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline::*)(int32_t)>(&::GlobalNamespace::BezierSpline::EnforceMode)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5b12a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"EnforceMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.get_CurveCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BezierSpline::*)()>(&::GlobalNamespace::BezierSpline::get_CurveCount)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5b12d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"get_CurveCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.GetPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BezierSpline::*)(float_t, bool)>(&::GlobalNamespace::BezierSpline::GetPoint)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b12dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"GetPoint", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.GetPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BezierSpline::*)(float_t)>(&::GlobalNamespace::BezierSpline::GetPoint)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5b122c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"GetPoint", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.GetPointLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BezierSpline::*)(float_t)>(&::GlobalNamespace::BezierSpline::GetPointLocal)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5b12de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"GetPointLocal", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.GetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BezierSpline::*)(float_t)>(&::GlobalNamespace::BezierSpline::GetVelocity)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5b12f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"GetVelocity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.GetDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BezierSpline::*)(float_t, bool)>(&::GlobalNamespace::BezierSpline::GetDirection)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b130a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"GetDirection", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.GetDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BezierSpline::*)(float_t)>(&::GlobalNamespace::BezierSpline::GetDirection)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b130c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"GetDirection", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.AddCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline::*)()>(&::GlobalNamespace::BezierSpline::AddCurve)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5b13198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"AddCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.RemoveLastCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline::*)()>(&::GlobalNamespace::BezierSpline::RemoveLastCurve)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b133a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"RemoveLastCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.RemoveCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline::*)(int32_t)>(&::GlobalNamespace::BezierSpline::RemoveCurve)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5b13444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"RemoveCurve", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline::*)()>(&::GlobalNamespace::BezierSpline::Reset)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5b135f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline::*)()>(&::GlobalNamespace::BezierSpline::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b136d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::BezierSpline::__cordl_internal_get_points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___points;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::BezierSpline::__cordl_internal_get_points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___points;
}
constexpr void GlobalNamespace::BezierSpline::__cordl_internal_set_points(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___points = value;
}
constexpr ::ArrayW<::GlobalNamespace::BezierControlPointMode>& GlobalNamespace::BezierSpline::__cordl_internal_get_modes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modes;
}
constexpr ::ArrayW<::GlobalNamespace::BezierControlPointMode> const& GlobalNamespace::BezierSpline::__cordl_internal_get_modes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modes;
}
constexpr void GlobalNamespace::BezierSpline::__cordl_internal_set_modes(::ArrayW<::GlobalNamespace::BezierControlPointMode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modes = value;
}
constexpr bool& GlobalNamespace::BezierSpline::__cordl_internal_get_loop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop;
}
constexpr bool const& GlobalNamespace::BezierSpline::__cordl_internal_get_loop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop;
}
constexpr void GlobalNamespace::BezierSpline::__cordl_internal_set_loop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loop = value;
}
constexpr float_t& GlobalNamespace::BezierSpline::__cordl_internal_get__totalArcLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalArcLength;
}
constexpr float_t const& GlobalNamespace::BezierSpline::__cordl_internal_get__totalArcLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalArcLength;
}
constexpr void GlobalNamespace::BezierSpline::__cordl_internal_set__totalArcLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalArcLength = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::BezierSpline::__cordl_internal_get__timesTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timesTable;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::BezierSpline::__cordl_internal_get__timesTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timesTable;
}
constexpr void GlobalNamespace::BezierSpline::__cordl_internal_set__timesTable(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timesTable = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::BezierSpline::__cordl_internal_get__lengthsTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lengthsTable;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::BezierSpline::__cordl_internal_get__lengthsTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lengthsTable;
}
constexpr void GlobalNamespace::BezierSpline::__cordl_internal_set__lengthsTable(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lengthsTable = value;
}
inline void GlobalNamespace::BezierSpline::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BezierSpline::buildTimesLenghtsTables(int32_t  subdivisions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"buildTimesLenghtsTables", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subdivisions);
}
inline float_t GlobalNamespace::BezierSpline::getPathFromTime(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"getPathFromTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, t);
}
inline void GlobalNamespace::BezierSpline::BuildSplineFromPoints(::ArrayW<::UnityEngine::Vector3>  newPoints, ::ArrayW<::GlobalNamespace::BezierControlPointMode>  newModes, bool  isLoop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"BuildSplineFromPoints", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::BezierControlPointMode>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPoints, newModes, isLoop);
}
inline bool GlobalNamespace::BezierSpline::get_Loop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"get_Loop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BezierSpline::set_Loop(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"set_Loop", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::BezierSpline::get_ControlPointCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"get_ControlPointCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BezierSpline::GetControlPoint(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"GetControlPoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, index);
}
inline void GlobalNamespace::BezierSpline::SetControlPoint(int32_t  index, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"SetControlPoint", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, point);
}
inline ::GlobalNamespace::BezierControlPointMode GlobalNamespace::BezierSpline::GetControlPointMode(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"GetControlPointMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BezierControlPointMode>(this, ___internal_method, index);
}
inline void GlobalNamespace::BezierSpline::SetControlPointMode(int32_t  index, ::GlobalNamespace::BezierControlPointMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"SetControlPointMode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BezierControlPointMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, mode);
}
inline void GlobalNamespace::BezierSpline::EnforceMode(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"EnforceMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline int32_t GlobalNamespace::BezierSpline::get_CurveCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"get_CurveCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BezierSpline::GetPoint(float_t  t, bool  ConstantVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"GetPoint", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t, ConstantVelocity);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BezierSpline::GetPoint(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"GetPoint", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BezierSpline::GetPointLocal(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"GetPointLocal", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BezierSpline::GetVelocity(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"GetVelocity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BezierSpline::GetDirection(float_t  t, bool  ConstantVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"GetDirection", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t, ConstantVelocity);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BezierSpline::GetDirection(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"GetDirection", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t);
}
inline void GlobalNamespace::BezierSpline::AddCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"AddCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BezierSpline::RemoveLastCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"RemoveLastCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BezierSpline::RemoveCurve(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"RemoveCurve", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::BezierSpline::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BezierSpline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BezierSpline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BezierSpline* GlobalNamespace::BezierSpline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BezierSpline*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BezierSpline::BezierSpline()   {
}
