#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendBackendController_PendingRequestStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendBackendController_PendingRequestStatus)
// Forward declare root types
namespace GlobalNamespace {
struct FriendBackendController_PendingRequestStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FriendBackendController_PendingRequestStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendBackendController_PendingRequestStatus, "", "FriendBackendController/PendingRequestStatus");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FriendBackendController/PendingRequestStatus
struct CORDL_TYPE FriendBackendController_PendingRequestStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FriendBackendController_PendingRequestStatus_Unwrapped
enum struct __FriendBackendController_PendingRequestStatus_Unwrapped : int32_t {
__E_I_REQUESTED = static_cast<int32_t>(0x0),
__E_THEY_REQUESTED = static_cast<int32_t>(0x1),
__E_CONFIRMED = static_cast<int32_t>(0x2),
__E_NOT_FOUND = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FriendBackendController_PendingRequestStatus_Unwrapped () const noexcept {
return static_cast<__FriendBackendController_PendingRequestStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FriendBackendController_PendingRequestStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FriendBackendController_PendingRequestStatus(int32_t  value__) noexcept;

/// @brief Field CONFIRMED value: I32(2)
static ::GlobalNamespace::FriendBackendController_PendingRequestStatus const CONFIRMED;

/// @brief Field I_REQUESTED value: I32(0)
static ::GlobalNamespace::FriendBackendController_PendingRequestStatus const I_REQUESTED;

/// @brief Field NOT_FOUND value: I32(3)
static ::GlobalNamespace::FriendBackendController_PendingRequestStatus const NOT_FOUND;

/// @brief Field THEY_REQUESTED value: I32(1)
static ::GlobalNamespace::FriendBackendController_PendingRequestStatus const THEY_REQUESTED;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3254};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendBackendController_PendingRequestStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendBackendController_PendingRequestStatus) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
