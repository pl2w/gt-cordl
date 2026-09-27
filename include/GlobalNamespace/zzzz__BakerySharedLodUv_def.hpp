#pragma once
// IWYU pragma private; include "GlobalNamespace/BakerySharedLodUv.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BakerySharedLodUv)
// Forward declare root types
namespace GlobalNamespace {
class BakerySharedLodUv;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BakerySharedLodUv*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakerySharedLodUv*, "", "BakerySharedLodUv");
// [HelpURL("https://geom.io/bakery/wiki/index.php?title=Manual#Bakery_Shared_LOD_UV")]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BakerySharedLodUv
class CORDL_TYPE BakerySharedLodUv : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::BakerySharedLodUv* New_ctor() ;

/// @brief Method .ctor, addr 0x5f27c00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BakerySharedLodUv() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BakerySharedLodUv", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BakerySharedLodUv(BakerySharedLodUv && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakerySharedLodUv", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakerySharedLodUv(BakerySharedLodUv const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32448};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BakerySharedLodUv) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
