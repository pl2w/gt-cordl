#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryPackAsSingleSquare.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BakeryPackAsSingleSquare)
// Forward declare root types
namespace GlobalNamespace {
class BakeryPackAsSingleSquare;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BakeryPackAsSingleSquare*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeryPackAsSingleSquare*, "", "BakeryPackAsSingleSquare");
// [HelpURL("https://geom.io/bakery/wiki/index.php?title=Manual#Bakery_Pack_As_Single_Square")]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BakeryPackAsSingleSquare
class CORDL_TYPE BakeryPackAsSingleSquare : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::BakeryPackAsSingleSquare* New_ctor() ;

/// @brief Method .ctor, addr 0x5f279cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BakeryPackAsSingleSquare() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BakeryPackAsSingleSquare", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BakeryPackAsSingleSquare(BakeryPackAsSingleSquare && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakeryPackAsSingleSquare", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakeryPackAsSingleSquare(BakeryPackAsSingleSquare const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32441};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BakeryPackAsSingleSquare) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
