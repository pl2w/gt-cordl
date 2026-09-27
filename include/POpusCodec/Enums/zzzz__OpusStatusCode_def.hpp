#pragma once
// IWYU pragma private; include "POpusCodec/Enums/OpusStatusCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpusStatusCode)
// Forward declare root types
namespace POpusCodec::Enums {
struct OpusStatusCode;
}
// Write type traits
MARK_VAL_T(::POpusCodec::Enums::OpusStatusCode);
DEFINE_IL2CPP_CLASS(::POpusCodec::Enums::OpusStatusCode, "POpusCodec.Enums", "OpusStatusCode");
// Dependencies 
namespace POpusCodec::Enums {
// Is value type: true
// CS Name: POpusCodec.Enums.OpusStatusCode
struct CORDL_TYPE OpusStatusCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpusStatusCode_Unwrapped
enum struct __OpusStatusCode_Unwrapped : int32_t {
__E_OK = static_cast<int32_t>(0x0),
__E_BadArguments = static_cast<int32_t>(0xffffffff),
__E_BufferTooSmall = static_cast<int32_t>(0xfffffffe),
__E_InternalError = static_cast<int32_t>(0xfffffffd),
__E_InvalidPacket = static_cast<int32_t>(0xfffffffc),
__E_Unimplemented = static_cast<int32_t>(0xfffffffb),
__E_InvalidState = static_cast<int32_t>(0xfffffffa),
__E_AllocFail = static_cast<int32_t>(0xfffffff9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpusStatusCode_Unwrapped () const noexcept {
return static_cast<__OpusStatusCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OpusStatusCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OpusStatusCode(int32_t  value__) noexcept;

/// @brief Field AllocFail value: I32(-7)
static ::POpusCodec::Enums::OpusStatusCode const AllocFail;

/// @brief Field BadArguments value: I32(-1)
static ::POpusCodec::Enums::OpusStatusCode const BadArguments;

/// @brief Field BufferTooSmall value: I32(-2)
static ::POpusCodec::Enums::OpusStatusCode const BufferTooSmall;

/// @brief Field InternalError value: I32(-3)
static ::POpusCodec::Enums::OpusStatusCode const InternalError;

/// @brief Field InvalidPacket value: I32(-4)
static ::POpusCodec::Enums::OpusStatusCode const InvalidPacket;

/// @brief Field InvalidState value: I32(-6)
static ::POpusCodec::Enums::OpusStatusCode const InvalidState;

/// @brief Field OK value: I32(0)
static ::POpusCodec::Enums::OpusStatusCode const OK;

/// @brief Field Unimplemented value: I32(-5)
static ::POpusCodec::Enums::OpusStatusCode const Unimplemented;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28375};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::POpusCodec::Enums::OpusStatusCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::POpusCodec::Enums::OpusStatusCode) == 0x4, "Size mismatch!");

} // namespace end def POpusCodec::Enums
