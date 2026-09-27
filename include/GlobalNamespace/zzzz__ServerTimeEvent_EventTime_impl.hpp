#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerTimeEvent_EventTime.hpp"
#include "GlobalNamespace/zzzz__ServerTimeEvent_EventTime_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ServerTimeEvent_EventTime._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerTimeEvent_EventTime::*)(int32_t, int32_t)>(&::GlobalNamespace::ServerTimeEvent_EventTime::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b23908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerTimeEvent_EventTime>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ServerTimeEvent_EventTime::_ctor(int32_t  h, int32_t  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerTimeEvent_EventTime>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, h, m);
}
// Ctor Parameters [CppParam { name: "hour", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minute", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ServerTimeEvent_EventTime::ServerTimeEvent_EventTime(int32_t  hour, int32_t  minute) noexcept  {
this->hour = hour;
this->minute = minute;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ServerTimeEvent_EventTime::ServerTimeEvent_EventTime()   {
}
