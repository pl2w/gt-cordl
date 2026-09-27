#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/GREnemyType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GREnemyType)
// Forward declare root types
namespace GorillaTagScripts::GhostReactor {
struct GREnemyType;
}
// Write type traits
MARK_VAL_T(::GorillaTagScripts::GhostReactor::GREnemyType);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GhostReactor::GREnemyType, "GorillaTagScripts.GhostReactor", "GREnemyType");
// Dependencies 
namespace GorillaTagScripts::GhostReactor {
// Is value type: true
// CS Name: GorillaTagScripts.GhostReactor.GREnemyType
struct CORDL_TYPE GREnemyType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GREnemyType_Unwrapped
enum struct __GREnemyType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Chaser = static_cast<int32_t>(0x1),
__E_Pest = static_cast<int32_t>(0x2),
__E_Phantom = static_cast<int32_t>(0x3),
__E_Ranged = static_cast<int32_t>(0x4),
__E_Summoner = static_cast<int32_t>(0x5),
__E_Monkeye = static_cast<int32_t>(0x6),
__E_ArmoredPest = static_cast<int32_t>(0x7),
__E_ArmoredRanged = static_cast<int32_t>(0x8),
__E_ArmoredChaser = static_cast<int32_t>(0x9),
__E_ArmoredSummoner = static_cast<int32_t>(0xa),
__E_BigChaser = static_cast<int32_t>(0xb),
__E_BigPest = static_cast<int32_t>(0xc),
__E_MoonBoss = static_cast<int32_t>(0xd),
__E_MoonBoss_Phase1 = static_cast<int32_t>(0xe),
__E_MoonBoss_Phase2 = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GREnemyType_Unwrapped () const noexcept {
return static_cast<__GREnemyType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GREnemyType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GREnemyType(int32_t  value__) noexcept;

/// @brief Field ArmoredChaser value: I32(9)
static ::GorillaTagScripts::GhostReactor::GREnemyType const ArmoredChaser;

/// @brief Field ArmoredPest value: I32(7)
static ::GorillaTagScripts::GhostReactor::GREnemyType const ArmoredPest;

/// @brief Field ArmoredRanged value: I32(8)
static ::GorillaTagScripts::GhostReactor::GREnemyType const ArmoredRanged;

/// @brief Field ArmoredSummoner value: I32(10)
static ::GorillaTagScripts::GhostReactor::GREnemyType const ArmoredSummoner;

/// @brief Field BigChaser value: I32(11)
static ::GorillaTagScripts::GhostReactor::GREnemyType const BigChaser;

/// @brief Field BigPest value: I32(12)
static ::GorillaTagScripts::GhostReactor::GREnemyType const BigPest;

/// @brief Field Chaser value: I32(1)
static ::GorillaTagScripts::GhostReactor::GREnemyType const Chaser;

/// @brief Field Monkeye value: I32(6)
static ::GorillaTagScripts::GhostReactor::GREnemyType const Monkeye;

/// @brief Field MoonBoss value: I32(13)
static ::GorillaTagScripts::GhostReactor::GREnemyType const MoonBoss;

/// @brief Field MoonBoss_Phase1 value: I32(14)
static ::GorillaTagScripts::GhostReactor::GREnemyType const MoonBoss_Phase1;

/// @brief Field MoonBoss_Phase2 value: I32(15)
static ::GorillaTagScripts::GhostReactor::GREnemyType const MoonBoss_Phase2;

/// @brief Field None value: I32(0)
static ::GorillaTagScripts::GhostReactor::GREnemyType const None;

/// @brief Field Pest value: I32(2)
static ::GorillaTagScripts::GhostReactor::GREnemyType const Pest;

/// @brief Field Phantom value: I32(3)
static ::GorillaTagScripts::GhostReactor::GREnemyType const Phantom;

/// @brief Field Ranged value: I32(4)
static ::GorillaTagScripts::GhostReactor::GREnemyType const Ranged;

/// @brief Field Summoner value: I32(5)
static ::GorillaTagScripts::GhostReactor::GREnemyType const Summoner;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4124};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GhostReactor::GREnemyType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GhostReactor::GREnemyType) == 0x4, "Size mismatch!");

} // namespace end def GorillaTagScripts::GhostReactor
