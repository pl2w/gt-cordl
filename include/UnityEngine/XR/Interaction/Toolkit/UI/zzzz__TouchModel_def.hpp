#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/TouchModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__ButtonDeltaState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TouchModel_ImplementationData_def.hpp"
#include "UnityEngine/zzzz__TouchPhase_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchModel)
namespace GlobalNamespace {
struct TouchModel_ImplementationData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct ButtonDeltaState;
}
namespace UnityEngine {
struct TouchPhase;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TouchModel;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel, "UnityEngine.XR.Interaction.Toolkit.UI", "TouchModel");
// Dependencies UnityEngine.TouchPhase, UnityEngine.Vector2, UnityEngine.XR.Interaction.Toolkit.UI.ButtonDeltaState, UnityEngine.XR.Interaction.Toolkit.UI.TouchModel::ImplementationData
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.TouchModel
struct CORDL_TYPE TouchModel {
public:
// Declarations
using ImplementationData = ::GlobalNamespace::TouchModel_ImplementationData;

 __declspec(property(get=get_changedThisFrame, put=set_changedThisFrame)) bool  changedThisFrame;

 __declspec(property(get=get_deltaPosition, put=set_deltaPosition)) ::UnityEngine::Vector2  deltaPosition;

 __declspec(property(get=get_pointerId)) int32_t  pointerId;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector2  position;

 __declspec(property(get=get_selectDelta, put=set_selectDelta)) ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  selectDelta;

 __declspec(property(get=get_selectPhase, put=set_selectPhase)) ::UnityEngine::TouchPhase  selectPhase;

/// @brief Method CopyFrom, addr 0xb434304, size 0x110, virtual false, abstract: false, final false
inline void CopyFrom(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method CopyTo, addr 0xb434184, size 0x180, virtual false, abstract: false, final false
inline void CopyTo(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnFrameFinished, addr 0xb43412c, size 0x58, virtual false, abstract: false, final false
inline void OnFrameFinished() ;

/// @brief Method Reset, addr 0xb4340cc, size 0x60, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method .ctor, addr 0xb433f00, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(int32_t  pointerId) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_changedThisFrame, addr 0xb433e94, size 0x8, virtual false, abstract: false, final false
inline bool get_changedThisFrame() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_deltaPosition, addr 0xb433ef0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_deltaPosition() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_pointerId, addr 0xb433e30, size 0x8, virtual false, abstract: false, final false
inline int32_t get_pointerId() ;

/// @brief Method get_position, addr 0xb433ea4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_position() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_selectDelta, addr 0xb433e84, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState get_selectDelta() ;

/// @brief Method get_selectPhase, addr 0xb433e38, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::TouchPhase get_selectPhase() ;

/// [CompilerGenerated]
/// @brief Method set_changedThisFrame, addr 0xb433e9c, size 0x8, virtual false, abstract: false, final false
inline void set_changedThisFrame(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_deltaPosition, addr 0xb433ef8, size 0x8, virtual false, abstract: false, final false
inline void set_deltaPosition(::UnityEngine::Vector2  value) ;

/// @brief Method set_position, addr 0xb433eac, size 0x44, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector2  value) ;

/// [CompilerGenerated]
/// @brief Method set_selectDelta, addr 0xb433e8c, size 0x8, virtual false, abstract: false, final false
inline void set_selectDelta(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  value) ;

/// @brief Method set_selectPhase, addr 0xb433e40, size 0x44, virtual false, abstract: false, final false
inline void set_selectPhase(::UnityEngine::TouchPhase  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TouchModel() ;

// Ctor Parameters [CppParam { name: "_pointerId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_selectDelta_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState", modifiers: "", def_value: None, comment: None }, CppParam { name: "_changedThisFrame_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_deltaPosition_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SelectPhase", ty: "::UnityEngine::TouchPhase", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ImplementationData", ty: "::GlobalNamespace::TouchModel_ImplementationData", modifiers: "", def_value: None, comment: None }]
constexpr TouchModel(int32_t  _pointerId_k__BackingField, ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  _selectDelta_k__BackingField, bool  _changedThisFrame_k__BackingField, ::UnityEngine::Vector2  _deltaPosition_k__BackingField, ::UnityEngine::TouchPhase  m_SelectPhase, ::UnityEngine::Vector2  m_Position, ::GlobalNamespace::TouchModel_ImplementationData  m_ImplementationData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11292};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc8};

/// [CompilerGenerated]
/// @brief Field <pointerId>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _pointerId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <selectDelta>k__BackingField, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  _selectDelta_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <changedThisFrame>k__BackingField, offset: 0x8, size: 0x1, def value: None
 bool  _changedThisFrame_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <deltaPosition>k__BackingField, offset: 0xc, size: 0x8, def value: None
 ::UnityEngine::Vector2  _deltaPosition_k__BackingField;

/// @brief Field m_SelectPhase, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::TouchPhase  m_SelectPhase;

/// @brief Field m_Position, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_Position;

/// @brief Field m_ImplementationData, offset: 0x20, size: 0xa8, def value: None
 ::GlobalNamespace::TouchModel_ImplementationData  m_ImplementationData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel, _pointerId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel, _selectDelta_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel, _changedThisFrame_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel, _deltaPosition_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel, m_SelectPhase) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel, m_Position) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel, m_ImplementationData) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel) == 0xc8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
