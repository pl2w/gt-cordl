#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnection_StateConnectingData.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_StateConnectingData_def.hpp"
// Ctor Parameters [CppParam { name: "Attempts", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AttemptTimeout", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetConnection_StateConnectingData::NetConnection_StateConnectingData(int32_t  Attempts, double_t  AttemptTimeout) noexcept  {
this->Attempts = Attempts;
this->AttemptTimeout = AttemptTimeout;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetConnection_StateConnectingData::NetConnection_StateConnectingData()   {
}
