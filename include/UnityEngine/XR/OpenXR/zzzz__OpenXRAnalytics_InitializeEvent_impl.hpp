#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRAnalytics_InitializeEvent.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRAnalytics_InitializeEvent_def.hpp"
#include "UnityEngine/Analytics/zzzz__IAnalytic_def.hpp"
/// @brief Convert operator to "::UnityEngine::Analytics::IAnalytic_IData"
constexpr  GlobalNamespace::OpenXRAnalytics_InitializeEvent::operator ::UnityEngine::Analytics::IAnalytic_IData*()  {
return static_cast<::UnityEngine::Analytics::IAnalytic_IData*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Analytics::IAnalytic_IData"
constexpr ::UnityEngine::Analytics::IAnalytic_IData* GlobalNamespace::OpenXRAnalytics_InitializeEvent::i___UnityEngine__Analytics__IAnalytic_IData()  {
return static_cast<::UnityEngine::Analytics::IAnalytic_IData*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "runtime", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "runtime_version", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "plugin_version", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "api_version", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "available_extensions", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enabled_extensions", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enabled_features", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "failed_features", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OpenXRAnalytics_InitializeEvent::OpenXRAnalytics_InitializeEvent(bool  success, ::StringW  runtime, ::StringW  runtime_version, ::StringW  plugin_version, ::StringW  api_version, ::ArrayW<::StringW>  available_extensions, ::ArrayW<::StringW>  enabled_extensions, ::ArrayW<::StringW>  enabled_features, ::ArrayW<::StringW>  failed_features) noexcept  {
this->success = success;
this->runtime = runtime;
this->runtime_version = runtime_version;
this->plugin_version = plugin_version;
this->api_version = api_version;
this->available_extensions = available_extensions;
this->enabled_extensions = enabled_extensions;
this->enabled_features = enabled_features;
this->failed_features = failed_features;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OpenXRAnalytics_InitializeEvent::OpenXRAnalytics_InitializeEvent()   {
}
