#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/NativePassCompiler_RenderGraphInputInfo.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassCompiler_RenderGraphInputInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourceRegistry_def.hpp"
// Ctor Parameters [CppParam { name: "m_ResourcesForDebugOnly", ty: "::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_RenderPasses", ty: "::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "debugName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "disablePassCulling", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "disablePassMerging", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NativePassCompiler_RenderGraphInputInfo::NativePassCompiler_RenderGraphInputInfo(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  m_ResourcesForDebugOnly, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*  m_RenderPasses, ::StringW  debugName, bool  disablePassCulling, bool  disablePassMerging) noexcept  {
this->m_ResourcesForDebugOnly = m_ResourcesForDebugOnly;
this->m_RenderPasses = m_RenderPasses;
this->debugName = debugName;
this->disablePassCulling = disablePassCulling;
this->disablePassMerging = disablePassMerging;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NativePassCompiler_RenderGraphInputInfo::NativePassCompiler_RenderGraphInputInfo()   {
}
