#pragma once
// IWYU pragma private; include "Oculus/Interaction/SkeletonDebugGizmos_VisibilityFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SkeletonDebugGizmos_VisibilityFlags)
// Forward declare root types
namespace GlobalNamespace {
struct SkeletonDebugGizmos_VisibilityFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags, "Oculus.Interaction", "SkeletonDebugGizmos/VisibilityFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.SkeletonDebugGizmos/VisibilityFlags
struct CORDL_TYPE SkeletonDebugGizmos_VisibilityFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SkeletonDebugGizmos_VisibilityFlags_Unwrapped
enum struct __SkeletonDebugGizmos_VisibilityFlags_Unwrapped : int32_t {
__E_Joints = static_cast<int32_t>(0x1),
__E_Axes = static_cast<int32_t>(0x2),
__E_Bones = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SkeletonDebugGizmos_VisibilityFlags_Unwrapped () const noexcept {
return static_cast<__SkeletonDebugGizmos_VisibilityFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SkeletonDebugGizmos_VisibilityFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SkeletonDebugGizmos_VisibilityFlags(int32_t  value__) noexcept;

/// @brief Field Axes value: I32(2)
static ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags const Axes;

/// @brief Field Bones value: I32(4)
static ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags const Bones;

/// @brief Field Joints value: I32(1)
static ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags const Joints;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15692};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
