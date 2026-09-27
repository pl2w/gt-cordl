#pragma once
// IWYU pragma private; include "Fusion/_4.hpp"
#include "Fusion/zzzz___4__Data_e__FixedBuffer_impl.hpp"
#include "Fusion/zzzz___4_def.hpp"
#include "Fusion/zzzz__IFixedStorage_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz___4__Data_e__FixedBuffer_def.hpp"
constexpr ::GlobalNamespace::_4__Data_e__FixedBuffer& Fusion::_4::__cordl_internal_get_Data()  {
return this->___Data;
}
constexpr ::GlobalNamespace::_4__Data_e__FixedBuffer const& Fusion::_4::__cordl_internal_get_Data() const {
return this->___Data;
}
constexpr void Fusion::_4::__cordl_internal_set_Data(::GlobalNamespace::_4__Data_e__FixedBuffer  value)  {
this->___Data = value;
}
constexpr uint32_t& Fusion::_4::__cordl_internal_get__data0()  {
return this->____data0;
}
constexpr uint32_t const& Fusion::_4::__cordl_internal_get__data0() const {
return this->____data0;
}
constexpr void Fusion::_4::__cordl_internal_set__data0(uint32_t  value)  {
this->____data0 = value;
}
constexpr uint32_t& Fusion::_4::__cordl_internal_get__data1()  {
return this->____data1;
}
constexpr uint32_t const& Fusion::_4::__cordl_internal_get__data1() const {
return this->____data1;
}
constexpr void Fusion::_4::__cordl_internal_set__data1(uint32_t  value)  {
this->____data1 = value;
}
constexpr uint32_t& Fusion::_4::__cordl_internal_get__data2()  {
return this->____data2;
}
constexpr uint32_t const& Fusion::_4::__cordl_internal_get__data2() const {
return this->____data2;
}
constexpr void Fusion::_4::__cordl_internal_set__data2(uint32_t  value)  {
this->____data2 = value;
}
constexpr uint32_t& Fusion::_4::__cordl_internal_get__data3()  {
return this->____data3;
}
constexpr uint32_t const& Fusion::_4::__cordl_internal_get__data3() const {
return this->____data3;
}
constexpr void Fusion::_4::__cordl_internal_set__data3(uint32_t  value)  {
this->____data3 = value;
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::_4::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::_4::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Fusion::IFixedStorage"
constexpr  Fusion::_4::operator ::Fusion::IFixedStorage*()  {
return static_cast<::Fusion::IFixedStorage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::IFixedStorage"
constexpr ::Fusion::IFixedStorage* Fusion::_4::i___Fusion__IFixedStorage()  {
return static_cast<::Fusion::IFixedStorage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "::GlobalNamespace::_4__Data_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data0", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data1", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data2", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data3", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::_4::_4(::GlobalNamespace::_4__Data_e__FixedBuffer  Data, uint32_t  _data0, uint32_t  _data1, uint32_t  _data2, uint32_t  _data3) noexcept  {
this->Data = Data;
this->_data0 = _data0;
this->_data1 = _data1;
this->_data2 = _data2;
this->_data3 = _data3;
}
// Ctor Parameters []
constexpr ::Fusion::_4::_4()   {
}
