#pragma once
// IWYU pragma private; include "GlobalNamespace/GetPlayerDataRequest.hpp"
#include "GlobalNamespace/zzzz__KIDRequestData_impl.hpp"
#include "GlobalNamespace/zzzz__GetPlayerDataRequest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetPlayerDataRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetPlayerDataRequest::*)()>(&::GlobalNamespace::GetPlayerDataRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a262a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerDataRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GetPlayerDataRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerDataRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GetPlayerDataRequest* GlobalNamespace::GetPlayerDataRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GetPlayerDataRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetPlayerDataRequest::GetPlayerDataRequest()   {
}
