#pragma once
// IWYU pragma private; include "System/Xml/XsdValidatingReader_ValidatingReaderState.hpp"
#include "System/Xml/zzzz__XsdValidatingReader_ValidatingReaderState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState::XsdValidatingReader_ValidatingReaderState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState::XsdValidatingReader_ValidatingReaderState()   {
}
constexpr ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState  GlobalNamespace::XsdValidatingReader_ValidatingReaderState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState  GlobalNamespace::XsdValidatingReader_ValidatingReaderState::Init{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState  GlobalNamespace::XsdValidatingReader_ValidatingReaderState::Read{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState  GlobalNamespace::XsdValidatingReader_ValidatingReaderState::OnDefaultAttribute{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState  GlobalNamespace::XsdValidatingReader_ValidatingReaderState::OnReadAttributeValue{static_cast<int32_t>(0xfffffffe)};
constexpr ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState  GlobalNamespace::XsdValidatingReader_ValidatingReaderState::OnAttribute{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState  GlobalNamespace::XsdValidatingReader_ValidatingReaderState::ClearAttributes{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState  GlobalNamespace::XsdValidatingReader_ValidatingReaderState::ParseInlineSchema{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState  GlobalNamespace::XsdValidatingReader_ValidatingReaderState::ReadAhead{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState  GlobalNamespace::XsdValidatingReader_ValidatingReaderState::OnReadBinaryContent{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState  GlobalNamespace::XsdValidatingReader_ValidatingReaderState::ReaderClosed{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState  GlobalNamespace::XsdValidatingReader_ValidatingReaderState::_cordl_EOF{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState  GlobalNamespace::XsdValidatingReader_ValidatingReaderState::Error{static_cast<int32_t>(0xa)};
