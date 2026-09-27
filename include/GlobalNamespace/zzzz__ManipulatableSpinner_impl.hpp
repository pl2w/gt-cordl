#pragma once
// IWYU pragma private; include "GlobalNamespace/ManipulatableSpinner.hpp"
#include "GlobalNamespace/zzzz__ManipulatableObject_impl.hpp"
#include "GlobalNamespace/zzzz__ManipulatableSpinner_def.hpp"
#include "GlobalNamespace/zzzz__BezierSpline_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSpinner.get_angle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ManipulatableSpinner::*)()>(&::GlobalNamespace::ManipulatableSpinner::get_angle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x575e10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(),
                        {"get_angle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSpinner.set_angle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableSpinner::*)(float_t)>(&::GlobalNamespace::ManipulatableSpinner::set_angle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x575e114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(),
                        {"set_angle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSpinner.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableSpinner::*)()>(&::GlobalNamespace::ManipulatableSpinner::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x575e11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSpinner.OnStartManipulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableSpinner::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::ManipulatableSpinner::OnStartManipulation)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x575e174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSpinner.OnStopManipulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableSpinner::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3)>(&::GlobalNamespace::ManipulatableSpinner::OnStopManipulation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x575e2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSpinner.ShouldHandDetach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ManipulatableSpinner::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::ManipulatableSpinner::ShouldHandDetach)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x575e2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSpinner.OnHeldUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableSpinner::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::ManipulatableSpinner::OnHeldUpdate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x575e370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSpinner.OnReleasedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableSpinner::*)()>(&::GlobalNamespace::ManipulatableSpinner::OnReleasedUpdate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x575e444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSpinner.FindPositionOnSpline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ManipulatableSpinner::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::ManipulatableSpinner::FindPositionOnSpline)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x575e1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(),
                        {"FindPositionOnSpline", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSpinner.SetAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableSpinner::*)(float_t)>(&::GlobalNamespace::ManipulatableSpinner::SetAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x575e4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(),
                        {"SetAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSpinner.SetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableSpinner::*)(float_t)>(&::GlobalNamespace::ManipulatableSpinner::SetVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x575e4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(),
                        {"SetVelocity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableSpinner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableSpinner::*)()>(&::GlobalNamespace::ManipulatableSpinner::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x575e4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get_breakDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakDistance;
}
constexpr float_t const& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get_breakDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakDistance;
}
constexpr void GlobalNamespace::ManipulatableSpinner::__cordl_internal_set_breakDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___breakDistance = value;
}
constexpr bool& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get_applyReleaseVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyReleaseVelocity;
}
constexpr bool const& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get_applyReleaseVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyReleaseVelocity;
}
constexpr void GlobalNamespace::ManipulatableSpinner::__cordl_internal_set_applyReleaseVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyReleaseVelocity = value;
}
constexpr float_t& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get_releaseDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseDrag;
}
constexpr float_t const& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get_releaseDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseDrag;
}
constexpr void GlobalNamespace::ManipulatableSpinner::__cordl_internal_set_releaseDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___releaseDrag = value;
}
constexpr float_t& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get_lowSpeedThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowSpeedThreshold;
}
constexpr float_t const& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get_lowSpeedThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowSpeedThreshold;
}
constexpr void GlobalNamespace::ManipulatableSpinner::__cordl_internal_set_lowSpeedThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowSpeedThreshold = value;
}
constexpr float_t& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get_lowSpeedDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowSpeedDrag;
}
constexpr float_t const& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get_lowSpeedDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowSpeedDrag;
}
constexpr void GlobalNamespace::ManipulatableSpinner::__cordl_internal_set_lowSpeedDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowSpeedDrag = value;
}
constexpr ::UnityW<::GlobalNamespace::BezierSpline>& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get_spline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr ::UnityW<::GlobalNamespace::BezierSpline> const& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get_spline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr void GlobalNamespace::ManipulatableSpinner::__cordl_internal_set_spline(::UnityW<::GlobalNamespace::BezierSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spline = value;
}
constexpr float_t& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get_previousHandT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousHandT;
}
constexpr float_t const& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get_previousHandT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousHandT;
}
constexpr void GlobalNamespace::ManipulatableSpinner::__cordl_internal_set_previousHandT(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousHandT = value;
}
constexpr float_t& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get_currentHandT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHandT;
}
constexpr float_t const& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get_currentHandT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHandT;
}
constexpr void GlobalNamespace::ManipulatableSpinner::__cordl_internal_set_currentHandT(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentHandT = value;
}
constexpr float_t& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get_tVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tVelocity;
}
constexpr float_t const& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get_tVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tVelocity;
}
constexpr void GlobalNamespace::ManipulatableSpinner::__cordl_internal_set_tVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tVelocity = value;
}
constexpr float_t& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get__angle_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____angle_k__BackingField;
}
constexpr float_t const& GlobalNamespace::ManipulatableSpinner::__cordl_internal_get__angle_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____angle_k__BackingField;
}
constexpr void GlobalNamespace::ManipulatableSpinner::__cordl_internal_set__angle_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____angle_k__BackingField = value;
}
inline float_t GlobalNamespace::ManipulatableSpinner::get_angle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(),
                        {"get_angle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::ManipulatableSpinner::set_angle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(),
                        {"set_angle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ManipulatableSpinner::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ManipulatableSpinner::OnStartManipulation(::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbingHand);
}
inline void GlobalNamespace::ManipulatableSpinner::OnStopManipulation(::UnityEngine::GameObject*  releasingHand, ::UnityEngine::Vector3  releaseVelocity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, releasingHand, releaseVelocity);
}
inline bool GlobalNamespace::ManipulatableSpinner::ShouldHandDetach(::UnityEngine::GameObject*  hand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hand);
}
inline void GlobalNamespace::ManipulatableSpinner::OnHeldUpdate(::UnityEngine::GameObject*  hand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void GlobalNamespace::ManipulatableSpinner::OnReleasedUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::ManipulatableSpinner::FindPositionOnSpline(::UnityEngine::Vector3  grabPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(),
                        {"FindPositionOnSpline", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, grabPoint);
}
inline void GlobalNamespace::ManipulatableSpinner::SetAngle(float_t  newAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(),
                        {"SetAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newAngle);
}
inline void GlobalNamespace::ManipulatableSpinner::SetVelocity(float_t  newVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(),
                        {"SetVelocity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newVelocity);
}
inline void GlobalNamespace::ManipulatableSpinner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableSpinner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ManipulatableSpinner* GlobalNamespace::ManipulatableSpinner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ManipulatableSpinner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ManipulatableSpinner::ManipulatableSpinner()   {
}
