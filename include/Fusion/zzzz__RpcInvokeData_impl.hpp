#pragma once
// IWYU pragma private; include "Fusion/RpcInvokeData.hpp"
#include "Fusion/zzzz__RpcInvokeData_def.hpp"
#include "Fusion/zzzz__RpcInvokeDelegate_def.hpp"
//  Writing Method size for method: ::Fusion::RpcInvokeData.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::RpcInvokeData::*)()>(&::Fusion::RpcInvokeData::ToString)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5fd10d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::RpcInvokeData>(),
                    {::i2c::class_of<::Fusion::RpcInvokeData>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::StringW Fusion::RpcInvokeData::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::RpcInvokeData>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Key", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Sources", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Targets", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Delegate", ty: "::Fusion::RpcInvokeDelegate*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::RpcInvokeData::RpcInvokeData(int32_t  Key, int32_t  Sources, int32_t  Targets, ::Fusion::RpcInvokeDelegate*  Delegate) noexcept  {
this->Key = Key;
this->Sources = Sources;
this->Targets = Targets;
this->Delegate = Delegate;
}
// Ctor Parameters []
constexpr ::Fusion::RpcInvokeData::RpcInvokeData()   {
}
