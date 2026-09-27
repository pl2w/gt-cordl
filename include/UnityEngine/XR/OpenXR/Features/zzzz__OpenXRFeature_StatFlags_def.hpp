#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/OpenXRFeature_StatFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRFeature_StatFlags)
// Forward declare root types
namespace GlobalNamespace {
struct OpenXRFeature_StatFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OpenXRFeature_StatFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OpenXRFeature_StatFlags, "UnityEngine.XR.OpenXR.Features", "OpenXRFeature/StatFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRFeature/StatFlags
struct CORDL_TYPE OpenXRFeature_StatFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpenXRFeature_StatFlags_Unwrapped
enum struct __OpenXRFeature_StatFlags_Unwrapped : int32_t {
__E_StatOptionNone = static_cast<int32_t>(0x0),
__E_ClearOnUpdate = static_cast<int32_t>(0x1),
__E_All = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpenXRFeature_StatFlags_Unwrapped () const noexcept {
return static_cast<__OpenXRFeature_StatFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OpenXRFeature_StatFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OpenXRFeature_StatFlags(int32_t  value__) noexcept;

/// @brief Field All value: I32(1)
static ::GlobalNamespace::OpenXRFeature_StatFlags const All;

/// @brief Field ClearOnUpdate value: I32(1)
static ::GlobalNamespace::OpenXRFeature_StatFlags const ClearOnUpdate;

/// @brief Field StatOptionNone value: I32(0)
static ::GlobalNamespace::OpenXRFeature_StatFlags const StatOptionNone;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27328};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OpenXRFeature_StatFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OpenXRFeature_StatFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
