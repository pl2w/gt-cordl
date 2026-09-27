#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerDeviceState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDeviceState_PointerLocation_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDeviceState_RuntimePointerState_RaycastHit_def.hpp"
#include "UnityEngine/UIElements/zzzz__RuntimePanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerDeviceState)
namespace GlobalNamespace {
struct PointerDeviceState_LocationFlag;
}
namespace GlobalNamespace {
struct PointerDeviceState_PointerLocation;
}
namespace GlobalNamespace {
struct RuntimePointerState_PointerDeviceState_RaycastHit;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class PointerDeviceState_RuntimePointerState;
}
namespace UnityEngine::UIElements {
class PointerDeviceState_ScreenPointerState;
}
namespace UnityEngine::UIElements {
class PointerDeviceState_TrackedPointerState;
}
namespace UnityEngine::UIElements {
class RuntimePanel;
}
namespace UnityEngine::UIElements {
class UIDocument;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerDeviceState;
}
namespace UnityEngine::UIElements {
class PointerDeviceState_RuntimePointerState;
}
namespace UnityEngine::UIElements {
class PointerDeviceState_ScreenPointerState;
}
namespace UnityEngine::UIElements {
class PointerDeviceState_TrackedPointerState;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::PointerDeviceState*);
MARK_REF_T(::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState*);
MARK_REF_T(::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState*);
MARK_REF_T(::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PointerDeviceState*, "UnityEngine.UIElements", "PointerDeviceState");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState*, "UnityEngine.UIElements", "PointerDeviceState/RuntimePointerState");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState*, "UnityEngine.UIElements", "PointerDeviceState/ScreenPointerState");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState*, "UnityEngine.UIElements", "PointerDeviceState/TrackedPointerState");
// Dependencies System.Object, UnityEngine.Camera, UnityEngine.UIElements.PointerDeviceState::PointerLocation, UnityEngine.UIElements.PointerDeviceState::RuntimePointerState, UnityEngine.UIElements.RuntimePanel, UnityEngine.UIElements.UIDocument
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerDeviceState
class CORDL_TYPE PointerDeviceState : public ::System::Object {
public:
// Declarations
using LocationFlag = ::GlobalNamespace::PointerDeviceState_LocationFlag;

using PointerLocation = ::GlobalNamespace::PointerDeviceState_PointerLocation;

using RuntimePointerState = ::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState;

using ScreenPointerState = ::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState;

using TrackedPointerState = ::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState;

/// @brief Field s_CameraWithSoftPointerCapture, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CameraWithSoftPointerCapture, put=setStaticF_s_CameraWithSoftPointerCapture)) ::ArrayW<::UnityW<::UnityEngine::Camera>>  s_CameraWithSoftPointerCapture;

/// @brief Field s_PlayerPanelWithSoftPointerCapture, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PlayerPanelWithSoftPointerCapture, put=setStaticF_s_PlayerPanelWithSoftPointerCapture)) ::ArrayW<::UnityEngine::UIElements::RuntimePanel*>  s_PlayerPanelWithSoftPointerCapture;

/// @brief Field s_PlayerPointerLocations, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PlayerPointerLocations, put=setStaticF_s_PlayerPointerLocations)) ::ArrayW<::GlobalNamespace::PointerDeviceState_PointerLocation>  s_PlayerPointerLocations;

/// @brief Field s_PressedButtons, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PressedButtons, put=setStaticF_s_PressedButtons)) ::ArrayW<int32_t>  s_PressedButtons;

/// @brief Field s_RuntimePointerStates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RuntimePointerStates, put=setStaticF_s_RuntimePointerStates)) ::ArrayW<::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState*>  s_RuntimePointerStates;

/// @brief Field s_WorldSpaceDocumentWithSoftPointerCapture, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_WorldSpaceDocumentWithSoftPointerCapture, put=setStaticF_s_WorldSpaceDocumentWithSoftPointerCapture)) ::ArrayW<::UnityW<::UnityEngine::UIElements::UIDocument>>  s_WorldSpaceDocumentWithSoftPointerCapture;

/// @brief Method GetCameraWithSoftPointerCapture, addr 0xb89a3a8, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Camera> GetCameraWithSoftPointerCapture(int32_t  pointerId) ;

/// @brief Method GetPanel, addr 0xb89a07c, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::IPanel* GetPanel(int32_t  pointerId, ::UnityEngine::UIElements::ContextType  contextType) ;

/// @brief Method GetPlayerPanelWithSoftPointerCapture, addr 0xb89a2b0, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::RuntimePanel* GetPlayerPanelWithSoftPointerCapture(int32_t  pointerId) ;

/// @brief Method GetPointerDeltaPosition, addr 0xb899f60, size 0x11c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetPointerDeltaPosition(int32_t  pointerId, ::UnityEngine::UIElements::ContextType  contextType, ::UnityEngine::Vector3  newPosition) ;

/// @brief Method GetPointerPosition, addr 0xb88ef14, size 0x84, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetPointerPosition(int32_t  pointerId, ::UnityEngine::UIElements::ContextType  contextType) ;

/// @brief Method GetPressedButtons, addr 0xb89a19c, size 0x7c, virtual false, abstract: false, final false
static inline int32_t GetPressedButtons(int32_t  pointerId) ;

/// @brief Method GetScreenPointerState, addr 0xb89a9b8, size 0x1d0, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState* GetScreenPointerState(int32_t  pointerId, bool  createIfNull) ;

/// @brief Method GetTrackedState, addr 0xb89a660, size 0x1d0, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState* GetTrackedState(int32_t  pointerId, bool  createIfNull) ;

/// @brief Method GetWorldSpaceDocumentWithSoftPointerCapture, addr 0xb89a32c, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::UIElements::UIDocument> GetWorldSpaceDocumentWithSoftPointerCapture(int32_t  pointerId) ;

/// @brief Method HasAdditionalPressedButtons, addr 0xb89a218, size 0x98, virtual false, abstract: false, final false
static inline bool HasAdditionalPressedButtons(int32_t  pointerId, int32_t  exceptButtonId) ;

/// @brief Method HasFlagFast, addr 0xb89a0fc, size 0xc, virtual false, abstract: false, final false
static inline bool HasFlagFast(::GlobalNamespace::PointerDeviceState_LocationFlag  flagSet, ::GlobalNamespace::PointerDeviceState_LocationFlag  flag) ;

/// @brief Method HasLocationFlag, addr 0xb89a108, size 0x94, virtual false, abstract: false, final false
static inline bool HasLocationFlag(int32_t  pointerId, ::UnityEngine::UIElements::ContextType  contextType, ::GlobalNamespace::PointerDeviceState_LocationFlag  flag) ;

/// @brief Method PressButton, addr 0xb899d48, size 0x10c, virtual false, abstract: false, final false
static inline void PressButton(int32_t  pointerId, int32_t  buttonId) ;

/// @brief Method ReleaseAllButtons, addr 0xb897e44, size 0x7c, virtual false, abstract: false, final false
static inline void ReleaseAllButtons(int32_t  pointerId) ;

/// @brief Method ReleaseButton, addr 0xb899e54, size 0x10c, virtual false, abstract: false, final false
static inline void ReleaseButton(int32_t  pointerId, int32_t  buttonId) ;

/// @brief Method RemoveDocumentData, addr 0xb899b24, size 0x16c, virtual false, abstract: false, final false
static inline void RemoveDocumentData(::UnityEngine::UIElements::UIDocument*  document) ;

/// @brief Method RemovePanelData, addr 0xb899764, size 0x26c, virtual false, abstract: false, final false
static inline void RemovePanelData(::UnityEngine::UIElements::IPanel*  panel) ;

/// @brief Method RemoveTrackedState, addr 0xb89a8d4, size 0xe4, virtual false, abstract: false, final false
static inline void RemoveTrackedState(int32_t  pointerId) ;

/// @brief Method SavePointerPosition, addr 0xb899c90, size 0xb8, virtual false, abstract: false, final false
static inline void SavePointerPosition(int32_t  pointerId, ::UnityEngine::Vector3  position, ::UnityEngine::UIElements::IPanel*  panel, ::UnityEngine::UIElements::ContextType  contextType) ;

/// @brief Method SetElementWithSoftPointerCapture, addr 0xb89a424, size 0x23c, virtual false, abstract: false, final false
static inline void SetElementWithSoftPointerCapture(int32_t  pointerId, ::UnityEngine::UIElements::VisualElement*  element, ::UnityEngine::Camera*  camera) ;

static inline ::ArrayW<::UnityW<::UnityEngine::Camera>> getStaticF_s_CameraWithSoftPointerCapture() ;

static inline ::ArrayW<::UnityEngine::UIElements::RuntimePanel*> getStaticF_s_PlayerPanelWithSoftPointerCapture() ;

static inline ::ArrayW<::GlobalNamespace::PointerDeviceState_PointerLocation> getStaticF_s_PlayerPointerLocations() ;

static inline ::ArrayW<int32_t> getStaticF_s_PressedButtons() ;

static inline ::ArrayW<::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState*> getStaticF_s_RuntimePointerStates() ;

static inline ::ArrayW<::UnityW<::UnityEngine::UIElements::UIDocument>> getStaticF_s_WorldSpaceDocumentWithSoftPointerCapture() ;

static inline void setStaticF_s_CameraWithSoftPointerCapture(::ArrayW<::UnityW<::UnityEngine::Camera>>  value) ;

static inline void setStaticF_s_PlayerPanelWithSoftPointerCapture(::ArrayW<::UnityEngine::UIElements::RuntimePanel*>  value) ;

static inline void setStaticF_s_PlayerPointerLocations(::ArrayW<::GlobalNamespace::PointerDeviceState_PointerLocation>  value) ;

static inline void setStaticF_s_PressedButtons(::ArrayW<int32_t>  value) ;

static inline void setStaticF_s_RuntimePointerStates(::ArrayW<::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState*>  value) ;

static inline void setStaticF_s_WorldSpaceDocumentWithSoftPointerCapture(::ArrayW<::UnityW<::UnityEngine::UIElements::UIDocument>>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointerDeviceState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointerDeviceState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerDeviceState(PointerDeviceState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerDeviceState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerDeviceState(PointerDeviceState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7686};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::PointerDeviceState) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.Quaternion, UnityEngine.UIElements.PointerDeviceState::RuntimePointerState, UnityEngine.Vector3
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerDeviceState/TrackedPointerState
class CORDL_TYPE PointerDeviceState_TrackedPointerState : public ::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState {
public:
// Declarations
/// @brief Field maxDistance, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistance, put=__cordl_internal_set_maxDistance)) float_t  maxDistance;

/// @brief Field worldOrientation, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_worldOrientation, put=__cordl_internal_set_worldOrientation)) ::UnityEngine::Quaternion  worldOrientation;

/// @brief Field worldPosition, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_worldPosition, put=__cordl_internal_set_worldPosition)) ::UnityEngine::Vector3  worldPosition;

 __declspec(property(get=get_worldRay)) ::UnityEngine::Ray  worldRay;

static inline ::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState* New_ctor() ;

/// @brief Method Reset, addr 0xb89afa4, size 0xa4, virtual true, abstract: false, final false
inline void Reset() ;

constexpr float_t const& __cordl_internal_get_maxDistance() const;

constexpr float_t& __cordl_internal_get_maxDistance() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_worldOrientation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_worldOrientation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_worldPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_worldPosition() ;

constexpr void __cordl_internal_set_maxDistance(float_t  value) ;

constexpr void __cordl_internal_set_worldOrientation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_worldPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xb89a830, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_worldRay, addr 0xb89ae40, size 0x164, virtual false, abstract: false, final false
inline ::UnityEngine::Ray get_worldRay() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointerDeviceState_TrackedPointerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointerDeviceState_TrackedPointerState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerDeviceState_TrackedPointerState(PointerDeviceState_TrackedPointerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerDeviceState_TrackedPointerState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerDeviceState_TrackedPointerState(PointerDeviceState_TrackedPointerState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7685};

/// @brief Field worldPosition, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___worldPosition;

/// @brief Field worldOrientation, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___worldOrientation;

/// @brief Field maxDistance, offset: 0x50, size: 0x4, def value: None
 float_t  ___maxDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState, ___worldPosition) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState, ___worldOrientation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState, ___maxDistance) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies System.Nullable`1<T>, UnityEngine.UIElements.PointerDeviceState::RuntimePointerState, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerDeviceState/ScreenPointerState
class CORDL_TYPE PointerDeviceState_ScreenPointerState : public ::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState {
public:
// Declarations
/// @brief Field mousePosition, offset 0x34, size 0x8 
 __declspec(property(get=__cordl_internal_get_mousePosition, put=__cordl_internal_set_mousePosition)) ::UnityEngine::Vector2  mousePosition;

/// @brief Field targetDisplay, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_targetDisplay, put=__cordl_internal_set_targetDisplay)) ::System::Nullable_1<int32_t>  targetDisplay;

static inline ::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState* New_ctor() ;

/// @brief Method Reset, addr 0xb89ade0, size 0x60, virtual true, abstract: false, final false
inline void Reset() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_mousePosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_mousePosition() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_targetDisplay() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_targetDisplay() ;

constexpr void __cordl_internal_set_mousePosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_targetDisplay(::System::Nullable_1<int32_t>  value) ;

/// @brief Method .ctor, addr 0xb89ab88, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointerDeviceState_ScreenPointerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointerDeviceState_ScreenPointerState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerDeviceState_ScreenPointerState(PointerDeviceState_ScreenPointerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerDeviceState_ScreenPointerState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerDeviceState_ScreenPointerState(PointerDeviceState_ScreenPointerState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7684};

/// @brief Field mousePosition, offset: 0x34, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___mousePosition;

/// @brief Field targetDisplay, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___targetDisplay;

/// @brief Size padding 0x48 - 0x50 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState, ___mousePosition) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState, ___targetDisplay) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.UIElements.PointerDeviceState::RuntimePointerState::RaycastHit
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerDeviceState/RuntimePointerState
class CORDL_TYPE PointerDeviceState_RuntimePointerState : public ::System::Object {
public:
// Declarations
using RaycastHit = ::GlobalNamespace::RuntimePointerState_PointerDeviceState_RaycastHit;

/// @brief Field hit, offset 0x10, size 0x20 
 __declspec(property(get=__cordl_internal_get_hit, put=__cordl_internal_set_hit)) ::GlobalNamespace::RuntimePointerState_PointerDeviceState_RaycastHit  hit;

/// @brief Field updateFrameCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateFrameCount, put=__cordl_internal_set_updateFrameCount)) int32_t  updateFrameCount;

static inline ::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState* New_ctor() ;

/// @brief Method Reset, addr 0xb89adc4, size 0x10, virtual true, abstract: false, final false
inline void Reset() ;

constexpr ::GlobalNamespace::RuntimePointerState_PointerDeviceState_RaycastHit const& __cordl_internal_get_hit() const;

constexpr ::GlobalNamespace::RuntimePointerState_PointerDeviceState_RaycastHit& __cordl_internal_get_hit() ;

constexpr int32_t const& __cordl_internal_get_updateFrameCount() const;

constexpr int32_t& __cordl_internal_get_updateFrameCount() ;

constexpr void __cordl_internal_set_hit(::GlobalNamespace::RuntimePointerState_PointerDeviceState_RaycastHit  value) ;

constexpr void __cordl_internal_set_updateFrameCount(int32_t  value) ;

/// @brief Method .ctor, addr 0xb89add4, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointerDeviceState_RuntimePointerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointerDeviceState_RuntimePointerState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerDeviceState_RuntimePointerState(PointerDeviceState_RuntimePointerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerDeviceState_RuntimePointerState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerDeviceState_RuntimePointerState(PointerDeviceState_RuntimePointerState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7683};

/// @brief Field hit, offset: 0x10, size: 0x20, def value: None
 ::GlobalNamespace::RuntimePointerState_PointerDeviceState_RaycastHit  ___hit;

/// @brief Field updateFrameCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___updateFrameCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState, ___hit) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState, ___updateFrameCount) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
