#pragma once
// IWYU pragma private; include "GlobalNamespace/CasualData.hpp"
#include "GlobalNamespace/zzzz__CasualData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::CasualData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::CasualData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CasualData::CasualData()   {
}
