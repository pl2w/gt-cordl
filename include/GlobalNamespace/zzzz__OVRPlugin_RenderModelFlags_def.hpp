#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_RenderModelFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_RenderModelFlags)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_RenderModelFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_RenderModelFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_RenderModelFlags, "", "OVRPlugin/RenderModelFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/RenderModelFlags
struct CORDL_TYPE OVRPlugin_RenderModelFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_RenderModelFlags_Unwrapped
enum struct __OVRPlugin_RenderModelFlags_Unwrapped : int32_t {
__E_SupportsGltf20Subset1 = static_cast<int32_t>(0x1),
__E_SupportsGltf20Subset2 = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_RenderModelFlags_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_RenderModelFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_RenderModelFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_RenderModelFlags(int32_t  value__) noexcept;

/// @brief Field SupportsGltf20Subset1 value: I32(1)
static ::GlobalNamespace::OVRPlugin_RenderModelFlags const SupportsGltf20Subset1;

/// @brief Field SupportsGltf20Subset2 value: I32(2)
static ::GlobalNamespace::OVRPlugin_RenderModelFlags const SupportsGltf20Subset2;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12183};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_RenderModelFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_RenderModelFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
