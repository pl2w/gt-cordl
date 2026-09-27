#pragma once
// IWYU pragma private; include "UnityEngine/XR/Management/XRManagementAnalytics_BuildEvent.hpp"
#include "UnityEngine/XR/Management/zzzz__XRManagementAnalytics_BuildEvent_def.hpp"
#include "UnityEngine/Analytics/zzzz__IAnalytic_def.hpp"
/// @brief Convert operator to "::UnityEngine::Analytics::IAnalytic_IData"
constexpr  GlobalNamespace::XRManagementAnalytics_BuildEvent::operator ::UnityEngine::Analytics::IAnalytic_IData*()  {
return static_cast<::UnityEngine::Analytics::IAnalytic_IData*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Analytics::IAnalytic_IData"
constexpr ::UnityEngine::Analytics::IAnalytic_IData* GlobalNamespace::XRManagementAnalytics_BuildEvent::i___UnityEngine__Analytics__IAnalytic_IData()  {
return static_cast<::UnityEngine::Analytics::IAnalytic_IData*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "buildGuid", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buildTarget", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buildTargetGroup", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "assigned_loaders", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XRManagementAnalytics_BuildEvent::XRManagementAnalytics_BuildEvent(::StringW  buildGuid, ::StringW  buildTarget, ::StringW  buildTargetGroup, ::ArrayW<::StringW>  assigned_loaders) noexcept  {
this->buildGuid = buildGuid;
this->buildTarget = buildTarget;
this->buildTargetGroup = buildTargetGroup;
this->assigned_loaders = assigned_loaders;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRManagementAnalytics_BuildEvent::XRManagementAnalytics_BuildEvent()   {
}
