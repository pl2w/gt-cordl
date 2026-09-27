#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Movement/GrabMoveProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Movement/zzzz__ConstrainedMoveProvider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GrabMoveProvider)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputButtonReader;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement {
class GrabMoveProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement", "GrabMoveProvider");
// [AddComponentMenu("XR/Locomotion/Grab Move Provider", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.GrabMoveProvider.html")]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies UnityEngine.InputSystem.InputActionProperty, UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ConstrainedMoveProvider
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.GrabMoveProvider
class CORDL_TYPE GrabMoveProvider : public ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ConstrainedMoveProvider {
public:
// Declarations
/// @brief Field <canMove>k__BackingField, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get__canMove_k__BackingField, put=__cordl_internal_set__canMove_k__BackingField)) bool  _canMove_k__BackingField;

 __declspec(property(get=get_canMove, put=set_canMove)) bool  canMove;

 __declspec(property(get=get_controllerTransform, put=set_controllerTransform)) ::UnityW<::UnityEngine::Transform>  controllerTransform;

 __declspec(property(get=get_enableMoveWhileSelecting, put=set_enableMoveWhileSelecting)) bool  enableMoveWhileSelecting;

/// @brief [Obsolete("grabMoveAction has been deprecated. Please configure input action using grabMoveInput instead.")]
 __declspec(property(get=get_grabMoveAction, put=set_grabMoveAction)) ::UnityEngine::InputSystem::InputActionProperty  grabMoveAction;

 __declspec(property(get=get_grabMoveInput, put=set_grabMoveInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  grabMoveInput;

/// @brief Field m_ControllerInteractors, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ControllerInteractors, put=__cordl_internal_set_m_ControllerInteractors)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*  m_ControllerInteractors;

/// @brief Field m_ControllerTransform, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ControllerTransform, put=__cordl_internal_set_m_ControllerTransform)) ::UnityW<::UnityEngine::Transform>  m_ControllerTransform;

/// @brief Field m_EnableMoveWhileSelecting, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableMoveWhileSelecting, put=__cordl_internal_set_m_EnableMoveWhileSelecting)) bool  m_EnableMoveWhileSelecting;

/// @brief Field m_GrabMoveAction, offset 0x108, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_GrabMoveAction, put=__cordl_internal_set_m_GrabMoveAction)) ::UnityEngine::InputSystem::InputActionProperty  m_GrabMoveAction;

/// @brief Field m_GrabMoveInput, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GrabMoveInput, put=__cordl_internal_set_m_GrabMoveInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_GrabMoveInput;

/// @brief Field m_IsMoving, offset 0xf1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsMoving, put=__cordl_internal_set_m_IsMoving)) bool  m_IsMoving;

/// @brief Field m_MoveFactor, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MoveFactor, put=__cordl_internal_set_m_MoveFactor)) float_t  m_MoveFactor;

/// @brief Field m_PreviousControllerLocalPosition, offset 0xf4, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_PreviousControllerLocalPosition, put=__cordl_internal_set_m_PreviousControllerLocalPosition)) ::UnityEngine::Vector3  m_PreviousControllerLocalPosition;

 __declspec(property(get=get_moveFactor, put=set_moveFactor)) float_t  moveFactor;

/// @brief Method Awake, addr 0xb451c24, size 0x170, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ComputeDesiredMove, addr 0xb451e2c, size 0x1ac, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 ComputeDesiredMove(::by_ref<bool>  attemptingMove) ;

/// @brief Method ControllerHasSelection, addr 0xb452054, size 0x114, virtual false, abstract: false, final false
inline bool ControllerHasSelection() ;

/// @brief Method GatherControllerInteractors, addr 0xb451afc, size 0xe0, virtual false, abstract: false, final false
inline void GatherControllerInteractors() ;

/// @brief Method IsGrabbing, addr 0xb451fd8, size 0x7c, virtual false, abstract: false, final false
inline bool IsGrabbing() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider* New_ctor() ;

/// @brief Method OnDisable, addr 0xb451de0, size 0x4c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb451d94, size 0x4c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetInputActionProperty, addr 0xb4521b0, size 0xf4, virtual false, abstract: false, final false
inline void SetInputActionProperty(::by_ref<::UnityEngine::InputSystem::InputActionProperty>  property, ::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr bool const& __cordl_internal_get__canMove_k__BackingField() const;

constexpr bool& __cordl_internal_get__canMove_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>* const& __cordl_internal_get_m_ControllerInteractors() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*& __cordl_internal_get_m_ControllerInteractors() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_ControllerTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_ControllerTransform() ;

constexpr bool const& __cordl_internal_get_m_EnableMoveWhileSelecting() const;

constexpr bool& __cordl_internal_get_m_EnableMoveWhileSelecting() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_GrabMoveAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_GrabMoveAction() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_GrabMoveInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_GrabMoveInput() ;

constexpr bool const& __cordl_internal_get_m_IsMoving() const;

constexpr bool& __cordl_internal_get_m_IsMoving() ;

constexpr float_t const& __cordl_internal_get_m_MoveFactor() const;

constexpr float_t& __cordl_internal_get_m_MoveFactor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PreviousControllerLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PreviousControllerLocalPosition() ;

constexpr void __cordl_internal_set__canMove_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_ControllerInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*  value) ;

constexpr void __cordl_internal_set_m_ControllerTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_EnableMoveWhileSelecting(bool  value) ;

constexpr void __cordl_internal_set_m_GrabMoveAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_GrabMoveInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_IsMoving(bool  value) ;

constexpr void __cordl_internal_set_m_MoveFactor(float_t  value) ;

constexpr void __cordl_internal_set_m_PreviousControllerLocalPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xb4522a4, size 0x17c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_canMove, addr 0xb451c14, size 0x8, virtual false, abstract: false, final false
inline bool get_canMove() ;

/// @brief Method get_controllerTransform, addr 0xb451ad8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_controllerTransform() ;

/// @brief Method get_enableMoveWhileSelecting, addr 0xb451bdc, size 0x8, virtual false, abstract: false, final false
inline bool get_enableMoveWhileSelecting() ;

/// @brief Method get_grabMoveAction, addr 0xb452168, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_grabMoveAction() ;

/// @brief Method get_grabMoveInput, addr 0xb451bfc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_grabMoveInput() ;

/// @brief Method get_moveFactor, addr 0xb451bec, size 0x8, virtual false, abstract: false, final false
inline float_t get_moveFactor() ;

/// [CompilerGenerated]
/// @brief Method set_canMove, addr 0xb451c1c, size 0x8, virtual false, abstract: false, final false
inline void set_canMove(bool  value) ;

/// @brief Method set_controllerTransform, addr 0xb451ae0, size 0x1c, virtual false, abstract: false, final false
inline void set_controllerTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_enableMoveWhileSelecting, addr 0xb451be4, size 0x8, virtual false, abstract: false, final false
inline void set_enableMoveWhileSelecting(bool  value) ;

/// @brief Method set_grabMoveAction, addr 0xb452180, size 0x30, virtual false, abstract: false, final false
inline void set_grabMoveAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_grabMoveInput, addr 0xb451c04, size 0x10, virtual false, abstract: false, final false
inline void set_grabMoveInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_moveFactor, addr 0xb451bf4, size 0x8, virtual false, abstract: false, final false
inline void set_moveFactor(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabMoveProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabMoveProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabMoveProvider(GrabMoveProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabMoveProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabMoveProvider(GrabMoveProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11373};

/// [SerializeField]
/// @brief Field m_ControllerTransform, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_ControllerTransform;

/// [SerializeField]
/// @brief Field m_EnableMoveWhileSelecting, offset: 0xe0, size: 0x1, def value: None
 bool  ___m_EnableMoveWhileSelecting;

/// [SerializeField]
/// @brief Field m_MoveFactor, offset: 0xe4, size: 0x4, def value: None
 float_t  ___m_MoveFactor;

/// [SerializeField]
/// @brief Field m_GrabMoveInput, offset: 0xe8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_GrabMoveInput;

/// [CompilerGenerated]
/// @brief Field <canMove>k__BackingField, offset: 0xf0, size: 0x1, def value: None
 bool  ____canMove_k__BackingField;

/// @brief Field m_IsMoving, offset: 0xf1, size: 0x1, def value: None
 bool  ___m_IsMoving;

/// @brief Field m_PreviousControllerLocalPosition, offset: 0xf4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_PreviousControllerLocalPosition;

/// @brief Field m_ControllerInteractors, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*  ___m_ControllerInteractors;

/// [SerializeField]
/// [Obsolete("m_GrabMoveAction has been deprecated. Please configure input action using m_GrabMoveInput instead.")]
/// @brief Field m_GrabMoveAction, offset: 0x108, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_GrabMoveAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider, ___m_ControllerTransform) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider, ___m_EnableMoveWhileSelecting) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider, ___m_MoveFactor) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider, ___m_GrabMoveInput) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider, ____canMove_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider, ___m_IsMoving) == 0xf1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider, ___m_PreviousControllerLocalPosition) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider, ___m_ControllerInteractors) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider, ___m_GrabMoveAction) == 0x108, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider) == 0x120, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement
