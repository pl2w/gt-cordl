#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraph_DebugData_PassData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPassType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraph_DebugData_PassData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugData_RenderGraph_PassScriptInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class PassData_DebugData_RenderGraph_NRPInfo;
}
// Forward declare root types
namespace GlobalNamespace {
struct DebugData_RenderGraph_PassData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DebugData_RenderGraph_PassData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugData_RenderGraph_PassData, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugData/PassData");
// [DebuggerDisplay("PassDebug: {name}")]
// Dependencies System.Collections.Generic.List`1<T>, UnityEngine.Rendering.RenderGraphModule.RenderGraphPassType
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/PassData
struct CORDL_TYPE DebugData_RenderGraph_PassData {
public:
// Declarations
using NRPInfo = ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo;

// Ctor Parameters []
// @brief default ctor
constexpr DebugData_RenderGraph_PassData() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType", modifiers: "", def_value: None, comment: None }, CppParam { name: "resourceReadLists", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "resourceWriteLists", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "culled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "async", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "nativeSubPassIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "syncToPassIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "syncFromPassIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "generateDebugData", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "nrpInfo", ty: "::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo*", modifiers: "", def_value: None, comment: None }, CppParam { name: "scriptInfo", ty: "::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo*", modifiers: "", def_value: None, comment: None }]
constexpr DebugData_RenderGraph_PassData(::StringW  name, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType  type, ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  resourceReadLists, ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  resourceWriteLists, bool  culled, bool  async, int32_t  nativeSubPassIndex, int32_t  syncToPassIndex, int32_t  syncFromPassIndex, bool  generateDebugData, ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo*  nrpInfo, ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo*  scriptInfo) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17138};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field type, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType  type;

/// @brief Field resourceReadLists, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  resourceReadLists;

/// @brief Field resourceWriteLists, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  resourceWriteLists;

/// @brief Field culled, offset: 0x20, size: 0x1, def value: None
 bool  culled;

/// @brief Field async, offset: 0x21, size: 0x1, def value: None
 bool  async;

/// @brief Field nativeSubPassIndex, offset: 0x24, size: 0x4, def value: None
 int32_t  nativeSubPassIndex;

/// @brief Field syncToPassIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  syncToPassIndex;

/// @brief Field syncFromPassIndex, offset: 0x2c, size: 0x4, def value: None
 int32_t  syncFromPassIndex;

/// @brief Field generateDebugData, offset: 0x30, size: 0x1, def value: None
 bool  generateDebugData;

/// @brief Field nrpInfo, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo*  nrpInfo;

/// @brief Field scriptInfo, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo*  scriptInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_PassData, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_PassData, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_PassData, resourceReadLists) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_PassData, resourceWriteLists) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_PassData, culled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_PassData, async) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_PassData, nativeSubPassIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_PassData, syncToPassIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_PassData, syncFromPassIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_PassData, generateDebugData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_PassData, nrpInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugData_RenderGraph_PassData, scriptInfo) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DebugData_RenderGraph_PassData) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
