#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraph_DebugData_ResourceData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraph_DebugData_ResourceData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugData_RenderGraph_BufferResourceData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugData_RenderGraph_TextureResourceData;
}
// Forward declare root types
namespace GlobalNamespace {
struct DebugData_RenderGraph_ResourceData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DebugData_RenderGraph_ResourceData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugData_RenderGraph_ResourceData, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugData/ResourceData");
// [DebuggerDisplay("ResourceDebug: {name} [{creationPassIndex}:{releasePassIndex}]")]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/ResourceData
struct CORDL_TYPE DebugData_RenderGraph_ResourceData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DebugData_RenderGraph_ResourceData() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "imported", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "creationPassIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "releasePassIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "consumerList", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "producerList", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "memoryless", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "textureData", ty: "::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "bufferData", ty: "::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData*", modifiers: "", def_value: None, comment: None }]
constexpr DebugData_RenderGraph_ResourceData(::StringW  name, bool  imported, int32_t  creationPassIndex, int32_t  releasePassIndex, ::System::Collections::Generic::List_1<int32_t>*  consumerList, ::System::Collections::Generic::List_1<int32_t>*  producerList, bool  memoryless, ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData*  textureData, ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData*  bufferData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17141};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field imported, offset: 0x8, size: 0x1, def value: None
 bool  imported;

/// @brief Field creationPassIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  creationPassIndex;

/// @brief Field releasePassIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  releasePassIndex;

/// @brief Field consumerList, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  consumerList;

/// @brief Field producerList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  producerList;

/// @brief Field memoryless, offset: 0x28, size: 0x1, def value: None
 bool  memoryless;

/// @brief Field textureData, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData*  textureData;

/// @brief Field bufferData, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData*  bufferData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_ResourceData, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_ResourceData, imported) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_ResourceData, creationPassIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_ResourceData, releasePassIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_ResourceData, consumerList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_ResourceData, producerList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_ResourceData, memoryless) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_ResourceData, textureData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_ResourceData, bufferData) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DebugData_RenderGraph_ResourceData) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
