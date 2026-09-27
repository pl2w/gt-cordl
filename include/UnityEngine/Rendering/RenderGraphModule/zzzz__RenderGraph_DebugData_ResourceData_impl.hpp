#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraph_DebugData_ResourceData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_DebugData_ResourceData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "imported", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "creationPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "releasePassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "consumerList", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "producerList", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "memoryless", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textureData", ty: "::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bufferData", ty: "::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DebugData_RenderGraph_ResourceData::DebugData_RenderGraph_ResourceData(::StringW  name, bool  imported, int32_t  creationPassIndex, int32_t  releasePassIndex, ::System::Collections::Generic::List_1<int32_t>*  consumerList, ::System::Collections::Generic::List_1<int32_t>*  producerList, bool  memoryless, ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData*  textureData, ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData*  bufferData) noexcept  {
this->name = name;
this->imported = imported;
this->creationPassIndex = creationPassIndex;
this->releasePassIndex = releasePassIndex;
this->consumerList = consumerList;
this->producerList = producerList;
this->memoryless = memoryless;
this->textureData = textureData;
this->bufferData = bufferData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugData_RenderGraph_ResourceData::DebugData_RenderGraph_ResourceData()   {
}
