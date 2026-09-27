#pragma once
// IWYU pragma private; include "Fusion/DisconnectReasonExt.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__DisconnectReasonExt_def.hpp"
#include "Fusion/Protocol/zzzz__DisconnectReason_def.hpp"
#include "Fusion/zzzz__ShutdownReason_def.hpp"
//  Writing Method size for method: ::Fusion::DisconnectReasonExt.ConvertToShutdownReason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::ShutdownReason (*)(::Fusion::Protocol::DisconnectReason)>(&::Fusion::DisconnectReasonExt::ConvertToShutdownReason)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f70f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DisconnectReasonExt*>(),
                        {"ConvertToShutdownReason", {}, {::i2c::type_of<::Fusion::Protocol::DisconnectReason>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Fusion::ShutdownReason Fusion::DisconnectReasonExt::ConvertToShutdownReason(::Fusion::Protocol::DisconnectReason  disconnectCause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DisconnectReasonExt*>(),
                        {"ConvertToShutdownReason", {}, {::i2c::type_of<::Fusion::Protocol::DisconnectReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::ShutdownReason>(nullptr, ___internal_method, disconnectCause);
}
// Ctor Parameters []
constexpr ::Fusion::DisconnectReasonExt::DisconnectReasonExt()   {
}
