#pragma once
// IWYU pragma private; include "GlobalNamespace/RadialBoundsTrigger.hpp"
#include "GlobalNamespace/zzzz__Id32_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RadialBoundsTrigger_def.hpp"
#include "GlobalNamespace/zzzz__RadialBounds_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RadialBoundsTrigger.TestOverlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadialBoundsTrigger::*)()>(&::GlobalNamespace::RadialBoundsTrigger::TestOverlap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597de8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBoundsTrigger*>(),
                        {"TestOverlap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadialBoundsTrigger.TestOverlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadialBoundsTrigger::*)(bool)>(&::GlobalNamespace::RadialBoundsTrigger::TestOverlap)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x597de94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBoundsTrigger*>(),
                        {"TestOverlap", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadialBoundsTrigger.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadialBoundsTrigger::*)()>(&::GlobalNamespace::RadialBoundsTrigger::FixedUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597e174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBoundsTrigger*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadialBoundsTrigger.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadialBoundsTrigger::*)()>(&::GlobalNamespace::RadialBoundsTrigger::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x597e17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBoundsTrigger*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadialBoundsTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadialBoundsTrigger::*)()>(&::GlobalNamespace::RadialBoundsTrigger::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x597e27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBoundsTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::Id32& GlobalNamespace::RadialBoundsTrigger::__cordl_internal_get__triggerID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerID;
}
constexpr ::GlobalNamespace::Id32 const& GlobalNamespace::RadialBoundsTrigger::__cordl_internal_get__triggerID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerID;
}
constexpr void GlobalNamespace::RadialBoundsTrigger::__cordl_internal_set__triggerID(::GlobalNamespace::Id32  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triggerID = value;
}
constexpr ::UnityW<::GlobalNamespace::RadialBounds>& GlobalNamespace::RadialBoundsTrigger::__cordl_internal_get_object1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___object1;
}
constexpr ::UnityW<::GlobalNamespace::RadialBounds> const& GlobalNamespace::RadialBoundsTrigger::__cordl_internal_get_object1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___object1;
}
constexpr void GlobalNamespace::RadialBoundsTrigger::__cordl_internal_set_object1(::UnityW<::GlobalNamespace::RadialBounds>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___object1 = value;
}
constexpr ::UnityW<::GlobalNamespace::RadialBounds>& GlobalNamespace::RadialBoundsTrigger::__cordl_internal_get_object2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___object2;
}
constexpr ::UnityW<::GlobalNamespace::RadialBounds> const& GlobalNamespace::RadialBoundsTrigger::__cordl_internal_get_object2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___object2;
}
constexpr void GlobalNamespace::RadialBoundsTrigger::__cordl_internal_set_object2(::UnityW<::GlobalNamespace::RadialBounds>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___object2 = value;
}
constexpr float_t& GlobalNamespace::RadialBoundsTrigger::__cordl_internal_get_hysteresis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hysteresis;
}
constexpr float_t const& GlobalNamespace::RadialBoundsTrigger::__cordl_internal_get_hysteresis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hysteresis;
}
constexpr void GlobalNamespace::RadialBoundsTrigger::__cordl_internal_set_hysteresis(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hysteresis = value;
}
constexpr bool& GlobalNamespace::RadialBoundsTrigger::__cordl_internal_get__raiseEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raiseEvents;
}
constexpr bool const& GlobalNamespace::RadialBoundsTrigger::__cordl_internal_get__raiseEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raiseEvents;
}
constexpr void GlobalNamespace::RadialBoundsTrigger::__cordl_internal_set__raiseEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raiseEvents = value;
}
constexpr bool& GlobalNamespace::RadialBoundsTrigger::__cordl_internal_get__overlapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlapping;
}
constexpr bool const& GlobalNamespace::RadialBoundsTrigger::__cordl_internal_get__overlapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlapping;
}
constexpr void GlobalNamespace::RadialBoundsTrigger::__cordl_internal_set__overlapping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overlapping = value;
}
constexpr float_t& GlobalNamespace::RadialBoundsTrigger::__cordl_internal_get__timeSpentInOverlap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSpentInOverlap;
}
constexpr float_t const& GlobalNamespace::RadialBoundsTrigger::__cordl_internal_get__timeSpentInOverlap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSpentInOverlap;
}
constexpr void GlobalNamespace::RadialBoundsTrigger::__cordl_internal_set__timeSpentInOverlap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeSpentInOverlap = value;
}
constexpr float_t& GlobalNamespace::RadialBoundsTrigger::__cordl_internal_get__timeOverlapStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeOverlapStarted;
}
constexpr float_t const& GlobalNamespace::RadialBoundsTrigger::__cordl_internal_get__timeOverlapStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeOverlapStarted;
}
constexpr void GlobalNamespace::RadialBoundsTrigger::__cordl_internal_set__timeOverlapStarted(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeOverlapStarted = value;
}
constexpr float_t& GlobalNamespace::RadialBoundsTrigger::__cordl_internal_get__timeOverlapStopped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeOverlapStopped;
}
constexpr float_t const& GlobalNamespace::RadialBoundsTrigger::__cordl_internal_get__timeOverlapStopped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeOverlapStopped;
}
constexpr void GlobalNamespace::RadialBoundsTrigger::__cordl_internal_set__timeOverlapStopped(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeOverlapStopped = value;
}
inline void GlobalNamespace::RadialBoundsTrigger::TestOverlap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBoundsTrigger*>(),
                        {"TestOverlap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadialBoundsTrigger::TestOverlap(bool  raiseEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBoundsTrigger*>(),
                        {"TestOverlap", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, raiseEvents);
}
inline void GlobalNamespace::RadialBoundsTrigger::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBoundsTrigger*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadialBoundsTrigger::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBoundsTrigger*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadialBoundsTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialBoundsTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RadialBoundsTrigger* GlobalNamespace::RadialBoundsTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RadialBoundsTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RadialBoundsTrigger::RadialBoundsTrigger()   {
}
