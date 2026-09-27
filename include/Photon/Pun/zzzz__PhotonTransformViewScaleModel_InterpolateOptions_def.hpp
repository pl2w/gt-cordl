#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonTransformViewScaleModel_InterpolateOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonTransformViewScaleModel_InterpolateOptions)
// Forward declare root types
namespace GlobalNamespace {
struct PhotonTransformViewScaleModel_InterpolateOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions, "Photon.Pun", "PhotonTransformViewScaleModel/InterpolateOptions");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Photon.Pun.PhotonTransformViewScaleModel/InterpolateOptions
struct CORDL_TYPE PhotonTransformViewScaleModel_InterpolateOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PhotonTransformViewScaleModel_InterpolateOptions_Unwrapped
enum struct __PhotonTransformViewScaleModel_InterpolateOptions_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0x0),
__E_MoveTowards = static_cast<int32_t>(0x1),
__E_Lerp = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PhotonTransformViewScaleModel_InterpolateOptions_Unwrapped () const noexcept {
return static_cast<__PhotonTransformViewScaleModel_InterpolateOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PhotonTransformViewScaleModel_InterpolateOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PhotonTransformViewScaleModel_InterpolateOptions(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(0)
static ::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions const Disabled;

/// @brief Field Lerp value: I32(2)
static ::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions const Lerp;

/// @brief Field MoveTowards value: I32(1)
static ::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions const MoveTowards;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29745};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
