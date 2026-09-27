#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryAlwaysRender.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BakeryAlwaysRender)
// Forward declare root types
namespace GlobalNamespace {
class BakeryAlwaysRender;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BakeryAlwaysRender*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeryAlwaysRender*, "", "BakeryAlwaysRender");
// [HelpURL("https://geom.io/bakery/wiki/index.php?title=Manual#Bakery_Always_Render")]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BakeryAlwaysRender
class CORDL_TYPE BakeryAlwaysRender : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::BakeryAlwaysRender* New_ctor() ;

/// @brief Method .ctor, addr 0x5f27658, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BakeryAlwaysRender() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BakeryAlwaysRender", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BakeryAlwaysRender(BakeryAlwaysRender && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakeryAlwaysRender", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakeryAlwaysRender(BakeryAlwaysRender const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32428};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BakeryAlwaysRender) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
