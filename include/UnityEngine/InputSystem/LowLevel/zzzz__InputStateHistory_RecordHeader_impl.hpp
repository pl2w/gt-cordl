#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateHistory_RecordHeader.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_RecordHeader__m_StateWithControlIndex_e__FixedBuffer_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_RecordHeader__m_StateWithoutControlIndex_e__FixedBuffer_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_RecordHeader_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_RecordHeader__m_StateWithControlIndex_e__FixedBuffer_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_RecordHeader__m_StateWithoutControlIndex_e__FixedBuffer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_RecordHeader.get_statePtrWithControlIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::GlobalNamespace::InputStateHistory_RecordHeader::*)()>(&::GlobalNamespace::InputStateHistory_RecordHeader::get_statePtrWithControlIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaffcbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_RecordHeader>(),
                        {"get_statePtrWithControlIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateHistory_RecordHeader.get_statePtrWithoutControlIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::GlobalNamespace::InputStateHistory_RecordHeader::*)()>(&::GlobalNamespace::InputStateHistory_RecordHeader::get_statePtrWithoutControlIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaffcbd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_RecordHeader>(),
                        {"get_statePtrWithoutControlIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& GlobalNamespace::InputStateHistory_RecordHeader::__cordl_internal_get_time()  {
return this->___time;
}
constexpr double_t const& GlobalNamespace::InputStateHistory_RecordHeader::__cordl_internal_get_time() const {
return this->___time;
}
constexpr void GlobalNamespace::InputStateHistory_RecordHeader::__cordl_internal_set_time(double_t  value)  {
this->___time = value;
}
constexpr uint32_t& GlobalNamespace::InputStateHistory_RecordHeader::__cordl_internal_get_version()  {
return this->___version;
}
constexpr uint32_t const& GlobalNamespace::InputStateHistory_RecordHeader::__cordl_internal_get_version() const {
return this->___version;
}
constexpr void GlobalNamespace::InputStateHistory_RecordHeader::__cordl_internal_set_version(uint32_t  value)  {
this->___version = value;
}
constexpr int32_t& GlobalNamespace::InputStateHistory_RecordHeader::__cordl_internal_get_controlIndex()  {
return this->___controlIndex;
}
constexpr int32_t const& GlobalNamespace::InputStateHistory_RecordHeader::__cordl_internal_get_controlIndex() const {
return this->___controlIndex;
}
constexpr void GlobalNamespace::InputStateHistory_RecordHeader::__cordl_internal_set_controlIndex(int32_t  value)  {
this->___controlIndex = value;
}
constexpr ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer& GlobalNamespace::InputStateHistory_RecordHeader::__cordl_internal_get_m_StateWithoutControlIndex()  {
return this->___m_StateWithoutControlIndex;
}
constexpr ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer const& GlobalNamespace::InputStateHistory_RecordHeader::__cordl_internal_get_m_StateWithoutControlIndex() const {
return this->___m_StateWithoutControlIndex;
}
constexpr void GlobalNamespace::InputStateHistory_RecordHeader::__cordl_internal_set_m_StateWithoutControlIndex(::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer  value)  {
this->___m_StateWithoutControlIndex = value;
}
constexpr ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer& GlobalNamespace::InputStateHistory_RecordHeader::__cordl_internal_get_m_StateWithControlIndex()  {
return this->___m_StateWithControlIndex;
}
constexpr ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer const& GlobalNamespace::InputStateHistory_RecordHeader::__cordl_internal_get_m_StateWithControlIndex() const {
return this->___m_StateWithControlIndex;
}
constexpr void GlobalNamespace::InputStateHistory_RecordHeader::__cordl_internal_set_m_StateWithControlIndex(::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer  value)  {
this->___m_StateWithControlIndex = value;
}
inline uint8_t* GlobalNamespace::InputStateHistory_RecordHeader::get_statePtrWithControlIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_RecordHeader>(),
                        {"get_statePtrWithControlIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
inline uint8_t* GlobalNamespace::InputStateHistory_RecordHeader::get_statePtrWithoutControlIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateHistory_RecordHeader>(),
                        {"get_statePtrWithoutControlIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "time", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "version", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "controlIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StateWithoutControlIndex", ty: "::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StateWithControlIndex", ty: "::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputStateHistory_RecordHeader::InputStateHistory_RecordHeader(double_t  time, uint32_t  version, int32_t  controlIndex, ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer  m_StateWithoutControlIndex, ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer  m_StateWithControlIndex) noexcept  {
this->time = time;
this->version = version;
this->controlIndex = controlIndex;
this->m_StateWithoutControlIndex = m_StateWithoutControlIndex;
this->m_StateWithControlIndex = m_StateWithControlIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputStateHistory_RecordHeader::InputStateHistory_RecordHeader()   {
}
