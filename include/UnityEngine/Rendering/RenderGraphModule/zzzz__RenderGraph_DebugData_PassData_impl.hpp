#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraph_DebugData_PassData.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPassType_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_DebugData_PassData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "type", ty: "::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "resourceReadLists", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "resourceWriteLists", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "culled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "async", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nativeSubPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "syncToPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "syncFromPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "generateDebugData", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nrpInfo", ty: "::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scriptInfo", ty: "::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DebugData_RenderGraph_PassData::DebugData_RenderGraph_PassData(::StringW  name, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType  type, ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  resourceReadLists, ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  resourceWriteLists, bool  culled, bool  async, int32_t  nativeSubPassIndex, int32_t  syncToPassIndex, int32_t  syncFromPassIndex, bool  generateDebugData, ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo*  nrpInfo, ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo*  scriptInfo) noexcept  {
this->name = name;
this->type = type;
this->resourceReadLists = resourceReadLists;
this->resourceWriteLists = resourceWriteLists;
this->culled = culled;
this->async = async;
this->nativeSubPassIndex = nativeSubPassIndex;
this->syncToPassIndex = syncToPassIndex;
this->syncFromPassIndex = syncFromPassIndex;
this->generateDebugData = generateDebugData;
this->nrpInfo = nrpInfo;
this->scriptInfo = scriptInfo;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugData_RenderGraph_PassData::DebugData_RenderGraph_PassData()   {
}
