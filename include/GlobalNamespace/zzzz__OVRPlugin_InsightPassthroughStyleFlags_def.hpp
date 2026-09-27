#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_InsightPassthroughStyleFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_InsightPassthroughStyleFlags)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_InsightPassthroughStyleFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_InsightPassthroughStyleFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_InsightPassthroughStyleFlags, "", "OVRPlugin/InsightPassthroughStyleFlags");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/InsightPassthroughStyleFlags
struct CORDL_TYPE OVRPlugin_InsightPassthroughStyleFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_InsightPassthroughStyleFlags_Unwrapped
enum struct __OVRPlugin_InsightPassthroughStyleFlags_Unwrapped : int32_t {
__E_HasTextureOpacityFactor = static_cast<int32_t>(0x1),
__E_HasEdgeColor = static_cast<int32_t>(0x2),
__E_HasTextureColorMap = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_InsightPassthroughStyleFlags_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_InsightPassthroughStyleFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_InsightPassthroughStyleFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_InsightPassthroughStyleFlags(int32_t  value__) noexcept;

/// @brief Field HasEdgeColor value: I32(2)
static ::GlobalNamespace::OVRPlugin_InsightPassthroughStyleFlags const HasEdgeColor;

/// @brief Field HasTextureColorMap value: I32(4)
static ::GlobalNamespace::OVRPlugin_InsightPassthroughStyleFlags const HasTextureColorMap;

/// @brief Field HasTextureOpacityFactor value: I32(1)
static ::GlobalNamespace::OVRPlugin_InsightPassthroughStyleFlags const HasTextureOpacityFactor;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12199};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_InsightPassthroughStyleFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_InsightPassthroughStyleFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
