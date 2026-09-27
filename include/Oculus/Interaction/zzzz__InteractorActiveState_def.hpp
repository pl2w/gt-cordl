#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractorActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__InteractorActiveState_InteractorProperty_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InteractorActiveState)
namespace GlobalNamespace {
struct InteractorActiveState_InteractorProperty;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace Oculus::Interaction {
class IInteractor;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class InteractorActiveState;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::InteractorActiveState*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractorActiveState*, "Oculus.Interaction", "InteractorActiveState");
// Dependencies Oculus.Interaction.InteractorActiveState::InteractorProperty, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractorActiveState
class CORDL_TYPE InteractorActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InteractorProperty = ::GlobalNamespace::InteractorActiveState_InteractorProperty;

 __declspec(property(get=get_Active)) bool  Active;

/// @brief Field Interactor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Interactor, put=__cordl_internal_set_Interactor)) ::Oculus::Interaction::IInteractor*  Interactor;

 __declspec(property(get=get_Property, put=set_Property)) ::GlobalNamespace::InteractorActiveState_InteractorProperty  Property;

/// @brief Field _interactor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactor, put=__cordl_internal_set__interactor)) ::UnityW<::UnityEngine::Object>  _interactor;

/// @brief Field _property, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__property, put=__cordl_internal_set__property)) ::GlobalNamespace::InteractorActiveState_InteractorProperty  _property;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method Awake, addr 0xa4194f0, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllInteractorActiveState, addr 0xa41955c, size 0x4, virtual false, abstract: false, final false
inline void InjectAllInteractorActiveState(::Oculus::Interaction::IInteractor*  interactor) ;

/// @brief Method InjectInteractor, addr 0xa419560, size 0xd0, virtual false, abstract: false, final false
inline void InjectInteractor(::Oculus::Interaction::IInteractor*  interactor) ;

static inline ::Oculus::Interaction::InteractorActiveState* New_ctor() ;

/// @brief Method Start, addr 0xa419558, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::IInteractor* const& __cordl_internal_get_Interactor() const;

constexpr ::Oculus::Interaction::IInteractor*& __cordl_internal_get_Interactor() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__interactor() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__interactor() ;

constexpr ::GlobalNamespace::InteractorActiveState_InteractorProperty const& __cordl_internal_get__property() const;

constexpr ::GlobalNamespace::InteractorActiveState_InteractorProperty& __cordl_internal_get__property() ;

constexpr void __cordl_internal_set_Interactor(::Oculus::Interaction::IInteractor*  value) ;

constexpr void __cordl_internal_set__interactor(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__property(::GlobalNamespace::InteractorActiveState_InteractorProperty  value) ;

/// @brief Method .ctor, addr 0xa419630, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa419144, size 0x3ac, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Method get_Property, addr 0xa419134, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InteractorActiveState_InteractorProperty get_Property() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// @brief Method set_Property, addr 0xa41913c, size 0x8, virtual false, abstract: false, final false
inline void set_Property(::GlobalNamespace::InteractorActiveState_InteractorProperty  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractorActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractorActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractorActiveState(InteractorActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractorActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractorActiveState(InteractorActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15788};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractor), new[] {  })]
/// @brief Field _interactor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____interactor;

/// @brief Field Interactor, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractor*  ___Interactor;

/// [SerializeField]
/// @brief Field _property, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::InteractorActiveState_InteractorProperty  ____property;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::InteractorActiveState, ____interactor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorActiveState, ___Interactor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorActiveState, ____property) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::InteractorActiveState) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction
