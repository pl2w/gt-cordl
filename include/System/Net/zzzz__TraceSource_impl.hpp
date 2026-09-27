#pragma once
// IWYU pragma private; include "System/Net/TraceSource.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__TraceSource_def.hpp"
//  Writing Method size for method: ::System::Net::TraceSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TraceSource::*)()>(&::System::Net::TraceSource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac89800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TraceSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::TraceSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TraceSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::TraceSource* System::Net::TraceSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::TraceSource*>());
}
// Ctor Parameters []
constexpr ::System::Net::TraceSource::TraceSource()   {
}
