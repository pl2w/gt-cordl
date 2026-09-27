#pragma once
// IWYU pragma private; include "System/Xml/XmlTextReaderImpl_IncrementalReadState.hpp"
#include "System/Xml/zzzz__XmlTextReaderImpl_IncrementalReadState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState::XmlTextReaderImpl_IncrementalReadState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState::XmlTextReaderImpl_IncrementalReadState()   {
}
constexpr ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState  GlobalNamespace::XmlTextReaderImpl_IncrementalReadState::Text{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState  GlobalNamespace::XmlTextReaderImpl_IncrementalReadState::StartTag{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState  GlobalNamespace::XmlTextReaderImpl_IncrementalReadState::PI{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState  GlobalNamespace::XmlTextReaderImpl_IncrementalReadState::CDATA{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState  GlobalNamespace::XmlTextReaderImpl_IncrementalReadState::Comment{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState  GlobalNamespace::XmlTextReaderImpl_IncrementalReadState::Attributes{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState  GlobalNamespace::XmlTextReaderImpl_IncrementalReadState::AttributeValue{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState  GlobalNamespace::XmlTextReaderImpl_IncrementalReadState::ReadData{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState  GlobalNamespace::XmlTextReaderImpl_IncrementalReadState::EndElement{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState  GlobalNamespace::XmlTextReaderImpl_IncrementalReadState::End{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState  GlobalNamespace::XmlTextReaderImpl_IncrementalReadState::ReadValueChunk_OnCachedValue{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState  GlobalNamespace::XmlTextReaderImpl_IncrementalReadState::ReadValueChunk_OnPartialValue{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState  GlobalNamespace::XmlTextReaderImpl_IncrementalReadState::ReadContentAsBinary_OnCachedValue{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState  GlobalNamespace::XmlTextReaderImpl_IncrementalReadState::ReadContentAsBinary_OnPartialValue{static_cast<int32_t>(0xd)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState  GlobalNamespace::XmlTextReaderImpl_IncrementalReadState::ReadContentAsBinary_End{static_cast<int32_t>(0xe)};
