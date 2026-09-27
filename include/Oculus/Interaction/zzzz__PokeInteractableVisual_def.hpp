#pragma once
// IWYU pragma private; include "Oculus/Interaction/PokeInteractableVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PokeInteractableVisual)
namespace Oculus::Interaction {
class PokeInteractable;
}
namespace Oculus::Interaction {
class PokeInteractor;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction {
class PokeInteractableVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PokeInteractableVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PokeInteractableVisual*, "Oculus.Interaction", "PokeInteractableVisual");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PokeInteractableVisual
class CORDL_TYPE PokeInteractableVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _buttonBaseTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonBaseTransform, put=__cordl_internal_set__buttonBaseTransform)) ::UnityW<::UnityEngine::Transform>  _buttonBaseTransform;

/// @brief Field _maxOffsetAlongNormal, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxOffsetAlongNormal, put=__cordl_internal_set__maxOffsetAlongNormal)) float_t  _maxOffsetAlongNormal;

/// @brief Field _planarOffset, offset 0x34, size 0x8 
 __declspec(property(get=__cordl_internal_get__planarOffset, put=__cordl_internal_set__planarOffset)) ::UnityEngine::Vector2  _planarOffset;

/// @brief Field _pokeInteractable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__pokeInteractable, put=__cordl_internal_set__pokeInteractable)) ::UnityW<::Oculus::Interaction::PokeInteractable>  _pokeInteractable;

/// @brief Field _pokeInteractors, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__pokeInteractors, put=__cordl_internal_set__pokeInteractors)) ::System::Collections::Generic::HashSet_1<::UnityW<::Oculus::Interaction::PokeInteractor>>*  _pokeInteractors;

 __declspec(property(get=get__postProcessHandler)) ::System::Action*  _postProcessHandler;

/// @brief Field _postProcessInteractor, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__postProcessInteractor, put=__cordl_internal_set__postProcessInteractor)) ::UnityW<::Oculus::Interaction::PokeInteractor>  _postProcessInteractor;

/// @brief Field _started, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method HandleInteractorAdded, addr 0xa45b22c, size 0xf4, virtual false, abstract: false, final false
inline void HandleInteractorAdded(::Oculus::Interaction::PokeInteractor*  pokeInteractor) ;

/// @brief Method HandleInteractorRemoved, addr 0xa45b320, size 0x260, virtual false, abstract: false, final false
inline void HandleInteractorRemoved(::Oculus::Interaction::PokeInteractor*  pokeInteractor) ;

/// @brief Method InjectAllPokeInteractableVisual, addr 0xa45b580, size 0x30, virtual false, abstract: false, final false
inline void InjectAllPokeInteractableVisual(::Oculus::Interaction::PokeInteractable*  pokeInteractable, ::UnityEngine::Transform*  buttonBaseTransform) ;

/// @brief Method InjectButtonBaseTransform, addr 0xa45b5b8, size 0x8, virtual false, abstract: false, final false
inline void InjectButtonBaseTransform(::UnityEngine::Transform*  buttonBaseTransform) ;

/// @brief Method InjectPokeInteractable, addr 0xa45b5b0, size 0x8, virtual false, abstract: false, final false
inline void InjectPokeInteractable(::Oculus::Interaction::PokeInteractable*  pokeInteractable) ;

static inline ::Oculus::Interaction::PokeInteractableVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa45aca8, size 0x278, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa45aa84, size 0x224, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa45a848, size 0x23c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateComponentPosition, addr 0xa45af20, size 0x30c, virtual false, abstract: false, final false
inline void UpdateComponentPosition() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__buttonBaseTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__buttonBaseTransform() ;

constexpr float_t const& __cordl_internal_get__maxOffsetAlongNormal() const;

constexpr float_t& __cordl_internal_get__maxOffsetAlongNormal() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__planarOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__planarOffset() ;

constexpr ::UnityW<::Oculus::Interaction::PokeInteractable> const& __cordl_internal_get__pokeInteractable() const;

constexpr ::UnityW<::Oculus::Interaction::PokeInteractable>& __cordl_internal_get__pokeInteractable() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Oculus::Interaction::PokeInteractor>>* const& __cordl_internal_get__pokeInteractors() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Oculus::Interaction::PokeInteractor>>*& __cordl_internal_get__pokeInteractors() ;

constexpr ::UnityW<::Oculus::Interaction::PokeInteractor> const& __cordl_internal_get__postProcessInteractor() const;

constexpr ::UnityW<::Oculus::Interaction::PokeInteractor>& __cordl_internal_get__postProcessInteractor() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__buttonBaseTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__maxOffsetAlongNormal(float_t  value) ;

constexpr void __cordl_internal_set__planarOffset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__pokeInteractable(::UnityW<::Oculus::Interaction::PokeInteractable>  value) ;

constexpr void __cordl_internal_set__pokeInteractors(::System::Collections::Generic::HashSet_1<::UnityW<::Oculus::Interaction::PokeInteractor>>*  value) ;

constexpr void __cordl_internal_set__postProcessInteractor(::UnityW<::Oculus::Interaction::PokeInteractor>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa45b5c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get__postProcessHandler, addr 0xa45a7cc, size 0x7c, virtual false, abstract: false, final false
inline ::System::Action* get__postProcessHandler() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PokeInteractableVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PokeInteractableVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PokeInteractableVisual(PokeInteractableVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PokeInteractableVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PokeInteractableVisual(PokeInteractableVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15861};

/// [Tooltip("The Poke Interactable.")]
/// [SerializeField]
/// @brief Field _pokeInteractable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PokeInteractable>  ____pokeInteractable;

/// [Tooltip("Acts as the limit of the button (the point where it\'s fully depressed).")]
/// [SerializeField]
/// @brief Field _buttonBaseTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____buttonBaseTransform;

/// @brief Field _maxOffsetAlongNormal, offset: 0x30, size: 0x4, def value: None
 float_t  ____maxOffsetAlongNormal;

/// @brief Field _planarOffset, offset: 0x34, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____planarOffset;

/// @brief Field _pokeInteractors, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::Oculus::Interaction::PokeInteractor>>*  ____pokeInteractors;

/// @brief Field _postProcessInteractor, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PokeInteractor>  ____postProcessInteractor;

/// @brief Field _started, offset: 0x50, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PokeInteractableVisual, ____pokeInteractable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractableVisual, ____buttonBaseTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractableVisual, ____maxOffsetAlongNormal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractableVisual, ____planarOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractableVisual, ____pokeInteractors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractableVisual, ____postProcessInteractor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractableVisual, ____started) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PokeInteractableVisual) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction
