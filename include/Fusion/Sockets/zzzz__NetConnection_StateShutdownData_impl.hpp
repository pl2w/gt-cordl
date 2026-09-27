#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnection_StateShutdownData.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_StateShutdownData_def.hpp"
// Ctor Parameters [CppParam { name: "Timeout", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Unmapped", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetConnection_StateShutdownData::NetConnection_StateShutdownData(double_t  Timeout, int32_t  Unmapped) noexcept  {
this->Timeout = Timeout;
this->Unmapped = Unmapped;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetConnection_StateShutdownData::NetConnection_StateShutdownData()   {
}
