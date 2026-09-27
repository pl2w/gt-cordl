#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateUnityEventWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ActiveStateUnityEventWrapper)
namespace Oculus::Interaction {
class IActiveState;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class ActiveStateUnityEventWrapper;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ActiveStateUnityEventWrapper*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ActiveStateUnityEventWrapper*, "Oculus.Interaction", "ActiveStateUnityEventWrapper");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ActiveStateUnityEventWrapper
class CORDL_TYPE ActiveStateUnityEventWrapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ActiveState, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ActiveState, put=__cordl_internal_set_ActiveState)) ::Oculus::Interaction::IActiveState*  ActiveState;

 __declspec(property(get=get_WhenActivated)) ::UnityEngine::Events::UnityEvent*  WhenActivated;

 __declspec(property(get=get_WhenDeactivated)) ::UnityEngine::Events::UnityEvent*  WhenDeactivated;

/// @brief Field _activeState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeState, put=__cordl_internal_set__activeState)) ::UnityW<::UnityEngine::Object>  _activeState;

/// @brief Field _emitOnFirstUpdate, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__emitOnFirstUpdate, put=__cordl_internal_set__emitOnFirstUpdate)) bool  _emitOnFirstUpdate;

/// @brief Field _emittedOnFirstUpdate, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__emittedOnFirstUpdate, put=__cordl_internal_set__emittedOnFirstUpdate)) bool  _emittedOnFirstUpdate;

/// @brief Field _savedState, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get__savedState, put=__cordl_internal_set__savedState)) bool  _savedState;

/// @brief Field _whenActivated, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenActivated, put=__cordl_internal_set__whenActivated)) ::UnityEngine::Events::UnityEvent*  _whenActivated;

/// @brief Field _whenDeactivated, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenDeactivated, put=__cordl_internal_set__whenDeactivated)) ::UnityEngine::Events::UnityEvent*  _whenDeactivated;

/// @brief Method Awake, addr 0xa482ea4, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectActiveState, addr 0xa48302c, size 0xd0, virtual false, abstract: false, final false
inline void InjectActiveState(::Oculus::Interaction::IActiveState*  activeState) ;

/// @brief Method InjectAllActiveStateUnityEventWrapper, addr 0xa483028, size 0x4, virtual false, abstract: false, final false
inline void InjectAllActiveStateUnityEventWrapper(::Oculus::Interaction::IActiveState*  activeState) ;

/// @brief Method InjectOptionalEmitOnFirstUpdate, addr 0xa4830fc, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalEmitOnFirstUpdate(bool  emitOnFirstUpdate) ;

/// @brief Method InjectOptionalWhenActivated, addr 0xa483104, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalWhenActivated(::UnityEngine::Events::UnityEvent*  whenActivated) ;

/// @brief Method InjectOptionalWhenDeactivated, addr 0xa48310c, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalWhenDeactivated(::UnityEngine::Events::UnityEvent*  whenDeactivated) ;

/// @brief Method InvokeEvent, addr 0xa482ffc, size 0x2c, virtual false, abstract: false, final false
inline void InvokeEvent() ;

static inline ::Oculus::Interaction::ActiveStateUnityEventWrapper* New_ctor() ;

/// @brief Method Start, addr 0xa482f0c, size 0x8, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa482f14, size 0xe8, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Oculus::Interaction::IActiveState* const& __cordl_internal_get_ActiveState() const;

constexpr ::Oculus::Interaction::IActiveState*& __cordl_internal_get_ActiveState() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__activeState() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__activeState() ;

constexpr bool const& __cordl_internal_get__emitOnFirstUpdate() const;

constexpr bool& __cordl_internal_get__emitOnFirstUpdate() ;

constexpr bool const& __cordl_internal_get__emittedOnFirstUpdate() const;

constexpr bool& __cordl_internal_get__emittedOnFirstUpdate() ;

constexpr bool const& __cordl_internal_get__savedState() const;

constexpr bool& __cordl_internal_get__savedState() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenActivated() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenActivated() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenDeactivated() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenDeactivated() ;

constexpr void __cordl_internal_set_ActiveState(::Oculus::Interaction::IActiveState*  value) ;

constexpr void __cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__emitOnFirstUpdate(bool  value) ;

constexpr void __cordl_internal_set__emittedOnFirstUpdate(bool  value) ;

constexpr void __cordl_internal_set__savedState(bool  value) ;

constexpr void __cordl_internal_set__whenActivated(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenDeactivated(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0xa483114, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_WhenActivated, addr 0xa482e94, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenActivated() ;

/// @brief Method get_WhenDeactivated, addr 0xa482e9c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenDeactivated() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateUnityEventWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateUnityEventWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveStateUnityEventWrapper(ActiveStateUnityEventWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateUnityEventWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveStateUnityEventWrapper(ActiveStateUnityEventWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15988};

/// [Tooltip("Events will fire based on the state of this IActiveState.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// @brief Field _activeState, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____activeState;

/// @brief Field ActiveState, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  ___ActiveState;

/// [Tooltip("This event will be fired when the provided IActiveState becomes active.")]
/// [SerializeField]
/// @brief Field _whenActivated, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenActivated;

/// [Tooltip("This event will be fired when the provided IActiveState becomes inactive.")]
/// [SerializeField]
/// @brief Field _whenDeactivated, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenDeactivated;

/// [SerializeField]
/// [Tooltip("If true, the corresponding event will be fired at the beginning of Update.")]
/// @brief Field _emitOnFirstUpdate, offset: 0x40, size: 0x1, def value: None
 bool  ____emitOnFirstUpdate;

/// @brief Field _emittedOnFirstUpdate, offset: 0x41, size: 0x1, def value: None
 bool  ____emittedOnFirstUpdate;

/// @brief Field _savedState, offset: 0x42, size: 0x1, def value: None
 bool  ____savedState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ActiveStateUnityEventWrapper, ____activeState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateUnityEventWrapper, ___ActiveState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateUnityEventWrapper, ____whenActivated) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateUnityEventWrapper, ____whenDeactivated) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateUnityEventWrapper, ____emitOnFirstUpdate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateUnityEventWrapper, ____emittedOnFirstUpdate) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateUnityEventWrapper, ____savedState) == 0x42, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ActiveStateUnityEventWrapper) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction
