#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/MpegLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MpegLayer)
// Forward declare root types
namespace Meta::Voice::NLayer {
struct MpegLayer;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::NLayer::MpegLayer);
DEFINE_IL2CPP_CLASS(::Meta::Voice::NLayer::MpegLayer, "Meta.Voice.NLayer", "MpegLayer");
// Dependencies 
namespace Meta::Voice::NLayer {
// Is value type: true
// CS Name: Meta.Voice.NLayer.MpegLayer
struct CORDL_TYPE MpegLayer {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MpegLayer_Unwrapped
enum struct __MpegLayer_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_LayerI = static_cast<int32_t>(0x1),
__E_LayerII = static_cast<int32_t>(0x2),
__E_LayerIII = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MpegLayer_Unwrapped () const noexcept {
return static_cast<__MpegLayer_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MpegLayer() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MpegLayer(int32_t  value__) noexcept;

/// @brief Field LayerI value: I32(1)
static ::Meta::Voice::NLayer::MpegLayer const LayerI;

/// @brief Field LayerII value: I32(2)
static ::Meta::Voice::NLayer::MpegLayer const LayerII;

/// @brief Field LayerIII value: I32(3)
static ::Meta::Voice::NLayer::MpegLayer const LayerIII;

/// @brief Field Unknown value: I32(0)
static ::Meta::Voice::NLayer::MpegLayer const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31379};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::NLayer::MpegLayer, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::NLayer::MpegLayer) == 0x4, "Size mismatch!");

} // namespace end def Meta::Voice::NLayer
