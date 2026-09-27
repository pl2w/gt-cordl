#pragma once
// IWYU pragma private; include "Fusion/CodeGen/FixedStorage@4.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@4__Data_e__FixedBuffer_impl.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@4_def.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@4__Data_e__FixedBuffer_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
constexpr ::GlobalNamespace::FixedStorage@4__Data_e__FixedBuffer& Fusion::CodeGen::FixedStorage@4::__cordl_internal_get_Data()  {
return this->___Data;
}
constexpr ::GlobalNamespace::FixedStorage@4__Data_e__FixedBuffer const& Fusion::CodeGen::FixedStorage@4::__cordl_internal_get_Data() const {
return this->___Data;
}
constexpr void Fusion::CodeGen::FixedStorage@4::__cordl_internal_set_Data(::GlobalNamespace::FixedStorage@4__Data_e__FixedBuffer  value)  {
this->___Data = value;
}
constexpr int32_t& Fusion::CodeGen::FixedStorage@4::__cordl_internal_get__1()  {
return this->____1;
}
constexpr int32_t const& Fusion::CodeGen::FixedStorage@4::__cordl_internal_get__1() const {
return this->____1;
}
constexpr void Fusion::CodeGen::FixedStorage@4::__cordl_internal_set__1(int32_t  value)  {
this->____1 = value;
}
constexpr int32_t& Fusion::CodeGen::FixedStorage@4::__cordl_internal_get__2()  {
return this->____2;
}
constexpr int32_t const& Fusion::CodeGen::FixedStorage@4::__cordl_internal_get__2() const {
return this->____2;
}
constexpr void Fusion::CodeGen::FixedStorage@4::__cordl_internal_set__2(int32_t  value)  {
this->____2 = value;
}
constexpr int32_t& Fusion::CodeGen::FixedStorage@4::__cordl_internal_get__3()  {
return this->____3;
}
constexpr int32_t const& Fusion::CodeGen::FixedStorage@4::__cordl_internal_get__3() const {
return this->____3;
}
constexpr void Fusion::CodeGen::FixedStorage@4::__cordl_internal_set__3(int32_t  value)  {
this->____3 = value;
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::CodeGen::FixedStorage@4::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::CodeGen::FixedStorage@4::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "::GlobalNamespace::FixedStorage@4__Data_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_1", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::CodeGen::FixedStorage@4::FixedStorage@4(::GlobalNamespace::FixedStorage@4__Data_e__FixedBuffer  Data, int32_t  _1, int32_t  _2, int32_t  _3) noexcept  {
this->Data = Data;
this->_1 = _1;
this->_2 = _2;
this->_3 = _3;
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::FixedStorage@4::FixedStorage@4()   {
}
