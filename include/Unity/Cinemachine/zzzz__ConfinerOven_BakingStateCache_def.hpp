#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ConfinerOven_BakingStateCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__ConfinerOven_PolygonSolution_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ConfinerOven_BakingStateCache)
namespace GlobalNamespace {
struct ConfinerOven_PolygonSolution;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
class ClipperOffset;
}
namespace Unity::Cinemachine {
struct Point64;
}
// Forward declare root types
namespace GlobalNamespace {
struct ConfinerOven_BakingStateCache;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ConfinerOven_BakingStateCache);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConfinerOven_BakingStateCache, "Unity.Cinemachine", "ConfinerOven/BakingStateCache");
// Dependencies Unity.Cinemachine.ConfinerOven::PolygonSolution
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.ConfinerOven/BakingStateCache
struct CORDL_TYPE ConfinerOven_BakingStateCache {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ConfinerOven_BakingStateCache() ;

// Ctor Parameters [CppParam { name: "offsetter", ty: "::Unity::Cinemachine::ClipperOffset*", modifiers: "", def_value: None, comment: None }, CppParam { name: "solutions", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::ConfinerOven_PolygonSolution>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightCandidate", ty: "::GlobalNamespace::ConfinerOven_PolygonSolution", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftCandidate", ty: "::GlobalNamespace::ConfinerOven_PolygonSolution", modifiers: "", def_value: None, comment: None }, CppParam { name: "userSetMaxCandidate", ty: "::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "theoreticalMaxCandidate", ty: "::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "stepSize", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxFrustumHeight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "userSetMaxFrustumHeight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "theoreticalMaxFrustumHeight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentFrustumHeight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bakeTime", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ConfinerOven_BakingStateCache(::Unity::Cinemachine::ClipperOffset*  offsetter, ::System::Collections::Generic::List_1<::GlobalNamespace::ConfinerOven_PolygonSolution>*  solutions, ::GlobalNamespace::ConfinerOven_PolygonSolution  rightCandidate, ::GlobalNamespace::ConfinerOven_PolygonSolution  leftCandidate, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  userSetMaxCandidate, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  theoreticalMaxCandidate, float_t  stepSize, float_t  maxFrustumHeight, float_t  userSetMaxFrustumHeight, float_t  theoreticalMaxFrustumHeight, float_t  currentFrustumHeight, float_t  bakeTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22314};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field offsetter, offset: 0x0, size: 0x8, def value: None
 ::Unity::Cinemachine::ClipperOffset*  offsetter;

/// @brief Field solutions, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ConfinerOven_PolygonSolution>*  solutions;

/// @brief Field rightCandidate, offset: 0x10, size: 0x10, def value: None
 ::GlobalNamespace::ConfinerOven_PolygonSolution  rightCandidate;

/// @brief Field leftCandidate, offset: 0x20, size: 0x10, def value: None
 ::GlobalNamespace::ConfinerOven_PolygonSolution  leftCandidate;

/// @brief Field userSetMaxCandidate, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  userSetMaxCandidate;

/// @brief Field theoreticalMaxCandidate, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  theoreticalMaxCandidate;

/// @brief Field stepSize, offset: 0x40, size: 0x4, def value: None
 float_t  stepSize;

/// @brief Field maxFrustumHeight, offset: 0x44, size: 0x4, def value: None
 float_t  maxFrustumHeight;

/// @brief Field userSetMaxFrustumHeight, offset: 0x48, size: 0x4, def value: None
 float_t  userSetMaxFrustumHeight;

/// @brief Field theoreticalMaxFrustumHeight, offset: 0x4c, size: 0x4, def value: None
 float_t  theoreticalMaxFrustumHeight;

/// @brief Field currentFrustumHeight, offset: 0x50, size: 0x4, def value: None
 float_t  currentFrustumHeight;

/// @brief Field bakeTime, offset: 0x54, size: 0x4, def value: None
 float_t  bakeTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConfinerOven_BakingStateCache, offsetter) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConfinerOven_BakingStateCache, solutions) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConfinerOven_BakingStateCache, rightCandidate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConfinerOven_BakingStateCache, leftCandidate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConfinerOven_BakingStateCache, userSetMaxCandidate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConfinerOven_BakingStateCache, theoreticalMaxCandidate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConfinerOven_BakingStateCache, stepSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConfinerOven_BakingStateCache, maxFrustumHeight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConfinerOven_BakingStateCache, userSetMaxFrustumHeight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConfinerOven_BakingStateCache, theoreticalMaxFrustumHeight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConfinerOven_BakingStateCache, currentFrustumHeight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConfinerOven_BakingStateCache, bakeTime) == 0x54, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConfinerOven_BakingStateCache) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
