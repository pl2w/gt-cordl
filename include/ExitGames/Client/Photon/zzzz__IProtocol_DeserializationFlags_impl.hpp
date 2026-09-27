#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/IProtocol_DeserializationFlags.hpp"
#include "ExitGames/Client/Photon/zzzz__IProtocol_DeserializationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::IProtocol_DeserializationFlags::IProtocol_DeserializationFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IProtocol_DeserializationFlags::IProtocol_DeserializationFlags()   {
}
constexpr ::GlobalNamespace::IProtocol_DeserializationFlags  GlobalNamespace::IProtocol_DeserializationFlags::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::IProtocol_DeserializationFlags  GlobalNamespace::IProtocol_DeserializationFlags::AllowPooledByteArray{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::IProtocol_DeserializationFlags  GlobalNamespace::IProtocol_DeserializationFlags::WrapIncomingStructs{static_cast<int32_t>(0x2)};
