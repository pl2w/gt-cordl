#pragma once
// IWYU pragma private; include "Fusion/NetworkConfiguration_ReliableDataTransfers.hpp"
#include "Fusion/zzzz__NetworkConfiguration_ReliableDataTransfers_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkConfiguration_ReliableDataTransfers::NetworkConfiguration_ReliableDataTransfers(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkConfiguration_ReliableDataTransfers::NetworkConfiguration_ReliableDataTransfers()   {
}
constexpr ::GlobalNamespace::NetworkConfiguration_ReliableDataTransfers  GlobalNamespace::NetworkConfiguration_ReliableDataTransfers::ClientToServer{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NetworkConfiguration_ReliableDataTransfers  GlobalNamespace::NetworkConfiguration_ReliableDataTransfers::ClientToClientWithServerProxy{static_cast<int32_t>(0x2)};
