#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/TrackedDeviceModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__ButtonDeltaState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_ImplementationData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIInteractionType_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackedDeviceModel)
namespace GlobalNamespace {
struct TrackedDeviceModel_ImplementationData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct ButtonDeltaState;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class TrackedDeviceEventData;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct UIInteractionType;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TrackedDeviceModel;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, "UnityEngine.XR.Interaction.Toolkit.UI", "TrackedDeviceModel");
// Dependencies UnityEngine.EventSystems.RaycastResult, UnityEngine.LayerMask, UnityEngine.Quaternion, UnityEngine.Vector2, UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.UI.ButtonDeltaState, UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::ImplementationData, UnityEngine.XR.Interaction.Toolkit.UI.UIInteractionType
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel
struct CORDL_TYPE TrackedDeviceModel {
public:
// Declarations
using ImplementationData = ::GlobalNamespace::TrackedDeviceModel_ImplementationData;

/// @brief Field <invalid>k__BackingField, offset 0xffffffff, size 0x1a0 
 __declspec(property(get=getStaticF__invalid_k__BackingField, put=setStaticF__invalid_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel  _invalid_k__BackingField;

 __declspec(property(get=get_changedThisFrame, put=set_changedThisFrame)) bool  changedThisFrame;

 __declspec(property(get=get_clickOnDown, put=set_clickOnDown)) bool  clickOnDown;

 __declspec(property(get=get_currentRaycast, put=set_currentRaycast)) ::UnityEngine::EventSystems::RaycastResult  currentRaycast;

 __declspec(property(get=get_currentRaycastEndpointIndex, put=set_currentRaycastEndpointIndex)) int32_t  currentRaycastEndpointIndex;

 __declspec(property(get=get_implementationData)) ::GlobalNamespace::TrackedDeviceModel_ImplementationData  implementationData;

 __declspec(property(get=get_interactionType, put=set_interactionType)) ::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType  interactionType;

 __declspec(property(get=get_interactor, put=set_interactor)) ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor;

 __declspec(property(get=get_isScrollable, put=set_isScrollable)) bool  isScrollable;

/// @brief [Obsolete("maxRaycastDistance has been deprecated. Its value was unused, calling this property is unnecessary and should be removed.", true)]
 __declspec(property(get=get_maxRaycastDistance, put=set_maxRaycastDistance)) float_t  maxRaycastDistance;

 __declspec(property(get=get_orientation, put=set_orientation)) ::UnityEngine::Quaternion  orientation;

 __declspec(property(get=get_pointerId)) int32_t  pointerId;

 __declspec(property(get=get_pokeDepth, put=set_pokeDepth)) float_t  pokeDepth;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_positionProvider, put=set_positionProvider)) ::System::Func_1<::UnityEngine::Vector3>*  positionProvider;

 __declspec(property(get=get_raycastLayerMask, put=set_raycastLayerMask)) ::UnityEngine::LayerMask  raycastLayerMask;

 __declspec(property(get=get_raycastPoints, put=set_raycastPoints)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  raycastPoints;

 __declspec(property(get=get_scrollDelta, put=set_scrollDelta)) ::UnityEngine::Vector2  scrollDelta;

 __declspec(property(get=get_select, put=set_select)) bool  select;

 __declspec(property(get=get_selectDelta, put=set_selectDelta)) ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  selectDelta;

 __declspec(property(get=get_selectableObject, put=set_selectableObject)) ::UnityW<::UnityEngine::GameObject>  selectableObject;

/// @brief Method CopyFrom, addr 0xb439834, size 0x188, virtual false, abstract: false, final false
inline void CopyFrom(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*  eventData) ;

/// @brief Method CopyTo, addr 0xb4396b8, size 0x17c, virtual false, abstract: false, final false
inline void CopyTo(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*  eventData) ;

/// @brief Method OnFrameFinished, addr 0xb439628, size 0x90, virtual false, abstract: false, final false
inline void OnFrameFinished() ;

/// @brief Method Reset, addr 0xb4392ec, size 0x184, virtual false, abstract: false, final false
inline void Reset(bool  resetImplementation) ;

/// @brief Method UpdatePokeSelectState, addr 0xb4390e4, size 0xa4, virtual false, abstract: false, final false
inline void UpdatePokeSelectState() ;

/// @brief Method .ctor, addr 0xb439210, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(int32_t  pointerId) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel getStaticF__invalid_k__BackingField() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_changedThisFrame, addr 0xb438ba4, size 0x8, virtual false, abstract: false, final false
inline bool get_changedThisFrame() ;

/// @brief Method get_clickOnDown, addr 0xb438b84, size 0x8, virtual false, abstract: false, final false
inline bool get_clickOnDown() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_currentRaycast, addr 0xb438e64, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::RaycastResult get_currentRaycast() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_currentRaycastEndpointIndex, addr 0xb438e98, size 0x8, virtual false, abstract: false, final false
inline int32_t get_currentRaycastEndpointIndex() ;

/// @brief Method get_implementationData, addr 0xb438ab0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::TrackedDeviceModel_ImplementationData get_implementationData() ;

/// @brief Method get_interactionType, addr 0xb439058, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType get_interactionType() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_interactor, addr 0xb4390cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* get_interactor() ;

/// [CompilerGenerated]
/// @brief Method get_invalid, addr 0xb4391b0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel get_invalid() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_isScrollable, addr 0xb4391a0, size 0x8, virtual false, abstract: false, final false
inline bool get_isScrollable() ;

/// @brief Method get_maxRaycastDistance, addr 0xb4399bc, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxRaycastDistance() ;

/// @brief Method get_orientation, addr 0xb438cfc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_orientation() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_pointerId, addr 0xb438ac0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_pointerId() ;

/// @brief Method get_pokeDepth, addr 0xb438fdc, size 0x8, virtual false, abstract: false, final false
inline float_t get_pokeDepth() ;

/// @brief Method get_position, addr 0xb436364, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_positionProvider, addr 0xb438c68, size 0x8, virtual false, abstract: false, final false
inline ::System::Func_1<::UnityEngine::Vector3>* get_positionProvider() ;

/// @brief Method get_raycastLayerMask, addr 0xb438ea8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_raycastLayerMask() ;

/// @brief Method get_raycastPoints, addr 0xb438dbc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* get_raycastPoints() ;

/// @brief Method get_scrollDelta, addr 0xb438f34, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_scrollDelta() ;

/// @brief Method get_select, addr 0xb438ac8, size 0x8, virtual false, abstract: false, final false
inline bool get_select() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_selectDelta, addr 0xb438b94, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState get_selectDelta() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_selectableObject, addr 0xb439188, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_selectableObject() ;

static inline void setStaticF__invalid_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel  value) ;

/// [CompilerGenerated]
/// @brief Method set_changedThisFrame, addr 0xb438bac, size 0x8, virtual false, abstract: false, final false
inline void set_changedThisFrame(bool  value) ;

/// @brief Method set_clickOnDown, addr 0xb438b8c, size 0x8, virtual false, abstract: false, final false
inline void set_clickOnDown(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_currentRaycast, addr 0xb438e74, size 0x24, virtual false, abstract: false, final false
inline void set_currentRaycast(::UnityEngine::EventSystems::RaycastResult  value) ;

/// [CompilerGenerated]
/// @brief Method set_currentRaycastEndpointIndex, addr 0xb438ea0, size 0x8, virtual false, abstract: false, final false
inline void set_currentRaycastEndpointIndex(int32_t  value) ;

/// @brief Method set_interactionType, addr 0xb439060, size 0x6c, virtual false, abstract: false, final false
inline void set_interactionType(::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType  value) ;

/// [CompilerGenerated]
/// @brief Method set_interactor, addr 0xb4390d4, size 0x10, virtual false, abstract: false, final false
inline void set_interactor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  value) ;

/// [CompilerGenerated]
/// @brief Method set_isScrollable, addr 0xb4391a8, size 0x8, virtual false, abstract: false, final false
inline void set_isScrollable(bool  value) ;

/// @brief Method set_maxRaycastDistance, addr 0xb4399c4, size 0x4, virtual false, abstract: false, final false
inline void set_maxRaycastDistance(float_t  value) ;

/// @brief Method set_orientation, addr 0xb438d08, size 0xb4, virtual false, abstract: false, final false
inline void set_orientation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_pokeDepth, addr 0xb438fe4, size 0x74, virtual false, abstract: false, final false
inline void set_pokeDepth(float_t  value) ;

/// @brief Method set_position, addr 0xb438bb4, size 0xb4, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_positionProvider, addr 0xb438c70, size 0x8c, virtual false, abstract: false, final false
inline void set_positionProvider(::System::Func_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method set_raycastLayerMask, addr 0xb438eb0, size 0x84, virtual false, abstract: false, final false
inline void set_raycastLayerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_raycastPoints, addr 0xb438dc4, size 0xa0, virtual false, abstract: false, final false
inline void set_raycastPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method set_scrollDelta, addr 0xb438f40, size 0x9c, virtual false, abstract: false, final false
inline void set_scrollDelta(::UnityEngine::Vector2  value) ;

/// @brief Method set_select, addr 0xb438ad0, size 0xb4, virtual false, abstract: false, final false
inline void set_select(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_selectDelta, addr 0xb438b9c, size 0x8, virtual false, abstract: false, final false
inline void set_selectDelta(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  value) ;

/// [CompilerGenerated]
/// @brief Method set_selectableObject, addr 0xb439190, size 0x10, virtual false, abstract: false, final false
inline void set_selectableObject(::UnityEngine::GameObject*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TrackedDeviceModel() ;

// Ctor Parameters [CppParam { name: "m_ImplementationData", ty: "::GlobalNamespace::TrackedDeviceModel_ImplementationData", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pointerId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SelectDown", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ClickOnDown", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_selectDelta_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState", modifiers: "", def_value: None, comment: None }, CppParam { name: "_changedThisFrame_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PositionProvider", ty: "::System::Func_1<::UnityEngine::Vector3>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Orientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_RaycastPoints", ty: "::System::Collections::Generic::List_1<::UnityEngine::Vector3>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_currentRaycast_k__BackingField", ty: "::UnityEngine::EventSystems::RaycastResult", modifiers: "", def_value: None, comment: None }, CppParam { name: "_currentRaycastEndpointIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_RaycastLayerMask", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ScrollDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PokeDepth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InteractionType", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType", modifiers: "", def_value: None, comment: None }, CppParam { name: "_interactor_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_selectableObject_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_isScrollable_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr TrackedDeviceModel(::GlobalNamespace::TrackedDeviceModel_ImplementationData  m_ImplementationData, int32_t  _pointerId_k__BackingField, bool  m_SelectDown, bool  m_ClickOnDown, ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  _selectDelta_k__BackingField, bool  _changedThisFrame_k__BackingField, ::UnityEngine::Vector3  m_Position, ::System::Func_1<::UnityEngine::Vector3>*  m_PositionProvider, ::UnityEngine::Quaternion  m_Orientation, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  m_RaycastPoints, ::UnityEngine::EventSystems::RaycastResult  _currentRaycast_k__BackingField, int32_t  _currentRaycastEndpointIndex_k__BackingField, ::UnityEngine::LayerMask  m_RaycastLayerMask, ::UnityEngine::Vector2  m_ScrollDelta, float_t  m_PokeDepth, ::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType  m_InteractionType, ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  _interactor_k__BackingField, ::UnityW<::UnityEngine::GameObject>  _selectableObject_k__BackingField, bool  _isScrollable_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11299};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1a0};

/// @brief Field m_ImplementationData, offset: 0x0, size: 0xc0, def value: None
 ::GlobalNamespace::TrackedDeviceModel_ImplementationData  m_ImplementationData;

/// [CompilerGenerated]
/// @brief Field <pointerId>k__BackingField, offset: 0xc0, size: 0x4, def value: None
 int32_t  _pointerId_k__BackingField;

/// @brief Field m_SelectDown, offset: 0xc4, size: 0x1, def value: None
 bool  m_SelectDown;

/// @brief Field m_ClickOnDown, offset: 0xc5, size: 0x1, def value: None
 bool  m_ClickOnDown;

/// [CompilerGenerated]
/// @brief Field <selectDelta>k__BackingField, offset: 0xc8, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  _selectDelta_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <changedThisFrame>k__BackingField, offset: 0xcc, size: 0x1, def value: None
 bool  _changedThisFrame_k__BackingField;

/// @brief Field m_Position, offset: 0xd0, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Position;

/// @brief Field m_PositionProvider, offset: 0xe0, size: 0x8, def value: None
 ::System::Func_1<::UnityEngine::Vector3>*  m_PositionProvider;

/// @brief Field m_Orientation, offset: 0xe8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  m_Orientation;

/// @brief Field m_RaycastPoints, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  m_RaycastPoints;

/// [CompilerGenerated]
/// @brief Field <currentRaycast>k__BackingField, offset: 0x100, size: 0x70, def value: None
 ::UnityEngine::EventSystems::RaycastResult  _currentRaycast_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <currentRaycastEndpointIndex>k__BackingField, offset: 0x170, size: 0x4, def value: None
 int32_t  _currentRaycastEndpointIndex_k__BackingField;

/// @brief Field m_RaycastLayerMask, offset: 0x174, size: 0x4, def value: None
 ::UnityEngine::LayerMask  m_RaycastLayerMask;

/// @brief Field m_ScrollDelta, offset: 0x178, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_ScrollDelta;

/// @brief Field m_PokeDepth, offset: 0x180, size: 0x4, def value: None
 float_t  m_PokeDepth;

/// @brief Field m_InteractionType, offset: 0x184, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType  m_InteractionType;

/// [CompilerGenerated]
/// @brief Field <interactor>k__BackingField, offset: 0x188, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  _interactor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <selectableObject>k__BackingField, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  _selectableObject_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <isScrollable>k__BackingField, offset: 0x198, size: 0x1, def value: None
 bool  _isScrollable_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_ImplementationData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, _pointerId_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_SelectDown) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_ClickOnDown) == 0xc5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, _selectDelta_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, _changedThisFrame_k__BackingField) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_Position) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_PositionProvider) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_Orientation) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_RaycastPoints) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, _currentRaycast_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, _currentRaycastEndpointIndex_k__BackingField) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_RaycastLayerMask) == 0x174, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_ScrollDelta) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_PokeDepth) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_InteractionType) == 0x184, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, _interactor_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, _selectableObject_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, _isScrollable_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel) == 0x1a0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
