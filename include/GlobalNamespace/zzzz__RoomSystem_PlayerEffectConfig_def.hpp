#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomSystem_PlayerEffectConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerEffect_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RoomSystem_PlayerEffectConfig)
namespace TagEffects {
class TagEffectPack;
}
// Forward declare root types
namespace GlobalNamespace {
struct RoomSystem_PlayerEffectConfig;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RoomSystem_PlayerEffectConfig);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomSystem_PlayerEffectConfig, "", "RoomSystem/PlayerEffectConfig");
// Dependencies PlayerEffect
namespace GlobalNamespace {
// Is value type: true
// CS Name: RoomSystem/PlayerEffectConfig
struct CORDL_TYPE RoomSystem_PlayerEffectConfig {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RoomSystem_PlayerEffectConfig() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::PlayerEffect", modifiers: "", def_value: None, comment: None }, CppParam { name: "tagEffectPack", ty: "::UnityW<::TagEffects::TagEffectPack>", modifiers: "", def_value: None, comment: None }]
constexpr RoomSystem_PlayerEffectConfig(::GlobalNamespace::PlayerEffect  type, ::UnityW<::TagEffects::TagEffectPack>  tagEffectPack) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3395};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PlayerEffect  type;

/// @brief Field tagEffectPack, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::TagEffects::TagEffectPack>  tagEffectPack;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomSystem_PlayerEffectConfig, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem_PlayerEffectConfig, tagEffectPack) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoomSystem_PlayerEffectConfig) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
