#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRBoundary_BoundaryType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRBoundary_BoundaryType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRBoundary_BoundaryType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRBoundary_BoundaryType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRBoundary_BoundaryType, "", "OVRBoundary/BoundaryType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRBoundary/BoundaryType
struct CORDL_TYPE OVRBoundary_BoundaryType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRBoundary_BoundaryType_Unwrapped
enum struct __OVRBoundary_BoundaryType_Unwrapped : int32_t {
__E_OuterBoundary = static_cast<int32_t>(0x1),
__E_PlayArea = static_cast<int32_t>(0x100),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRBoundary_BoundaryType_Unwrapped () const noexcept {
return static_cast<__OVRBoundary_BoundaryType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRBoundary_BoundaryType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRBoundary_BoundaryType(int32_t  value__) noexcept;

/// @brief Field OuterBoundary value: I32(1)
static ::GlobalNamespace::OVRBoundary_BoundaryType const OuterBoundary;

/// @brief Field PlayArea value: I32(256)
static ::GlobalNamespace::OVRBoundary_BoundaryType const PlayArea;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11868};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRBoundary_BoundaryType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRBoundary_BoundaryType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
