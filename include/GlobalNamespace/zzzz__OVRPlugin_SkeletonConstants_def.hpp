#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SkeletonConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_SkeletonConstants)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SkeletonConstants;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SkeletonConstants);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SkeletonConstants, "", "OVRPlugin/SkeletonConstants");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SkeletonConstants
struct CORDL_TYPE OVRPlugin_SkeletonConstants {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_SkeletonConstants_Unwrapped
enum struct __OVRPlugin_SkeletonConstants_Unwrapped : int32_t {
__E_MaxHandBones = static_cast<int32_t>(0x18),
__E_MaxXRHandBones = static_cast<int32_t>(0x1a),
__E_MaxBodyBones = static_cast<int32_t>(0x46),
__E_MaxBones = static_cast<int32_t>(0x54),
__E_MaxBoneCapsules = static_cast<int32_t>(0x13),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_SkeletonConstants_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_SkeletonConstants_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SkeletonConstants() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SkeletonConstants(int32_t  value__) noexcept;

/// @brief Field MaxBodyBones value: I32(70)
static ::GlobalNamespace::OVRPlugin_SkeletonConstants const MaxBodyBones;

/// @brief Field MaxBoneCapsules value: I32(19)
static ::GlobalNamespace::OVRPlugin_SkeletonConstants const MaxBoneCapsules;

/// @brief Field MaxBones value: I32(84)
static ::GlobalNamespace::OVRPlugin_SkeletonConstants const MaxBones;

/// @brief Field MaxHandBones value: I32(24)
static ::GlobalNamespace::OVRPlugin_SkeletonConstants const MaxHandBones;

/// @brief Field MaxXRHandBones value: I32(26)
static ::GlobalNamespace::OVRPlugin_SkeletonConstants const MaxXRHandBones;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12143};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SkeletonConstants, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SkeletonConstants) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
