#pragma once
// IWYU pragma private; include "Pathfinding/AutoRepathPolicy.hpp"
#include "Pathfinding/zzzz__AutoRepathPolicy_Mode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__AutoRepathPolicy_def.hpp"
#include "Pathfinding/zzzz__AutoRepathPolicy_Mode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::AutoRepathPolicy.ShouldRecalculatePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AutoRepathPolicy::*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3)>(&::Pathfinding::AutoRepathPolicy::ShouldRecalculatePath)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5e56558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AutoRepathPolicy*>(),
                    {::i2c::class_of<::Pathfinding::AutoRepathPolicy*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AutoRepathPolicy.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AutoRepathPolicy::*)()>(&::Pathfinding::AutoRepathPolicy::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e56688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AutoRepathPolicy*>(),
                    {::i2c::class_of<::Pathfinding::AutoRepathPolicy*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AutoRepathPolicy.DidRecalculatePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AutoRepathPolicy::*)(::UnityEngine::Vector3)>(&::Pathfinding::AutoRepathPolicy::DidRecalculatePath)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e56694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AutoRepathPolicy*>(),
                    {::i2c::class_of<::Pathfinding::AutoRepathPolicy*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AutoRepathPolicy.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AutoRepathPolicy::*)(::UnityEngine::Vector3, float_t)>(&::Pathfinding::AutoRepathPolicy::DrawGizmos)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5e566d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AutoRepathPolicy*>(),
                        {"DrawGizmos", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AutoRepathPolicy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AutoRepathPolicy::*)()>(&::Pathfinding::AutoRepathPolicy::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e567e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AutoRepathPolicy*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AutoRepathPolicy_Mode& Pathfinding::AutoRepathPolicy::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::AutoRepathPolicy_Mode const& Pathfinding::AutoRepathPolicy::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void Pathfinding::AutoRepathPolicy::__cordl_internal_set_mode(::GlobalNamespace::AutoRepathPolicy_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr float_t& Pathfinding::AutoRepathPolicy::__cordl_internal_get_period()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___period;
}
constexpr float_t const& Pathfinding::AutoRepathPolicy::__cordl_internal_get_period() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___period;
}
constexpr void Pathfinding::AutoRepathPolicy::__cordl_internal_set_period(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___period = value;
}
constexpr float_t& Pathfinding::AutoRepathPolicy::__cordl_internal_get_sensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sensitivity;
}
constexpr float_t const& Pathfinding::AutoRepathPolicy::__cordl_internal_get_sensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sensitivity;
}
constexpr void Pathfinding::AutoRepathPolicy::__cordl_internal_set_sensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sensitivity = value;
}
constexpr float_t& Pathfinding::AutoRepathPolicy::__cordl_internal_get_maximumPeriod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumPeriod;
}
constexpr float_t const& Pathfinding::AutoRepathPolicy::__cordl_internal_get_maximumPeriod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumPeriod;
}
constexpr void Pathfinding::AutoRepathPolicy::__cordl_internal_set_maximumPeriod(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maximumPeriod = value;
}
constexpr bool& Pathfinding::AutoRepathPolicy::__cordl_internal_get_visualizeSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualizeSensitivity;
}
constexpr bool const& Pathfinding::AutoRepathPolicy::__cordl_internal_get_visualizeSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualizeSensitivity;
}
constexpr void Pathfinding::AutoRepathPolicy::__cordl_internal_set_visualizeSensitivity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visualizeSensitivity = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::AutoRepathPolicy::__cordl_internal_get_lastDestination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDestination;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::AutoRepathPolicy::__cordl_internal_get_lastDestination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDestination;
}
constexpr void Pathfinding::AutoRepathPolicy::__cordl_internal_set_lastDestination(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastDestination = value;
}
constexpr float_t& Pathfinding::AutoRepathPolicy::__cordl_internal_get_lastRepathTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRepathTime;
}
constexpr float_t const& Pathfinding::AutoRepathPolicy::__cordl_internal_get_lastRepathTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRepathTime;
}
constexpr void Pathfinding::AutoRepathPolicy::__cordl_internal_set_lastRepathTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRepathTime = value;
}
inline bool Pathfinding::AutoRepathPolicy::ShouldRecalculatePath(::UnityEngine::Vector3  position, float_t  radius, ::UnityEngine::Vector3  destination)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AutoRepathPolicy*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, radius, destination);
}
inline void Pathfinding::AutoRepathPolicy::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AutoRepathPolicy*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AutoRepathPolicy::DidRecalculatePath(::UnityEngine::Vector3  destination)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AutoRepathPolicy*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void Pathfinding::AutoRepathPolicy::DrawGizmos(::UnityEngine::Vector3  position, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AutoRepathPolicy*>(),
                        {"DrawGizmos", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, radius);
}
inline void Pathfinding::AutoRepathPolicy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AutoRepathPolicy*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::AutoRepathPolicy* Pathfinding::AutoRepathPolicy::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AutoRepathPolicy*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::AutoRepathPolicy::AutoRepathPolicy()   {
}
