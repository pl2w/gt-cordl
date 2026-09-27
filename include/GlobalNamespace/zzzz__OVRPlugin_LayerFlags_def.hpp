#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_LayerFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_LayerFlags)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_LayerFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_LayerFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_LayerFlags, "", "OVRPlugin/LayerFlags");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/LayerFlags
struct CORDL_TYPE OVRPlugin_LayerFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_LayerFlags_Unwrapped
enum struct __OVRPlugin_LayerFlags_Unwrapped : int32_t {
__E_Static = static_cast<int32_t>(0x1),
__E_LoadingScreen = static_cast<int32_t>(0x2),
__E_SymmetricFov = static_cast<int32_t>(0x4),
__E_TextureOriginAtBottomLeft = static_cast<int32_t>(0x8),
__E_ChromaticAberrationCorrection = static_cast<int32_t>(0x10),
__E_NoAllocation = static_cast<int32_t>(0x20),
__E_ProtectedContent = static_cast<int32_t>(0x40),
__E_AndroidSurfaceSwapChain = static_cast<int32_t>(0x80),
__E_BicubicFiltering = static_cast<int32_t>(0x4000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_LayerFlags_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_LayerFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_LayerFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_LayerFlags(int32_t  value__) noexcept;

/// @brief Field AndroidSurfaceSwapChain value: I32(128)
static ::GlobalNamespace::OVRPlugin_LayerFlags const AndroidSurfaceSwapChain;

/// @brief Field BicubicFiltering value: I32(16384)
static ::GlobalNamespace::OVRPlugin_LayerFlags const BicubicFiltering;

/// @brief Field ChromaticAberrationCorrection value: I32(16)
static ::GlobalNamespace::OVRPlugin_LayerFlags const ChromaticAberrationCorrection;

/// @brief Field LoadingScreen value: I32(2)
static ::GlobalNamespace::OVRPlugin_LayerFlags const LoadingScreen;

/// @brief Field NoAllocation value: I32(32)
static ::GlobalNamespace::OVRPlugin_LayerFlags const NoAllocation;

/// @brief Field ProtectedContent value: I32(64)
static ::GlobalNamespace::OVRPlugin_LayerFlags const ProtectedContent;

/// @brief Field Static value: I32(1)
static ::GlobalNamespace::OVRPlugin_LayerFlags const Static;

/// @brief Field SymmetricFov value: I32(4)
static ::GlobalNamespace::OVRPlugin_LayerFlags const SymmetricFov;

/// @brief Field TextureOriginAtBottomLeft value: I32(8)
static ::GlobalNamespace::OVRPlugin_LayerFlags const TextureOriginAtBottomLeft;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12125};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_LayerFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
