#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyCount.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/GhostReactor/zzzz__GREnemyType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GREnemyCount)
namespace GorillaTagScripts::GhostReactor {
struct GREnemyType;
}
// Forward declare root types
namespace GlobalNamespace {
struct GREnemyCount;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GREnemyCount);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyCount, "", "GREnemyCount");
// Dependencies GorillaTagScripts.GhostReactor.GREnemyType
namespace GlobalNamespace {
// Is value type: true
// CS Name: GREnemyCount
struct CORDL_TYPE GREnemyCount {
public:
// Declarations
/// @brief Method GetEnemyName, addr 0x588b848, size 0x90, virtual false, abstract: false, final false
inline ::StringW GetEnemyName() ;

/// @brief Method GetEnemyType, addr 0x588b830, size 0x18, virtual false, abstract: false, final false
inline ::GorillaTagScripts::GhostReactor::GREnemyType GetEnemyType() ;

// Ctor Parameters []
// @brief default ctor
constexpr GREnemyCount() ;

// Ctor Parameters [CppParam { name: "EnemyType", ty: "::GorillaTagScripts::GhostReactor::GREnemyType", modifiers: "", def_value: None, comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GREnemyCount(::GorillaTagScripts::GhostReactor::GREnemyType  EnemyType, int32_t  Count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1951};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field EnemyType, offset: 0x0, size: 0x4, def value: None
 ::GorillaTagScripts::GhostReactor::GREnemyType  EnemyType;

/// @brief Field Count, offset: 0x4, size: 0x4, def value: None
 int32_t  Count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyCount, EnemyType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyCount, Count) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyCount) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
