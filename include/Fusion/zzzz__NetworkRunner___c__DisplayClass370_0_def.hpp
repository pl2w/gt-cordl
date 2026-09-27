#pragma once
// IWYU pragma private; include "Fusion/NetworkRunner___c__DisplayClass370_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkRunner___c__DisplayClass370_0)
namespace Fusion {
class NetworkObjectSpawnDelegate;
}
namespace Fusion {
class NetworkRunner;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkRunner___c__DisplayClass370_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkRunner___c__DisplayClass370_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkRunner___c__DisplayClass370_0, "Fusion", "NetworkRunner/<>c__DisplayClass370_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkRunner/<>c__DisplayClass370_0
struct CORDL_TYPE NetworkRunner___c__DisplayClass370_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner___c__DisplayClass370_0() ;

// Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityW<::Fusion::NetworkRunner>", modifiers: "", def_value: None, comment: None }, CppParam { name: "spawnedCallback", ty: "::Fusion::NetworkObjectSpawnDelegate*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkRunner___c__DisplayClass370_0(::UnityW<::Fusion::NetworkRunner>  __4__this, ::Fusion::NetworkObjectSpawnDelegate*  spawnedCallback) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19215};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <>4__this, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  __4__this;

/// @brief Field spawnedCallback, offset: 0x8, size: 0x8, def value: None
 ::Fusion::NetworkObjectSpawnDelegate*  spawnedCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkRunner___c__DisplayClass370_0, __4__this) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkRunner___c__DisplayClass370_0, spawnedCallback) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkRunner___c__DisplayClass370_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
