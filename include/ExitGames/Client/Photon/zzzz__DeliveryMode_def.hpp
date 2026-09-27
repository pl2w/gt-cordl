#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/DeliveryMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeliveryMode)
// Forward declare root types
namespace ExitGames::Client::Photon {
struct DeliveryMode;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::DeliveryMode);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::DeliveryMode, "ExitGames.Client.Photon", "DeliveryMode");
// Dependencies 
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ExitGames.Client.Photon.DeliveryMode
struct CORDL_TYPE DeliveryMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DeliveryMode_Unwrapped
enum struct __DeliveryMode_Unwrapped : int32_t {
__E_Unreliable = static_cast<int32_t>(0x0),
__E_Reliable = static_cast<int32_t>(0x1),
__E_UnreliableUnsequenced = static_cast<int32_t>(0x2),
__E_ReliableUnsequenced = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DeliveryMode_Unwrapped () const noexcept {
return static_cast<__DeliveryMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DeliveryMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DeliveryMode(int32_t  value__) noexcept;

/// @brief Field Reliable value: I32(1)
static ::ExitGames::Client::Photon::DeliveryMode const Reliable;

/// @brief Field ReliableUnsequenced value: I32(3)
static ::ExitGames::Client::Photon::DeliveryMode const ReliableUnsequenced;

/// @brief Field Unreliable value: I32(0)
static ::ExitGames::Client::Photon::DeliveryMode const Unreliable;

/// @brief Field UnreliableUnsequenced value: I32(2)
static ::ExitGames::Client::Photon::DeliveryMode const UnreliableUnsequenced;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26469};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::DeliveryMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::DeliveryMode) == 0x4, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
