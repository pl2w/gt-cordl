#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/LastKnownGoodHand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__Hand_def.hpp"
CORDL_MODULE_EXPORT(LastKnownGoodHand)
namespace Oculus::Interaction::Input {
class HandDataAsset;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class LastKnownGoodHand;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::LastKnownGoodHand*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::LastKnownGoodHand*, "Oculus.Interaction.Input", "LastKnownGoodHand");
// Dependencies Oculus.Interaction.Input.Hand
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.LastKnownGoodHand
class CORDL_TYPE LastKnownGoodHand : public ::Oculus::Interaction::Input::Hand {
public:
// Declarations
/// @brief Field _lastState, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastState, put=__cordl_internal_set__lastState)) ::Oculus::Interaction::Input::HandDataAsset*  _lastState;

/// @brief Method Apply, addr 0xa508668, size 0xac, virtual true, abstract: false, final false
inline void Apply(::Oculus::Interaction::Input::HandDataAsset*  data) ;

static inline ::Oculus::Interaction::Input::LastKnownGoodHand* New_ctor() ;

constexpr ::Oculus::Interaction::Input::HandDataAsset* const& __cordl_internal_get__lastState() const;

constexpr ::Oculus::Interaction::Input::HandDataAsset*& __cordl_internal_get__lastState() ;

constexpr void __cordl_internal_set__lastState(::Oculus::Interaction::Input::HandDataAsset*  value) ;

/// @brief Method .ctor, addr 0xa50886c, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LastKnownGoodHand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LastKnownGoodHand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LastKnownGoodHand(LastKnownGoodHand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LastKnownGoodHand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LastKnownGoodHand(LastKnownGoodHand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16476};

/// @brief Field _lastState, offset: 0x80, size: 0x8, def value: None
 ::Oculus::Interaction::Input::HandDataAsset*  ____lastState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::LastKnownGoodHand, ____lastState) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::LastKnownGoodHand) == 0x88, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
