#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraph_CompiledPassInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsFence_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraph_CompiledPassInfo)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphPass;
}
// Forward declare root types
namespace GlobalNamespace {
struct RenderGraph_CompiledPassInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RenderGraph_CompiledPassInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RenderGraph_CompiledPassInfo, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/CompiledPassInfo");
// [DebuggerDisplay("RenderPass: {name} (Index:{index} Async:{enableAsyncCompute})")]
// Dependencies System.Collections.Generic.List`1<T>, UnityEngine.Rendering.GraphicsFence
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/CompiledPassInfo
struct CORDL_TYPE RenderGraph_CompiledPassInfo {
public:
// Declarations
/// @brief Method Reset, addr 0xb1af76c, size 0x270, virtual false, abstract: false, final false
inline void Reset(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*  pass, int32_t  index) ;

// Ctor Parameters []
// @brief default ctor
constexpr RenderGraph_CompiledPassInfo() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "resourceCreateList", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "resourceReleaseList", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "fence", ty: "::UnityEngine::Rendering::GraphicsFence", modifiers: "", def_value: None, comment: None }, CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "syncToPassIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "syncFromPassIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "enableAsyncCompute", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "allowPassCulling", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "needGraphicsFence", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "culled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "culledByRendererList", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasSideEffect", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "enableFoveatedRasterization", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasShadingRateImage", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasShadingRateStates", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr RenderGraph_CompiledPassInfo(::StringW  name, int32_t  index, ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  resourceCreateList, ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  resourceReleaseList, ::UnityEngine::Rendering::GraphicsFence  fence, int32_t  refCount, int32_t  syncToPassIndex, int32_t  syncFromPassIndex, bool  enableAsyncCompute, bool  allowPassCulling, bool  needGraphicsFence, bool  culled, bool  culledByRendererList, bool  hasSideEffect, bool  enableFoveatedRasterization, bool  hasShadingRateImage, bool  hasShadingRateStates) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17128};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field index, offset: 0x8, size: 0x4, def value: None
 int32_t  index;

/// @brief Field resourceCreateList, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  resourceCreateList;

/// @brief Field resourceReleaseList, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  resourceReleaseList;

/// @brief Field fence, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Rendering::GraphicsFence  fence;

/// @brief Field refCount, offset: 0x30, size: 0x4, def value: None
 int32_t  refCount;

/// @brief Field syncToPassIndex, offset: 0x34, size: 0x4, def value: None
 int32_t  syncToPassIndex;

/// @brief Field syncFromPassIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  syncFromPassIndex;

/// @brief Field enableAsyncCompute, offset: 0x3c, size: 0x1, def value: None
 bool  enableAsyncCompute;

/// @brief Field allowPassCulling, offset: 0x3d, size: 0x1, def value: None
 bool  allowPassCulling;

/// @brief Field needGraphicsFence, offset: 0x3e, size: 0x1, def value: None
 bool  needGraphicsFence;

/// @brief Field culled, offset: 0x3f, size: 0x1, def value: None
 bool  culled;

/// @brief Field culledByRendererList, offset: 0x40, size: 0x1, def value: None
 bool  culledByRendererList;

/// @brief Field hasSideEffect, offset: 0x41, size: 0x1, def value: None
 bool  hasSideEffect;

/// @brief Field enableFoveatedRasterization, offset: 0x42, size: 0x1, def value: None
 bool  enableFoveatedRasterization;

/// @brief Field hasShadingRateImage, offset: 0x43, size: 0x1, def value: None
 bool  hasShadingRateImage;

/// @brief Field hasShadingRateStates, offset: 0x44, size: 0x1, def value: None
 bool  hasShadingRateStates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledPassInfo, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledPassInfo, index) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledPassInfo, resourceCreateList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledPassInfo, resourceReleaseList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledPassInfo, fence) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledPassInfo, refCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledPassInfo, syncToPassIndex) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledPassInfo, syncFromPassIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledPassInfo, enableAsyncCompute) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledPassInfo, allowPassCulling) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledPassInfo, needGraphicsFence) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledPassInfo, culled) == 0x3f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledPassInfo, culledByRendererList) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledPassInfo, hasSideEffect) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledPassInfo, enableFoveatedRasterization) == 0x42, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledPassInfo, hasShadingRateImage) == 0x43, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledPassInfo, hasShadingRateStates) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RenderGraph_CompiledPassInfo) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
