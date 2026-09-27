#pragma once
// IWYU pragma private; include "GlobalNamespace/RockPiles.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RockPiles_RockPile_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RockPiles)
namespace GlobalNamespace {
struct RockPiles_RockPile;
}
// Forward declare root types
namespace GlobalNamespace {
class RockPiles;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RockPiles*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RockPiles*, "", "RockPiles");
// Dependencies RockPiles::RockPile, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RockPiles
class CORDL_TYPE RockPiles : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RockPile = ::GlobalNamespace::RockPiles_RockPile;

/// @brief Field _rocks, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rocks, put=__cordl_internal_set__rocks)) ::ArrayW<::GlobalNamespace::RockPiles_RockPile>  _rocks;

static inline ::GlobalNamespace::RockPiles* New_ctor() ;

/// @brief Method Show, addr 0x5623c50, size 0x90, virtual false, abstract: false, final false
inline void Show(int32_t  visiblePercentage) ;

/// @brief Method ShowRock, addr 0x5623d98, size 0x74, virtual false, abstract: false, final false
inline void ShowRock(int32_t  rockToShow) ;

constexpr ::ArrayW<::GlobalNamespace::RockPiles_RockPile> const& __cordl_internal_get__rocks() const;

constexpr ::ArrayW<::GlobalNamespace::RockPiles_RockPile>& __cordl_internal_get__rocks() ;

constexpr void __cordl_internal_set__rocks(::ArrayW<::GlobalNamespace::RockPiles_RockPile>  value) ;

/// @brief Method .ctor, addr 0x5623e0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RockPiles() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RockPiles", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RockPiles(RockPiles && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RockPiles", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RockPiles(RockPiles const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{587};

/// [SerializeField]
/// @brief Field _rocks, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::RockPiles_RockPile>  ____rocks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RockPiles, ____rocks) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RockPiles) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
