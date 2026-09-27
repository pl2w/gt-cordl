#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectConnectionDataStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectConnectionDataStatus)
// Forward declare root types
namespace Fusion {
struct NetworkObjectConnectionDataStatus;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkObjectConnectionDataStatus);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectConnectionDataStatus, "Fusion", "NetworkObjectConnectionDataStatus");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkObjectConnectionDataStatus
struct CORDL_TYPE NetworkObjectConnectionDataStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkObjectConnectionDataStatus_Unwrapped
enum struct __NetworkObjectConnectionDataStatus_Unwrapped : int32_t {
__E_CreatedUnconfirmed = static_cast<int32_t>(0x0),
__E_CreatedConfirmed = static_cast<int32_t>(0x1),
__E_DestroyUnconfirmed = static_cast<int32_t>(0x2),
__E_DestroyPending = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkObjectConnectionDataStatus_Unwrapped () const noexcept {
return static_cast<__NetworkObjectConnectionDataStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectConnectionDataStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectConnectionDataStatus(int32_t  value__) noexcept;

/// @brief Field CreatedConfirmed value: I32(1)
static ::Fusion::NetworkObjectConnectionDataStatus const CreatedConfirmed;

/// @brief Field CreatedUnconfirmed value: I32(0)
static ::Fusion::NetworkObjectConnectionDataStatus const CreatedUnconfirmed;

/// @brief Field DestroyPending value: I32(3)
static ::Fusion::NetworkObjectConnectionDataStatus const DestroyPending;

/// @brief Field DestroyUnconfirmed value: I32(2)
static ::Fusion::NetworkObjectConnectionDataStatus const DestroyUnconfirmed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19122};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectConnectionDataStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectConnectionDataStatus) == 0x4, "Size mismatch!");

} // namespace end def Fusion
