#pragma once
// IWYU pragma private; include "GlobalNamespace/ArtilleryCannonState_FusionSyncState.hpp"
#include "Fusion/zzzz__NetworkBool_impl.hpp"
#include "GlobalNamespace/zzzz__ArtilleryCannonState_FusionSyncState_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
constexpr float_t& GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_get_pitch()  {
return this->___pitch;
}
constexpr float_t const& GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_get_pitch() const {
return this->___pitch;
}
constexpr void GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_set_pitch(float_t  value)  {
this->___pitch = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_get_yaw()  {
return this->___yaw;
}
constexpr float_t const& GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_get_yaw() const {
return this->___yaw;
}
constexpr void GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_set_yaw(float_t  value)  {
this->___yaw = value;
}
constexpr int32_t& GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_get_pitchHolderActorNr()  {
return this->___pitchHolderActorNr;
}
constexpr int32_t const& GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_get_pitchHolderActorNr() const {
return this->___pitchHolderActorNr;
}
constexpr void GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_set_pitchHolderActorNr(int32_t  value)  {
this->___pitchHolderActorNr = value;
}
constexpr ::Fusion::NetworkBool& GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_get_pitchIsLeftHand()  {
return this->___pitchIsLeftHand;
}
constexpr ::Fusion::NetworkBool const& GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_get_pitchIsLeftHand() const {
return this->___pitchIsLeftHand;
}
constexpr void GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_set_pitchIsLeftHand(::Fusion::NetworkBool  value)  {
this->___pitchIsLeftHand = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_get_pitchCrankAngle()  {
return this->___pitchCrankAngle;
}
constexpr float_t const& GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_get_pitchCrankAngle() const {
return this->___pitchCrankAngle;
}
constexpr void GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_set_pitchCrankAngle(float_t  value)  {
this->___pitchCrankAngle = value;
}
constexpr int32_t& GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_get_yawHolderActorNr()  {
return this->___yawHolderActorNr;
}
constexpr int32_t const& GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_get_yawHolderActorNr() const {
return this->___yawHolderActorNr;
}
constexpr void GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_set_yawHolderActorNr(int32_t  value)  {
this->___yawHolderActorNr = value;
}
constexpr ::Fusion::NetworkBool& GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_get_yawIsLeftHand()  {
return this->___yawIsLeftHand;
}
constexpr ::Fusion::NetworkBool const& GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_get_yawIsLeftHand() const {
return this->___yawIsLeftHand;
}
constexpr void GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_set_yawIsLeftHand(::Fusion::NetworkBool  value)  {
this->___yawIsLeftHand = value;
}
constexpr float_t& GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_get_yawCrankAngle()  {
return this->___yawCrankAngle;
}
constexpr float_t const& GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_get_yawCrankAngle() const {
return this->___yawCrankAngle;
}
constexpr void GlobalNamespace::ArtilleryCannonState_FusionSyncState::__cordl_internal_set_yawCrankAngle(float_t  value)  {
this->___yawCrankAngle = value;
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::ArtilleryCannonState_FusionSyncState::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::ArtilleryCannonState_FusionSyncState::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "pitch", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "yaw", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pitchHolderActorNr", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pitchIsLeftHand", ty: "::Fusion::NetworkBool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pitchCrankAngle", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "yawHolderActorNr", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "yawIsLeftHand", ty: "::Fusion::NetworkBool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "yawCrankAngle", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ArtilleryCannonState_FusionSyncState::ArtilleryCannonState_FusionSyncState(float_t  pitch, float_t  yaw, int32_t  pitchHolderActorNr, ::Fusion::NetworkBool  pitchIsLeftHand, float_t  pitchCrankAngle, int32_t  yawHolderActorNr, ::Fusion::NetworkBool  yawIsLeftHand, float_t  yawCrankAngle) noexcept  {
this->pitch = pitch;
this->yaw = yaw;
this->pitchHolderActorNr = pitchHolderActorNr;
this->pitchIsLeftHand = pitchIsLeftHand;
this->pitchCrankAngle = pitchCrankAngle;
this->yawHolderActorNr = yawHolderActorNr;
this->yawIsLeftHand = yawIsLeftHand;
this->yawCrankAngle = yawCrankAngle;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArtilleryCannonState_FusionSyncState::ArtilleryCannonState_FusionSyncState()   {
}
