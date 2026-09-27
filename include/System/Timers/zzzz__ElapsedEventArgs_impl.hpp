#pragma once
// IWYU pragma private; include "System/Timers/ElapsedEventArgs.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Timers/zzzz__ElapsedEventArgs_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::Timers::ElapsedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::ElapsedEventArgs::*)(::System::DateTime)>(&::System::Timers::ElapsedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xad09324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::ElapsedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& System::Timers::ElapsedEventArgs::__cordl_internal_get_time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr ::System::DateTime const& System::Timers::ElapsedEventArgs::__cordl_internal_get_time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr void System::Timers::ElapsedEventArgs::__cordl_internal_set_time(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___time = value;
}
inline void System::Timers::ElapsedEventArgs::_ctor(::System::DateTime  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::ElapsedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline ::System::Timers::ElapsedEventArgs* System::Timers::ElapsedEventArgs::New_ctor(::System::DateTime  time)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Timers::ElapsedEventArgs*>(time));
}
// Ctor Parameters []
constexpr ::System::Timers::ElapsedEventArgs::ElapsedEventArgs()   {
}
