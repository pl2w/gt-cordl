#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableUnityEventWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InteractableUnityEventWrapper)
namespace Oculus::Interaction {
class IInteractableView;
}
namespace Oculus::Interaction {
class IInteractorView;
}
namespace Oculus::Interaction {
struct InteractableStateChangeArgs;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class InteractableUnityEventWrapper;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::InteractableUnityEventWrapper*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractableUnityEventWrapper*, "Oculus.Interaction", "InteractableUnityEventWrapper");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractableUnityEventWrapper
class CORDL_TYPE InteractableUnityEventWrapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field InteractableView, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_InteractableView, put=__cordl_internal_set_InteractableView)) ::Oculus::Interaction::IInteractableView*  InteractableView;

 __declspec(property(get=get_WhenHover)) ::UnityEngine::Events::UnityEvent*  WhenHover;

 __declspec(property(get=get_WhenInteractorViewAdded)) ::UnityEngine::Events::UnityEvent*  WhenInteractorViewAdded;

 __declspec(property(get=get_WhenInteractorViewRemoved)) ::UnityEngine::Events::UnityEvent*  WhenInteractorViewRemoved;

 __declspec(property(get=get_WhenSelect)) ::UnityEngine::Events::UnityEvent*  WhenSelect;

 __declspec(property(get=get_WhenSelectingInteractorViewAdded)) ::UnityEngine::Events::UnityEvent*  WhenSelectingInteractorViewAdded;

 __declspec(property(get=get_WhenSelectingInteractorViewRemoved)) ::UnityEngine::Events::UnityEvent*  WhenSelectingInteractorViewRemoved;

 __declspec(property(get=get_WhenUnhover)) ::UnityEngine::Events::UnityEvent*  WhenUnhover;

 __declspec(property(get=get_WhenUnselect)) ::UnityEngine::Events::UnityEvent*  WhenUnselect;

/// @brief Field _interactableView, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactableView, put=__cordl_internal_set__interactableView)) ::UnityW<::UnityEngine::Object>  _interactableView;

/// @brief Field _started, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _whenHover, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenHover, put=__cordl_internal_set__whenHover)) ::UnityEngine::Events::UnityEvent*  _whenHover;

/// @brief Field _whenInteractorViewAdded, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenInteractorViewAdded, put=__cordl_internal_set__whenInteractorViewAdded)) ::UnityEngine::Events::UnityEvent*  _whenInteractorViewAdded;

/// @brief Field _whenInteractorViewRemoved, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenInteractorViewRemoved, put=__cordl_internal_set__whenInteractorViewRemoved)) ::UnityEngine::Events::UnityEvent*  _whenInteractorViewRemoved;

/// @brief Field _whenSelect, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenSelect, put=__cordl_internal_set__whenSelect)) ::UnityEngine::Events::UnityEvent*  _whenSelect;

/// @brief Field _whenSelectingInteractorViewAdded, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenSelectingInteractorViewAdded, put=__cordl_internal_set__whenSelectingInteractorViewAdded)) ::UnityEngine::Events::UnityEvent*  _whenSelectingInteractorViewAdded;

/// @brief Field _whenSelectingInteractorViewRemoved, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenSelectingInteractorViewRemoved, put=__cordl_internal_set__whenSelectingInteractorViewRemoved)) ::UnityEngine::Events::UnityEvent*  _whenSelectingInteractorViewRemoved;

/// @brief Field _whenUnhover, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenUnhover, put=__cordl_internal_set__whenUnhover)) ::UnityEngine::Events::UnityEvent*  _whenUnhover;

/// @brief Field _whenUnselect, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenUnselect, put=__cordl_internal_set__whenUnselect)) ::UnityEngine::Events::UnityEvent*  _whenUnselect;

/// @brief Method Awake, addr 0xa483164, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleInteractorViewAdded, addr 0xa483988, size 0x18, virtual false, abstract: false, final false
inline void HandleInteractorViewAdded(::Oculus::Interaction::IInteractorView*  interactorView) ;

/// @brief Method HandleInteractorViewRemoved, addr 0xa4839a0, size 0x18, virtual false, abstract: false, final false
inline void HandleInteractorViewRemoved(::Oculus::Interaction::IInteractorView*  interactorView) ;

/// @brief Method HandleSelectingInteractorViewAdded, addr 0xa4839b8, size 0x18, virtual false, abstract: false, final false
inline void HandleSelectingInteractorViewAdded(::Oculus::Interaction::IInteractorView*  interactorView) ;

/// @brief Method HandleSelectingInteractorViewRemoved, addr 0xa4839d0, size 0x18, virtual false, abstract: false, final false
inline void HandleSelectingInteractorViewRemoved(::Oculus::Interaction::IInteractorView*  interactorView) ;

/// @brief Method HandleStateChanged, addr 0xa483910, size 0x78, virtual false, abstract: false, final false
inline void HandleStateChanged(::Oculus::Interaction::InteractableStateChangeArgs  args) ;

/// @brief Method InjectAllInteractableUnityEventWrapper, addr 0xa4839e8, size 0x4, virtual false, abstract: false, final false
inline void InjectAllInteractableUnityEventWrapper(::Oculus::Interaction::IInteractableView*  interactableView) ;

/// @brief Method InjectInteractableView, addr 0xa4839ec, size 0xd0, virtual false, abstract: false, final false
inline void InjectInteractableView(::Oculus::Interaction::IInteractableView*  interactableView) ;

static inline ::Oculus::Interaction::InteractableUnityEventWrapper* New_ctor() ;

/// @brief Method OnDisable, addr 0xa483584, size 0x38c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4831f8, size 0x38c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa4831cc, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::IInteractableView* const& __cordl_internal_get_InteractableView() const;

constexpr ::Oculus::Interaction::IInteractableView*& __cordl_internal_get_InteractableView() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__interactableView() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__interactableView() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenHover() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenHover() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenInteractorViewAdded() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenInteractorViewAdded() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenInteractorViewRemoved() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenInteractorViewRemoved() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenSelect() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenSelect() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenSelectingInteractorViewAdded() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenSelectingInteractorViewAdded() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenSelectingInteractorViewRemoved() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenSelectingInteractorViewRemoved() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenUnhover() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenUnhover() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenUnselect() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenUnselect() ;

constexpr void __cordl_internal_set_InteractableView(::Oculus::Interaction::IInteractableView*  value) ;

constexpr void __cordl_internal_set__interactableView(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__whenHover(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenInteractorViewAdded(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenInteractorViewRemoved(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenSelect(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenSelectingInteractorViewAdded(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenSelectingInteractorViewRemoved(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenUnhover(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenUnselect(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0xa483abc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_WhenHover, addr 0xa483124, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenHover() ;

/// @brief Method get_WhenInteractorViewAdded, addr 0xa483144, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenInteractorViewAdded() ;

/// @brief Method get_WhenInteractorViewRemoved, addr 0xa48314c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenInteractorViewRemoved() ;

/// @brief Method get_WhenSelect, addr 0xa483134, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenSelect() ;

/// @brief Method get_WhenSelectingInteractorViewAdded, addr 0xa483154, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenSelectingInteractorViewAdded() ;

/// @brief Method get_WhenSelectingInteractorViewRemoved, addr 0xa48315c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenSelectingInteractorViewRemoved() ;

/// @brief Method get_WhenUnhover, addr 0xa48312c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenUnhover() ;

/// @brief Method get_WhenUnselect, addr 0xa48313c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenUnselect() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractableUnityEventWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractableUnityEventWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractableUnityEventWrapper(InteractableUnityEventWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractableUnityEventWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractableUnityEventWrapper(InteractableUnityEventWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15989};

/// [Tooltip("The IInteractableView (Interactable) component to wrap.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractableView), new[] {  })]
/// @brief Field _interactableView, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____interactableView;

/// @brief Field InteractableView, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractableView*  ___InteractableView;

/// [Tooltip("Raised when an Interactor hovers over the Interactable.")]
/// [SerializeField]
/// @brief Field _whenHover, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenHover;

/// [Tooltip("Raised when the Interactable was being hovered but now it isn\'t.")]
/// [SerializeField]
/// @brief Field _whenUnhover, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenUnhover;

/// [Tooltip("Raised when an Interactor selects the Interactable.")]
/// [SerializeField]
/// @brief Field _whenSelect, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenSelect;

/// [Tooltip("Raised when the Interactable was being selected but now it isn\'t.")]
/// [SerializeField]
/// @brief Field _whenUnselect, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenUnselect;

/// [Tooltip("Raised each time an Interactor hovers over the Interactable, even if the Interactable is already being hovered by a different Interactor.")]
/// [SerializeField]
/// @brief Field _whenInteractorViewAdded, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenInteractorViewAdded;

/// [Tooltip("Raised each time an Interactor stops hovering over the Interactable, even if the Interactable is still being hovered by a different Interactor.")]
/// [SerializeField]
/// @brief Field _whenInteractorViewRemoved, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenInteractorViewRemoved;

/// [Tooltip("Raised each time an Interactor selects the Interactable, even if the Interactable is already being selected by a different Interactor.")]
/// [SerializeField]
/// @brief Field _whenSelectingInteractorViewAdded, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenSelectingInteractorViewAdded;

/// [Tooltip("Raised each time an Interactor stops selecting the Interactable, even if the Interactable is still being selected by a different Interactor.")]
/// [SerializeField]
/// @brief Field _whenSelectingInteractorViewRemoved, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenSelectingInteractorViewRemoved;

/// @brief Field _started, offset: 0x70, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::InteractableUnityEventWrapper, ____interactableView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableUnityEventWrapper, ___InteractableView) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableUnityEventWrapper, ____whenHover) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableUnityEventWrapper, ____whenUnhover) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableUnityEventWrapper, ____whenSelect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableUnityEventWrapper, ____whenUnselect) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableUnityEventWrapper, ____whenInteractorViewAdded) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableUnityEventWrapper, ____whenInteractorViewRemoved) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableUnityEventWrapper, ____whenSelectingInteractorViewAdded) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableUnityEventWrapper, ____whenSelectingInteractorViewRemoved) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableUnityEventWrapper, ____started) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::InteractableUnityEventWrapper) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction
