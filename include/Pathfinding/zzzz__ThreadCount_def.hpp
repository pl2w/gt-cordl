#pragma once
// IWYU pragma private; include "Pathfinding/ThreadCount.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadCount)
// Forward declare root types
namespace Pathfinding {
struct ThreadCount;
}
// Write type traits
MARK_VAL_T(::Pathfinding::ThreadCount);
DEFINE_IL2CPP_CLASS(::Pathfinding::ThreadCount, "Pathfinding", "ThreadCount");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.ThreadCount
struct CORDL_TYPE ThreadCount {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ThreadCount_Unwrapped
enum struct __ThreadCount_Unwrapped : int32_t {
__E_AutomaticLowLoad = static_cast<int32_t>(0xffffffff),
__E_AutomaticHighLoad = static_cast<int32_t>(0xfffffffe),
__E_None = static_cast<int32_t>(0x0),
__E_One = static_cast<int32_t>(0x1),
__E_Two = static_cast<int32_t>(0x2),
__E_Three = static_cast<int32_t>(0x3),
__E_Four = static_cast<int32_t>(0x4),
__E_Five = static_cast<int32_t>(0x5),
__E_Six = static_cast<int32_t>(0x6),
__E_Seven = static_cast<int32_t>(0x7),
__E_Eight = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ThreadCount_Unwrapped () const noexcept {
return static_cast<__ThreadCount_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ThreadCount() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ThreadCount(int32_t  value__) noexcept;

/// @brief Field AutomaticHighLoad value: I32(-2)
static ::Pathfinding::ThreadCount const AutomaticHighLoad;

/// @brief Field AutomaticLowLoad value: I32(-1)
static ::Pathfinding::ThreadCount const AutomaticLowLoad;

/// @brief Field Eight value: I32(8)
static ::Pathfinding::ThreadCount const Eight;

/// @brief Field Five value: I32(5)
static ::Pathfinding::ThreadCount const Five;

/// @brief Field Four value: I32(4)
static ::Pathfinding::ThreadCount const Four;

/// @brief Field None value: I32(0)
static ::Pathfinding::ThreadCount const None;

/// @brief Field One value: I32(1)
static ::Pathfinding::ThreadCount const One;

/// @brief Field Seven value: I32(7)
static ::Pathfinding::ThreadCount const Seven;

/// @brief Field Six value: I32(6)
static ::Pathfinding::ThreadCount const Six;

/// @brief Field Three value: I32(3)
static ::Pathfinding::ThreadCount const Three;

/// @brief Field Two value: I32(2)
static ::Pathfinding::ThreadCount const Two;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21212};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ThreadCount, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ThreadCount) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding
