#pragma once
// IWYU pragma private; include "GlobalNamespace/FXModifierPlayerColorSetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FXModifier_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FXModifierPlayerColorSetter)
namespace GlobalNamespace {
class PlayerColoredCosmetic;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class FXModifierPlayerColorSetter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FXModifierPlayerColorSetter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FXModifierPlayerColorSetter*, "", "FXModifierPlayerColorSetter");
// [RequireComponent(typeof(PlayerColoredCosmetic))]
// Dependencies FXModifier
namespace GlobalNamespace {
// Is value type: false
// CS Name: FXModifierPlayerColorSetter
class CORDL_TYPE FXModifierPlayerColorSetter : public ::GlobalNamespace::FXModifier {
public:
// Declarations
/// @brief Field playerColoredCosmetic, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerColoredCosmetic, put=__cordl_internal_set_playerColoredCosmetic)) ::UnityW<::GlobalNamespace::PlayerColoredCosmetic>  playerColoredCosmetic;

static inline ::GlobalNamespace::FXModifierPlayerColorSetter* New_ctor() ;

/// @brief Method UpdateScale, addr 0x567468c, size 0x28, virtual true, abstract: false, final false
inline void UpdateScale(float_t  scale, ::UnityEngine::Color  color) ;

constexpr ::UnityW<::GlobalNamespace::PlayerColoredCosmetic> const& __cordl_internal_get_playerColoredCosmetic() const;

constexpr ::UnityW<::GlobalNamespace::PlayerColoredCosmetic>& __cordl_internal_get_playerColoredCosmetic() ;

constexpr void __cordl_internal_set_playerColoredCosmetic(::UnityW<::GlobalNamespace::PlayerColoredCosmetic>  value) ;

/// @brief Method .ctor, addr 0x56746b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FXModifierPlayerColorSetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FXModifierPlayerColorSetter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FXModifierPlayerColorSetter(FXModifierPlayerColorSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FXModifierPlayerColorSetter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FXModifierPlayerColorSetter(FXModifierPlayerColorSetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{830};

/// [SerializeField]
/// @brief Field playerColoredCosmetic, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerColoredCosmetic>  ___playerColoredCosmetic;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FXModifierPlayerColorSetter, ___playerColoredCosmetic) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FXModifierPlayerColorSetter) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
