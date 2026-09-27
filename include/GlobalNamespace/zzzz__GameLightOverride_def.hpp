#pragma once
// IWYU pragma private; include "GlobalNamespace/GameLightOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameLightOverride)
// Forward declare root types
namespace GlobalNamespace {
class GameLightOverride;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameLightOverride*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameLightOverride*, "", "GameLightOverride");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameLightOverride
class CORDL_TYPE GameLightOverride : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method MaxGameLightOverride, addr 0x5837a7c, size 0x70, virtual false, abstract: false, final false
inline void MaxGameLightOverride(int32_t  newMaxLights) ;

static inline ::GlobalNamespace::GameLightOverride* New_ctor() ;

/// @brief Method OnDisable, addr 0x5837aec, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method .ctor, addr 0x5837b58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameLightOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameLightOverride", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameLightOverride(GameLightOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameLightOverride", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameLightOverride(GameLightOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1777};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameLightOverride) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
