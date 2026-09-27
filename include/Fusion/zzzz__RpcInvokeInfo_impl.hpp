#pragma once
// IWYU pragma private; include "Fusion/RpcInvokeInfo.hpp"
#include "Fusion/zzzz__RpcLocalInvokeResult_impl.hpp"
#include "Fusion/zzzz__RpcSendCullResult_impl.hpp"
#include "Fusion/zzzz__RpcSendResult_impl.hpp"
#include "Fusion/zzzz__RpcInvokeInfo_def.hpp"
//  Writing Method size for method: ::Fusion::RpcInvokeInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::RpcInvokeInfo::*)()>(&::Fusion::RpcInvokeInfo::ToString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5fd13e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::RpcInvokeInfo>(),
                    {::i2c::class_of<::Fusion::RpcInvokeInfo>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::StringW Fusion::RpcInvokeInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::RpcInvokeInfo>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "LocalInvokeResult", ty: "::Fusion::RpcLocalInvokeResult", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SendCullResult", ty: "::Fusion::RpcSendCullResult", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SendResult", ty: "::Fusion::RpcSendResult", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::RpcInvokeInfo::RpcInvokeInfo(::Fusion::RpcLocalInvokeResult  LocalInvokeResult, ::Fusion::RpcSendCullResult  SendCullResult, ::Fusion::RpcSendResult  SendResult) noexcept  {
this->LocalInvokeResult = LocalInvokeResult;
this->SendCullResult = SendCullResult;
this->SendResult = SendResult;
}
// Ctor Parameters []
constexpr ::Fusion::RpcInvokeInfo::RpcInvokeInfo()   {
}
