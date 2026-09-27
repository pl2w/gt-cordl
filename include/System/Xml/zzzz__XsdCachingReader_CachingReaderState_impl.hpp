#pragma once
// IWYU pragma private; include "System/Xml/XsdCachingReader_CachingReaderState.hpp"
#include "System/Xml/zzzz__XsdCachingReader_CachingReaderState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XsdCachingReader_CachingReaderState::XsdCachingReader_CachingReaderState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XsdCachingReader_CachingReaderState::XsdCachingReader_CachingReaderState()   {
}
constexpr ::GlobalNamespace::XsdCachingReader_CachingReaderState  GlobalNamespace::XsdCachingReader_CachingReaderState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XsdCachingReader_CachingReaderState  GlobalNamespace::XsdCachingReader_CachingReaderState::Init{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XsdCachingReader_CachingReaderState  GlobalNamespace::XsdCachingReader_CachingReaderState::Record{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::XsdCachingReader_CachingReaderState  GlobalNamespace::XsdCachingReader_CachingReaderState::Replay{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::XsdCachingReader_CachingReaderState  GlobalNamespace::XsdCachingReader_CachingReaderState::ReaderClosed{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::XsdCachingReader_CachingReaderState  GlobalNamespace::XsdCachingReader_CachingReaderState::Error{static_cast<int32_t>(0x5)};
