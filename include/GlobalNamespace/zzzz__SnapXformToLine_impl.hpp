#pragma once
// IWYU pragma private; include "GlobalNamespace/SnapXformToLine.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SnapXformToLine_def.hpp"
#include "GlobalNamespace/zzzz__IRangedVariable_1_def.hpp"
#include "GlobalNamespace/zzzz__Ref_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SnapXformToLine.get_linePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SnapXformToLine::*)()>(&::GlobalNamespace::SnapXformToLine::get_linePoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5985880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"get_linePoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnapXformToLine.get_linearDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SnapXformToLine::*)()>(&::GlobalNamespace::SnapXformToLine::get_linearDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598588c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"get_linearDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnapXformToLine.SnapTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnapXformToLine::*)(bool)>(&::GlobalNamespace::SnapXformToLine::SnapTarget)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5985894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"SnapTarget", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnapXformToLine.SnapTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnapXformToLine::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::SnapXformToLine::SnapTarget)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5985dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"SnapTarget", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnapXformToLine.SnapTargetLinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnapXformToLine::*)(float_t)>(&::GlobalNamespace::SnapXformToLine::SnapTargetLinear)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5985fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"SnapTargetLinear", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnapXformToLine.GetSnappedPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SnapXformToLine::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::SnapXformToLine::GetSnappedPoint)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5986100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"GetSnappedPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnapXformToLine.GetSnappedPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SnapXformToLine::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::SnapXformToLine::GetSnappedPoint)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5985e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"GetSnappedPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnapXformToLine.Snap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnapXformToLine::*)(::UnityEngine::Transform*, bool)>(&::GlobalNamespace::SnapXformToLine::Snap)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x59858a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"Snap", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnapXformToLine.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnapXformToLine::*)()>(&::GlobalNamespace::SnapXformToLine::OnDisable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59861a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnapXformToLine.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnapXformToLine::*)()>(&::GlobalNamespace::SnapXformToLine::LateUpdate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59861bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnapXformToLine.GetClosestPointOnLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::SnapXformToLine::GetClosestPointOnLine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5986128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"GetClosestPointOnLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnapXformToLine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnapXformToLine::*)()>(&::GlobalNamespace::SnapXformToLine::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59861c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SnapXformToLine::__cordl_internal_get_apply()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apply;
}
constexpr bool const& GlobalNamespace::SnapXformToLine::__cordl_internal_get_apply() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apply;
}
constexpr void GlobalNamespace::SnapXformToLine::__cordl_internal_set_apply(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___apply = value;
}
constexpr bool& GlobalNamespace::SnapXformToLine::__cordl_internal_get_snapOrientation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapOrientation;
}
constexpr bool const& GlobalNamespace::SnapXformToLine::__cordl_internal_get_snapOrientation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapOrientation;
}
constexpr void GlobalNamespace::SnapXformToLine::__cordl_internal_set_snapOrientation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapOrientation = value;
}
constexpr bool& GlobalNamespace::SnapXformToLine::__cordl_internal_get_resetOnDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetOnDisable;
}
constexpr bool const& GlobalNamespace::SnapXformToLine::__cordl_internal_get_resetOnDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetOnDisable;
}
constexpr void GlobalNamespace::SnapXformToLine::__cordl_internal_set_resetOnDisable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetOnDisable = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SnapXformToLine::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SnapXformToLine::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::SnapXformToLine::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SnapXformToLine::__cordl_internal_get_from()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___from;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SnapXformToLine::__cordl_internal_get_from() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___from;
}
constexpr void GlobalNamespace::SnapXformToLine::__cordl_internal_set_from(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___from = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SnapXformToLine::__cordl_internal_get_to()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___to;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SnapXformToLine::__cordl_internal_get_to() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___to;
}
constexpr void GlobalNamespace::SnapXformToLine::__cordl_internal_set_to(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___to = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SnapXformToLine::__cordl_internal_get__closest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closest;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SnapXformToLine::__cordl_internal_get__closest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closest;
}
constexpr void GlobalNamespace::SnapXformToLine::__cordl_internal_set__closest(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____closest = value;
}
constexpr float_t& GlobalNamespace::SnapXformToLine::__cordl_internal_get__linear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linear;
}
constexpr float_t const& GlobalNamespace::SnapXformToLine::__cordl_internal_get__linear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linear;
}
constexpr void GlobalNamespace::SnapXformToLine::__cordl_internal_set__linear(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____linear = value;
}
constexpr ::GlobalNamespace::Ref_1<::GlobalNamespace::IRangedVariable_1<float_t>*>*& GlobalNamespace::SnapXformToLine::__cordl_internal_get_output()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___output;
}
constexpr ::GlobalNamespace::Ref_1<::GlobalNamespace::IRangedVariable_1<float_t>*>* const& GlobalNamespace::SnapXformToLine::__cordl_internal_get_output() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___output;
}
constexpr void GlobalNamespace::SnapXformToLine::__cordl_internal_set_output(::GlobalNamespace::Ref_1<::GlobalNamespace::IRangedVariable_1<float_t>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___output = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GlobalNamespace::SnapXformToLine::__cordl_internal_get_onLinearDistanceChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLinearDistanceChanged;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GlobalNamespace::SnapXformToLine::__cordl_internal_get_onLinearDistanceChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLinearDistanceChanged;
}
constexpr void GlobalNamespace::SnapXformToLine::__cordl_internal_set_onLinearDistanceChanged(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onLinearDistanceChanged = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& GlobalNamespace::SnapXformToLine::__cordl_internal_get_onPositionChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPositionChanged;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& GlobalNamespace::SnapXformToLine::__cordl_internal_get_onPositionChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPositionChanged;
}
constexpr void GlobalNamespace::SnapXformToLine::__cordl_internal_set_onPositionChanged(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPositionChanged = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::SnapXformToLine::get_linePoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"get_linePoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t GlobalNamespace::SnapXformToLine::get_linearDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"get_linearDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SnapXformToLine::SnapTarget(bool  applyToXform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"SnapTarget", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, applyToXform);
}
inline void GlobalNamespace::SnapXformToLine::SnapTarget(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"SnapTarget", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point);
}
inline void GlobalNamespace::SnapXformToLine::SnapTargetLinear(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"SnapTargetLinear", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SnapXformToLine::GetSnappedPoint(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"GetSnappedPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SnapXformToLine::GetSnappedPoint(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"GetSnappedPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, point);
}
inline void GlobalNamespace::SnapXformToLine::Snap(::UnityEngine::Transform*  xform, bool  applyToXform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"Snap", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xform, applyToXform);
}
inline void GlobalNamespace::SnapXformToLine::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SnapXformToLine::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SnapXformToLine::GetClosestPointOnLine(::UnityEngine::Vector3  p, ::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {"GetClosestPointOnLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, p, a, b);
}
inline void GlobalNamespace::SnapXformToLine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapXformToLine*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SnapXformToLine* GlobalNamespace::SnapXformToLine::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SnapXformToLine*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SnapXformToLine::SnapXformToLine()   {
}
