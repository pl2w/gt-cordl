#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_SymbolDecoration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandBuilder_SymbolDecoration)
// Forward declare root types
namespace GlobalNamespace {
struct CommandBuilder_SymbolDecoration;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CommandBuilder_SymbolDecoration);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandBuilder_SymbolDecoration, "Drawing", "CommandBuilder/SymbolDecoration");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.CommandBuilder/SymbolDecoration
struct CORDL_TYPE CommandBuilder_SymbolDecoration {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CommandBuilder_SymbolDecoration_Unwrapped
enum struct __CommandBuilder_SymbolDecoration_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ArrowHead = static_cast<int32_t>(0x1),
__E_Circle = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CommandBuilder_SymbolDecoration_Unwrapped () const noexcept {
return static_cast<__CommandBuilder_SymbolDecoration_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder_SymbolDecoration() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CommandBuilder_SymbolDecoration(int32_t  value__) noexcept;

/// @brief Field ArrowHead value: I32(1)
static ::GlobalNamespace::CommandBuilder_SymbolDecoration const ArrowHead;

/// @brief Field Circle value: I32(2)
static ::GlobalNamespace::CommandBuilder_SymbolDecoration const Circle;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::CommandBuilder_SymbolDecoration const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27713};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandBuilder_SymbolDecoration, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandBuilder_SymbolDecoration) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
