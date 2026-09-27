#pragma once
// IWYU pragma private; include "GorillaTag/TextureTransitioner_DirectionRetentionMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureTransitioner_DirectionRetentionMode)
// Forward declare root types
namespace GlobalNamespace {
struct TextureTransitioner_DirectionRetentionMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextureTransitioner_DirectionRetentionMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextureTransitioner_DirectionRetentionMode, "GorillaTag", "TextureTransitioner/DirectionRetentionMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.TextureTransitioner/DirectionRetentionMode
struct CORDL_TYPE TextureTransitioner_DirectionRetentionMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextureTransitioner_DirectionRetentionMode_Unwrapped
enum struct __TextureTransitioner_DirectionRetentionMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_IncreaseOnly = static_cast<int32_t>(0x1),
__E_DecreaseOnly = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureTransitioner_DirectionRetentionMode_Unwrapped () const noexcept {
return static_cast<__TextureTransitioner_DirectionRetentionMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextureTransitioner_DirectionRetentionMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TextureTransitioner_DirectionRetentionMode(int32_t  value__) noexcept;

/// @brief Field DecreaseOnly value: I32(2)
static ::GlobalNamespace::TextureTransitioner_DirectionRetentionMode const DecreaseOnly;

/// @brief Field IncreaseOnly value: I32(1)
static ::GlobalNamespace::TextureTransitioner_DirectionRetentionMode const IncreaseOnly;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::TextureTransitioner_DirectionRetentionMode const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4621};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureTransitioner_DirectionRetentionMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextureTransitioner_DirectionRetentionMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
