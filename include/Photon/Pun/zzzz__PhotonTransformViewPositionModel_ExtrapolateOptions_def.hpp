#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonTransformViewPositionModel_ExtrapolateOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonTransformViewPositionModel_ExtrapolateOptions)
// Forward declare root types
namespace GlobalNamespace {
struct PhotonTransformViewPositionModel_ExtrapolateOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions, "Photon.Pun", "PhotonTransformViewPositionModel/ExtrapolateOptions");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Photon.Pun.PhotonTransformViewPositionModel/ExtrapolateOptions
struct CORDL_TYPE PhotonTransformViewPositionModel_ExtrapolateOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PhotonTransformViewPositionModel_ExtrapolateOptions_Unwrapped
enum struct __PhotonTransformViewPositionModel_ExtrapolateOptions_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0x0),
__E_SynchronizeValues = static_cast<int32_t>(0x1),
__E_EstimateSpeedAndTurn = static_cast<int32_t>(0x2),
__E_FixedSpeed = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PhotonTransformViewPositionModel_ExtrapolateOptions_Unwrapped () const noexcept {
return static_cast<__PhotonTransformViewPositionModel_ExtrapolateOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PhotonTransformViewPositionModel_ExtrapolateOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PhotonTransformViewPositionModel_ExtrapolateOptions(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(0)
static ::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions const Disabled;

/// @brief Field EstimateSpeedAndTurn value: I32(2)
static ::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions const EstimateSpeedAndTurn;

/// @brief Field FixedSpeed value: I32(3)
static ::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions const FixedSpeed;

/// @brief Field SynchronizeValues value: I32(1)
static ::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions const SynchronizeValues;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29739};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
