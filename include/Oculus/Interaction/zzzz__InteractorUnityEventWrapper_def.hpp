#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractorUnityEventWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InteractorUnityEventWrapper)
namespace Oculus::Interaction {
class IInteractorView;
}
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class InteractorUnityEventWrapper;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::InteractorUnityEventWrapper*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractorUnityEventWrapper*, "Oculus.Interaction", "InteractorUnityEventWrapper");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractorUnityEventWrapper
class CORDL_TYPE InteractorUnityEventWrapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field InteractorView, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_InteractorView, put=__cordl_internal_set_InteractorView)) ::Oculus::Interaction::IInteractorView*  InteractorView;

 __declspec(property(get=get_WhenDisabled)) ::UnityEngine::Events::UnityEvent*  WhenDisabled;

 __declspec(property(get=get_WhenEnabled)) ::UnityEngine::Events::UnityEvent*  WhenEnabled;

 __declspec(property(get=get_WhenHover)) ::UnityEngine::Events::UnityEvent*  WhenHover;

 __declspec(property(get=get_WhenPostprocessed)) ::UnityEngine::Events::UnityEvent*  WhenPostprocessed;

 __declspec(property(get=get_WhenPreprocessed)) ::UnityEngine::Events::UnityEvent*  WhenPreprocessed;

 __declspec(property(get=get_WhenProcessed)) ::UnityEngine::Events::UnityEvent*  WhenProcessed;

 __declspec(property(get=get_WhenSelect)) ::UnityEngine::Events::UnityEvent*  WhenSelect;

 __declspec(property(get=get_WhenUnhover)) ::UnityEngine::Events::UnityEvent*  WhenUnhover;

 __declspec(property(get=get_WhenUnselect)) ::UnityEngine::Events::UnityEvent*  WhenUnselect;

/// @brief Field _interactorView, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactorView, put=__cordl_internal_set__interactorView)) ::UnityW<::UnityEngine::Object>  _interactorView;

/// @brief Field _started, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _whenDisabled, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenDisabled, put=__cordl_internal_set__whenDisabled)) ::UnityEngine::Events::UnityEvent*  _whenDisabled;

/// @brief Field _whenEnabled, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenEnabled, put=__cordl_internal_set__whenEnabled)) ::UnityEngine::Events::UnityEvent*  _whenEnabled;

/// @brief Field _whenHover, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenHover, put=__cordl_internal_set__whenHover)) ::UnityEngine::Events::UnityEvent*  _whenHover;

/// @brief Field _whenPostprocessed, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenPostprocessed, put=__cordl_internal_set__whenPostprocessed)) ::UnityEngine::Events::UnityEvent*  _whenPostprocessed;

/// @brief Field _whenPreprocessed, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenPreprocessed, put=__cordl_internal_set__whenPreprocessed)) ::UnityEngine::Events::UnityEvent*  _whenPreprocessed;

/// @brief Field _whenProcessed, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenProcessed, put=__cordl_internal_set__whenProcessed)) ::UnityEngine::Events::UnityEvent*  _whenProcessed;

/// @brief Field _whenSelect, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenSelect, put=__cordl_internal_set__whenSelect)) ::UnityEngine::Events::UnityEvent*  _whenSelect;

/// @brief Field _whenUnhover, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenUnhover, put=__cordl_internal_set__whenUnhover)) ::UnityEngine::Events::UnityEvent*  _whenUnhover;

/// @brief Field _whenUnselect, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenUnselect, put=__cordl_internal_set__whenUnselect)) ::UnityEngine::Events::UnityEvent*  _whenUnselect;

/// @brief Method Awake, addr 0xa483b0c, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandlePostprocessed, addr 0xa484260, size 0x18, virtual false, abstract: false, final false
inline void HandlePostprocessed() ;

/// @brief Method HandlePreprocessed, addr 0xa484230, size 0x18, virtual false, abstract: false, final false
inline void HandlePreprocessed() ;

/// @brief Method HandleProcessed, addr 0xa484248, size 0x18, virtual false, abstract: false, final false
inline void HandleProcessed() ;

/// @brief Method HandleStateChanged, addr 0xa484188, size 0xa8, virtual false, abstract: false, final false
inline void HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  args) ;

/// @brief Method InjectAllInteractorUnityEventWrapper, addr 0xa484278, size 0x4, virtual false, abstract: false, final false
inline void InjectAllInteractorUnityEventWrapper(::Oculus::Interaction::IInteractorView*  interactorView) ;

/// @brief Method InjectInteractorView, addr 0xa48427c, size 0xd0, virtual false, abstract: false, final false
inline void InjectInteractorView(::Oculus::Interaction::IInteractorView*  interactorView) ;

static inline ::Oculus::Interaction::InteractorUnityEventWrapper* New_ctor() ;

/// @brief Method OnDisable, addr 0xa483e94, size 0x2f4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa483ba0, size 0x2f4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa483b74, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::IInteractorView* const& __cordl_internal_get_InteractorView() const;

constexpr ::Oculus::Interaction::IInteractorView*& __cordl_internal_get_InteractorView() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__interactorView() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__interactorView() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenDisabled() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenDisabled() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenEnabled() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenEnabled() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenHover() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenHover() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenPostprocessed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenPostprocessed() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenPreprocessed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenPreprocessed() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenProcessed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenProcessed() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenSelect() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenSelect() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenUnhover() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenUnhover() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenUnselect() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenUnselect() ;

constexpr void __cordl_internal_set_InteractorView(::Oculus::Interaction::IInteractorView*  value) ;

constexpr void __cordl_internal_set__interactorView(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__whenDisabled(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenEnabled(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenHover(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenPostprocessed(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenPreprocessed(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenProcessed(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenSelect(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenUnhover(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenUnselect(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0xa48434c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_WhenDisabled, addr 0xa483ac4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenDisabled() ;

/// @brief Method get_WhenEnabled, addr 0xa483acc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenEnabled() ;

/// @brief Method get_WhenHover, addr 0xa483ad4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenHover() ;

/// @brief Method get_WhenPostprocessed, addr 0xa483b04, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenPostprocessed() ;

/// @brief Method get_WhenPreprocessed, addr 0xa483af4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenPreprocessed() ;

/// @brief Method get_WhenProcessed, addr 0xa483afc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenProcessed() ;

/// @brief Method get_WhenSelect, addr 0xa483ae4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenSelect() ;

/// @brief Method get_WhenUnhover, addr 0xa483adc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenUnhover() ;

/// @brief Method get_WhenUnselect, addr 0xa483aec, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenUnselect() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractorUnityEventWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractorUnityEventWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractorUnityEventWrapper(InteractorUnityEventWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractorUnityEventWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractorUnityEventWrapper(InteractorUnityEventWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15990};

/// [Tooltip("The IInteractorView (Interactor) component to wrap.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractorView), new[] {  })]
/// @brief Field _interactorView, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____interactorView;

/// @brief Field InteractorView, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractorView*  ___InteractorView;

/// [Tooltip("Raised when the Interactor is enabled.")]
/// [SerializeField]
/// @brief Field _whenEnabled, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenEnabled;

/// [Tooltip("Raised when the Interactor is disabled.")]
/// [SerializeField]
/// @brief Field _whenDisabled, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenDisabled;

/// [Tooltip("Raised when the Interactor is hovering over an Interactable.")]
/// [SerializeField]
/// @brief Field _whenHover, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenHover;

/// [Tooltip("Raised when the stops hovering over an Interactable.")]
/// [SerializeField]
/// @brief Field _whenUnhover, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenUnhover;

/// [Tooltip("Raised when the Interactor selects an Interactable.")]
/// [SerializeField]
/// @brief Field _whenSelect, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenSelect;

/// [Tooltip("Raised when the Interactor stops selecting an Interactable.")]
/// [SerializeField]
/// @brief Field _whenUnselect, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenUnselect;

/// [Space]
/// [Tooltip("Raised when the Interactor preprocesses.")]
/// [SerializeField]
/// @brief Field _whenPreprocessed, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenPreprocessed;

/// [Tooltip("Raised when the Interactor processes.")]
/// [SerializeField]
/// @brief Field _whenProcessed, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenProcessed;

/// [Tooltip("Raised when the Interactor processes.")]
/// [SerializeField]
/// @brief Field _whenPostprocessed, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenPostprocessed;

/// @brief Field _started, offset: 0x78, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::InteractorUnityEventWrapper, ____interactorView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorUnityEventWrapper, ___InteractorView) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorUnityEventWrapper, ____whenEnabled) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorUnityEventWrapper, ____whenDisabled) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorUnityEventWrapper, ____whenHover) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorUnityEventWrapper, ____whenUnhover) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorUnityEventWrapper, ____whenSelect) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorUnityEventWrapper, ____whenUnselect) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorUnityEventWrapper, ____whenPreprocessed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorUnityEventWrapper, ____whenProcessed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorUnityEventWrapper, ____whenPostprocessed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorUnityEventWrapper, ____started) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::InteractorUnityEventWrapper) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction
