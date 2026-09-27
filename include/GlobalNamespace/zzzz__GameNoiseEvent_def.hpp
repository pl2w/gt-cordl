#pragma once
// IWYU pragma private; include "GlobalNamespace/GameNoiseEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GameNoiseEvent)
// Forward declare root types
namespace GlobalNamespace {
struct GameNoiseEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameNoiseEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameNoiseEvent, "", "GameNoiseEvent");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameNoiseEvent
struct CORDL_TYPE GameNoiseEvent {
public:
// Declarations
/// @brief Method IsValid, addr 0x589f128, size 0x30, virtual false, abstract: false, final false
inline bool IsValid() ;

// Ctor Parameters []
// @brief default ctor
constexpr GameNoiseEvent() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "eventTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "magnitude", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr GameNoiseEvent(::UnityEngine::Vector3  position, double_t  eventTime, float_t  duration, float_t  magnitude) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1994};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field eventTime, offset: 0x10, size: 0x8, def value: None
 double_t  eventTime;

/// @brief Field duration, offset: 0x18, size: 0x4, def value: None
 float_t  duration;

/// @brief Field magnitude, offset: 0x1c, size: 0x4, def value: None
 float_t  magnitude;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameNoiseEvent, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameNoiseEvent, eventTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameNoiseEvent, duration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameNoiseEvent, magnitude) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameNoiseEvent) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
