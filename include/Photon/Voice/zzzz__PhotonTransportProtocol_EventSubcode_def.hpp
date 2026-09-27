#pragma once
// IWYU pragma private; include "Photon/Voice/PhotonTransportProtocol_EventSubcode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonTransportProtocol_EventSubcode)
// Forward declare root types
namespace GlobalNamespace {
struct PhotonTransportProtocol_EventSubcode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PhotonTransportProtocol_EventSubcode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonTransportProtocol_EventSubcode, "Photon.Voice", "PhotonTransportProtocol/EventSubcode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Photon.Voice.PhotonTransportProtocol/EventSubcode
struct CORDL_TYPE PhotonTransportProtocol_EventSubcode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __PhotonTransportProtocol_EventSubcode_Unwrapped
enum struct __PhotonTransportProtocol_EventSubcode_Unwrapped : uint8_t {
__E_VoiceInfo = static_cast<uint8_t>(0x1u),
__E_VoiceRemove = static_cast<uint8_t>(0x2u),
__E_Frame = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PhotonTransportProtocol_EventSubcode_Unwrapped () const noexcept {
return static_cast<__PhotonTransportProtocol_EventSubcode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PhotonTransportProtocol_EventSubcode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr PhotonTransportProtocol_EventSubcode(uint8_t  value__) noexcept;

/// @brief Field Frame value: U8(3)
static ::GlobalNamespace::PhotonTransportProtocol_EventSubcode const Frame;

/// @brief Field VoiceInfo value: U8(1)
static ::GlobalNamespace::PhotonTransportProtocol_EventSubcode const VoiceInfo;

/// @brief Field VoiceRemove value: U8(2)
static ::GlobalNamespace::PhotonTransportProtocol_EventSubcode const VoiceRemove;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28505};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonTransportProtocol_EventSubcode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonTransportProtocol_EventSubcode) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
