#pragma once
// IWYU pragma private; include "Fusion/_8.hpp"
#include "Fusion/zzzz___8__Data_e__FixedBuffer_impl.hpp"
#include "Fusion/zzzz___8_def.hpp"
#include "Fusion/zzzz__IFixedStorage_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz___8__Data_e__FixedBuffer_def.hpp"
constexpr ::GlobalNamespace::_8__Data_e__FixedBuffer& Fusion::_8::__cordl_internal_get_Data()  {
return this->___Data;
}
constexpr ::GlobalNamespace::_8__Data_e__FixedBuffer const& Fusion::_8::__cordl_internal_get_Data() const {
return this->___Data;
}
constexpr void Fusion::_8::__cordl_internal_set_Data(::GlobalNamespace::_8__Data_e__FixedBuffer  value)  {
this->___Data = value;
}
constexpr uint32_t& Fusion::_8::__cordl_internal_get__data0()  {
return this->____data0;
}
constexpr uint32_t const& Fusion::_8::__cordl_internal_get__data0() const {
return this->____data0;
}
constexpr void Fusion::_8::__cordl_internal_set__data0(uint32_t  value)  {
this->____data0 = value;
}
constexpr uint32_t& Fusion::_8::__cordl_internal_get__data1()  {
return this->____data1;
}
constexpr uint32_t const& Fusion::_8::__cordl_internal_get__data1() const {
return this->____data1;
}
constexpr void Fusion::_8::__cordl_internal_set__data1(uint32_t  value)  {
this->____data1 = value;
}
constexpr uint32_t& Fusion::_8::__cordl_internal_get__data2()  {
return this->____data2;
}
constexpr uint32_t const& Fusion::_8::__cordl_internal_get__data2() const {
return this->____data2;
}
constexpr void Fusion::_8::__cordl_internal_set__data2(uint32_t  value)  {
this->____data2 = value;
}
constexpr uint32_t& Fusion::_8::__cordl_internal_get__data3()  {
return this->____data3;
}
constexpr uint32_t const& Fusion::_8::__cordl_internal_get__data3() const {
return this->____data3;
}
constexpr void Fusion::_8::__cordl_internal_set__data3(uint32_t  value)  {
this->____data3 = value;
}
constexpr uint32_t& Fusion::_8::__cordl_internal_get__data4()  {
return this->____data4;
}
constexpr uint32_t const& Fusion::_8::__cordl_internal_get__data4() const {
return this->____data4;
}
constexpr void Fusion::_8::__cordl_internal_set__data4(uint32_t  value)  {
this->____data4 = value;
}
constexpr uint32_t& Fusion::_8::__cordl_internal_get__data5()  {
return this->____data5;
}
constexpr uint32_t const& Fusion::_8::__cordl_internal_get__data5() const {
return this->____data5;
}
constexpr void Fusion::_8::__cordl_internal_set__data5(uint32_t  value)  {
this->____data5 = value;
}
constexpr uint32_t& Fusion::_8::__cordl_internal_get__data6()  {
return this->____data6;
}
constexpr uint32_t const& Fusion::_8::__cordl_internal_get__data6() const {
return this->____data6;
}
constexpr void Fusion::_8::__cordl_internal_set__data6(uint32_t  value)  {
this->____data6 = value;
}
constexpr uint32_t& Fusion::_8::__cordl_internal_get__data7()  {
return this->____data7;
}
constexpr uint32_t const& Fusion::_8::__cordl_internal_get__data7() const {
return this->____data7;
}
constexpr void Fusion::_8::__cordl_internal_set__data7(uint32_t  value)  {
this->____data7 = value;
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::_8::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::_8::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Fusion::IFixedStorage"
constexpr  Fusion::_8::operator ::Fusion::IFixedStorage*()  {
return static_cast<::Fusion::IFixedStorage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::IFixedStorage"
constexpr ::Fusion::IFixedStorage* Fusion::_8::i___Fusion__IFixedStorage()  {
return static_cast<::Fusion::IFixedStorage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "::GlobalNamespace::_8__Data_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data0", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data1", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data2", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data3", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data4", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data5", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data6", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data7", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::_8::_8(::GlobalNamespace::_8__Data_e__FixedBuffer  Data, uint32_t  _data0, uint32_t  _data1, uint32_t  _data2, uint32_t  _data3, uint32_t  _data4, uint32_t  _data5, uint32_t  _data6, uint32_t  _data7) noexcept  {
this->Data = Data;
this->_data0 = _data0;
this->_data1 = _data1;
this->_data2 = _data2;
this->_data3 = _data3;
this->_data4 = _data4;
this->_data5 = _data5;
this->_data6 = _data6;
this->_data7 = _data7;
}
// Ctor Parameters []
constexpr ::Fusion::_8::_8()   {
}
