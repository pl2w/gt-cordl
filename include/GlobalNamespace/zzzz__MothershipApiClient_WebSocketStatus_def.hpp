#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipApiClient_WebSocketStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipApiClient_WebSocketStatus)
// Forward declare root types
namespace GlobalNamespace {
struct MothershipApiClient_WebSocketStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MothershipApiClient_WebSocketStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipApiClient_WebSocketStatus, "", "MothershipApiClient/WebSocketStatus");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MothershipApiClient/WebSocketStatus
struct CORDL_TYPE MothershipApiClient_WebSocketStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MothershipApiClient_WebSocketStatus_Unwrapped
enum struct __MothershipApiClient_WebSocketStatus_Unwrapped : int32_t {
__E_INACTIVE = static_cast<int32_t>(0x0),
__E_ACTIVE = static_cast<int32_t>(0x1),
__E_CLOSING = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MothershipApiClient_WebSocketStatus_Unwrapped () const noexcept {
return static_cast<__MothershipApiClient_WebSocketStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MothershipApiClient_WebSocketStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MothershipApiClient_WebSocketStatus(int32_t  value__) noexcept;

/// @brief Field ACTIVE value: I32(1)
static ::GlobalNamespace::MothershipApiClient_WebSocketStatus const ACTIVE;

/// @brief Field CLOSING value: I32(2)
static ::GlobalNamespace::MothershipApiClient_WebSocketStatus const CLOSING;

/// @brief Field INACTIVE value: I32(0)
static ::GlobalNamespace::MothershipApiClient_WebSocketStatus const INACTIVE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9302};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipApiClient_WebSocketStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipApiClient_WebSocketStatus) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
