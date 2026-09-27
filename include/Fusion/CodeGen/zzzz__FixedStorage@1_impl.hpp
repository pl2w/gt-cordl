#pragma once
// IWYU pragma private; include "Fusion/CodeGen/FixedStorage@1.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@1__Data_e__FixedBuffer_impl.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@1_def.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@1__Data_e__FixedBuffer_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
constexpr ::GlobalNamespace::FixedStorage@1__Data_e__FixedBuffer& Fusion::CodeGen::FixedStorage@1::__cordl_internal_get_Data()  {
return this->___Data;
}
constexpr ::GlobalNamespace::FixedStorage@1__Data_e__FixedBuffer const& Fusion::CodeGen::FixedStorage@1::__cordl_internal_get_Data() const {
return this->___Data;
}
constexpr void Fusion::CodeGen::FixedStorage@1::__cordl_internal_set_Data(::GlobalNamespace::FixedStorage@1__Data_e__FixedBuffer  value)  {
this->___Data = value;
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::CodeGen::FixedStorage@1::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::CodeGen::FixedStorage@1::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "::GlobalNamespace::FixedStorage@1__Data_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::CodeGen::FixedStorage@1::FixedStorage@1(::GlobalNamespace::FixedStorage@1__Data_e__FixedBuffer  Data) noexcept  {
this->Data = Data;
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::FixedStorage@1::FixedStorage@1()   {
}
