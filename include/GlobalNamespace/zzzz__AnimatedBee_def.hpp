#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimatedBee.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AnimatedBee_TimedDestination_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AnimatedBee)
namespace GlobalNamespace {
struct AnimatedBee_TimedDestination;
}
namespace GlobalNamespace {
class BeePerchPoint;
}
namespace GlobalNamespace {
class BeeSwarmManager;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct AnimatedBee;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AnimatedBee);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimatedBee, "", "AnimatedBee");
// Dependencies AnimatedBee::TimedDestination, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: AnimatedBee
struct CORDL_TYPE AnimatedBee {
public:
// Declarations
using TimedDestination = ::GlobalNamespace::AnimatedBee_TimedDestination;

/// @brief Method GetPositionAndDestinationAtTime, addr 0x5611794, size 0x240, virtual false, abstract: false, final false
inline void GetPositionAndDestinationAtTime(float_t  syncTime, ::by_ref<::UnityEngine::Vector3>  idealPosition, ::by_ref<::UnityEngine::Vector3>  destination) ;

/// @brief Method InitRoute, addr 0x5611aac, size 0x324, virtual false, abstract: false, final false
inline void InitRoute(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*  route, ::System::Collections::Generic::List_1<float_t>*  holdTimes, ::GlobalNamespace::BeeSwarmManager*  manager) ;

/// @brief Method InitRouteTimestamps, addr 0x56112b8, size 0x4dc, virtual false, abstract: false, final false
inline void InitRouteTimestamps() ;

/// @brief Method InitVisual, addr 0x5611a00, size 0xac, virtual false, abstract: false, final false
inline void InitVisual(::UnityEngine::MeshRenderer*  prefab, ::GlobalNamespace::BeeSwarmManager*  manager) ;

/// @brief Method UpdateVisual, addr 0x56109f8, size 0x8c0, virtual false, abstract: false, final false
inline void UpdateVisual(float_t  syncTime, ::GlobalNamespace::BeeSwarmManager*  manager) ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimatedBee() ;

// Ctor Parameters [CppParam { name: "destinationCache", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee_TimedDestination>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "destinationA", ty: "::GlobalNamespace::AnimatedBee_TimedDestination", modifiers: "", def_value: None, comment: None }, CppParam { name: "destinationB", ty: "::GlobalNamespace::AnimatedBee_TimedDestination", modifiers: "", def_value: None, comment: None }, CppParam { name: "loopDuration", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "oldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "visual", ty: "::UnityW<::UnityEngine::MeshRenderer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "oldSyncTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "route", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "holdTimes", ty: "::System::Collections::Generic::List_1<float_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "speed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxTravelTime", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr AnimatedBee(::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee_TimedDestination>*  destinationCache, ::GlobalNamespace::AnimatedBee_TimedDestination  destinationA, ::GlobalNamespace::AnimatedBee_TimedDestination  destinationB, float_t  loopDuration, ::UnityEngine::Vector3  oldPosition, ::UnityEngine::Vector3  velocity, ::UnityW<::UnityEngine::MeshRenderer>  visual, float_t  oldSyncTime, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*  route, ::System::Collections::Generic::List_1<float_t>*  holdTimes, float_t  speed, float_t  maxTravelTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{545};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field destinationCache, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee_TimedDestination>*  destinationCache;

/// @brief Field destinationA, offset: 0x8, size: 0x10, def value: None
 ::GlobalNamespace::AnimatedBee_TimedDestination  destinationA;

/// @brief Field destinationB, offset: 0x18, size: 0x10, def value: None
 ::GlobalNamespace::AnimatedBee_TimedDestination  destinationB;

/// @brief Field loopDuration, offset: 0x28, size: 0x4, def value: None
 float_t  loopDuration;

/// @brief Field oldPosition, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  oldPosition;

/// @brief Field velocity, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  velocity;

/// @brief Field visual, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  visual;

/// @brief Field oldSyncTime, offset: 0x50, size: 0x4, def value: None
 float_t  oldSyncTime;

/// @brief Field route, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*  route;

/// @brief Field holdTimes, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  holdTimes;

/// @brief Field speed, offset: 0x68, size: 0x4, def value: None
 float_t  speed;

/// @brief Field maxTravelTime, offset: 0x6c, size: 0x4, def value: None
 float_t  maxTravelTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimatedBee, destinationCache) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedBee, destinationA) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedBee, destinationB) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedBee, loopDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedBee, oldPosition) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedBee, velocity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedBee, visual) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedBee, oldSyncTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedBee, route) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedBee, holdTimes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedBee, speed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedBee, maxTravelTime) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimatedBee) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
