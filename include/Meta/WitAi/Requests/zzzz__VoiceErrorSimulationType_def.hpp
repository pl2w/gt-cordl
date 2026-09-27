#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VoiceErrorSimulationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceErrorSimulationType)
// Forward declare root types
namespace Meta::WitAi::Requests {
struct VoiceErrorSimulationType;
}
// Write type traits
MARK_VAL_T(::Meta::WitAi::Requests::VoiceErrorSimulationType);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::VoiceErrorSimulationType, "Meta.WitAi.Requests", "VoiceErrorSimulationType");
// Dependencies 
namespace Meta::WitAi::Requests {
// Is value type: true
// CS Name: Meta.WitAi.Requests.VoiceErrorSimulationType
struct CORDL_TYPE VoiceErrorSimulationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VoiceErrorSimulationType_Unwrapped
enum struct __VoiceErrorSimulationType_Unwrapped : int32_t {
__E_Server = static_cast<int32_t>(0x0),
__E_Timeout = static_cast<int32_t>(0x1),
__E_Disconnect = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VoiceErrorSimulationType_Unwrapped () const noexcept {
return static_cast<__VoiceErrorSimulationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VoiceErrorSimulationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VoiceErrorSimulationType(int32_t  value__) noexcept;

/// @brief Field Disconnect value: I32(2)
static ::Meta::WitAi::Requests::VoiceErrorSimulationType const Disconnect;

/// @brief Field Server value: I32(0)
static ::Meta::WitAi::Requests::VoiceErrorSimulationType const Server;

/// @brief Field Timeout value: I32(1)
static ::Meta::WitAi::Requests::VoiceErrorSimulationType const Timeout;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25639};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::VoiceErrorSimulationType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::VoiceErrorSimulationType) == 0x4, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
