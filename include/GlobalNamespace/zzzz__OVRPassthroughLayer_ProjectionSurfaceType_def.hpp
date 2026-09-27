#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughLayer_ProjectionSurfaceType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPassthroughLayer_ProjectionSurfaceType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPassthroughLayer_ProjectionSurfaceType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType, "", "OVRPassthroughLayer/ProjectionSurfaceType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughLayer/ProjectionSurfaceType
struct CORDL_TYPE OVRPassthroughLayer_ProjectionSurfaceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPassthroughLayer_ProjectionSurfaceType_Unwrapped
enum struct __OVRPassthroughLayer_ProjectionSurfaceType_Unwrapped : int32_t {
__E_Reconstructed = static_cast<int32_t>(0x0),
__E_UserDefined = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPassthroughLayer_ProjectionSurfaceType_Unwrapped () const noexcept {
return static_cast<__OVRPassthroughLayer_ProjectionSurfaceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPassthroughLayer_ProjectionSurfaceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPassthroughLayer_ProjectionSurfaceType(int32_t  value__) noexcept;

/// @brief Field Reconstructed value: I32(0)
static ::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType const Reconstructed;

/// @brief Field UserDefined value: I32(1)
static ::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType const UserDefined;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12020};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
