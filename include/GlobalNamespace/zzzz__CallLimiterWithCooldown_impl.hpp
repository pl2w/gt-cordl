#pragma once
// IWYU pragma private; include "GlobalNamespace/CallLimiterWithCooldown.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_impl.hpp"
#include "GlobalNamespace/zzzz__CallLimiterWithCooldown_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CallLimiterWithCooldown._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CallLimiterWithCooldown::*)(float_t, int32_t, float_t)>(&::GlobalNamespace::CallLimiterWithCooldown::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ac42cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimiterWithCooldown*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CallLimiterWithCooldown._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CallLimiterWithCooldown::*)(float_t, int32_t, float_t, float_t)>(&::GlobalNamespace::CallLimiterWithCooldown::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ac42fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimiterWithCooldown*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CallLimiterWithCooldown.GetCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CallLimiter* (::GlobalNamespace::CallLimiterWithCooldown::*)()>(&::GlobalNamespace::CallLimiterWithCooldown::GetCopy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ac4328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CallLimiterWithCooldown*>(),
                    {::i2c::class_of<::GlobalNamespace::CallLimiterWithCooldown*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CallLimiterWithCooldown.CheckCallTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CallLimiterWithCooldown::*)(float_t)>(&::GlobalNamespace::CallLimiterWithCooldown::CheckCallTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ac43ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CallLimiterWithCooldown*>(),
                    {::i2c::class_of<::GlobalNamespace::CallLimiterWithCooldown*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CallLimiterWithCooldown::__cordl_internal_get_spamCoolDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spamCoolDown;
}
constexpr float_t const& GlobalNamespace::CallLimiterWithCooldown::__cordl_internal_get_spamCoolDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spamCoolDown;
}
constexpr void GlobalNamespace::CallLimiterWithCooldown::__cordl_internal_set_spamCoolDown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spamCoolDown = value;
}
inline void GlobalNamespace::CallLimiterWithCooldown::_ctor(float_t  coolDownSpam, int32_t  historyLength, float_t  coolDown)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimiterWithCooldown*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coolDownSpam, historyLength, coolDown);
}
inline void GlobalNamespace::CallLimiterWithCooldown::_ctor(float_t  coolDownSpam, int32_t  historyLength, float_t  coolDown, float_t  latencyMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimiterWithCooldown*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coolDownSpam, historyLength, coolDown, latencyMax);
}
inline ::GlobalNamespace::CallLimiter* GlobalNamespace::CallLimiterWithCooldown::GetCopy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CallLimiterWithCooldown*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CallLimiter*>(this, ___internal_method);
}
inline bool GlobalNamespace::CallLimiterWithCooldown::CheckCallTime(float_t  time)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CallLimiterWithCooldown*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, time);
}
inline ::GlobalNamespace::CallLimiterWithCooldown* GlobalNamespace::CallLimiterWithCooldown::New_ctor(float_t  coolDownSpam, int32_t  historyLength, float_t  coolDown)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CallLimiterWithCooldown*>(coolDownSpam, historyLength, coolDown));
}
inline ::GlobalNamespace::CallLimiterWithCooldown* GlobalNamespace::CallLimiterWithCooldown::New_ctor(float_t  coolDownSpam, int32_t  historyLength, float_t  coolDown, float_t  latencyMax)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CallLimiterWithCooldown*>(coolDownSpam, historyLength, coolDown, latencyMax));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CallLimiterWithCooldown::CallLimiterWithCooldown()   {
}
