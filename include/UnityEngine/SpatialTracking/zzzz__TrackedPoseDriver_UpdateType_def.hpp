#pragma once
// IWYU pragma private; include "UnityEngine/SpatialTracking/TrackedPoseDriver_UpdateType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackedPoseDriver_UpdateType)
// Forward declare root types
namespace GlobalNamespace {
struct TrackedPoseDriver_UpdateType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TrackedPoseDriver_UpdateType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TrackedPoseDriver_UpdateType, "UnityEngine.SpatialTracking", "TrackedPoseDriver/UpdateType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType
struct CORDL_TYPE TrackedPoseDriver_UpdateType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TrackedPoseDriver_UpdateType_Unwrapped
enum struct __TrackedPoseDriver_UpdateType_Unwrapped : int32_t {
__E_UpdateAndBeforeRender = static_cast<int32_t>(0x0),
__E_Update = static_cast<int32_t>(0x1),
__E_BeforeRender = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TrackedPoseDriver_UpdateType_Unwrapped () const noexcept {
return static_cast<__TrackedPoseDriver_UpdateType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TrackedPoseDriver_UpdateType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TrackedPoseDriver_UpdateType(int32_t  value__) noexcept;

/// @brief Field BeforeRender value: I32(2)
static ::GlobalNamespace::TrackedPoseDriver_UpdateType const BeforeRender;

/// @brief Field Update value: I32(1)
static ::GlobalNamespace::TrackedPoseDriver_UpdateType const Update;

/// @brief Field UpdateAndBeforeRender value: I32(0)
static ::GlobalNamespace::TrackedPoseDriver_UpdateType const UpdateAndBeforeRender;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32926};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrackedPoseDriver_UpdateType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TrackedPoseDriver_UpdateType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
