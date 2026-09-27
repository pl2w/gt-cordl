#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/CountdownTimer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__CountdownTimer_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::CountdownTimer.get_CountdownOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Samples::CountdownTimer::*)()>(&::Oculus::Interaction::Samples::CountdownTimer::get_CountdownOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa437340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CountdownTimer*>(),
                        {"get_CountdownOn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::CountdownTimer.set_CountdownOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::CountdownTimer::*)(bool)>(&::Oculus::Interaction::Samples::CountdownTimer::set_CountdownOn)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa437348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CountdownTimer*>(),
                        {"set_CountdownOn", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::CountdownTimer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::CountdownTimer::*)()>(&::Oculus::Interaction::Samples::CountdownTimer::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa437368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CountdownTimer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::CountdownTimer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::CountdownTimer::*)()>(&::Oculus::Interaction::Samples::CountdownTimer::Update)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa43736c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CountdownTimer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::CountdownTimer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::CountdownTimer::*)()>(&::Oculus::Interaction::Samples::CountdownTimer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa43743c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CountdownTimer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::Samples::CountdownTimer::__cordl_internal_get__countdownTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countdownTime;
}
constexpr float_t const& Oculus::Interaction::Samples::CountdownTimer::__cordl_internal_get__countdownTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countdownTime;
}
constexpr void Oculus::Interaction::Samples::CountdownTimer::__cordl_internal_set__countdownTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____countdownTime = value;
}
constexpr bool& Oculus::Interaction::Samples::CountdownTimer::__cordl_internal_get__countdownOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countdownOn;
}
constexpr bool const& Oculus::Interaction::Samples::CountdownTimer::__cordl_internal_get__countdownOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countdownOn;
}
constexpr void Oculus::Interaction::Samples::CountdownTimer::__cordl_internal_set__countdownOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____countdownOn = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::Samples::CountdownTimer::__cordl_internal_get__callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callback;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::Samples::CountdownTimer::__cordl_internal_get__callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callback;
}
constexpr void Oculus::Interaction::Samples::CountdownTimer::__cordl_internal_set__callback(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callback = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& Oculus::Interaction::Samples::CountdownTimer::__cordl_internal_get__progressCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressCallback;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& Oculus::Interaction::Samples::CountdownTimer::__cordl_internal_get__progressCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressCallback;
}
constexpr void Oculus::Interaction::Samples::CountdownTimer::__cordl_internal_set__progressCallback(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progressCallback = value;
}
constexpr float_t& Oculus::Interaction::Samples::CountdownTimer::__cordl_internal_get__countdownTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countdownTimer;
}
constexpr float_t const& Oculus::Interaction::Samples::CountdownTimer::__cordl_internal_get__countdownTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countdownTimer;
}
constexpr void Oculus::Interaction::Samples::CountdownTimer::__cordl_internal_set__countdownTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____countdownTimer = value;
}
inline bool Oculus::Interaction::Samples::CountdownTimer::get_CountdownOn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CountdownTimer*>(),
                        {"get_CountdownOn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::CountdownTimer::set_CountdownOn(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CountdownTimer*>(),
                        {"set_CountdownOn", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Samples::CountdownTimer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CountdownTimer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::CountdownTimer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CountdownTimer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::CountdownTimer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CountdownTimer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::CountdownTimer* Oculus::Interaction::Samples::CountdownTimer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::CountdownTimer*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::CountdownTimer::CountdownTimer()   {
}
