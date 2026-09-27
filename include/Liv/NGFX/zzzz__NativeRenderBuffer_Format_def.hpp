#pragma once
// IWYU pragma private; include "Liv/NGFX/NativeRenderBuffer_Format.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeRenderBuffer_Format)
// Forward declare root types
namespace GlobalNamespace {
struct NativeRenderBuffer_Format;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NativeRenderBuffer_Format);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NativeRenderBuffer_Format, "Liv.NGFX", "NativeRenderBuffer/Format");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.NGFX.NativeRenderBuffer/Format
struct CORDL_TYPE NativeRenderBuffer_Format {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NativeRenderBuffer_Format_Unwrapped
enum struct __NativeRenderBuffer_Format_Unwrapped : int32_t {
__E_RGBA = static_cast<int32_t>(0x0),
__E_Depth = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NativeRenderBuffer_Format_Unwrapped () const noexcept {
return static_cast<__NativeRenderBuffer_Format_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NativeRenderBuffer_Format() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NativeRenderBuffer_Format(int32_t  value__) noexcept;

/// @brief Field Depth value: I32(1)
static ::GlobalNamespace::NativeRenderBuffer_Format const Depth;

/// @brief Field RGBA value: I32(0)
static ::GlobalNamespace::NativeRenderBuffer_Format const RGBA;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24669};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NativeRenderBuffer_Format, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NativeRenderBuffer_Format) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
