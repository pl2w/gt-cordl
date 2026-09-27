#pragma once
// IWYU pragma private; include "GlobalNamespace/RadialBounds.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__RadialBounds_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RadialBounds.get_localCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::RadialBounds::*)()>(&::GlobalNamespace::RadialBounds::get_localCenter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x597dd78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBounds*>(),
                        {"get_localCenter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadialBounds.set_localCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadialBounds::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::RadialBounds::set_localCenter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x597dd84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBounds*>(),
                        {"set_localCenter", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadialBounds.get_localRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RadialBounds::*)()>(&::GlobalNamespace::RadialBounds::get_localRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597dd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBounds*>(),
                        {"get_localRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadialBounds.set_localRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadialBounds::*)(float_t)>(&::GlobalNamespace::RadialBounds::set_localRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597dd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBounds*>(),
                        {"set_localRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadialBounds.get_center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::RadialBounds::*)()>(&::GlobalNamespace::RadialBounds::get_center)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x597dda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBounds*>(),
                        {"get_center", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadialBounds.get_radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RadialBounds::*)()>(&::GlobalNamespace::RadialBounds::get_radius)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x597ddcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBounds*>(),
                        {"get_radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadialBounds._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadialBounds::*)()>(&::GlobalNamespace::RadialBounds::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x597de7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBounds*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::RadialBounds::__cordl_internal_get__localCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localCenter;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::RadialBounds::__cordl_internal_get__localCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localCenter;
}
constexpr void GlobalNamespace::RadialBounds::__cordl_internal_set__localCenter(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localCenter = value;
}
constexpr float_t& GlobalNamespace::RadialBounds::__cordl_internal_get__localRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localRadius;
}
constexpr float_t const& GlobalNamespace::RadialBounds::__cordl_internal_get__localRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localRadius;
}
constexpr void GlobalNamespace::RadialBounds::__cordl_internal_set__localRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localRadius = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::RadialBounds>>*& GlobalNamespace::RadialBounds::__cordl_internal_get_onOverlapEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onOverlapEnter;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::RadialBounds>>* const& GlobalNamespace::RadialBounds::__cordl_internal_get_onOverlapEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onOverlapEnter;
}
constexpr void GlobalNamespace::RadialBounds::__cordl_internal_set_onOverlapEnter(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::RadialBounds>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onOverlapEnter = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::RadialBounds>>*& GlobalNamespace::RadialBounds::__cordl_internal_get_onOverlapExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onOverlapExit;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::RadialBounds>>* const& GlobalNamespace::RadialBounds::__cordl_internal_get_onOverlapExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onOverlapExit;
}
constexpr void GlobalNamespace::RadialBounds::__cordl_internal_set_onOverlapExit(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::RadialBounds>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onOverlapExit = value;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::RadialBounds>,float_t>*& GlobalNamespace::RadialBounds::__cordl_internal_get_onOverlapStay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onOverlapStay;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::RadialBounds>,float_t>* const& GlobalNamespace::RadialBounds::__cordl_internal_get_onOverlapStay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onOverlapStay;
}
constexpr void GlobalNamespace::RadialBounds::__cordl_internal_set_onOverlapStay(::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::RadialBounds>,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onOverlapStay = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::RadialBounds::get_localCenter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBounds*>(),
                        {"get_localCenter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::RadialBounds::set_localCenter(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBounds*>(),
                        {"set_localCenter", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::RadialBounds::get_localRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBounds*>(),
                        {"get_localRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::RadialBounds::set_localRadius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBounds*>(),
                        {"set_localRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::RadialBounds::get_center()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBounds*>(),
                        {"get_center", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t GlobalNamespace::RadialBounds::get_radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBounds*>(),
                        {"get_radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::RadialBounds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBounds*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RadialBounds* GlobalNamespace::RadialBounds::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RadialBounds*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RadialBounds::RadialBounds()   {
}
