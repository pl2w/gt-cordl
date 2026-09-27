#pragma once
// IWYU pragma private; include "POpusCodec/Enums/OpusCtlSetRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpusCtlSetRequest)
// Forward declare root types
namespace POpusCodec::Enums {
struct OpusCtlSetRequest;
}
// Write type traits
MARK_VAL_T(::POpusCodec::Enums::OpusCtlSetRequest);
DEFINE_IL2CPP_CLASS(::POpusCodec::Enums::OpusCtlSetRequest, "POpusCodec.Enums", "OpusCtlSetRequest");
// Dependencies 
namespace POpusCodec::Enums {
// Is value type: true
// CS Name: POpusCodec.Enums.OpusCtlSetRequest
struct CORDL_TYPE OpusCtlSetRequest {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpusCtlSetRequest_Unwrapped
enum struct __OpusCtlSetRequest_Unwrapped : int32_t {
__E_Application = static_cast<int32_t>(0xfa0),
__E_Bitrate = static_cast<int32_t>(0xfa2),
__E_MaxBandwidth = static_cast<int32_t>(0xfa4),
__E_VBR = static_cast<int32_t>(0xfa6),
__E_Bandwidth = static_cast<int32_t>(0xfa8),
__E_Complexity = static_cast<int32_t>(0xfaa),
__E_InbandFec = static_cast<int32_t>(0xfac),
__E_PacketLossPercentage = static_cast<int32_t>(0xfae),
__E_Dtx = static_cast<int32_t>(0xfb0),
__E_VBRConstraint = static_cast<int32_t>(0xfb4),
__E_ForceChannels = static_cast<int32_t>(0xfb6),
__E_Signal = static_cast<int32_t>(0xfb8),
__E_Gain = static_cast<int32_t>(0xfc2),
__E_LsbDepth = static_cast<int32_t>(0xfc4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpusCtlSetRequest_Unwrapped () const noexcept {
return static_cast<__OpusCtlSetRequest_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OpusCtlSetRequest() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OpusCtlSetRequest(int32_t  value__) noexcept;

/// @brief Field Application value: I32(4000)
static ::POpusCodec::Enums::OpusCtlSetRequest const Application;

/// @brief Field Bandwidth value: I32(4008)
static ::POpusCodec::Enums::OpusCtlSetRequest const Bandwidth;

/// @brief Field Bitrate value: I32(4002)
static ::POpusCodec::Enums::OpusCtlSetRequest const Bitrate;

/// @brief Field Complexity value: I32(4010)
static ::POpusCodec::Enums::OpusCtlSetRequest const Complexity;

/// @brief Field Dtx value: I32(4016)
static ::POpusCodec::Enums::OpusCtlSetRequest const Dtx;

/// @brief Field ForceChannels value: I32(4022)
static ::POpusCodec::Enums::OpusCtlSetRequest const ForceChannels;

/// @brief Field Gain value: I32(4034)
static ::POpusCodec::Enums::OpusCtlSetRequest const Gain;

/// @brief Field InbandFec value: I32(4012)
static ::POpusCodec::Enums::OpusCtlSetRequest const InbandFec;

/// @brief Field LsbDepth value: I32(4036)
static ::POpusCodec::Enums::OpusCtlSetRequest const LsbDepth;

/// @brief Field MaxBandwidth value: I32(4004)
static ::POpusCodec::Enums::OpusCtlSetRequest const MaxBandwidth;

/// @brief Field PacketLossPercentage value: I32(4014)
static ::POpusCodec::Enums::OpusCtlSetRequest const PacketLossPercentage;

/// @brief Field Signal value: I32(4024)
static ::POpusCodec::Enums::OpusCtlSetRequest const Signal;

/// @brief Field VBR value: I32(4006)
static ::POpusCodec::Enums::OpusCtlSetRequest const VBR;

/// @brief Field VBRConstraint value: I32(4020)
static ::POpusCodec::Enums::OpusCtlSetRequest const VBRConstraint;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28374};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::POpusCodec::Enums::OpusCtlSetRequest, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::POpusCodec::Enums::OpusCtlSetRequest) == 0x4, "Size mismatch!");

} // namespace end def POpusCodec::Enums
