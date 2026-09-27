#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB2_TexturePackerHorizontalVert_TexturePackingOrientation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MB2_TexturePackerHorizontalVert_TexturePackingOrientation)
// Forward declare root types
namespace GlobalNamespace {
struct MB2_TexturePackerHorizontalVert_TexturePackingOrientation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MB2_TexturePackerHorizontalVert_TexturePackingOrientation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB2_TexturePackerHorizontalVert_TexturePackingOrientation, "DigitalOpus.MB.Core", "MB2_TexturePackerHorizontalVert/TexturePackingOrientation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB2_TexturePackerHorizontalVert/TexturePackingOrientation
struct CORDL_TYPE MB2_TexturePackerHorizontalVert_TexturePackingOrientation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MB2_TexturePackerHorizontalVert_TexturePackingOrientation_Unwrapped
enum struct __MB2_TexturePackerHorizontalVert_TexturePackingOrientation_Unwrapped : int32_t {
__E_horizontal = static_cast<int32_t>(0x0),
__E_vertical = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MB2_TexturePackerHorizontalVert_TexturePackingOrientation_Unwrapped () const noexcept {
return static_cast<__MB2_TexturePackerHorizontalVert_TexturePackingOrientation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MB2_TexturePackerHorizontalVert_TexturePackingOrientation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MB2_TexturePackerHorizontalVert_TexturePackingOrientation(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22764};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field horizontal value: I32(0)
static ::GlobalNamespace::MB2_TexturePackerHorizontalVert_TexturePackingOrientation const horizontal;

/// @brief Field vertical value: I32(1)
static ::GlobalNamespace::MB2_TexturePackerHorizontalVert_TexturePackingOrientation const vertical;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB2_TexturePackerHorizontalVert_TexturePackingOrientation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB2_TexturePackerHorizontalVert_TexturePackingOrientation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
