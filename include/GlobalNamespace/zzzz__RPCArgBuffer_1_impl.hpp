#pragma once
// IWYU pragma private; include "GlobalNamespace/RPCArgBuffer_1.hpp"
#include "GlobalNamespace/zzzz__RPCArgBuffer_1_def.hpp"
template<typename T>
inline void GlobalNamespace::RPCArgBuffer_1<T>::_ctor(T  argStruct)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RPCArgBuffer_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, argStruct);
}
// Ctor Parameters [CppParam { name: "Args", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DataLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::RPCArgBuffer_1<T>::RPCArgBuffer_1(T  Args, ::ArrayW<uint8_t>  Data, int32_t  DataLength) noexcept  {
this->Args = Args;
this->Data = Data;
this->DataLength = DataLength;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::RPCArgBuffer_1<T>::RPCArgBuffer_1()   {
}
