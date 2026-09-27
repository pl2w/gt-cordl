#pragma once
// IWYU pragma private; include "Fusion/RpcSendResult.hpp"
#include "Fusion/zzzz__RpcSendMessageResult_impl.hpp"
#include "Fusion/zzzz__RpcSendResult_def.hpp"
//  Writing Method size for method: ::Fusion::RpcSendResult.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::RpcSendResult::*)()>(&::Fusion::RpcSendResult::ToString)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5fd14d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::RpcSendResult>(),
                    {::i2c::class_of<::Fusion::RpcSendResult>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::StringW Fusion::RpcSendResult::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::RpcSendResult>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Result", ty: "::Fusion::RpcSendMessageResult", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MessageSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::RpcSendResult::RpcSendResult(::Fusion::RpcSendMessageResult  Result, int32_t  MessageSize) noexcept  {
this->Result = Result;
this->MessageSize = MessageSize;
}
// Ctor Parameters []
constexpr ::Fusion::RpcSendResult::RpcSendResult()   {
}
