#pragma once
// IWYU pragma private; include "Viveport/UserStats_LeaderBoardDiaplayType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserStats_LeaderBoardDiaplayType)
// Forward declare root types
namespace GlobalNamespace {
struct UserStats_LeaderBoardDiaplayType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UserStats_LeaderBoardDiaplayType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UserStats_LeaderBoardDiaplayType, "Viveport", "UserStats/LeaderBoardDiaplayType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Viveport.UserStats/LeaderBoardDiaplayType
struct CORDL_TYPE UserStats_LeaderBoardDiaplayType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UserStats_LeaderBoardDiaplayType_Unwrapped
enum struct __UserStats_LeaderBoardDiaplayType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Numeric = static_cast<int32_t>(0x1),
__E_TimeSeconds = static_cast<int32_t>(0x2),
__E_TimeMilliSeconds = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UserStats_LeaderBoardDiaplayType_Unwrapped () const noexcept {
return static_cast<__UserStats_LeaderBoardDiaplayType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UserStats_LeaderBoardDiaplayType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UserStats_LeaderBoardDiaplayType(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::UserStats_LeaderBoardDiaplayType const None;

/// @brief Field Numeric value: I32(1)
static ::GlobalNamespace::UserStats_LeaderBoardDiaplayType const Numeric;

/// @brief Field TimeMilliSeconds value: I32(3)
static ::GlobalNamespace::UserStats_LeaderBoardDiaplayType const TimeMilliSeconds;

/// @brief Field TimeSeconds value: I32(2)
static ::GlobalNamespace::UserStats_LeaderBoardDiaplayType const TimeSeconds;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3767};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UserStats_LeaderBoardDiaplayType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UserStats_LeaderBoardDiaplayType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
