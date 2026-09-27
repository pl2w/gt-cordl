#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactor_EnemyEntityCreateData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactor_EnemyEntityCreateData)
// Forward declare root types
namespace GlobalNamespace {
struct GhostReactor_EnemyEntityCreateData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GhostReactor_EnemyEntityCreateData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactor_EnemyEntityCreateData, "", "GhostReactor/EnemyEntityCreateData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GhostReactor/EnemyEntityCreateData
struct CORDL_TYPE GhostReactor_EnemyEntityCreateData {
public:
// Declarations
/// @brief Method Pack, addr 0x584782c, size 0x30, virtual false, abstract: false, final false
inline int64_t Pack() ;

/// @brief Method PackData, addr 0x5847b7c, size 0x14, virtual false, abstract: false, final false
static inline int64_t PackData(int32_t  value, int32_t  nbits, int32_t  shift) ;

/// @brief Method Unpack, addr 0x584780c, size 0x18, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GhostReactor_EnemyEntityCreateData Unpack(int64_t  bits) ;

/// @brief Method UnpackData, addr 0x5847b90, size 0x14, virtual false, abstract: false, final false
static inline int32_t UnpackData(int64_t  createData, int32_t  nbits, int32_t  shift) ;

// Ctor Parameters []
// @brief default ctor
constexpr GhostReactor_EnemyEntityCreateData() ;

// Ctor Parameters [CppParam { name: "respawnCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sectionIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "patrolIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GhostReactor_EnemyEntityCreateData(int32_t  respawnCount, int32_t  sectionIndex, int32_t  patrolIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1803};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field respawnCount, offset: 0x0, size: 0x4, def value: None
 int32_t  respawnCount;

/// @brief Field sectionIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  sectionIndex;

/// @brief Field patrolIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  patrolIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactor_EnemyEntityCreateData, respawnCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor_EnemyEntityCreateData, sectionIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor_EnemyEntityCreateData, patrolIndex) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactor_EnemyEntityCreateData) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
