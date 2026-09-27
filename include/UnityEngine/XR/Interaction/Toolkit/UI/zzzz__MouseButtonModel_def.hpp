#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/MouseButtonModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__ButtonDeltaState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__MouseButtonModel_ImplementationData_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MouseButtonModel)
namespace GlobalNamespace {
struct MouseButtonModel_ImplementationData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct ButtonDeltaState;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct MouseButtonModel;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel, "UnityEngine.XR.Interaction.Toolkit.UI", "MouseButtonModel");
// Dependencies UnityEngine.XR.Interaction.Toolkit.UI.ButtonDeltaState, UnityEngine.XR.Interaction.Toolkit.UI.MouseButtonModel::ImplementationData
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.MouseButtonModel
struct CORDL_TYPE MouseButtonModel {
public:
// Declarations
using ImplementationData = ::GlobalNamespace::MouseButtonModel_ImplementationData;

 __declspec(property(get=get_isDown, put=set_isDown)) bool  isDown;

 __declspec(property(get=get_lastFrameDelta, put=set_lastFrameDelta)) ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  lastFrameDelta;

/// @brief Method CopyFrom, addr 0xb4324f8, size 0x88, virtual false, abstract: false, final false
inline void CopyFrom(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method CopyTo, addr 0xb432470, size 0x88, virtual false, abstract: false, final false
inline void CopyTo(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnFrameFinished, addr 0xb432468, size 0x8, virtual false, abstract: false, final false
inline void OnFrameFinished() ;

/// @brief Method Reset, addr 0xb4323b4, size 0x10, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method get_isDown, addr 0xb43236c, size 0x8, virtual false, abstract: false, final false
inline bool get_isDown() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_lastFrameDelta, addr 0xb4323a4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState get_lastFrameDelta() ;

/// @brief Method set_isDown, addr 0xb432374, size 0x30, virtual false, abstract: false, final false
inline void set_isDown(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_lastFrameDelta, addr 0xb4323ac, size 0x8, virtual false, abstract: false, final false
inline void set_lastFrameDelta(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr MouseButtonModel() ;

// Ctor Parameters [CppParam { name: "_lastFrameDelta_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IsDown", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ImplementationData", ty: "::GlobalNamespace::MouseButtonModel_ImplementationData", modifiers: "", def_value: None, comment: None }]
constexpr MouseButtonModel(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  _lastFrameDelta_k__BackingField, bool  m_IsDown, ::GlobalNamespace::MouseButtonModel_ImplementationData  m_ImplementationData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11286};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa0};

/// [CompilerGenerated]
/// @brief Field <lastFrameDelta>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  _lastFrameDelta_k__BackingField;

/// @brief Field m_IsDown, offset: 0x4, size: 0x1, def value: None
 bool  m_IsDown;

/// @brief Field m_ImplementationData, offset: 0x8, size: 0x98, def value: None
 ::GlobalNamespace::MouseButtonModel_ImplementationData  m_ImplementationData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel, _lastFrameDelta_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel, m_IsDown) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel, m_ImplementationData) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel) == 0xa0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
