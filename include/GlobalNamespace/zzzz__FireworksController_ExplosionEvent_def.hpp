#pragma once
// IWYU pragma private; include "GlobalNamespace/FireworksController_ExplosionEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TimeSince_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FireworksController_ExplosionEvent)
namespace GlobalNamespace {
class Firework;
}
// Forward declare root types
namespace GlobalNamespace {
struct FireworksController_ExplosionEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FireworksController_ExplosionEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FireworksController_ExplosionEvent, "", "FireworksController/ExplosionEvent");
// Dependencies TimeSince
namespace GlobalNamespace {
// Is value type: true
// CS Name: FireworksController/ExplosionEvent
struct CORDL_TYPE FireworksController_ExplosionEvent {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FireworksController_ExplosionEvent() ;

// Ctor Parameters [CppParam { name: "timeSince", ty: "::GlobalNamespace::TimeSince", modifiers: "", def_value: None, comment: None }, CppParam { name: "delay", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "explosionIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "burstIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "active", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "firework", ty: "::UnityW<::GlobalNamespace::Firework>", modifiers: "", def_value: None, comment: None }]
constexpr FireworksController_ExplosionEvent(::GlobalNamespace::TimeSince  timeSince, double_t  delay, int32_t  explosionIndex, int32_t  burstIndex, bool  active, ::UnityW<::GlobalNamespace::Firework>  firework) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3615};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field timeSince, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::TimeSince  timeSince;

/// @brief Field delay, offset: 0x8, size: 0x8, def value: None
 double_t  delay;

/// @brief Field explosionIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  explosionIndex;

/// @brief Field burstIndex, offset: 0x14, size: 0x4, def value: None
 int32_t  burstIndex;

/// @brief Field active, offset: 0x18, size: 0x1, def value: None
 bool  active;

/// @brief Field firework, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Firework>  firework;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FireworksController_ExplosionEvent, timeSince) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController_ExplosionEvent, delay) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController_ExplosionEvent, explosionIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController_ExplosionEvent, burstIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController_ExplosionEvent, active) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController_ExplosionEvent, firework) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FireworksController_ExplosionEvent) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
