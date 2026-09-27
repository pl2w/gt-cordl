#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/NavigationModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__ButtonDeltaState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__NavigationModel_ImplementationData_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NavigationModel)
namespace GlobalNamespace {
struct NavigationModel_ImplementationData;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct ButtonDeltaState;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct NavigationModel;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel, "UnityEngine.XR.Interaction.Toolkit.UI", "NavigationModel");
// Dependencies UnityEngine.Vector2, UnityEngine.XR.Interaction.Toolkit.UI.ButtonDeltaState, UnityEngine.XR.Interaction.Toolkit.UI.NavigationModel::ImplementationData
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.NavigationModel
struct CORDL_TYPE NavigationModel {
public:
// Declarations
using ImplementationData = ::GlobalNamespace::NavigationModel_ImplementationData;

 __declspec(property(get=get_cancelButtonDelta, put=set_cancelButtonDelta)) ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  cancelButtonDelta;

 __declspec(property(get=get_cancelButtonDown, put=set_cancelButtonDown)) bool  cancelButtonDown;

 __declspec(property(get=get_implementationData, put=set_implementationData)) ::GlobalNamespace::NavigationModel_ImplementationData  implementationData;

 __declspec(property(get=get_move, put=set_move)) ::UnityEngine::Vector2  move;

 __declspec(property(get=get_submitButtonDelta, put=set_submitButtonDelta)) ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  submitButtonDelta;

 __declspec(property(get=get_submitButtonDown, put=set_submitButtonDown)) bool  submitButtonDown;

/// @brief Method OnFrameFinished, addr 0xb432334, size 0x8, virtual false, abstract: false, final false
inline void OnFrameFinished() ;

/// @brief Method Reset, addr 0xb4322c8, size 0x58, virtual false, abstract: false, final false
inline void Reset() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_cancelButtonDelta, addr 0xb43229c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState get_cancelButtonDelta() ;

/// @brief Method get_cancelButtonDown, addr 0xb43226c, size 0x8, virtual false, abstract: false, final false
inline bool get_cancelButtonDown() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_implementationData, addr 0xb4322ac, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::NavigationModel_ImplementationData get_implementationData() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_move, addr 0xb43221c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_move() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_submitButtonDelta, addr 0xb43225c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState get_submitButtonDelta() ;

/// @brief Method get_submitButtonDown, addr 0xb43222c, size 0x8, virtual false, abstract: false, final false
inline bool get_submitButtonDown() ;

/// [CompilerGenerated]
/// @brief Method set_cancelButtonDelta, addr 0xb4322a4, size 0x8, virtual false, abstract: false, final false
inline void set_cancelButtonDelta(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  value) ;

/// @brief Method set_cancelButtonDown, addr 0xb432274, size 0x28, virtual false, abstract: false, final false
inline void set_cancelButtonDown(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_implementationData, addr 0xb4322bc, size 0xc, virtual false, abstract: false, final false
inline void set_implementationData(::GlobalNamespace::NavigationModel_ImplementationData  value) ;

/// [CompilerGenerated]
/// @brief Method set_move, addr 0xb432224, size 0x8, virtual false, abstract: false, final false
inline void set_move(::UnityEngine::Vector2  value) ;

/// [CompilerGenerated]
/// @brief Method set_submitButtonDelta, addr 0xb432264, size 0x8, virtual false, abstract: false, final false
inline void set_submitButtonDelta(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  value) ;

/// @brief Method set_submitButtonDown, addr 0xb432234, size 0x28, virtual false, abstract: false, final false
inline void set_submitButtonDown(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NavigationModel() ;

// Ctor Parameters [CppParam { name: "_move_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "_submitButtonDelta_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState", modifiers: "", def_value: None, comment: None }, CppParam { name: "_cancelButtonDelta_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState", modifiers: "", def_value: None, comment: None }, CppParam { name: "_implementationData_k__BackingField", ty: "::GlobalNamespace::NavigationModel_ImplementationData", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SubmitButtonDown", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CancelButtonDown", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr NavigationModel(::UnityEngine::Vector2  _move_k__BackingField, ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  _submitButtonDelta_k__BackingField, ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  _cancelButtonDelta_k__BackingField, ::GlobalNamespace::NavigationModel_ImplementationData  _implementationData_k__BackingField, bool  m_SubmitButtonDown, bool  m_CancelButtonDown) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11283};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [CompilerGenerated]
/// @brief Field <move>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  _move_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <submitButtonDelta>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  _submitButtonDelta_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <cancelButtonDelta>k__BackingField, offset: 0xc, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  _cancelButtonDelta_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <implementationData>k__BackingField, offset: 0x10, size: 0xc, def value: None
 ::GlobalNamespace::NavigationModel_ImplementationData  _implementationData_k__BackingField;

/// @brief Field m_SubmitButtonDown, offset: 0x1c, size: 0x1, def value: None
 bool  m_SubmitButtonDown;

/// @brief Field m_CancelButtonDown, offset: 0x1d, size: 0x1, def value: None
 bool  m_CancelButtonDown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel, _move_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel, _submitButtonDelta_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel, _cancelButtonDelta_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel, _implementationData_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel, m_SubmitButtonDown) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel, m_CancelButtonDown) == 0x1d, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
