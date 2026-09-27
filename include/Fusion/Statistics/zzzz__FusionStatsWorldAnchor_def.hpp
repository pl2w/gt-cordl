#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatsWorldAnchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FusionStatsWorldAnchor)
// Forward declare root types
namespace Fusion::Statistics {
class FusionStatsWorldAnchor;
}
// Write type traits
MARK_REF_T(::Fusion::Statistics::FusionStatsWorldAnchor*);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::FusionStatsWorldAnchor*, "Fusion.Statistics", "FusionStatsWorldAnchor");
// [DisallowMultipleComponent]
// [AddComponentMenu("Fusion/Statistics/Statistics World Anchor")]
// Dependencies UnityEngine.MonoBehaviour
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.FusionStatsWorldAnchor
class CORDL_TYPE FusionStatsWorldAnchor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Fusion::Statistics::FusionStatsWorldAnchor* New_ctor() ;

/// @brief Method OnDestroy, addr 0x60fcc98, size 0xec, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x60fcc2c, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x60fcbc0, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method .ctor, addr 0x60fcd84, size 0x3bb1eb8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionStatsWorldAnchor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionStatsWorldAnchor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionStatsWorldAnchor(FusionStatsWorldAnchor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionStatsWorldAnchor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionStatsWorldAnchor(FusionStatsWorldAnchor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23506};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Statistics::FusionStatsWorldAnchor) == 0x20, "Size mismatch!");

} // namespace end def Fusion::Statistics
