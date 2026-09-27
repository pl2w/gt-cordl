#pragma once
// IWYU pragma private; include "Fusion/NetworkPhysicsInfo.hpp"
#include "Fusion/zzzz__NetworkPhysicsInfo_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
constexpr float_t& Fusion::NetworkPhysicsInfo::__cordl_internal_get_TimeScale()  {
return this->___TimeScale;
}
constexpr float_t const& Fusion::NetworkPhysicsInfo::__cordl_internal_get_TimeScale() const {
return this->___TimeScale;
}
constexpr void Fusion::NetworkPhysicsInfo::__cordl_internal_set_TimeScale(float_t  value)  {
this->___TimeScale = value;
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::NetworkPhysicsInfo::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::NetworkPhysicsInfo::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "TimeScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkPhysicsInfo::NetworkPhysicsInfo(float_t  TimeScale) noexcept  {
this->TimeScale = TimeScale;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkPhysicsInfo::NetworkPhysicsInfo()   {
}
