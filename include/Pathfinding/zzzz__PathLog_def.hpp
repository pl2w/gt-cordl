#pragma once
// IWYU pragma private; include "Pathfinding/PathLog.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PathLog)
// Forward declare root types
namespace Pathfinding {
struct PathLog;
}
// Write type traits
MARK_VAL_T(::Pathfinding::PathLog);
DEFINE_IL2CPP_CLASS(::Pathfinding::PathLog, "Pathfinding", "PathLog");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.PathLog
struct CORDL_TYPE PathLog {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PathLog_Unwrapped
enum struct __PathLog_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Normal = static_cast<int32_t>(0x1),
__E_Heavy = static_cast<int32_t>(0x2),
__E_InGame = static_cast<int32_t>(0x3),
__E_OnlyErrors = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PathLog_Unwrapped () const noexcept {
return static_cast<__PathLog_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PathLog() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PathLog(int32_t  value__) noexcept;

/// @brief Field Heavy value: I32(2)
static ::Pathfinding::PathLog const Heavy;

/// @brief Field InGame value: I32(3)
static ::Pathfinding::PathLog const InGame;

/// @brief Field None value: I32(0)
static ::Pathfinding::PathLog const None;

/// @brief Field Normal value: I32(1)
static ::Pathfinding::PathLog const Normal;

/// @brief Field OnlyErrors value: I32(4)
static ::Pathfinding::PathLog const OnlyErrors;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21209};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::PathLog, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::PathLog) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding
