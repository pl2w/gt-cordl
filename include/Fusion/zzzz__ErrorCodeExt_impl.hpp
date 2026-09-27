#pragma once
// IWYU pragma private; include "Fusion/ErrorCodeExt.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__ErrorCodeExt_def.hpp"
#include "Fusion/zzzz__ShutdownReason_def.hpp"
//  Writing Method size for method: ::Fusion::ErrorCodeExt.ConvertToShutdownReason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::ShutdownReason (*)(int16_t)>(&::Fusion::ErrorCodeExt::ConvertToShutdownReason)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f719f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ErrorCodeExt*>(),
                        {"ConvertToShutdownReason", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Fusion::ShutdownReason Fusion::ErrorCodeExt::ConvertToShutdownReason(int16_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ErrorCodeExt*>(),
                        {"ConvertToShutdownReason", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::ShutdownReason>(nullptr, ___internal_method, errorCode);
}
// Ctor Parameters []
constexpr ::Fusion::ErrorCodeExt::ErrorCodeExt()   {
}
