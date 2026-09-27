#pragma once
// IWYU pragma private; include "GlobalNamespace/PUNErrorLogging_LogFlags.hpp"
#include "GlobalNamespace/zzzz__PUNErrorLogging_LogFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PUNErrorLogging_LogFlags::PUNErrorLogging_LogFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PUNErrorLogging_LogFlags::PUNErrorLogging_LogFlags()   {
}
constexpr ::GlobalNamespace::PUNErrorLogging_LogFlags  GlobalNamespace::PUNErrorLogging_LogFlags::SerializeView{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PUNErrorLogging_LogFlags  GlobalNamespace::PUNErrorLogging_LogFlags::OwnershipTransfer{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::PUNErrorLogging_LogFlags  GlobalNamespace::PUNErrorLogging_LogFlags::OwnershipRequest{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::PUNErrorLogging_LogFlags  GlobalNamespace::PUNErrorLogging_LogFlags::OwnershipUpdate{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::PUNErrorLogging_LogFlags  GlobalNamespace::PUNErrorLogging_LogFlags::RPC{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::PUNErrorLogging_LogFlags  GlobalNamespace::PUNErrorLogging_LogFlags::Instantiate{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::PUNErrorLogging_LogFlags  GlobalNamespace::PUNErrorLogging_LogFlags::Destroy{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::PUNErrorLogging_LogFlags  GlobalNamespace::PUNErrorLogging_LogFlags::DestroyPlayer{static_cast<int32_t>(0x80)};
