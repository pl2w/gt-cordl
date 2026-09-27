#pragma once
// IWYU pragma private; include "Photon/Voice/WebRTCAudioLib_Error.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebRTCAudioLib_Error)
// Forward declare root types
namespace GlobalNamespace {
struct WebRTCAudioLib_Error;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WebRTCAudioLib_Error);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WebRTCAudioLib_Error, "Photon.Voice", "WebRTCAudioLib/Error");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Photon.Voice.WebRTCAudioLib/Error
struct CORDL_TYPE WebRTCAudioLib_Error {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WebRTCAudioLib_Error_Unwrapped
enum struct __WebRTCAudioLib_Error_Unwrapped : int32_t {
__E_kNoError = static_cast<int32_t>(0x0),
__E_kUnspecifiedError = static_cast<int32_t>(0xffffffff),
__E_kCreationFailedError = static_cast<int32_t>(0xfffffffe),
__E_kUnsupportedComponentError = static_cast<int32_t>(0xfffffffd),
__E_kUnsupportedFunctionError = static_cast<int32_t>(0xfffffffc),
__E_kNullPointerError = static_cast<int32_t>(0xfffffffb),
__E_kBadParameterError = static_cast<int32_t>(0xfffffffa),
__E_kBadSampleRateError = static_cast<int32_t>(0xfffffff9),
__E_kBadDataLengthError = static_cast<int32_t>(0xfffffff8),
__E_kBadNumberChannelsError = static_cast<int32_t>(0xfffffff7),
__E_kFileError = static_cast<int32_t>(0xfffffff6),
__E_kStreamParameterNotSetError = static_cast<int32_t>(0xfffffff5),
__E_kNotEnabledError = static_cast<int32_t>(0xfffffff4),
__E_kBadStreamParameterWarning = static_cast<int32_t>(0xfffffff3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebRTCAudioLib_Error_Unwrapped () const noexcept {
return static_cast<__WebRTCAudioLib_Error_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WebRTCAudioLib_Error() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WebRTCAudioLib_Error(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28498};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field kBadDataLengthError value: I32(-8)
static ::GlobalNamespace::WebRTCAudioLib_Error const kBadDataLengthError;

/// @brief Field kBadNumberChannelsError value: I32(-9)
static ::GlobalNamespace::WebRTCAudioLib_Error const kBadNumberChannelsError;

/// @brief Field kBadParameterError value: I32(-6)
static ::GlobalNamespace::WebRTCAudioLib_Error const kBadParameterError;

/// @brief Field kBadSampleRateError value: I32(-7)
static ::GlobalNamespace::WebRTCAudioLib_Error const kBadSampleRateError;

/// @brief Field kBadStreamParameterWarning value: I32(-13)
static ::GlobalNamespace::WebRTCAudioLib_Error const kBadStreamParameterWarning;

/// @brief Field kCreationFailedError value: I32(-2)
static ::GlobalNamespace::WebRTCAudioLib_Error const kCreationFailedError;

/// @brief Field kFileError value: I32(-10)
static ::GlobalNamespace::WebRTCAudioLib_Error const kFileError;

/// @brief Field kNoError value: I32(0)
static ::GlobalNamespace::WebRTCAudioLib_Error const kNoError;

/// @brief Field kNotEnabledError value: I32(-12)
static ::GlobalNamespace::WebRTCAudioLib_Error const kNotEnabledError;

/// @brief Field kNullPointerError value: I32(-5)
static ::GlobalNamespace::WebRTCAudioLib_Error const kNullPointerError;

/// @brief Field kStreamParameterNotSetError value: I32(-11)
static ::GlobalNamespace::WebRTCAudioLib_Error const kStreamParameterNotSetError;

/// @brief Field kUnspecifiedError value: I32(-1)
static ::GlobalNamespace::WebRTCAudioLib_Error const kUnspecifiedError;

/// @brief Field kUnsupportedComponentError value: I32(-3)
static ::GlobalNamespace::WebRTCAudioLib_Error const kUnsupportedComponentError;

/// @brief Field kUnsupportedFunctionError value: I32(-4)
static ::GlobalNamespace::WebRTCAudioLib_Error const kUnsupportedFunctionError;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WebRTCAudioLib_Error, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WebRTCAudioLib_Error) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
