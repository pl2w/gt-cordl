#pragma once
// IWYU pragma private; include "GlobalNamespace/ProximityReactor.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ProximityReactor_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProximityReactor.get_proximityRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ProximityReactor::*)()>(&::GlobalNamespace::ProximityReactor::get_proximityRange)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a1f7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"get_proximityRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityReactor.get_distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ProximityReactor::*)()>(&::GlobalNamespace::ProximityReactor::get_distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1f7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"get_distance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityReactor.get_distanceLinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ProximityReactor::*)()>(&::GlobalNamespace::ProximityReactor::get_distanceLinear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1f7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"get_distanceLinear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityReactor.SetRigFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityReactor::*)()>(&::GlobalNamespace::ProximityReactor::SetRigFrom)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5a1f7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"SetRigFrom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityReactor.SetRigTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityReactor::*)()>(&::GlobalNamespace::ProximityReactor::SetRigTo)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5a1f8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"SetRigTo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityReactor.SetTransformFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityReactor::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::ProximityReactor::SetTransformFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1f978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"SetTransformFrom", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityReactor.SetTransformTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityReactor::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::ProximityReactor::SetTransformTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1f980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"SetTransformTo", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityReactor.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityReactor::*)()>(&::GlobalNamespace::ProximityReactor::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1f988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityReactor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityReactor::*)()>(&::GlobalNamespace::ProximityReactor::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1f990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityReactor.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityReactor::*)()>(&::GlobalNamespace::ProximityReactor::Update)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5a1f998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityReactor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityReactor::*)()>(&::GlobalNamespace::ProximityReactor::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a1fc78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ProximityReactor::__cordl_internal_get_from()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___from;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ProximityReactor::__cordl_internal_get_from() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___from;
}
constexpr void GlobalNamespace::ProximityReactor::__cordl_internal_set_from(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___from = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ProximityReactor::__cordl_internal_get_to()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___to;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ProximityReactor::__cordl_internal_get_to() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___to;
}
constexpr void GlobalNamespace::ProximityReactor::__cordl_internal_set_to(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___to = value;
}
constexpr float_t& GlobalNamespace::ProximityReactor::__cordl_internal_get_proximityMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityMin;
}
constexpr float_t const& GlobalNamespace::ProximityReactor::__cordl_internal_get_proximityMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityMin;
}
constexpr void GlobalNamespace::ProximityReactor::__cordl_internal_set_proximityMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proximityMin = value;
}
constexpr float_t& GlobalNamespace::ProximityReactor::__cordl_internal_get_proximityMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityMax;
}
constexpr float_t const& GlobalNamespace::ProximityReactor::__cordl_internal_get_proximityMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityMax;
}
constexpr void GlobalNamespace::ProximityReactor::__cordl_internal_set_proximityMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proximityMax = value;
}
constexpr float_t& GlobalNamespace::ProximityReactor::__cordl_internal_get__distance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distance;
}
constexpr float_t const& GlobalNamespace::ProximityReactor::__cordl_internal_get__distance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distance;
}
constexpr void GlobalNamespace::ProximityReactor::__cordl_internal_set__distance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____distance = value;
}
constexpr float_t& GlobalNamespace::ProximityReactor::__cordl_internal_get__distanceLinear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceLinear;
}
constexpr float_t const& GlobalNamespace::ProximityReactor::__cordl_internal_get__distanceLinear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceLinear;
}
constexpr void GlobalNamespace::ProximityReactor::__cordl_internal_set__distanceLinear(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____distanceLinear = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GlobalNamespace::ProximityReactor::__cordl_internal_get_onProximityChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onProximityChanged;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GlobalNamespace::ProximityReactor::__cordl_internal_get_onProximityChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onProximityChanged;
}
constexpr void GlobalNamespace::ProximityReactor::__cordl_internal_set_onProximityChanged(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onProximityChanged = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GlobalNamespace::ProximityReactor::__cordl_internal_get_onProximityChangedLinear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onProximityChangedLinear;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GlobalNamespace::ProximityReactor::__cordl_internal_get_onProximityChangedLinear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onProximityChangedLinear;
}
constexpr void GlobalNamespace::ProximityReactor::__cordl_internal_set_onProximityChangedLinear(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onProximityChangedLinear = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GlobalNamespace::ProximityReactor::__cordl_internal_get_onBelowMinProximity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBelowMinProximity;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GlobalNamespace::ProximityReactor::__cordl_internal_get_onBelowMinProximity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBelowMinProximity;
}
constexpr void GlobalNamespace::ProximityReactor::__cordl_internal_set_onBelowMinProximity(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onBelowMinProximity = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GlobalNamespace::ProximityReactor::__cordl_internal_get_onAboveMaxProximity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAboveMaxProximity;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GlobalNamespace::ProximityReactor::__cordl_internal_get_onAboveMaxProximity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAboveMaxProximity;
}
constexpr void GlobalNamespace::ProximityReactor::__cordl_internal_set_onAboveMaxProximity(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onAboveMaxProximity = value;
}
inline float_t GlobalNamespace::ProximityReactor::get_proximityRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"get_proximityRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::ProximityReactor::get_distance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"get_distance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::ProximityReactor::get_distanceLinear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"get_distanceLinear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::ProximityReactor::SetRigFrom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"SetRigFrom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProximityReactor::SetRigTo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"SetRigTo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProximityReactor::SetTransformFrom(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"SetTransformFrom", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::ProximityReactor::SetTransformTo(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"SetTransformTo", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::ProximityReactor::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProximityReactor::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProximityReactor::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProximityReactor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityReactor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProximityReactor* GlobalNamespace::ProximityReactor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProximityReactor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProximityReactor::ProximityReactor()   {
}
