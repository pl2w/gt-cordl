#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceManager_DiagnosticEventType.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_DiagnosticEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ResourceManager_DiagnosticEventType::ResourceManager_DiagnosticEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ResourceManager_DiagnosticEventType::ResourceManager_DiagnosticEventType()   {
}
constexpr ::GlobalNamespace::ResourceManager_DiagnosticEventType  GlobalNamespace::ResourceManager_DiagnosticEventType::AsyncOperationFail{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ResourceManager_DiagnosticEventType  GlobalNamespace::ResourceManager_DiagnosticEventType::AsyncOperationCreate{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ResourceManager_DiagnosticEventType  GlobalNamespace::ResourceManager_DiagnosticEventType::AsyncOperationPercentComplete{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ResourceManager_DiagnosticEventType  GlobalNamespace::ResourceManager_DiagnosticEventType::AsyncOperationComplete{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::ResourceManager_DiagnosticEventType  GlobalNamespace::ResourceManager_DiagnosticEventType::AsyncOperationReferenceCount{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::ResourceManager_DiagnosticEventType  GlobalNamespace::ResourceManager_DiagnosticEventType::AsyncOperationDestroy{static_cast<int32_t>(0x5)};
