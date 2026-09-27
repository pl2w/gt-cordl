#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimatedButterfly.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AnimatedButterfly_TimedDestination_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AnimatedButterfly)
namespace GlobalNamespace {
struct AnimatedButterfly_TimedDestination;
}
namespace GlobalNamespace {
class ButterflySwarmManager;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct AnimatedButterfly;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AnimatedButterfly);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimatedButterfly, "", "AnimatedButterfly");
// Dependencies AnimatedButterfly::TimedDestination, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: AnimatedButterfly
struct CORDL_TYPE AnimatedButterfly {
public:
// Declarations
using TimedDestination = ::GlobalNamespace::AnimatedButterfly_TimedDestination;

/// @brief Method GetPositionAndDestinationAtTime, addr 0x5612938, size 0x280, virtual false, abstract: false, final false
inline void GetPositionAndDestinationAtTime(float_t  syncTime, ::by_ref<::UnityEngine::Vector3>  idealPosition, ::by_ref<::UnityEngine::Vector3>  destination) ;

/// @brief Method InitRoute, addr 0x5612df8, size 0x60c, virtual false, abstract: false, final false
inline void InitRoute(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  route, ::System::Collections::Generic::List_1<float_t>*  holdTimes, ::GlobalNamespace::ButterflySwarmManager*  manager) ;

/// @brief Method InitVisual, addr 0x5612bb8, size 0x118, virtual false, abstract: false, final false
inline void InitVisual(::UnityEngine::MeshRenderer*  prefab, ::GlobalNamespace::ButterflySwarmManager*  manager) ;

/// @brief Method SetColor, addr 0x5612cd0, size 0xa0, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetFlapSpeed, addr 0x5612d70, size 0x88, virtual false, abstract: false, final false
inline void SetFlapSpeed(float_t  flapSpeed) ;

/// @brief Method UpdateVisual, addr 0x5611dd0, size 0xb68, virtual false, abstract: false, final false
inline void UpdateVisual(float_t  syncTime, ::GlobalNamespace::ButterflySwarmManager*  manager) ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimatedButterfly() ;

// Ctor Parameters [CppParam { name: "destinationCache", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedButterfly_TimedDestination>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "destinationA", ty: "::GlobalNamespace::AnimatedButterfly_TimedDestination", modifiers: "", def_value: None, comment: None }, CppParam { name: "destinationB", ty: "::GlobalNamespace::AnimatedButterfly_TimedDestination", modifiers: "", def_value: None, comment: None }, CppParam { name: "loopDuration", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "oldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "visual", ty: "::UnityW<::UnityEngine::MeshRenderer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "speed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxTravelTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "travellingLocalRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "baseFlapSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "wasPerched", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr AnimatedButterfly(::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedButterfly_TimedDestination>*  destinationCache, ::GlobalNamespace::AnimatedButterfly_TimedDestination  destinationA, ::GlobalNamespace::AnimatedButterfly_TimedDestination  destinationB, float_t  loopDuration, ::UnityEngine::Vector3  oldPosition, ::UnityEngine::Vector3  velocity, ::UnityW<::UnityEngine::MeshRenderer>  visual, ::UnityW<::UnityEngine::Material>  material, float_t  speed, float_t  maxTravelTime, ::UnityEngine::Quaternion  travellingLocalRotation, float_t  baseFlapSpeed, bool  wasPerched) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{547};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field destinationCache, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedButterfly_TimedDestination>*  destinationCache;

/// @brief Field destinationA, offset: 0x8, size: 0x10, def value: None
 ::GlobalNamespace::AnimatedButterfly_TimedDestination  destinationA;

/// @brief Field destinationB, offset: 0x18, size: 0x10, def value: None
 ::GlobalNamespace::AnimatedButterfly_TimedDestination  destinationB;

/// @brief Field loopDuration, offset: 0x28, size: 0x4, def value: None
 float_t  loopDuration;

/// @brief Field oldPosition, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  oldPosition;

/// @brief Field velocity, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  velocity;

/// @brief Field visual, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  visual;

/// @brief Field material, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  material;

/// @brief Field speed, offset: 0x58, size: 0x4, def value: None
 float_t  speed;

/// @brief Field maxTravelTime, offset: 0x5c, size: 0x4, def value: None
 float_t  maxTravelTime;

/// @brief Field travellingLocalRotation, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Quaternion  travellingLocalRotation;

/// @brief Field baseFlapSpeed, offset: 0x70, size: 0x4, def value: None
 float_t  baseFlapSpeed;

/// @brief Field wasPerched, offset: 0x74, size: 0x1, def value: None
 bool  wasPerched;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimatedButterfly, destinationCache) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedButterfly, destinationA) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedButterfly, destinationB) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedButterfly, loopDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedButterfly, oldPosition) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedButterfly, velocity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedButterfly, visual) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedButterfly, material) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedButterfly, speed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedButterfly, maxTravelTime) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedButterfly, travellingLocalRotation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedButterfly, baseFlapSpeed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedButterfly, wasPerched) == 0x74, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimatedButterfly) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
