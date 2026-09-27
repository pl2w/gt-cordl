#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandPokeLimiterVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HandPokeLimiterVisual)
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::Input {
class SyntheticHand;
}
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
}
namespace Oculus::Interaction {
class PokeInteractor;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class HandPokeLimiterVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandPokeLimiterVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandPokeLimiterVisual*, "Oculus.Interaction", "HandPokeLimiterVisual");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandPokeLimiterVisual
class CORDL_TYPE HandPokeLimiterVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Hand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Hand, put=__cordl_internal_set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _isTouching, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__isTouching, put=__cordl_internal_set__isTouching)) bool  _isTouching;

/// @brief Field _pokeInteractor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__pokeInteractor, put=__cordl_internal_set__pokeInteractor)) ::UnityW<::Oculus::Interaction::PokeInteractor>  _pokeInteractor;

/// @brief Field _started, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _syntheticHand, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__syntheticHand, put=__cordl_internal_set__syntheticHand)) ::UnityW<::Oculus::Interaction::Input::SyntheticHand>  _syntheticHand;

/// @brief Method Awake, addr 0xa45a08c, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckPassedSurface, addr 0xa45a438, size 0x48, virtual false, abstract: false, final false
inline void CheckPassedSurface() ;

/// @brief Method HandlePassedSurfaceChanged, addr 0xa45a434, size 0x4, virtual false, abstract: false, final false
inline void HandlePassedSurfaceChanged(bool  passed) ;

/// @brief Method HandleStateChanged, addr 0xa45a480, size 0x4, virtual false, abstract: false, final false
inline void HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  args) ;

/// @brief Method InjectAllHandPokeLimiterVisual, addr 0xa45a6a4, size 0x40, virtual false, abstract: false, final false
inline void InjectAllHandPokeLimiterVisual(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::PokeInteractor*  pokeInteractor, ::Oculus::Interaction::Input::SyntheticHand*  syntheticHand) ;

/// @brief Method InjectHand, addr 0xa45a6e4, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectPokeInteractor, addr 0xa45a7b4, size 0x8, virtual false, abstract: false, final false
inline void InjectPokeInteractor(::Oculus::Interaction::PokeInteractor*  pokeInteractor) ;

/// @brief Method InjectSyntheticHand, addr 0xa45a7bc, size 0x8, virtual false, abstract: false, final false
inline void InjectSyntheticHand(::Oculus::Interaction::Input::SyntheticHand*  syntheticHand) ;

/// @brief Method LateUpdate, addr 0xa45a4b0, size 0x4, virtual true, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LockWrist, addr 0xa45a484, size 0x2c, virtual false, abstract: false, final false
inline void LockWrist() ;

static inline ::Oculus::Interaction::HandPokeLimiterVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa45a28c, size 0x17c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa45a120, size 0x16c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa45a0f4, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UnlockWrist, addr 0xa45a408, size 0x2c, virtual false, abstract: false, final false
inline void UnlockWrist() ;

/// @brief Method UpdateWrist, addr 0xa45a4b4, size 0x1f0, virtual false, abstract: false, final false
inline void UpdateWrist() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get_Hand() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get_Hand() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr bool const& __cordl_internal_get__isTouching() const;

constexpr bool& __cordl_internal_get__isTouching() ;

constexpr ::UnityW<::Oculus::Interaction::PokeInteractor> const& __cordl_internal_get__pokeInteractor() const;

constexpr ::UnityW<::Oculus::Interaction::PokeInteractor>& __cordl_internal_get__pokeInteractor() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityW<::Oculus::Interaction::Input::SyntheticHand> const& __cordl_internal_get__syntheticHand() const;

constexpr ::UnityW<::Oculus::Interaction::Input::SyntheticHand>& __cordl_internal_get__syntheticHand() ;

constexpr void __cordl_internal_set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__isTouching(bool  value) ;

constexpr void __cordl_internal_set__pokeInteractor(::UnityW<::Oculus::Interaction::PokeInteractor>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__syntheticHand(::UnityW<::Oculus::Interaction::Input::SyntheticHand>  value) ;

/// @brief Method .ctor, addr 0xa45a7c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandPokeLimiterVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandPokeLimiterVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandPokeLimiterVisual(HandPokeLimiterVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandPokeLimiterVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandPokeLimiterVisual(HandPokeLimiterVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15860};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// @brief Field Hand, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ___Hand;

/// [SerializeField]
/// @brief Field _pokeInteractor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PokeInteractor>  ____pokeInteractor;

/// [SerializeField]
/// @brief Field _syntheticHand, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Input::SyntheticHand>  ____syntheticHand;

/// @brief Field _isTouching, offset: 0x40, size: 0x1, def value: None
 bool  ____isTouching;

/// @brief Field _started, offset: 0x41, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandPokeLimiterVisual, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeLimiterVisual, ___Hand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeLimiterVisual, ____pokeInteractor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeLimiterVisual, ____syntheticHand) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeLimiterVisual, ____isTouching) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeLimiterVisual, ____started) == 0x41, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandPokeLimiterVisual) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction
