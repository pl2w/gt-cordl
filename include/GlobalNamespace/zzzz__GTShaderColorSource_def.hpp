#pragma once
// IWYU pragma private; include "GlobalNamespace/GTShaderColorSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTShaderColorSource)
// Forward declare root types
namespace GlobalNamespace {
struct GTShaderColorSource;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTShaderColorSource);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTShaderColorSource, "", "GTShaderColorSource");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTShaderColorSource
struct CORDL_TYPE GTShaderColorSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTShaderColorSource_Unwrapped
enum struct __GTShaderColorSource_Unwrapped : int32_t {
__E_Color = static_cast<int32_t>(0x0),
__E_Texture = static_cast<int32_t>(0x1),
__E_TextureAsMask = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTShaderColorSource_Unwrapped () const noexcept {
return static_cast<__GTShaderColorSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTShaderColorSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTShaderColorSource(int32_t  value__) noexcept;

/// @brief Field Color value: I32(0)
static ::GlobalNamespace::GTShaderColorSource const Color;

/// @brief Field Texture value: I32(1)
static ::GlobalNamespace::GTShaderColorSource const Texture;

/// @brief Field TextureAsMask value: I32(2)
static ::GlobalNamespace::GTShaderColorSource const TextureAsMask;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3704};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTShaderColorSource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTShaderColorSource) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
