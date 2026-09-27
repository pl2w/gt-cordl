#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HandActiveState)
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class HandActiveState;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandActiveState*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandActiveState*, "Oculus.Interaction", "HandActiveState");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandActiveState
class CORDL_TYPE HandActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

/// @brief Field Hand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Hand, put=__cordl_internal_set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method Awake, addr 0xa41377c, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllHandActiveState, addr 0xa4137e8, size 0x4, virtual false, abstract: false, final false
inline void InjectAllHandActiveState(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHand, addr 0xa4137ec, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

static inline ::Oculus::Interaction::HandActiveState* New_ctor() ;

/// @brief Method Start, addr 0xa4137e4, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get_Hand() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get_Hand() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr void __cordl_internal_set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa4138bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa4136d8, size 0xa4, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandActiveState(HandActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandActiveState(HandActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15756};

/// [Tooltip("ActiveState will be true while this hand is connected.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// @brief Field Hand, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ___Hand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandActiveState, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandActiveState, ___Hand) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandActiveState) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
