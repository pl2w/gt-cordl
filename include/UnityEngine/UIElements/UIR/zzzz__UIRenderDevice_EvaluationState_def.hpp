#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/UIRenderDevice_EvaluationState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__State_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UIRenderDevice_EvaluationState)
namespace UnityEngine::UIElements::UIR {
class CommandList;
}
namespace UnityEngine::UIElements::UIR {
class Page;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
struct UIRenderDevice_EvaluationState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UIRenderDevice_EvaluationState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UIRenderDevice_EvaluationState, "UnityEngine.UIElements.UIR", "UIRenderDevice/EvaluationState");
// Dependencies UnityEngine.UIElements.UIR.State
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice/EvaluationState
struct CORDL_TYPE UIRenderDevice_EvaluationState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UIRenderDevice_EvaluationState() ;

// Ctor Parameters [CppParam { name: "activeCommandList", ty: "::UnityEngine::UIElements::UIR::CommandList*", modifiers: "", def_value: None, comment: None }, CppParam { name: "constantProps", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: None, comment: None }, CppParam { name: "batchProps", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: None, comment: None }, CppParam { name: "defaultMat", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "curState", ty: "::UnityEngine::UIElements::UIR::State", modifiers: "", def_value: None, comment: None }, CppParam { name: "curPage", ty: "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: None, comment: None }, CppParam { name: "mustApplyMaterial", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "mustApplyBatchProps", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "mustApplyStencil", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isSerializing", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "commandListOwner", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None, comment: None }]
constexpr UIRenderDevice_EvaluationState(::UnityEngine::UIElements::UIR::CommandList*  activeCommandList, ::UnityEngine::MaterialPropertyBlock*  constantProps, ::UnityEngine::MaterialPropertyBlock*  batchProps, ::UnityW<::UnityEngine::Material>  defaultMat, ::UnityEngine::UIElements::UIR::State  curState, ::UnityEngine::UIElements::UIR::Page*  curPage, bool  mustApplyMaterial, bool  mustApplyBatchProps, bool  mustApplyStencil, bool  isSerializing, ::UnityEngine::UIElements::VisualElement*  commandListOwner) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8605};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field activeCommandList, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::CommandList*  activeCommandList;

/// @brief Field constantProps, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  constantProps;

/// @brief Field batchProps, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  batchProps;

/// @brief Field defaultMat, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  defaultMat;

/// @brief Field curState, offset: 0x20, size: 0x20, def value: None
 ::UnityEngine::UIElements::UIR::State  curState;

/// @brief Field curPage, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::Page*  curPage;

/// @brief Field mustApplyMaterial, offset: 0x48, size: 0x1, def value: None
 bool  mustApplyMaterial;

/// @brief Field mustApplyBatchProps, offset: 0x49, size: 0x1, def value: None
 bool  mustApplyBatchProps;

/// @brief Field mustApplyStencil, offset: 0x4a, size: 0x1, def value: None
 bool  mustApplyStencil;

/// @brief Field isSerializing, offset: 0x4b, size: 0x1, def value: None
 bool  isSerializing;

/// @brief Field commandListOwner, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  commandListOwner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UIRenderDevice_EvaluationState, activeCommandList) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_EvaluationState, constantProps) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_EvaluationState, batchProps) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_EvaluationState, defaultMat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_EvaluationState, curState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_EvaluationState, curPage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_EvaluationState, mustApplyMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_EvaluationState, mustApplyBatchProps) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_EvaluationState, mustApplyStencil) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_EvaluationState, isSerializing) == 0x4b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_EvaluationState, commandListOwner) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UIRenderDevice_EvaluationState) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
