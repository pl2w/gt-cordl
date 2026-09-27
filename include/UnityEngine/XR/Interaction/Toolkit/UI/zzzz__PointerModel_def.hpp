#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/PointerModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__MouseButtonModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__PointerModel_InternalData_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerModel)
namespace GlobalNamespace {
struct PointerModel_InternalData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct MouseButtonModel;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct PointerModel;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel, "UnityEngine.XR.Interaction.Toolkit.UI", "PointerModel");
// Dependencies UnityEngine.Vector2, UnityEngine.XR.Interaction.Toolkit.UI.MouseButtonModel, UnityEngine.XR.Interaction.Toolkit.UI.PointerModel::InternalData
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.PointerModel
struct CORDL_TYPE PointerModel {
public:
// Declarations
using InternalData = ::GlobalNamespace::PointerModel_InternalData;

 __declspec(property(get=get_changedThisFrame, put=set_changedThisFrame)) bool  changedThisFrame;

 __declspec(property(get=get_deltaPosition, put=set_deltaPosition)) ::UnityEngine::Vector2  deltaPosition;

 __declspec(property(get=get_displayIndex, put=set_displayIndex)) int32_t  displayIndex;

 __declspec(property(get=get_leftButton, put=set_leftButton)) ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel  leftButton;

 __declspec(property(put=set_leftButtonPressed)) bool  leftButtonPressed;

 __declspec(property(get=get_middleButton, put=set_middleButton)) ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel  middleButton;

 __declspec(property(put=set_middleButtonPressed)) bool  middleButtonPressed;

 __declspec(property(get=get_pointerId)) int32_t  pointerId;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector2  position;

 __declspec(property(get=get_rightButton, put=set_rightButton)) ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel  rightButton;

 __declspec(property(put=set_rightButtonPressed)) bool  rightButtonPressed;

 __declspec(property(get=get_scrollDelta, put=set_scrollDelta)) ::UnityEngine::Vector2  scrollDelta;

/// @brief Method CopyFrom, addr 0xb432b88, size 0xd0, virtual false, abstract: false, final false
inline void CopyFrom(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method CopyTo, addr 0xb432ab4, size 0xd4, virtual false, abstract: false, final false
inline void CopyTo(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnFrameFinished, addr 0xb432a48, size 0x6c, virtual false, abstract: false, final false
inline void OnFrameFinished() ;

/// @brief Method .ctor, addr 0xb4328c0, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(int32_t  pointerId) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_changedThisFrame, addr 0xb43261c, size 0x8, virtual false, abstract: false, final false
inline bool get_changedThisFrame() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_deltaPosition, addr 0xb43269c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_deltaPosition() ;

/// @brief Method get_displayIndex, addr 0xb43262c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_displayIndex() ;

/// @brief Method get_leftButton, addr 0xb4326ec, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel get_leftButton() ;

/// @brief Method get_middleButton, addr 0xb432824, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel get_middleButton() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_pointerId, addr 0xb432614, size 0x8, virtual false, abstract: false, final false
inline int32_t get_pointerId() ;

/// @brief Method get_position, addr 0xb432650, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_position() ;

/// @brief Method get_rightButton, addr 0xb432788, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel get_rightButton() ;

/// @brief Method get_scrollDelta, addr 0xb4326ac, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_scrollDelta() ;

/// [CompilerGenerated]
/// @brief Method set_changedThisFrame, addr 0xb432624, size 0x8, virtual false, abstract: false, final false
inline void set_changedThisFrame(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_deltaPosition, addr 0xb4326a4, size 0x8, virtual false, abstract: false, final false
inline void set_deltaPosition(::UnityEngine::Vector2  value) ;

/// @brief Method set_displayIndex, addr 0xb432634, size 0x1c, virtual false, abstract: false, final false
inline void set_displayIndex(int32_t  value) ;

/// @brief Method set_leftButton, addr 0xb4326fc, size 0x3c, virtual false, abstract: false, final false
inline void set_leftButton(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel  value) ;

/// @brief Method set_leftButtonPressed, addr 0xb432738, size 0x50, virtual false, abstract: false, final false
inline void set_leftButtonPressed(bool  value) ;

/// @brief Method set_middleButton, addr 0xb432834, size 0x3c, virtual false, abstract: false, final false
inline void set_middleButton(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel  value) ;

/// @brief Method set_middleButtonPressed, addr 0xb432870, size 0x50, virtual false, abstract: false, final false
inline void set_middleButtonPressed(bool  value) ;

/// @brief Method set_position, addr 0xb432658, size 0x44, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector2  value) ;

/// @brief Method set_rightButton, addr 0xb432798, size 0x3c, virtual false, abstract: false, final false
inline void set_rightButton(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel  value) ;

/// @brief Method set_rightButtonPressed, addr 0xb4327d4, size 0x50, virtual false, abstract: false, final false
inline void set_rightButtonPressed(bool  value) ;

/// @brief Method set_scrollDelta, addr 0xb4326b4, size 0x38, virtual false, abstract: false, final false
inline void set_scrollDelta(::UnityEngine::Vector2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PointerModel() ;

// Ctor Parameters [CppParam { name: "_pointerId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_changedThisFrame_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DisplayIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "_deltaPosition_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ScrollDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LeftButton", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_RightButton", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MiddleButton", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InternalData", ty: "::GlobalNamespace::PointerModel_InternalData", modifiers: "", def_value: None, comment: None }]
constexpr PointerModel(int32_t  _pointerId_k__BackingField, bool  _changedThisFrame_k__BackingField, int32_t  m_DisplayIndex, ::UnityEngine::Vector2  m_Position, ::UnityEngine::Vector2  _deltaPosition_k__BackingField, ::UnityEngine::Vector2  m_ScrollDelta, ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel  m_LeftButton, ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel  m_RightButton, ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel  m_MiddleButton, ::GlobalNamespace::PointerModel_InternalData  m_InternalData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11288};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x218};

/// [CompilerGenerated]
/// @brief Field <pointerId>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _pointerId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <changedThisFrame>k__BackingField, offset: 0x4, size: 0x1, def value: None
 bool  _changedThisFrame_k__BackingField;

/// @brief Field m_DisplayIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  m_DisplayIndex;

/// @brief Field m_Position, offset: 0xc, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_Position;

/// [CompilerGenerated]
/// @brief Field <deltaPosition>k__BackingField, offset: 0x14, size: 0x8, def value: None
 ::UnityEngine::Vector2  _deltaPosition_k__BackingField;

/// @brief Field m_ScrollDelta, offset: 0x1c, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_ScrollDelta;

/// @brief Field m_LeftButton, offset: 0x28, size: 0xa0, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel  m_LeftButton;

/// @brief Field m_RightButton, offset: 0xc8, size: 0xa0, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel  m_RightButton;

/// @brief Field m_MiddleButton, offset: 0x168, size: 0xa0, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel  m_MiddleButton;

/// @brief Field m_InternalData, offset: 0x208, size: 0x10, def value: None
 ::GlobalNamespace::PointerModel_InternalData  m_InternalData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel, _pointerId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel, _changedThisFrame_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel, m_DisplayIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel, m_Position) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel, _deltaPosition_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel, m_ScrollDelta) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel, m_LeftButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel, m_RightButton) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel, m_MiddleButton) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel, m_InternalData) == 0x208, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel) == 0x218, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
