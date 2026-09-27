#pragma once
// IWYU pragma private; include "Viveport/UserStats_LeaderBoardTimeRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserStats_LeaderBoardTimeRange)
// Forward declare root types
namespace GlobalNamespace {
struct UserStats_LeaderBoardTimeRange;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UserStats_LeaderBoardTimeRange);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UserStats_LeaderBoardTimeRange, "Viveport", "UserStats/LeaderBoardTimeRange");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Viveport.UserStats/LeaderBoardTimeRange
struct CORDL_TYPE UserStats_LeaderBoardTimeRange {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UserStats_LeaderBoardTimeRange_Unwrapped
enum struct __UserStats_LeaderBoardTimeRange_Unwrapped : int32_t {
__E_AllTime = static_cast<int32_t>(0x0),
__E_Daily = static_cast<int32_t>(0x1),
__E_Weekly = static_cast<int32_t>(0x2),
__E_Monthly = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UserStats_LeaderBoardTimeRange_Unwrapped () const noexcept {
return static_cast<__UserStats_LeaderBoardTimeRange_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UserStats_LeaderBoardTimeRange() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UserStats_LeaderBoardTimeRange(int32_t  value__) noexcept;

/// @brief Field AllTime value: I32(0)
static ::GlobalNamespace::UserStats_LeaderBoardTimeRange const AllTime;

/// @brief Field Daily value: I32(1)
static ::GlobalNamespace::UserStats_LeaderBoardTimeRange const Daily;

/// @brief Field Monthly value: I32(3)
static ::GlobalNamespace::UserStats_LeaderBoardTimeRange const Monthly;

/// @brief Field Weekly value: I32(2)
static ::GlobalNamespace::UserStats_LeaderBoardTimeRange const Weekly;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3765};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UserStats_LeaderBoardTimeRange, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UserStats_LeaderBoardTimeRange) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
