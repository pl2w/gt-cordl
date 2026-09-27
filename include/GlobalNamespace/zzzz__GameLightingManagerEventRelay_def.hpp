#pragma once
// IWYU pragma private; include "GlobalNamespace/GameLightingManagerEventRelay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameLightingManagerEventRelay)
// Forward declare root types
namespace GlobalNamespace {
class GameLightingManagerEventRelay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameLightingManagerEventRelay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameLightingManagerEventRelay*, "", "GameLightingManagerEventRelay");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameLightingManagerEventRelay
class CORDL_TYPE GameLightingManagerEventRelay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::GameLightingManagerEventRelay* New_ctor() ;

/// @brief Method SetCustomDynamicLightingEnabled, addr 0x5705d24, size 0x124, virtual false, abstract: false, final false
inline void SetCustomDynamicLightingEnabled(bool  value) ;

/// @brief Method SetNearsightedDimLightIntensity, addr 0x5705e48, size 0x128, virtual false, abstract: false, final false
inline void SetNearsightedDimLightIntensity(float_t  value) ;

/// @brief Method .ctor, addr 0x5705f70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameLightingManagerEventRelay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameLightingManagerEventRelay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameLightingManagerEventRelay(GameLightingManagerEventRelay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameLightingManagerEventRelay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameLightingManagerEventRelay(GameLightingManagerEventRelay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{164};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameLightingManagerEventRelay) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
