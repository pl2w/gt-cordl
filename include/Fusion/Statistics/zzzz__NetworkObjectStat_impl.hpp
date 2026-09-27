#pragma once
// IWYU pragma private; include "Fusion/Statistics/NetworkObjectStat.hpp"
#include "Fusion/Statistics/zzzz__NetworkObjectStat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Statistics::NetworkObjectStat::NetworkObjectStat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::NetworkObjectStat::NetworkObjectStat()   {
}
constexpr ::Fusion::Statistics::NetworkObjectStat  Fusion::Statistics::NetworkObjectStat::InBandwidth{static_cast<int32_t>(0x1)};
constexpr ::Fusion::Statistics::NetworkObjectStat  Fusion::Statistics::NetworkObjectStat::OutBandwidth{static_cast<int32_t>(0x2)};
constexpr ::Fusion::Statistics::NetworkObjectStat  Fusion::Statistics::NetworkObjectStat::InPackets{static_cast<int32_t>(0x4)};
constexpr ::Fusion::Statistics::NetworkObjectStat  Fusion::Statistics::NetworkObjectStat::OutPackets{static_cast<int32_t>(0x8)};
constexpr ::Fusion::Statistics::NetworkObjectStat  Fusion::Statistics::NetworkObjectStat::AverageInPacketSize{static_cast<int32_t>(0x10)};
constexpr ::Fusion::Statistics::NetworkObjectStat  Fusion::Statistics::NetworkObjectStat::AverageOutPacketSize{static_cast<int32_t>(0x20)};
