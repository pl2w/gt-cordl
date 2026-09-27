#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager_Metrics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneManager_Metrics)
// Forward declare root types
namespace GlobalNamespace {
struct OVRSceneManager_Metrics;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSceneManager_Metrics);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneManager_Metrics, "", "OVRSceneManager/Metrics");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/Metrics
struct CORDL_TYPE OVRSceneManager_Metrics {
public:
// Declarations
/// @brief Method op_Addition, addr 0xa632f14, size 0x24, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRSceneManager_Metrics op_Addition(::GlobalNamespace::OVRSceneManager_Metrics  lhs, ::GlobalNamespace::OVRSceneManager_Metrics  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager_Metrics() ;

// Ctor Parameters [CppParam { name: "TotalRoomCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CandidateRoomCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Loaded", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Failed", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SkippedUserNotInRoom", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SkippedAlreadyInstantiated", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRSceneManager_Metrics(int32_t  TotalRoomCount, int32_t  CandidateRoomCount, int32_t  Loaded, int32_t  Failed, int32_t  SkippedUserNotInRoom, int32_t  SkippedAlreadyInstantiated) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12416};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field TotalRoomCount, offset: 0x0, size: 0x4, def value: None
 int32_t  TotalRoomCount;

/// @brief Field CandidateRoomCount, offset: 0x4, size: 0x4, def value: None
 int32_t  CandidateRoomCount;

/// @brief Field Loaded, offset: 0x8, size: 0x4, def value: None
 int32_t  Loaded;

/// @brief Field Failed, offset: 0xc, size: 0x4, def value: None
 int32_t  Failed;

/// @brief Field SkippedUserNotInRoom, offset: 0x10, size: 0x4, def value: None
 int32_t  SkippedUserNotInRoom;

/// @brief Field SkippedAlreadyInstantiated, offset: 0x14, size: 0x4, def value: None
 int32_t  SkippedAlreadyInstantiated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager_Metrics, TotalRoomCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_Metrics, CandidateRoomCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_Metrics, Loaded) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_Metrics, Failed) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_Metrics, SkippedUserNotInRoom) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_Metrics, SkippedAlreadyInstantiated) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneManager_Metrics) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
