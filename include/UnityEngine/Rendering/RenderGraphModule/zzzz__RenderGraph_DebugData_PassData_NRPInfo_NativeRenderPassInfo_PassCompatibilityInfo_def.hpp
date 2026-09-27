#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo)
// Forward declare root types
namespace GlobalNamespace {
struct NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugData/PassData/NRPInfo/NativeRenderPassInfo/PassCompatibilityInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/PassData/NRPInfo/NativeRenderPassInfo/PassCompatibilityInfo
struct CORDL_TYPE NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "isCompatible", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo(::StringW  message, bool  isCompatible) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17135};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field message, offset: 0x0, size: 0x8, def value: None
 ::StringW  message;

/// @brief Field isCompatible, offset: 0x8, size: 0x1, def value: None
 bool  isCompatible;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo, message) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo, isCompatible) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
