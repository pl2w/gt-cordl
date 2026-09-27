#pragma once
// IWYU pragma private; include "Oculus/Interaction/PokeInteractor_SurfaceHitCache_HitInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Surfaces/zzzz__SurfaceHit_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PokeInteractor_SurfaceHitCache_HitInfo)
namespace Oculus::Interaction::Surfaces {
struct SurfaceHit;
}
// Forward declare root types
namespace GlobalNamespace {
struct SurfaceHitCache_PokeInteractor_HitInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo, "Oculus.Interaction", "PokeInteractor/SurfaceHitCache/HitInfo");
// [IsReadOnly]
// Dependencies Oculus.Interaction.Surfaces.SurfaceHit
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo
struct CORDL_TYPE SurfaceHitCache_PokeInteractor_HitInfo {
public:
// Declarations
/// @brief Method .ctor, addr 0xa459c54, size 0x20, virtual false, abstract: false, final false
inline void _ctor(bool  isValid, ::Oculus::Interaction::Surfaces::SurfaceHit  hit) ;

// Ctor Parameters []
// @brief default ctor
constexpr SurfaceHitCache_PokeInteractor_HitInfo() ;

// Ctor Parameters [CppParam { name: "IsValid", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Hit", ty: "::Oculus::Interaction::Surfaces::SurfaceHit", modifiers: "", def_value: None, comment: None }]
constexpr SurfaceHitCache_PokeInteractor_HitInfo(bool  IsValid, ::Oculus::Interaction::Surfaces::SurfaceHit  Hit) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15855};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field IsValid, offset: 0x0, size: 0x1, def value: None
 bool  IsValid;

/// @brief Field Hit, offset: 0x4, size: 0x1c, def value: None
 ::Oculus::Interaction::Surfaces::SurfaceHit  Hit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo, IsValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo, Hit) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
