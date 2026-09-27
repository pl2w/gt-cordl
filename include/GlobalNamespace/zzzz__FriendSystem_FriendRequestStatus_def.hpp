#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendSystem_FriendRequestStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendSystem_FriendRequestStatus)
// Forward declare root types
namespace GlobalNamespace {
struct FriendSystem_FriendRequestStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FriendSystem_FriendRequestStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendSystem_FriendRequestStatus, "", "FriendSystem/FriendRequestStatus");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FriendSystem/FriendRequestStatus
struct CORDL_TYPE FriendSystem_FriendRequestStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FriendSystem_FriendRequestStatus_Unwrapped
enum struct __FriendSystem_FriendRequestStatus_Unwrapped : int32_t {
__E_Pending = static_cast<int32_t>(0x0),
__E_Succeeded = static_cast<int32_t>(0x1),
__E_Failed = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FriendSystem_FriendRequestStatus_Unwrapped () const noexcept {
return static_cast<__FriendSystem_FriendRequestStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FriendSystem_FriendRequestStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FriendSystem_FriendRequestStatus(int32_t  value__) noexcept;

/// @brief Field Failed value: I32(2)
static ::GlobalNamespace::FriendSystem_FriendRequestStatus const Failed;

/// @brief Field Pending value: I32(0)
static ::GlobalNamespace::FriendSystem_FriendRequestStatus const Pending;

/// @brief Field Succeeded value: I32(1)
static ::GlobalNamespace::FriendSystem_FriendRequestStatus const Succeeded;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3272};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendSystem_FriendRequestStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendSystem_FriendRequestStatus) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
