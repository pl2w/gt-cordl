#pragma once
// IWYU pragma private; include "Meta/Voice/UnityOpus/ErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorCode)
// Forward declare root types
namespace Meta::Voice::UnityOpus {
struct ErrorCode;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::UnityOpus::ErrorCode);
DEFINE_IL2CPP_CLASS(::Meta::Voice::UnityOpus::ErrorCode, "Meta.Voice.UnityOpus", "ErrorCode");
// Dependencies 
namespace Meta::Voice::UnityOpus {
// Is value type: true
// CS Name: Meta.Voice.UnityOpus.ErrorCode
struct CORDL_TYPE ErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ErrorCode_Unwrapped
enum struct __ErrorCode_Unwrapped : int32_t {
__E_OK = static_cast<int32_t>(0x0),
__E_BadArg = static_cast<int32_t>(0xffffffff),
__E_BufferTooSmall = static_cast<int32_t>(0xfffffffe),
__E_InternalError = static_cast<int32_t>(0xfffffffd),
__E_InvalidPacket = static_cast<int32_t>(0xfffffffc),
__E_Unimplemented = static_cast<int32_t>(0xfffffffb),
__E_InvalidState = static_cast<int32_t>(0xfffffffa),
__E_AllocFail = static_cast<int32_t>(0xfffffff9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ErrorCode_Unwrapped () const noexcept {
return static_cast<__ErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ErrorCode(int32_t  value__) noexcept;

/// @brief Field AllocFail value: I32(-7)
static ::Meta::Voice::UnityOpus::ErrorCode const AllocFail;

/// @brief Field BadArg value: I32(-1)
static ::Meta::Voice::UnityOpus::ErrorCode const BadArg;

/// @brief Field BufferTooSmall value: I32(-2)
static ::Meta::Voice::UnityOpus::ErrorCode const BufferTooSmall;

/// @brief Field InternalError value: I32(-3)
static ::Meta::Voice::UnityOpus::ErrorCode const InternalError;

/// @brief Field InvalidPacket value: I32(-4)
static ::Meta::Voice::UnityOpus::ErrorCode const InvalidPacket;

/// @brief Field InvalidState value: I32(-6)
static ::Meta::Voice::UnityOpus::ErrorCode const InvalidState;

/// @brief Field OK value: I32(0)
static ::Meta::Voice::UnityOpus::ErrorCode const OK;

/// @brief Field Unimplemented value: I32(-5)
static ::Meta::Voice::UnityOpus::ErrorCode const Unimplemented;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33122};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::UnityOpus::ErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::UnityOpus::ErrorCode) == 0x4, "Size mismatch!");

} // namespace end def Meta::Voice::UnityOpus
