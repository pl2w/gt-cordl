#pragma once
// IWYU pragma private; include "Viveport/Internal/ELeaderboardDataTimeRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ELeaderboardDataTimeRange)
// Forward declare root types
namespace Viveport::Internal {
struct ELeaderboardDataTimeRange;
}
// Write type traits
MARK_VAL_T(::Viveport::Internal::ELeaderboardDataTimeRange);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::ELeaderboardDataTimeRange, "Viveport.Internal", "ELeaderboardDataTimeRange");
// Dependencies 
namespace Viveport::Internal {
// Is value type: true
// CS Name: Viveport.Internal.ELeaderboardDataTimeRange
struct CORDL_TYPE ELeaderboardDataTimeRange {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ELeaderboardDataTimeRange_Unwrapped
enum struct __ELeaderboardDataTimeRange_Unwrapped : int32_t {
__E_k_ELeaderboardDataScropeAllTime = static_cast<int32_t>(0x0),
__E_k_ELeaderboardDataScropeDaily = static_cast<int32_t>(0x1),
__E_k_ELeaderboardDataScropeWeekly = static_cast<int32_t>(0x2),
__E_k_ELeaderboardDataScropeMonthly = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ELeaderboardDataTimeRange_Unwrapped () const noexcept {
return static_cast<__ELeaderboardDataTimeRange_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ELeaderboardDataTimeRange() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ELeaderboardDataTimeRange(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3794};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ELeaderboardDataScropeAllTime value: I32(0)
static ::Viveport::Internal::ELeaderboardDataTimeRange const k_ELeaderboardDataScropeAllTime;

/// @brief Field k_ELeaderboardDataScropeDaily value: I32(1)
static ::Viveport::Internal::ELeaderboardDataTimeRange const k_ELeaderboardDataScropeDaily;

/// @brief Field k_ELeaderboardDataScropeMonthly value: I32(3)
static ::Viveport::Internal::ELeaderboardDataTimeRange const k_ELeaderboardDataScropeMonthly;

/// @brief Field k_ELeaderboardDataScropeWeekly value: I32(2)
static ::Viveport::Internal::ELeaderboardDataTimeRange const k_ELeaderboardDataScropeWeekly;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Viveport::Internal::ELeaderboardDataTimeRange, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Viveport::Internal::ELeaderboardDataTimeRange) == 0x4, "Size mismatch!");

} // namespace end def Viveport::Internal
