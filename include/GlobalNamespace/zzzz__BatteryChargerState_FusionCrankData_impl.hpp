#pragma once
// IWYU pragma private; include "GlobalNamespace/BatteryChargerState_FusionCrankData.hpp"
#include "Fusion/zzzz__NetworkBool_impl.hpp"
#include "GlobalNamespace/zzzz__BatteryChargerState_FusionCrankData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
constexpr int32_t& GlobalNamespace::BatteryChargerState_FusionCrankData::__cordl_internal_get_holderActorNr()  {
return this->___holderActorNr;
}
constexpr int32_t const& GlobalNamespace::BatteryChargerState_FusionCrankData::__cordl_internal_get_holderActorNr() const {
return this->___holderActorNr;
}
constexpr void GlobalNamespace::BatteryChargerState_FusionCrankData::__cordl_internal_set_holderActorNr(int32_t  value)  {
this->___holderActorNr = value;
}
constexpr ::Fusion::NetworkBool& GlobalNamespace::BatteryChargerState_FusionCrankData::__cordl_internal_get_isLeftHand()  {
return this->___isLeftHand;
}
constexpr ::Fusion::NetworkBool const& GlobalNamespace::BatteryChargerState_FusionCrankData::__cordl_internal_get_isLeftHand() const {
return this->___isLeftHand;
}
constexpr void GlobalNamespace::BatteryChargerState_FusionCrankData::__cordl_internal_set_isLeftHand(::Fusion::NetworkBool  value)  {
this->___isLeftHand = value;
}
constexpr float_t& GlobalNamespace::BatteryChargerState_FusionCrankData::__cordl_internal_get_angle()  {
return this->___angle;
}
constexpr float_t const& GlobalNamespace::BatteryChargerState_FusionCrankData::__cordl_internal_get_angle() const {
return this->___angle;
}
constexpr void GlobalNamespace::BatteryChargerState_FusionCrankData::__cordl_internal_set_angle(float_t  value)  {
this->___angle = value;
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::BatteryChargerState_FusionCrankData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::BatteryChargerState_FusionCrankData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "holderActorNr", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isLeftHand", ty: "::Fusion::NetworkBool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "angle", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BatteryChargerState_FusionCrankData::BatteryChargerState_FusionCrankData(int32_t  holderActorNr, ::Fusion::NetworkBool  isLeftHand, float_t  angle) noexcept  {
this->holderActorNr = holderActorNr;
this->isLeftHand = isLeftHand;
this->angle = angle;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BatteryChargerState_FusionCrankData::BatteryChargerState_FusionCrankData()   {
}
