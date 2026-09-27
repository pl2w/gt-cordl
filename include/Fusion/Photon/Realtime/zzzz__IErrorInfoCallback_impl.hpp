#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/IErrorInfoCallback.hpp"
#include "Fusion/Photon/Realtime/zzzz__IErrorInfoCallback_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__ErrorInfo_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::IErrorInfoCallback.OnErrorInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::IErrorInfoCallback::*)(::Fusion::Photon::Realtime::ErrorInfo*)>(&::Fusion::Photon::Realtime::IErrorInfoCallback::OnErrorInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::IErrorInfoCallback*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::IErrorInfoCallback*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Fusion::Photon::Realtime::IErrorInfoCallback::OnErrorInfo(::Fusion::Photon::Realtime::ErrorInfo*  errorInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::IErrorInfoCallback*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorInfo);
}
