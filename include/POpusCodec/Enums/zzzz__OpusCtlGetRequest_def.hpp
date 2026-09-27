#pragma once
// IWYU pragma private; include "POpusCodec/Enums/OpusCtlGetRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpusCtlGetRequest)
// Forward declare root types
namespace POpusCodec::Enums {
struct OpusCtlGetRequest;
}
// Write type traits
MARK_VAL_T(::POpusCodec::Enums::OpusCtlGetRequest);
DEFINE_IL2CPP_CLASS(::POpusCodec::Enums::OpusCtlGetRequest, "POpusCodec.Enums", "OpusCtlGetRequest");
// Dependencies 
namespace POpusCodec::Enums {
// Is value type: true
// CS Name: POpusCodec.Enums.OpusCtlGetRequest
struct CORDL_TYPE OpusCtlGetRequest {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpusCtlGetRequest_Unwrapped
enum struct __OpusCtlGetRequest_Unwrapped : int32_t {
__E_Application = static_cast<int32_t>(0xfa1),
__E_Bitrate = static_cast<int32_t>(0xfa3),
__E_MaxBandwidth = static_cast<int32_t>(0xfa5),
__E_VBR = static_cast<int32_t>(0xfa7),
__E_Bandwidth = static_cast<int32_t>(0xfa9),
__E_Complexity = static_cast<int32_t>(0xfab),
__E_InbandFec = static_cast<int32_t>(0xfad),
__E_PacketLossPercentage = static_cast<int32_t>(0xfaf),
__E_Dtx = static_cast<int32_t>(0xfb1),
__E_VBRConstraint = static_cast<int32_t>(0xfb5),
__E_ForceChannels = static_cast<int32_t>(0xfb7),
__E_Signal = static_cast<int32_t>(0xfb9),
__E_LookAhead = static_cast<int32_t>(0xfbb),
__E_SampleRate = static_cast<int32_t>(0xfbd),
__E_FinalRange = static_cast<int32_t>(0xfbf),
__E_Pitch = static_cast<int32_t>(0xfc1),
__E_Gain = static_cast<int32_t>(0xfc3),
__E_LsbDepth = static_cast<int32_t>(0xfc5),
__E_LastPacketDurationRequest = static_cast<int32_t>(0xfc7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpusCtlGetRequest_Unwrapped () const noexcept {
return static_cast<__OpusCtlGetRequest_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OpusCtlGetRequest() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OpusCtlGetRequest(int32_t  value__) noexcept;

/// @brief Field Application value: I32(4001)
static ::POpusCodec::Enums::OpusCtlGetRequest const Application;

/// @brief Field Bandwidth value: I32(4009)
static ::POpusCodec::Enums::OpusCtlGetRequest const Bandwidth;

/// @brief Field Bitrate value: I32(4003)
static ::POpusCodec::Enums::OpusCtlGetRequest const Bitrate;

/// @brief Field Complexity value: I32(4011)
static ::POpusCodec::Enums::OpusCtlGetRequest const Complexity;

/// @brief Field Dtx value: I32(4017)
static ::POpusCodec::Enums::OpusCtlGetRequest const Dtx;

/// @brief Field FinalRange value: I32(4031)
static ::POpusCodec::Enums::OpusCtlGetRequest const FinalRange;

/// @brief Field ForceChannels value: I32(4023)
static ::POpusCodec::Enums::OpusCtlGetRequest const ForceChannels;

/// @brief Field Gain value: I32(4035)
static ::POpusCodec::Enums::OpusCtlGetRequest const Gain;

/// @brief Field InbandFec value: I32(4013)
static ::POpusCodec::Enums::OpusCtlGetRequest const InbandFec;

/// @brief Field LastPacketDurationRequest value: I32(4039)
static ::POpusCodec::Enums::OpusCtlGetRequest const LastPacketDurationRequest;

/// @brief Field LookAhead value: I32(4027)
static ::POpusCodec::Enums::OpusCtlGetRequest const LookAhead;

/// @brief Field LsbDepth value: I32(4037)
static ::POpusCodec::Enums::OpusCtlGetRequest const LsbDepth;

/// @brief Field MaxBandwidth value: I32(4005)
static ::POpusCodec::Enums::OpusCtlGetRequest const MaxBandwidth;

/// @brief Field PacketLossPercentage value: I32(4015)
static ::POpusCodec::Enums::OpusCtlGetRequest const PacketLossPercentage;

/// @brief Field Pitch value: I32(4033)
static ::POpusCodec::Enums::OpusCtlGetRequest const Pitch;

/// @brief Field SampleRate value: I32(4029)
static ::POpusCodec::Enums::OpusCtlGetRequest const SampleRate;

/// @brief Field Signal value: I32(4025)
static ::POpusCodec::Enums::OpusCtlGetRequest const Signal;

/// @brief Field VBR value: I32(4007)
static ::POpusCodec::Enums::OpusCtlGetRequest const VBR;

/// @brief Field VBRConstraint value: I32(4021)
static ::POpusCodec::Enums::OpusCtlGetRequest const VBRConstraint;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28373};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::POpusCodec::Enums::OpusCtlGetRequest, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::POpusCodec::Enums::OpusCtlGetRequest) == 0x4, "Size mismatch!");

} // namespace end def POpusCodec::Enums
