#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerStatsReadonly.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SystemProperties_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerStatsReadonly)
namespace GlobalNamespace {
struct SystemProperties;
}
// Forward declare root types
namespace GlobalNamespace {
struct PlayerStatsReadonly;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerStatsReadonly);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerStatsReadonly, "", "PlayerStatsReadonly");
// [IsReadOnly]
// Dependencies SystemProperties
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerStatsReadonly
struct CORDL_TYPE PlayerStatsReadonly {
public:
// Declarations
 __declspec(property(get=get_CPULevel)) bool  CPULevel;

 __declspec(property(get=get_GPULevel)) bool  GPULevel;

 __declspec(property(get=get_HalfRefreshRate)) bool  HalfRefreshRate;

 __declspec(property(get=get_Headlock)) bool  Headlock;

 __declspec(property(get=get_HeadlockTranslationX)) bool  HeadlockTranslationX;

 __declspec(property(get=get_HeadlockTranslationY)) bool  HeadlockTranslationY;

 __declspec(property(get=get_HeadlockTranslationZ)) bool  HeadlockTranslationZ;

 __declspec(property(get=get_PhaseSync)) bool  PhaseSync;

 __declspec(property(get=get_PhaseSyncAdditionalPadding)) bool  PhaseSyncAdditionalPadding;

 __declspec(property(get=get_PhaseSyncDelayOverride)) bool  PhaseSyncDelayOverride;

 __declspec(property(get=get_PhaseSyncPredictionTime)) bool  PhaseSyncPredictionTime;

 __declspec(property(get=get_PredictionTime)) bool  PredictionTime;

 __declspec(property(get=get_RefreshRate)) bool  RefreshRate;

 __declspec(property(get=get_SwapInterval)) bool  SwapInterval;

/// @brief Method .ctor, addr 0x5948438, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int16_t  ping, int16_t  fps, int16_t  targetFps, ::GlobalNamespace::SystemProperties  flags) ;

/// @brief Method get_CPULevel, addr 0x59483b4, size 0xc, virtual false, abstract: false, final false
inline bool get_CPULevel() ;

/// @brief Method get_GPULevel, addr 0x59483a8, size 0xc, virtual false, abstract: false, final false
inline bool get_GPULevel() ;

/// @brief Method get_HalfRefreshRate, addr 0x594839c, size 0xc, virtual false, abstract: false, final false
inline bool get_HalfRefreshRate() ;

/// @brief Method get_Headlock, addr 0x59483c0, size 0xc, virtual false, abstract: false, final false
inline bool get_Headlock() ;

/// @brief Method get_HeadlockTranslationX, addr 0x59483cc, size 0xc, virtual false, abstract: false, final false
inline bool get_HeadlockTranslationX() ;

/// @brief Method get_HeadlockTranslationY, addr 0x59483d8, size 0xc, virtual false, abstract: false, final false
inline bool get_HeadlockTranslationY() ;

/// @brief Method get_HeadlockTranslationZ, addr 0x59483e4, size 0xc, virtual false, abstract: false, final false
inline bool get_HeadlockTranslationZ() ;

/// @brief Method get_PhaseSync, addr 0x5948414, size 0xc, virtual false, abstract: false, final false
inline bool get_PhaseSync() ;

/// @brief Method get_PhaseSyncAdditionalPadding, addr 0x59483f0, size 0xc, virtual false, abstract: false, final false
inline bool get_PhaseSyncAdditionalPadding() ;

/// @brief Method get_PhaseSyncDelayOverride, addr 0x59483fc, size 0xc, virtual false, abstract: false, final false
inline bool get_PhaseSyncDelayOverride() ;

/// @brief Method get_PhaseSyncPredictionTime, addr 0x5948408, size 0xc, virtual false, abstract: false, final false
inline bool get_PhaseSyncPredictionTime() ;

/// @brief Method get_PredictionTime, addr 0x594842c, size 0xc, virtual false, abstract: false, final false
inline bool get_PredictionTime() ;

/// @brief Method get_RefreshRate, addr 0x5948420, size 0xc, virtual false, abstract: false, final false
inline bool get_RefreshRate() ;

/// @brief Method get_SwapInterval, addr 0x5948390, size 0xc, virtual false, abstract: false, final false
inline bool get_SwapInterval() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerStatsReadonly() ;

// Ctor Parameters [CppParam { name: "Ping", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FPS", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TargetFPS", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SystemPropertiesFlags", ty: "::GlobalNamespace::SystemProperties", modifiers: "", def_value: None, comment: None }]
constexpr PlayerStatsReadonly(int16_t  Ping, int16_t  FPS, int16_t  TargetFPS, ::GlobalNamespace::SystemProperties  SystemPropertiesFlags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2285};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Ping, offset: 0x0, size: 0x2, def value: None
 int16_t  Ping;

/// @brief Field FPS, offset: 0x2, size: 0x2, def value: None
 int16_t  FPS;

/// @brief Field TargetFPS, offset: 0x4, size: 0x2, def value: None
 int16_t  TargetFPS;

/// @brief Field SystemPropertiesFlags, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::SystemProperties  SystemPropertiesFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerStatsReadonly, Ping) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatsReadonly, FPS) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatsReadonly, TargetFPS) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatsReadonly, SystemPropertiesFlags) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerStatsReadonly) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
