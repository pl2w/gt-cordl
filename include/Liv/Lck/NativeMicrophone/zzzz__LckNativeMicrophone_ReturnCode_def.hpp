#pragma once
// IWYU pragma private; include "Liv/Lck/NativeMicrophone/LckNativeMicrophone_ReturnCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckNativeMicrophone_ReturnCode)
// Forward declare root types
namespace GlobalNamespace {
struct LckNativeMicrophone_ReturnCode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckNativeMicrophone_ReturnCode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckNativeMicrophone_ReturnCode, "Liv.Lck.NativeMicrophone", "LckNativeMicrophone/ReturnCode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.NativeMicrophone.LckNativeMicrophone/ReturnCode
struct CORDL_TYPE LckNativeMicrophone_ReturnCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __LckNativeMicrophone_ReturnCode_Unwrapped
enum struct __LckNativeMicrophone_ReturnCode_Unwrapped : uint32_t {
__E_Ok = static_cast<uint32_t>(0x0u),
__E_Error = static_cast<uint32_t>(0x1u),
__E_InvalidKey = static_cast<uint32_t>(0x2u),
__E_DefaultInputDeviceError = static_cast<uint32_t>(0x3u),
__E_BuildStreamError = static_cast<uint32_t>(0x4u),
__E_NoAudioData = static_cast<uint32_t>(0x5u),
__E_LoggerAlreadySet = static_cast<uint32_t>(0x6u),
__E_CaptureNotStarted = static_cast<uint32_t>(0x7u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LckNativeMicrophone_ReturnCode_Unwrapped () const noexcept {
return static_cast<__LckNativeMicrophone_ReturnCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LckNativeMicrophone_ReturnCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckNativeMicrophone_ReturnCode(uint32_t  value__) noexcept;

/// @brief Field BuildStreamError value: U32(4)
static ::GlobalNamespace::LckNativeMicrophone_ReturnCode const BuildStreamError;

/// @brief Field CaptureNotStarted value: U32(7)
static ::GlobalNamespace::LckNativeMicrophone_ReturnCode const CaptureNotStarted;

/// @brief Field DefaultInputDeviceError value: U32(3)
static ::GlobalNamespace::LckNativeMicrophone_ReturnCode const DefaultInputDeviceError;

/// @brief Field Error value: U32(1)
static ::GlobalNamespace::LckNativeMicrophone_ReturnCode const Error;

/// @brief Field InvalidKey value: U32(2)
static ::GlobalNamespace::LckNativeMicrophone_ReturnCode const InvalidKey;

/// @brief Field LoggerAlreadySet value: U32(6)
static ::GlobalNamespace::LckNativeMicrophone_ReturnCode const LoggerAlreadySet;

/// @brief Field NoAudioData value: U32(5)
static ::GlobalNamespace::LckNativeMicrophone_ReturnCode const NoAudioData;

/// @brief Field Ok value: U32(0)
static ::GlobalNamespace::LckNativeMicrophone_ReturnCode const Ok;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25005};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckNativeMicrophone_ReturnCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckNativeMicrophone_ReturnCode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
