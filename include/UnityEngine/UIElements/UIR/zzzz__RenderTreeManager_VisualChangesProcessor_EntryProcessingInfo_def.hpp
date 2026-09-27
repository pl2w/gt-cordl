#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeManager_VisualChangesProcessor_VisualsProcessingType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo)
namespace UnityEngine::UIElements::UIR {
class Entry;
}
namespace UnityEngine::UIElements::UIR {
class RenderData;
}
// Forward declare root types
namespace GlobalNamespace {
struct VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo, "UnityEngine.UIElements.UIR", "RenderTreeManager/VisualChangesProcessor/EntryProcessingInfo");
// Dependencies UnityEngine.UIElements.UIR.RenderTreeManager::VisualChangesProcessor::VisualsProcessingType
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.RenderTreeManager/VisualChangesProcessor/EntryProcessingInfo
struct CORDL_TYPE VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo() ;

// Ctor Parameters [CppParam { name: "renderData", ty: "::UnityEngine::UIElements::UIR::RenderData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType", modifiers: "", def_value: None, comment: None }, CppParam { name: "rootEntry", ty: "::UnityEngine::UIElements::UIR::Entry*", modifiers: "", def_value: None, comment: None }]
constexpr VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo(::UnityEngine::UIElements::UIR::RenderData*  renderData, ::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType  type, ::UnityEngine::UIElements::UIR::Entry*  rootEntry) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8572};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field renderData, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::RenderData*  renderData;

/// @brief Field type, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType  type;

/// @brief Field rootEntry, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::Entry*  rootEntry;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo, renderData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo, rootEntry) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
