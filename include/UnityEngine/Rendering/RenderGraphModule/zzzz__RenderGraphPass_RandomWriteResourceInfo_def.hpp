#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphPass_RandomWriteResourceInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RenderGraphPass_RandomWriteResourceInfo)
// Forward declare root types
namespace GlobalNamespace {
struct RenderGraphPass_RandomWriteResourceInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RenderGraphPass_RandomWriteResourceInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RenderGraphPass_RandomWriteResourceInfo, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphPass/RandomWriteResourceInfo");
// Dependencies UnityEngine.Rendering.RenderGraphModule.ResourceHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphPass/RandomWriteResourceInfo
struct CORDL_TYPE RenderGraphPass_RandomWriteResourceInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RenderGraphPass_RandomWriteResourceInfo() ;

// Ctor Parameters [CppParam { name: "h", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "preserveCounterValue", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr RenderGraphPass_RandomWriteResourceInfo(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle  h, bool  preserveCounterValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17168};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field h, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle  h;

/// @brief Field preserveCounterValue, offset: 0xc, size: 0x1, def value: None
 bool  preserveCounterValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderGraphPass_RandomWriteResourceInfo, h) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphPass_RandomWriteResourceInfo, preserveCounterValue) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RenderGraphPass_RandomWriteResourceInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
