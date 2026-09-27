#pragma once
// IWYU pragma private; include "GlobalNamespace/CallLimiter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CallLimiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CallLimiter::*)()>(&::GlobalNamespace::CallLimiter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac3f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimiter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CallLimiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CallLimiter::*)(int32_t, float_t, float_t)>(&::GlobalNamespace::CallLimiter::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ac3f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimiter*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CallLimiter.GetCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CallLimiter* (::GlobalNamespace::CallLimiter::*)()>(&::GlobalNamespace::CallLimiter::GetCopy)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ac4034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CallLimiter*>(),
                    {::i2c::class_of<::GlobalNamespace::CallLimiter*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CallLimiter.CheckCallServerTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CallLimiter::*)(double_t)>(&::GlobalNamespace::CallLimiter::CheckCallServerTime)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5ac40a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimiter*>(),
                        {"CheckCallServerTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CallLimiter.CheckCallTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CallLimiter::*)(float_t)>(&::GlobalNamespace::CallLimiter::CheckCallTime)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ac4200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CallLimiter*>(),
                    {::i2c::class_of<::GlobalNamespace::CallLimiter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CallLimiter.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CallLimiter::*)()>(&::GlobalNamespace::CallLimiter::Reset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ac427c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CallLimiter*>(),
                    {::i2c::class_of<::GlobalNamespace::CallLimiter*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& GlobalNamespace::CallLimiter::__cordl_internal_get_callTimeHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callTimeHistory;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::CallLimiter::__cordl_internal_get_callTimeHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callTimeHistory;
}
constexpr void GlobalNamespace::CallLimiter::__cordl_internal_set_callTimeHistory(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callTimeHistory = value;
}
constexpr int32_t& GlobalNamespace::CallLimiter::__cordl_internal_get_callHistoryLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callHistoryLength;
}
constexpr int32_t const& GlobalNamespace::CallLimiter::__cordl_internal_get_callHistoryLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callHistoryLength;
}
constexpr void GlobalNamespace::CallLimiter::__cordl_internal_set_callHistoryLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callHistoryLength = value;
}
constexpr float_t& GlobalNamespace::CallLimiter::__cordl_internal_get_timeCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeCooldown;
}
constexpr float_t const& GlobalNamespace::CallLimiter::__cordl_internal_get_timeCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeCooldown;
}
constexpr void GlobalNamespace::CallLimiter::__cordl_internal_set_timeCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeCooldown = value;
}
constexpr double_t& GlobalNamespace::CallLimiter::__cordl_internal_get_maxLatency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLatency;
}
constexpr double_t const& GlobalNamespace::CallLimiter::__cordl_internal_get_maxLatency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLatency;
}
constexpr void GlobalNamespace::CallLimiter::__cordl_internal_set_maxLatency(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxLatency = value;
}
constexpr int32_t& GlobalNamespace::CallLimiter::__cordl_internal_get_oldTimeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldTimeIndex;
}
constexpr int32_t const& GlobalNamespace::CallLimiter::__cordl_internal_get_oldTimeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldTimeIndex;
}
constexpr void GlobalNamespace::CallLimiter::__cordl_internal_set_oldTimeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oldTimeIndex = value;
}
constexpr bool& GlobalNamespace::CallLimiter::__cordl_internal_get_blockCall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockCall;
}
constexpr bool const& GlobalNamespace::CallLimiter::__cordl_internal_get_blockCall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockCall;
}
constexpr void GlobalNamespace::CallLimiter::__cordl_internal_set_blockCall(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockCall = value;
}
constexpr float_t& GlobalNamespace::CallLimiter::__cordl_internal_get_blockStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockStartTime;
}
constexpr float_t const& GlobalNamespace::CallLimiter::__cordl_internal_get_blockStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockStartTime;
}
constexpr void GlobalNamespace::CallLimiter::__cordl_internal_set_blockStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockStartTime = value;
}
inline void GlobalNamespace::CallLimiter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimiter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CallLimiter::_ctor(int32_t  historyLength, float_t  coolDown, float_t  latencyMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimiter*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, historyLength, coolDown, latencyMax);
}
inline ::GlobalNamespace::CallLimiter* GlobalNamespace::CallLimiter::GetCopy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CallLimiter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CallLimiter*>(this, ___internal_method);
}
inline bool GlobalNamespace::CallLimiter::CheckCallServerTime(double_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimiter*>(),
                        {"CheckCallServerTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, time);
}
inline bool GlobalNamespace::CallLimiter::CheckCallTime(float_t  time)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CallLimiter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, time);
}
inline void GlobalNamespace::CallLimiter::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CallLimiter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CallLimiter* GlobalNamespace::CallLimiter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CallLimiter*>());
}
inline ::GlobalNamespace::CallLimiter* GlobalNamespace::CallLimiter::New_ctor(int32_t  historyLength, float_t  coolDown, float_t  latencyMax)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CallLimiter*>(historyLength, coolDown, latencyMax));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CallLimiter::CallLimiter()   {
}
