#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK_AnchorRepresentation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUK_AnchorRepresentation)
// Forward declare root types
namespace GlobalNamespace {
struct MRUK_AnchorRepresentation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUK_AnchorRepresentation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUK_AnchorRepresentation, "Meta.XR.MRUtilityKit", "MRUK/AnchorRepresentation");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUK/AnchorRepresentation
struct CORDL_TYPE MRUK_AnchorRepresentation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MRUK_AnchorRepresentation_Unwrapped
enum struct __MRUK_AnchorRepresentation_Unwrapped : int32_t {
__E_PLANE = static_cast<int32_t>(0x1),
__E_VOLUME = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MRUK_AnchorRepresentation_Unwrapped () const noexcept {
return static_cast<__MRUK_AnchorRepresentation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MRUK_AnchorRepresentation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MRUK_AnchorRepresentation(int32_t  value__) noexcept;

/// @brief Field PLANE value: I32(1)
static ::GlobalNamespace::MRUK_AnchorRepresentation const PLANE;

/// @brief Field VOLUME value: I32(2)
static ::GlobalNamespace::MRUK_AnchorRepresentation const VOLUME;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25864};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUK_AnchorRepresentation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUK_AnchorRepresentation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
