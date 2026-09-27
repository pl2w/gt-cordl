#pragma once
// IWYU pragma private; include "GlobalNamespace/GizmoRenderer_TextAlign.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GizmoRenderer_TextAlign)
// Forward declare root types
namespace GlobalNamespace {
struct GizmoRenderer_TextAlign;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GizmoRenderer_TextAlign);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GizmoRenderer_TextAlign, "", "GizmoRenderer/TextAlign");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GizmoRenderer/TextAlign
struct CORDL_TYPE GizmoRenderer_TextAlign {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __GizmoRenderer_TextAlign_Unwrapped
enum struct __GizmoRenderer_TextAlign_Unwrapped : uint32_t {
__E_Center = static_cast<uint32_t>(0x0u),
__E_MiddleRight = static_cast<uint32_t>(0x1u),
__E_MiddleLeft = static_cast<uint32_t>(0x2u),
__E_BottomCenter = static_cast<uint32_t>(0x3u),
__E_BottomRight = static_cast<uint32_t>(0x4u),
__E_BottomLeft = static_cast<uint32_t>(0x5u),
__E_TopRight = static_cast<uint32_t>(0x6u),
__E_TopLeft = static_cast<uint32_t>(0x7u),
__E_TopCenter = static_cast<uint32_t>(0x8u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GizmoRenderer_TextAlign_Unwrapped () const noexcept {
return static_cast<__GizmoRenderer_TextAlign_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GizmoRenderer_TextAlign() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr GizmoRenderer_TextAlign(uint32_t  value__) noexcept;

/// @brief Field BottomCenter value: U32(3)
static ::GlobalNamespace::GizmoRenderer_TextAlign const BottomCenter;

/// @brief Field BottomLeft value: U32(5)
static ::GlobalNamespace::GizmoRenderer_TextAlign const BottomLeft;

/// @brief Field BottomRight value: U32(4)
static ::GlobalNamespace::GizmoRenderer_TextAlign const BottomRight;

/// @brief Field Center value: U32(0)
static ::GlobalNamespace::GizmoRenderer_TextAlign const Center;

/// @brief Field MiddleLeft value: U32(2)
static ::GlobalNamespace::GizmoRenderer_TextAlign const MiddleLeft;

/// @brief Field MiddleRight value: U32(1)
static ::GlobalNamespace::GizmoRenderer_TextAlign const MiddleRight;

/// @brief Field TopCenter value: U32(8)
static ::GlobalNamespace::GizmoRenderer_TextAlign const TopCenter;

/// @brief Field TopLeft value: U32(7)
static ::GlobalNamespace::GizmoRenderer_TextAlign const TopLeft;

/// @brief Field TopRight value: U32(6)
static ::GlobalNamespace::GizmoRenderer_TextAlign const TopRight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2808};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GizmoRenderer_TextAlign, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GizmoRenderer_TextAlign) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
