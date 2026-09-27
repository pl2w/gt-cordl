#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ActiveStateTracker)
namespace Oculus::Interaction {
class IActiveState;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class ActiveStateTracker;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ActiveStateTracker*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ActiveStateTracker*, "Oculus.Interaction", "ActiveStateTracker");
// [DefaultExecutionOrder(1)]
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ActiveStateTracker
class CORDL_TYPE ActiveStateTracker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ActiveState, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ActiveState, put=__cordl_internal_set_ActiveState)) ::Oculus::Interaction::IActiveState*  ActiveState;

/// @brief Field _active, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__active, put=__cordl_internal_set__active)) bool  _active;

/// @brief Field _activeState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeState, put=__cordl_internal_set__activeState)) ::UnityW<::UnityEngine::Object>  _activeState;

/// @brief Field _gameObjects, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__gameObjects, put=__cordl_internal_set__gameObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _gameObjects;

/// @brief Field _includeChildrenAsDependents, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__includeChildrenAsDependents, put=__cordl_internal_set__includeChildrenAsDependents)) bool  _includeChildrenAsDependents;

/// @brief Field _monoBehaviours, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__monoBehaviours, put=__cordl_internal_set__monoBehaviours)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  _monoBehaviours;

/// @brief Method Awake, addr 0xa40aaf0, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectActiveState, addr 0xa40ae40, size 0xd0, virtual false, abstract: false, final false
inline void InjectActiveState(::Oculus::Interaction::IActiveState*  activeState) ;

/// @brief Method InjectAllActiveStateTracker, addr 0xa40ae3c, size 0x4, virtual false, abstract: false, final false
inline void InjectAllActiveStateTracker(::Oculus::Interaction::IActiveState*  activeState) ;

/// @brief Method InjectOptionalGameObjects, addr 0xa40af18, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gameObjects) ;

/// @brief Method InjectOptionalIncludeChildrenAsDependents, addr 0xa40af10, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalIncludeChildrenAsDependents(bool  includeChildrenAsDependents) ;

/// @brief Method InjectOptionalMonoBehaviours, addr 0xa40af20, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalMonoBehaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  monoBehaviours) ;

static inline ::Oculus::Interaction::ActiveStateTracker* New_ctor() ;

/// @brief Method SetDependentsActive, addr 0xa40ac74, size 0x100, virtual false, abstract: false, final false
inline void SetDependentsActive(bool  active) ;

/// @brief Method Start, addr 0xa40ab58, size 0x11c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa40ad74, size 0xc8, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Oculus::Interaction::IActiveState* const& __cordl_internal_get_ActiveState() const;

constexpr ::Oculus::Interaction::IActiveState*& __cordl_internal_get_ActiveState() ;

constexpr bool const& __cordl_internal_get__active() const;

constexpr bool& __cordl_internal_get__active() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__activeState() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__activeState() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__gameObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__gameObjects() ;

constexpr bool const& __cordl_internal_get__includeChildrenAsDependents() const;

constexpr bool& __cordl_internal_get__includeChildrenAsDependents() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* const& __cordl_internal_get__monoBehaviours() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*& __cordl_internal_get__monoBehaviours() ;

constexpr void __cordl_internal_set_ActiveState(::Oculus::Interaction::IActiveState*  value) ;

constexpr void __cordl_internal_set__active(bool  value) ;

constexpr void __cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__gameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__includeChildrenAsDependents(bool  value) ;

constexpr void __cordl_internal_set__monoBehaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  value) ;

/// @brief Method .ctor, addr 0xa40af28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateTracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveStateTracker(ActiveStateTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveStateTracker(ActiveStateTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15736};

/// [Tooltip("The IActiveState to be tracked.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// @brief Field _activeState, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____activeState;

/// @brief Field ActiveState, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  ___ActiveState;

/// [Header("Active state dependents")]
/// [SerializeField]
/// [Tooltip("If true, all children of this object will be included as dependents.")]
/// @brief Field _includeChildrenAsDependents, offset: 0x30, size: 0x1, def value: None
 bool  ____includeChildrenAsDependents;

/// [SerializeField]
/// [Optional]
/// [Tooltip("Sets the `active` field on whole GameObjects.")]
/// @brief Field _gameObjects, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ____gameObjects;

/// [SerializeField]
/// [Optional]
/// [Tooltip("Sets the `enabled` field on individual components.")]
/// @brief Field _monoBehaviours, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  ____monoBehaviours;

/// @brief Field _active, offset: 0x48, size: 0x1, def value: None
 bool  ____active;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ActiveStateTracker, ____activeState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateTracker, ___ActiveState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateTracker, ____includeChildrenAsDependents) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateTracker, ____gameObjects) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateTracker, ____monoBehaviours) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateTracker, ____active) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ActiveStateTracker) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction
