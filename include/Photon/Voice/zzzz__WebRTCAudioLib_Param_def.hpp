#pragma once
// IWYU pragma private; include "Photon/Voice/WebRTCAudioLib_Param.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebRTCAudioLib_Param)
// Forward declare root types
namespace GlobalNamespace {
struct WebRTCAudioLib_Param;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WebRTCAudioLib_Param);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WebRTCAudioLib_Param, "Photon.Voice", "WebRTCAudioLib/Param");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Photon.Voice.WebRTCAudioLib/Param
struct CORDL_TYPE WebRTCAudioLib_Param {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WebRTCAudioLib_Param_Unwrapped
enum struct __WebRTCAudioLib_Param_Unwrapped : int32_t {
__E_REVERSE_STREAM_DELAY_MS = static_cast<int32_t>(0x1),
__E_AEC = static_cast<int32_t>(0xa),
__E_AEC_HIGH_PASS_FILTER = static_cast<int32_t>(0xb),
__E_AECM = static_cast<int32_t>(0x14),
__E_HIGH_PASS_FILTER = static_cast<int32_t>(0x1f),
__E_NS = static_cast<int32_t>(0x29),
__E_NS_LEVEL = static_cast<int32_t>(0x2a),
__E_AGC = static_cast<int32_t>(0x33),
__E_AGC_TARGET_LEVEL_DBFS = static_cast<int32_t>(0x37),
__E_AGC_COMPRESSION_GAIN = static_cast<int32_t>(0x38),
__E_AGC_LIMITER = static_cast<int32_t>(0x39),
__E_VAD = static_cast<int32_t>(0x3d),
__E_VAD_FRAME_SIZE_MS = static_cast<int32_t>(0x3e),
__E_VAD_LIKELIHOOD = static_cast<int32_t>(0x3f),
__E_AGC2 = static_cast<int32_t>(0x47),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebRTCAudioLib_Param_Unwrapped () const noexcept {
return static_cast<__WebRTCAudioLib_Param_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WebRTCAudioLib_Param() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WebRTCAudioLib_Param(int32_t  value__) noexcept;

/// @brief Field AEC value: I32(10)
static ::GlobalNamespace::WebRTCAudioLib_Param const AEC;

/// @brief Field AECM value: I32(20)
static ::GlobalNamespace::WebRTCAudioLib_Param const AECM;

/// @brief Field AEC_HIGH_PASS_FILTER value: I32(11)
static ::GlobalNamespace::WebRTCAudioLib_Param const AEC_HIGH_PASS_FILTER;

/// @brief Field AGC value: I32(51)
static ::GlobalNamespace::WebRTCAudioLib_Param const AGC;

/// @brief Field AGC2 value: I32(71)
static ::GlobalNamespace::WebRTCAudioLib_Param const AGC2;

/// @brief Field AGC_COMPRESSION_GAIN value: I32(56)
static ::GlobalNamespace::WebRTCAudioLib_Param const AGC_COMPRESSION_GAIN;

/// @brief Field AGC_LIMITER value: I32(57)
static ::GlobalNamespace::WebRTCAudioLib_Param const AGC_LIMITER;

/// @brief Field AGC_TARGET_LEVEL_DBFS value: I32(55)
static ::GlobalNamespace::WebRTCAudioLib_Param const AGC_TARGET_LEVEL_DBFS;

/// @brief Field HIGH_PASS_FILTER value: I32(31)
static ::GlobalNamespace::WebRTCAudioLib_Param const HIGH_PASS_FILTER;

/// @brief Field NS value: I32(41)
static ::GlobalNamespace::WebRTCAudioLib_Param const NS;

/// @brief Field NS_LEVEL value: I32(42)
static ::GlobalNamespace::WebRTCAudioLib_Param const NS_LEVEL;

/// @brief Field REVERSE_STREAM_DELAY_MS value: I32(1)
static ::GlobalNamespace::WebRTCAudioLib_Param const REVERSE_STREAM_DELAY_MS;

/// @brief Field VAD value: I32(61)
static ::GlobalNamespace::WebRTCAudioLib_Param const VAD;

/// @brief Field VAD_FRAME_SIZE_MS value: I32(62)
static ::GlobalNamespace::WebRTCAudioLib_Param const VAD_FRAME_SIZE_MS;

/// @brief Field VAD_LIKELIHOOD value: I32(63)
static ::GlobalNamespace::WebRTCAudioLib_Param const VAD_LIKELIHOOD;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28499};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WebRTCAudioLib_Param, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WebRTCAudioLib_Param) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
