#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/MpegChannelMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MpegChannelMode)
// Forward declare root types
namespace Meta::Voice::NLayer {
struct MpegChannelMode;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::NLayer::MpegChannelMode);
DEFINE_IL2CPP_CLASS(::Meta::Voice::NLayer::MpegChannelMode, "Meta.Voice.NLayer", "MpegChannelMode");
// Dependencies 
namespace Meta::Voice::NLayer {
// Is value type: true
// CS Name: Meta.Voice.NLayer.MpegChannelMode
struct CORDL_TYPE MpegChannelMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MpegChannelMode_Unwrapped
enum struct __MpegChannelMode_Unwrapped : int32_t {
__E_Stereo = static_cast<int32_t>(0x0),
__E_JointStereo = static_cast<int32_t>(0x1),
__E_DualChannel = static_cast<int32_t>(0x2),
__E_Mono = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MpegChannelMode_Unwrapped () const noexcept {
return static_cast<__MpegChannelMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MpegChannelMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MpegChannelMode(int32_t  value__) noexcept;

/// @brief Field DualChannel value: I32(2)
static ::Meta::Voice::NLayer::MpegChannelMode const DualChannel;

/// @brief Field JointStereo value: I32(1)
static ::Meta::Voice::NLayer::MpegChannelMode const JointStereo;

/// @brief Field Mono value: I32(3)
static ::Meta::Voice::NLayer::MpegChannelMode const Mono;

/// @brief Field Stereo value: I32(0)
static ::Meta::Voice::NLayer::MpegChannelMode const Stereo;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31380};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::NLayer::MpegChannelMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::NLayer::MpegChannelMode) == 0x4, "Size mismatch!");

} // namespace end def Meta::Voice::NLayer
