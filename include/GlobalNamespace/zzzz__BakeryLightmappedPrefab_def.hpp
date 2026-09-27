#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryLightmappedPrefab.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BakeryLightmappedPrefab)
// Forward declare root types
namespace GlobalNamespace {
class BakeryLightmappedPrefab;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BakeryLightmappedPrefab*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeryLightmappedPrefab*, "", "BakeryLightmappedPrefab");
// [HelpURL("https://geom.io/bakery/wiki/index.php?title=Manual#Bakery_Lightmapped_Prefab")]
// [DisallowMultipleComponent]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BakeryLightmappedPrefab
class CORDL_TYPE BakeryLightmappedPrefab : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::BakeryLightmappedPrefab* New_ctor() ;

/// @brief Method .ctor, addr 0x5f27898, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BakeryLightmappedPrefab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BakeryLightmappedPrefab", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BakeryLightmappedPrefab(BakeryLightmappedPrefab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakeryLightmappedPrefab", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakeryLightmappedPrefab(BakeryLightmappedPrefab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32439};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BakeryLightmappedPrefab) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
