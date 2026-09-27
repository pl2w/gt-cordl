#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlay_OverlayType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVROverlay_OverlayType)
// Forward declare root types
namespace GlobalNamespace {
struct OVROverlay_OverlayType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVROverlay_OverlayType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVROverlay_OverlayType, "", "OVROverlay/OverlayType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVROverlay/OverlayType
struct CORDL_TYPE OVROverlay_OverlayType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVROverlay_OverlayType_Unwrapped
enum struct __OVROverlay_OverlayType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Underlay = static_cast<int32_t>(0x1),
__E_Overlay = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVROverlay_OverlayType_Unwrapped () const noexcept {
return static_cast<__OVROverlay_OverlayType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVROverlay_OverlayType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVROverlay_OverlayType(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVROverlay_OverlayType const None;

/// @brief Field Overlay value: I32(2)
static ::GlobalNamespace::OVROverlay_OverlayType const Overlay;

/// @brief Field Underlay value: I32(1)
static ::GlobalNamespace::OVROverlay_OverlayType const Underlay;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12004};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlay_OverlayType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVROverlay_OverlayType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
