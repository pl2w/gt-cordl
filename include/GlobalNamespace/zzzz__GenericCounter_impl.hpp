#pragma once
// IWYU pragma private; include "GlobalNamespace/GenericCounter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GenericCounter_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GenericCounter.CountUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GenericCounter::*)()>(&::GlobalNamespace::GenericCounter::CountUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x579d254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericCounter*>(),
                        {"CountUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GenericCounter.CountDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GenericCounter::*)()>(&::GlobalNamespace::GenericCounter::CountDown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x579d2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericCounter*>(),
                        {"CountDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GenericCounter.DoCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GenericCounter::*)()>(&::GlobalNamespace::GenericCounter::DoCallbacks)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x579d264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericCounter*>(),
                        {"DoCallbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GenericCounter.ResetCounter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GenericCounter::*)()>(&::GlobalNamespace::GenericCounter::ResetCounter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579d2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericCounter*>(),
                        {"ResetCounter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GenericCounter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GenericCounter::*)()>(&::GlobalNamespace::GenericCounter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579d2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericCounter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GenericCounter::__cordl_internal_get_Threshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Threshold;
}
constexpr int32_t const& GlobalNamespace::GenericCounter::__cordl_internal_get_Threshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Threshold;
}
constexpr void GlobalNamespace::GenericCounter::__cordl_internal_set_Threshold(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Threshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::GenericCounter::__cordl_internal_get_whenLessThan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whenLessThan;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::GenericCounter::__cordl_internal_get_whenLessThan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whenLessThan;
}
constexpr void GlobalNamespace::GenericCounter::__cordl_internal_set_whenLessThan(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whenLessThan = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::GenericCounter::__cordl_internal_get_whenEqual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whenEqual;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::GenericCounter::__cordl_internal_get_whenEqual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whenEqual;
}
constexpr void GlobalNamespace::GenericCounter::__cordl_internal_set_whenEqual(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whenEqual = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::GenericCounter::__cordl_internal_get_whenGreaterThan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whenGreaterThan;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::GenericCounter::__cordl_internal_get_whenGreaterThan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whenGreaterThan;
}
constexpr void GlobalNamespace::GenericCounter::__cordl_internal_set_whenGreaterThan(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whenGreaterThan = value;
}
constexpr int32_t& GlobalNamespace::GenericCounter::__cordl_internal_get_currentCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCount;
}
constexpr int32_t const& GlobalNamespace::GenericCounter::__cordl_internal_get_currentCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCount;
}
constexpr void GlobalNamespace::GenericCounter::__cordl_internal_set_currentCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentCount = value;
}
inline void GlobalNamespace::GenericCounter::CountUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericCounter*>(),
                        {"CountUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GenericCounter::CountDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericCounter*>(),
                        {"CountDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GenericCounter::DoCallbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericCounter*>(),
                        {"DoCallbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GenericCounter::ResetCounter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericCounter*>(),
                        {"ResetCounter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GenericCounter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericCounter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GenericCounter* GlobalNamespace::GenericCounter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GenericCounter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GenericCounter::GenericCounter()   {
}
