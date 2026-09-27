#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/CustomAuthenticationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomAuthenticationType)
// Forward declare root types
namespace Fusion::Photon::Realtime {
struct CustomAuthenticationType;
}
// Write type traits
MARK_VAL_T(::Fusion::Photon::Realtime::CustomAuthenticationType);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::CustomAuthenticationType, "Fusion.Photon.Realtime", "CustomAuthenticationType");
// Dependencies 
namespace Fusion::Photon::Realtime {
// Is value type: true
// CS Name: Fusion.Photon.Realtime.CustomAuthenticationType
struct CORDL_TYPE CustomAuthenticationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __CustomAuthenticationType_Unwrapped
enum struct __CustomAuthenticationType_Unwrapped : uint8_t {
__E_Custom = static_cast<uint8_t>(0x0u),
__E_Steam = static_cast<uint8_t>(0x1u),
__E_Facebook = static_cast<uint8_t>(0x2u),
__E_Oculus = static_cast<uint8_t>(0x3u),
__E_PlayStation4 = static_cast<uint8_t>(0x4u),
__E_PlayStation = static_cast<uint8_t>(0x4u),
__E_Xbox = static_cast<uint8_t>(0x5u),
__E_Viveport = static_cast<uint8_t>(0xau),
__E_NintendoSwitch = static_cast<uint8_t>(0xbu),
__E_PlayStation5 = static_cast<uint8_t>(0xcu),
__E_Playstation5 = static_cast<uint8_t>(0xcu),
__E_Epic = static_cast<uint8_t>(0xdu),
__E_FacebookGaming = static_cast<uint8_t>(0xfu),
__E_None = static_cast<uint8_t>(0xffu),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomAuthenticationType_Unwrapped () const noexcept {
return static_cast<__CustomAuthenticationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CustomAuthenticationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr CustomAuthenticationType(uint8_t  value__) noexcept;

/// @brief Field Custom value: U8(0)
static ::Fusion::Photon::Realtime::CustomAuthenticationType const Custom;

/// @brief Field Epic value: U8(13)
static ::Fusion::Photon::Realtime::CustomAuthenticationType const Epic;

/// @brief Field Facebook value: U8(2)
static ::Fusion::Photon::Realtime::CustomAuthenticationType const Facebook;

/// @brief Field FacebookGaming value: U8(15)
static ::Fusion::Photon::Realtime::CustomAuthenticationType const FacebookGaming;

/// @brief Field NintendoSwitch value: U8(11)
static ::Fusion::Photon::Realtime::CustomAuthenticationType const NintendoSwitch;

/// @brief Field None value: U8(255)
static ::Fusion::Photon::Realtime::CustomAuthenticationType const None;

/// @brief Field Oculus value: U8(3)
static ::Fusion::Photon::Realtime::CustomAuthenticationType const Oculus;

/// @brief Field PlayStation value: U8(4)
static ::Fusion::Photon::Realtime::CustomAuthenticationType const PlayStation;

/// @brief Field PlayStation4 value: U8(4)
static ::Fusion::Photon::Realtime::CustomAuthenticationType const PlayStation4;

/// @brief Field PlayStation5 value: U8(12)
static ::Fusion::Photon::Realtime::CustomAuthenticationType const PlayStation5;

/// @brief Field Playstation5 value: U8(12)
static ::Fusion::Photon::Realtime::CustomAuthenticationType const Playstation5;

/// @brief Field Steam value: U8(1)
static ::Fusion::Photon::Realtime::CustomAuthenticationType const Steam;

/// @brief Field Viveport value: U8(10)
static ::Fusion::Photon::Realtime::CustomAuthenticationType const Viveport;

/// @brief Field Xbox value: U8(5)
static ::Fusion::Photon::Realtime::CustomAuthenticationType const Xbox;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28091};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::CustomAuthenticationType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::CustomAuthenticationType) == 0x1, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
