#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimatedButterfly_TimedDestination.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AnimatedButterfly_TimedDestination)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct AnimatedButterfly_TimedDestination;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AnimatedButterfly_TimedDestination);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimatedButterfly_TimedDestination, "", "AnimatedButterfly/TimedDestination");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AnimatedButterfly/TimedDestination
struct CORDL_TYPE AnimatedButterfly_TimedDestination {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedButterfly_TimedDestination() ;

// Ctor Parameters [CppParam { name: "syncTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "syncEndTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "destination", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }]
constexpr AnimatedButterfly_TimedDestination(float_t  syncTime, float_t  syncEndTime, ::UnityW<::UnityEngine::GameObject>  destination) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{546};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field syncTime, offset: 0x0, size: 0x4, def value: None
 float_t  syncTime;

/// @brief Field syncEndTime, offset: 0x4, size: 0x4, def value: None
 float_t  syncEndTime;

/// @brief Field destination, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  destination;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimatedButterfly_TimedDestination, syncTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedButterfly_TimedDestination, syncEndTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedButterfly_TimedDestination, destination) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimatedButterfly_TimedDestination) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
