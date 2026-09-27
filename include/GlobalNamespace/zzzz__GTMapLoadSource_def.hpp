#pragma once
// IWYU pragma private; include "GlobalNamespace/GTMapLoadSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTMapLoadSource)
// Forward declare root types
namespace GlobalNamespace {
struct GTMapLoadSource;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTMapLoadSource);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTMapLoadSource, "", "GTMapLoadSource");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTMapLoadSource
struct CORDL_TYPE GTMapLoadSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTMapLoadSource_Unwrapped
enum struct __GTMapLoadSource_Unwrapped : int32_t {
__E_none = static_cast<int32_t>(0x0),
__E_featured_hallway = static_cast<int32_t>(0x1),
__E_teleporter = static_cast<int32_t>(0x2),
__E_terminal_browse = static_cast<int32_t>(0x3),
__E_terminal_search = static_cast<int32_t>(0x4),
__E_room_sync = static_cast<int32_t>(0x5),
__E_room_reload = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTMapLoadSource_Unwrapped () const noexcept {
return static_cast<__GTMapLoadSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTMapLoadSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTMapLoadSource(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2267};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field featured_hallway value: I32(1)
static ::GlobalNamespace::GTMapLoadSource const featured_hallway;

/// @brief Field none value: I32(0)
static ::GlobalNamespace::GTMapLoadSource const none;

/// @brief Field room_reload value: I32(6)
static ::GlobalNamespace::GTMapLoadSource const room_reload;

/// @brief Field room_sync value: I32(5)
static ::GlobalNamespace::GTMapLoadSource const room_sync;

/// @brief Field teleporter value: I32(2)
static ::GlobalNamespace::GTMapLoadSource const teleporter;

/// @brief Field terminal_browse value: I32(3)
static ::GlobalNamespace::GTMapLoadSource const terminal_browse;

/// @brief Field terminal_search value: I32(4)
static ::GlobalNamespace::GTMapLoadSource const terminal_search;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTMapLoadSource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTMapLoadSource) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
