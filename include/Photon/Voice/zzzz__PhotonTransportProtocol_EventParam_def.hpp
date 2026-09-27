#pragma once
// IWYU pragma private; include "Photon/Voice/PhotonTransportProtocol_EventParam.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonTransportProtocol_EventParam)
// Forward declare root types
namespace GlobalNamespace {
struct PhotonTransportProtocol_EventParam;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PhotonTransportProtocol_EventParam);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonTransportProtocol_EventParam, "Photon.Voice", "PhotonTransportProtocol/EventParam");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Photon.Voice.PhotonTransportProtocol/EventParam
struct CORDL_TYPE PhotonTransportProtocol_EventParam {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __PhotonTransportProtocol_EventParam_Unwrapped
enum struct __PhotonTransportProtocol_EventParam_Unwrapped : uint8_t {
__E_VoiceId = static_cast<uint8_t>(0x1u),
__E_SamplingRate = static_cast<uint8_t>(0x2u),
__E_Channels = static_cast<uint8_t>(0x3u),
__E_FrameDurationUs = static_cast<uint8_t>(0x4u),
__E_Bitrate = static_cast<uint8_t>(0x5u),
__E_Width = static_cast<uint8_t>(0x6u),
__E_Height = static_cast<uint8_t>(0x7u),
__E_FPS = static_cast<uint8_t>(0x8u),
__E_KeyFrameInt = static_cast<uint8_t>(0x9u),
__E_UserData = static_cast<uint8_t>(0xau),
__E_EventNumber = static_cast<uint8_t>(0xbu),
__E_Codec = static_cast<uint8_t>(0xcu),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PhotonTransportProtocol_EventParam_Unwrapped () const noexcept {
return static_cast<__PhotonTransportProtocol_EventParam_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PhotonTransportProtocol_EventParam() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr PhotonTransportProtocol_EventParam(uint8_t  value__) noexcept;

/// @brief Field Bitrate value: U8(5)
static ::GlobalNamespace::PhotonTransportProtocol_EventParam const Bitrate;

/// @brief Field Channels value: U8(3)
static ::GlobalNamespace::PhotonTransportProtocol_EventParam const Channels;

/// @brief Field Codec value: U8(12)
static ::GlobalNamespace::PhotonTransportProtocol_EventParam const Codec;

/// @brief Field EventNumber value: U8(11)
static ::GlobalNamespace::PhotonTransportProtocol_EventParam const EventNumber;

/// @brief Field FPS value: U8(8)
static ::GlobalNamespace::PhotonTransportProtocol_EventParam const FPS;

/// @brief Field FrameDurationUs value: U8(4)
static ::GlobalNamespace::PhotonTransportProtocol_EventParam const FrameDurationUs;

/// @brief Field Height value: U8(7)
static ::GlobalNamespace::PhotonTransportProtocol_EventParam const Height;

/// @brief Field KeyFrameInt value: U8(9)
static ::GlobalNamespace::PhotonTransportProtocol_EventParam const KeyFrameInt;

/// @brief Field SamplingRate value: U8(2)
static ::GlobalNamespace::PhotonTransportProtocol_EventParam const SamplingRate;

/// @brief Field UserData value: U8(10)
static ::GlobalNamespace::PhotonTransportProtocol_EventParam const UserData;

/// @brief Field VoiceId value: U8(1)
static ::GlobalNamespace::PhotonTransportProtocol_EventParam const VoiceId;

/// @brief Field Width value: U8(6)
static ::GlobalNamespace::PhotonTransportProtocol_EventParam const Width;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28506};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonTransportProtocol_EventParam, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonTransportProtocol_EventParam) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
