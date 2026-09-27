#pragma once
// IWYU pragma private; include "GameObjectScheduling/CountdownText_TimeChunk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CountdownText_TimeChunk)
// Forward declare root types
namespace GlobalNamespace {
struct CountdownText_TimeChunk;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CountdownText_TimeChunk);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CountdownText_TimeChunk, "GameObjectScheduling", "CountdownText/TimeChunk");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameObjectScheduling.CountdownText/TimeChunk
struct CORDL_TYPE CountdownText_TimeChunk {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CountdownText_TimeChunk_Unwrapped
enum struct __CountdownText_TimeChunk_Unwrapped : int32_t {
__E_DAY = static_cast<int32_t>(0x0),
__E_HOUR = static_cast<int32_t>(0x1),
__E_MINUTE = static_cast<int32_t>(0x2),
__E_SECOND = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CountdownText_TimeChunk_Unwrapped () const noexcept {
return static_cast<__CountdownText_TimeChunk_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CountdownText_TimeChunk() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CountdownText_TimeChunk(int32_t  value__) noexcept;

/// @brief Field DAY value: I32(0)
static ::GlobalNamespace::CountdownText_TimeChunk const DAY;

/// @brief Field HOUR value: I32(1)
static ::GlobalNamespace::CountdownText_TimeChunk const HOUR;

/// @brief Field MINUTE value: I32(2)
static ::GlobalNamespace::CountdownText_TimeChunk const MINUTE;

/// @brief Field SECOND value: I32(3)
static ::GlobalNamespace::CountdownText_TimeChunk const SECOND;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5118};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CountdownText_TimeChunk, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CountdownText_TimeChunk) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
