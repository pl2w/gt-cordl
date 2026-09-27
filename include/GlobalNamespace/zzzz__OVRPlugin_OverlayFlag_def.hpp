#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_OverlayFlag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_OverlayFlag)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_OverlayFlag;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_OverlayFlag);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OverlayFlag, "", "OVRPlugin/OverlayFlag");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/OverlayFlag
struct CORDL_TYPE OVRPlugin_OverlayFlag {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_OverlayFlag_Unwrapped
enum struct __OVRPlugin_OverlayFlag_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_OnTop = static_cast<int32_t>(0x1),
__E_HeadLocked = static_cast<int32_t>(0x2),
__E_NoDepth = static_cast<int32_t>(0x4),
__E_ExpensiveSuperSample = static_cast<int32_t>(0x8),
__E_EfficientSuperSample = static_cast<int32_t>(0x10),
__E_EfficientSharpen = static_cast<int32_t>(0x20),
__E_BicubicFiltering = static_cast<int32_t>(0x40),
__E_ExpensiveSharpen = static_cast<int32_t>(0x80),
__E_SecureContent = static_cast<int32_t>(0x100),
__E_ShapeFlag_Quad = static_cast<int32_t>(0x0),
__E_ShapeFlag_Cylinder = static_cast<int32_t>(0x10),
__E_ShapeFlag_Cubemap = static_cast<int32_t>(0x20),
__E_ShapeFlag_OffcenterCubemap = static_cast<int32_t>(0x40),
__E_ShapeFlagRangeMask = static_cast<int32_t>(0xf0),
__E_Hidden = static_cast<int32_t>(0x200),
__E_AutoFiltering = static_cast<int32_t>(0x400),
__E_PremultipliedAlpha = static_cast<int32_t>(0x100000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_OverlayFlag_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_OverlayFlag_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OverlayFlag() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_OverlayFlag(int32_t  value__) noexcept;

/// @brief Field AutoFiltering value: I32(1024)
static ::GlobalNamespace::OVRPlugin_OverlayFlag const AutoFiltering;

/// @brief Field BicubicFiltering value: I32(64)
static ::GlobalNamespace::OVRPlugin_OverlayFlag const BicubicFiltering;

/// @brief Field EfficientSharpen value: I32(32)
static ::GlobalNamespace::OVRPlugin_OverlayFlag const EfficientSharpen;

/// @brief Field EfficientSuperSample value: I32(16)
static ::GlobalNamespace::OVRPlugin_OverlayFlag const EfficientSuperSample;

/// @brief Field ExpensiveSharpen value: I32(128)
static ::GlobalNamespace::OVRPlugin_OverlayFlag const ExpensiveSharpen;

/// @brief Field ExpensiveSuperSample value: I32(8)
static ::GlobalNamespace::OVRPlugin_OverlayFlag const ExpensiveSuperSample;

/// @brief Field HeadLocked value: I32(2)
static ::GlobalNamespace::OVRPlugin_OverlayFlag const HeadLocked;

/// @brief Field Hidden value: I32(512)
static ::GlobalNamespace::OVRPlugin_OverlayFlag const Hidden;

/// @brief Field NoDepth value: I32(4)
static ::GlobalNamespace::OVRPlugin_OverlayFlag const NoDepth;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRPlugin_OverlayFlag const None;

/// @brief Field OnTop value: I32(1)
static ::GlobalNamespace::OVRPlugin_OverlayFlag const OnTop;

/// @brief Field PremultipliedAlpha value: I32(1048576)
static ::GlobalNamespace::OVRPlugin_OverlayFlag const PremultipliedAlpha;

/// @brief Field SecureContent value: I32(256)
static ::GlobalNamespace::OVRPlugin_OverlayFlag const SecureContent;

/// @brief Field ShapeFlagRangeMask value: I32(240)
static ::GlobalNamespace::OVRPlugin_OverlayFlag const ShapeFlagRangeMask;

/// @brief Field ShapeFlag_Cubemap value: I32(32)
static ::GlobalNamespace::OVRPlugin_OverlayFlag const ShapeFlag_Cubemap;

/// @brief Field ShapeFlag_Cylinder value: I32(16)
static ::GlobalNamespace::OVRPlugin_OverlayFlag const ShapeFlag_Cylinder;

/// @brief Field ShapeFlag_OffcenterCubemap value: I32(64)
static ::GlobalNamespace::OVRPlugin_OverlayFlag const ShapeFlag_OffcenterCubemap;

/// @brief Field ShapeFlag_Quad value: I32(0)
static ::GlobalNamespace::OVRPlugin_OverlayFlag const ShapeFlag_Quad;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12082};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_OverlayFlag, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_OverlayFlag) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
