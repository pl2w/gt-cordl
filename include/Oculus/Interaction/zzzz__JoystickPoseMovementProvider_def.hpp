#pragma once
// IWYU pragma private; include "Oculus/Interaction/JoystickPoseMovementProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(JoystickPoseMovementProvider)
namespace Oculus::Interaction {
class IInteractableView;
}
namespace Oculus::Interaction {
class IInteractorView;
}
namespace Oculus::Interaction {
class IMovementProvider;
}
namespace Oculus::Interaction {
class IMovement;
}
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace Oculus::Interaction {
class JoystickPoseMovementProvider;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::JoystickPoseMovementProvider*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::JoystickPoseMovementProvider*, "Oculus.Interaction", "JoystickPoseMovementProvider");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.JoystickPoseMovementProvider
class CORDL_TYPE JoystickPoseMovementProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_MaxDistance, put=set_MaxDistance)) float_t  MaxDistance;

 __declspec(property(get=get_MinDistance, put=set_MinDistance)) float_t  MinDistance;

 __declspec(property(get=get_MoveSpeed, put=set_MoveSpeed)) float_t  MoveSpeed;

 __declspec(property(get=get_RotationSpeed, put=set_RotationSpeed)) float_t  RotationSpeed;

/// @brief Field _interactable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactable, put=__cordl_internal_set__interactable)) ::UnityW<::UnityEngine::MonoBehaviour>  _interactable;

/// @brief Field _interactableView, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactableView, put=__cordl_internal_set__interactableView)) ::Oculus::Interaction::IInteractableView*  _interactableView;

/// @brief Field _latestSelectingInteractor, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__latestSelectingInteractor, put=__cordl_internal_set__latestSelectingInteractor)) ::Oculus::Interaction::IInteractorView*  _latestSelectingInteractor;

/// @brief Field _maxDistance, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDistance, put=__cordl_internal_set__maxDistance)) float_t  _maxDistance;

/// @brief Field _minDistance, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__minDistance, put=__cordl_internal_set__minDistance)) float_t  _minDistance;

/// @brief Field _moveSpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveSpeed, put=__cordl_internal_set__moveSpeed)) float_t  _moveSpeed;

/// @brief Field _rotationSpeed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotationSpeed, put=__cordl_internal_set__rotationSpeed)) float_t  _rotationSpeed;

/// @brief Convert operator to "::Oculus::Interaction::IMovementProvider"
constexpr operator  ::Oculus::Interaction::IMovementProvider*() noexcept;

/// @brief Method Awake, addr 0xa473f78, size 0x68, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateMovement, addr 0xa474428, size 0xa4, virtual true, abstract: false, final true
inline ::Oculus::Interaction::IMovement* CreateMovement() ;

static inline ::Oculus::Interaction::JoystickPoseMovementProvider* New_ctor() ;

/// @brief Method OnDisable, addr 0xa474188, size 0x1a8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa473fe0, size 0x1a8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSelectingInteractorViewAdded, addr 0xa474330, size 0x8, virtual false, abstract: false, final false
inline void OnSelectingInteractorViewAdded(::Oculus::Interaction::IInteractorView*  interactor) ;

/// @brief Method OnSelectingInteractorViewRemoved, addr 0xa474338, size 0xf0, virtual false, abstract: false, final false
inline void OnSelectingInteractorViewRemoved(::Oculus::Interaction::IInteractorView*  interactor) ;

constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get__interactable() const;

constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get__interactable() ;

constexpr ::Oculus::Interaction::IInteractableView* const& __cordl_internal_get__interactableView() const;

constexpr ::Oculus::Interaction::IInteractableView*& __cordl_internal_get__interactableView() ;

constexpr ::Oculus::Interaction::IInteractorView* const& __cordl_internal_get__latestSelectingInteractor() const;

constexpr ::Oculus::Interaction::IInteractorView*& __cordl_internal_get__latestSelectingInteractor() ;

constexpr float_t const& __cordl_internal_get__maxDistance() const;

constexpr float_t& __cordl_internal_get__maxDistance() ;

constexpr float_t const& __cordl_internal_get__minDistance() const;

constexpr float_t& __cordl_internal_get__minDistance() ;

constexpr float_t const& __cordl_internal_get__moveSpeed() const;

constexpr float_t& __cordl_internal_get__moveSpeed() ;

constexpr float_t const& __cordl_internal_get__rotationSpeed() const;

constexpr float_t& __cordl_internal_get__rotationSpeed() ;

constexpr void __cordl_internal_set__interactable(::UnityW<::UnityEngine::MonoBehaviour>  value) ;

constexpr void __cordl_internal_set__interactableView(::Oculus::Interaction::IInteractableView*  value) ;

constexpr void __cordl_internal_set__latestSelectingInteractor(::Oculus::Interaction::IInteractorView*  value) ;

constexpr void __cordl_internal_set__maxDistance(float_t  value) ;

constexpr void __cordl_internal_set__minDistance(float_t  value) ;

constexpr void __cordl_internal_set__moveSpeed(float_t  value) ;

constexpr void __cordl_internal_set__rotationSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0xa474528, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MaxDistance, addr 0xa473f68, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxDistance() ;

/// @brief Method get_MinDistance, addr 0xa473f58, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinDistance() ;

/// @brief Method get_MoveSpeed, addr 0xa473f38, size 0x8, virtual false, abstract: false, final false
inline float_t get_MoveSpeed() ;

/// @brief Method get_RotationSpeed, addr 0xa473f48, size 0x8, virtual false, abstract: false, final false
inline float_t get_RotationSpeed() ;

/// @brief Convert to "::Oculus::Interaction::IMovementProvider"
constexpr ::Oculus::Interaction::IMovementProvider* i___Oculus__Interaction__IMovementProvider() noexcept;

/// @brief Method set_MaxDistance, addr 0xa473f70, size 0x8, virtual false, abstract: false, final false
inline void set_MaxDistance(float_t  value) ;

/// @brief Method set_MinDistance, addr 0xa473f60, size 0x8, virtual false, abstract: false, final false
inline void set_MinDistance(float_t  value) ;

/// @brief Method set_MoveSpeed, addr 0xa473f40, size 0x8, virtual false, abstract: false, final false
inline void set_MoveSpeed(float_t  value) ;

/// @brief Method set_RotationSpeed, addr 0xa473f50, size 0x8, virtual false, abstract: false, final false
inline void set_RotationSpeed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JoystickPoseMovementProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JoystickPoseMovementProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JoystickPoseMovementProvider(JoystickPoseMovementProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoystickPoseMovementProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoystickPoseMovementProvider(JoystickPoseMovementProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15945};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractableView), new[] {  })]
/// @brief Field _interactable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MonoBehaviour>  ____interactable;

/// @brief Field _interactableView, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractableView*  ____interactableView;

/// [FormerlySerializedAs("moveSpeed")]
/// [SerializeField]
/// [Optional]
/// [Tooltip("The speed at which movement occurs.")]
/// @brief Field _moveSpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ____moveSpeed;

/// [FormerlySerializedAs("rotationSpeed")]
/// [SerializeField]
/// [Optional]
/// [Tooltip("The speed at which rotation occurs.")]
/// @brief Field _rotationSpeed, offset: 0x34, size: 0x4, def value: None
 float_t  ____rotationSpeed;

/// [SerializeField]
/// [Optional]
/// [Range(0, 10)]
/// [Tooltip("The minimum distance along the Z-axis for the grabbed object.")]
/// @brief Field _minDistance, offset: 0x38, size: 0x4, def value: None
 float_t  ____minDistance;

/// [SerializeField]
/// [Optional]
/// [Range(1, 10)]
/// [Tooltip("The maximum distance along the Z-axis for the grabbed object.")]
/// @brief Field _maxDistance, offset: 0x3c, size: 0x4, def value: None
 float_t  ____maxDistance;

/// @brief Field _latestSelectingInteractor, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractorView*  ____latestSelectingInteractor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::JoystickPoseMovementProvider, ____interactable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::JoystickPoseMovementProvider, ____interactableView) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::JoystickPoseMovementProvider, ____moveSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::JoystickPoseMovementProvider, ____rotationSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::JoystickPoseMovementProvider, ____minDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::JoystickPoseMovementProvider, ____maxDistance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::JoystickPoseMovementProvider, ____latestSelectingInteractor) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::JoystickPoseMovementProvider) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction
