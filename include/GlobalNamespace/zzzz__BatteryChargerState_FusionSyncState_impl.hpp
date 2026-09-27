#pragma once
// IWYU pragma private; include "GlobalNamespace/BatteryChargerState_FusionSyncState.hpp"
#include "GlobalNamespace/zzzz__BatteryChargerState_FusionSyncState_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
constexpr float_t& GlobalNamespace::BatteryChargerState_FusionSyncState::__cordl_internal_get_charge()  {
return this->___charge;
}
constexpr float_t const& GlobalNamespace::BatteryChargerState_FusionSyncState::__cordl_internal_get_charge() const {
return this->___charge;
}
constexpr void GlobalNamespace::BatteryChargerState_FusionSyncState::__cordl_internal_set_charge(float_t  value)  {
this->___charge = value;
}
constexpr int32_t& GlobalNamespace::BatteryChargerState_FusionSyncState::__cordl_internal_get_eventPhase()  {
return this->___eventPhase;
}
constexpr int32_t const& GlobalNamespace::BatteryChargerState_FusionSyncState::__cordl_internal_get_eventPhase() const {
return this->___eventPhase;
}
constexpr void GlobalNamespace::BatteryChargerState_FusionSyncState::__cordl_internal_set_eventPhase(int32_t  value)  {
this->___eventPhase = value;
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::BatteryChargerState_FusionSyncState::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::BatteryChargerState_FusionSyncState::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "charge", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "eventPhase", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BatteryChargerState_FusionSyncState::BatteryChargerState_FusionSyncState(float_t  charge, int32_t  eventPhase) noexcept  {
this->charge = charge;
this->eventPhase = eventPhase;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BatteryChargerState_FusionSyncState::BatteryChargerState_FusionSyncState()   {
}
