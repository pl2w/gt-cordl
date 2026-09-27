#pragma once
// IWYU pragma private; include "Fusion/DisconnectCauseExt.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__DisconnectCauseExt_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Fusion/zzzz__ShutdownReason_def.hpp"
//  Writing Method size for method: ::Fusion::DisconnectCauseExt.ConvertToShutdownReason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::ShutdownReason (*)(::Fusion::Photon::Realtime::DisconnectCause)>(&::Fusion::DisconnectCauseExt::ConvertToShutdownReason)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f70c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DisconnectCauseExt*>(),
                        {"ConvertToShutdownReason", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Fusion::ShutdownReason Fusion::DisconnectCauseExt::ConvertToShutdownReason(::Fusion::Photon::Realtime::DisconnectCause  disconnectCause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DisconnectCauseExt*>(),
                        {"ConvertToShutdownReason", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::ShutdownReason>(nullptr, ___internal_method, disconnectCause);
}
// Ctor Parameters []
constexpr ::Fusion::DisconnectCauseExt::DisconnectCauseExt()   {
}
