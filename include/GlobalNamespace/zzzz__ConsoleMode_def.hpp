#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsoleMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleMode)
// Forward declare root types
namespace GlobalNamespace {
struct ConsoleMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ConsoleMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConsoleMode, "", "ConsoleMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ConsoleMode
struct CORDL_TYPE ConsoleMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConsoleMode_Unwrapped
enum struct __ConsoleMode_Unwrapped : int32_t {
__E_Console = static_cast<int32_t>(0x0),
__E_Inspector = static_cast<int32_t>(0x1),
__E_ComponentInspector = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConsoleMode_Unwrapped () const noexcept {
return static_cast<__ConsoleMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConsoleMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ConsoleMode(int32_t  value__) noexcept;

/// @brief Field ComponentInspector value: I32(2)
static ::GlobalNamespace::ConsoleMode const ComponentInspector;

/// @brief Field Console value: I32(0)
static ::GlobalNamespace::ConsoleMode const Console;

/// @brief Field Inspector value: I32(1)
static ::GlobalNamespace::ConsoleMode const Inspector;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{801};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConsoleMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConsoleMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
