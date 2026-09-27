#pragma once
// IWYU pragma private; include "GlobalNamespace/SessionStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionStatus)
// Forward declare root types
namespace GlobalNamespace {
struct SessionStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SessionStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SessionStatus, "", "SessionStatus");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SessionStatus
struct CORDL_TYPE SessionStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SessionStatus_Unwrapped
enum struct __SessionStatus_Unwrapped : int32_t {
__E_PASS = static_cast<int32_t>(0x0),
__E_PROHIBITED = static_cast<int32_t>(0x1),
__E_CHALLENGE = static_cast<int32_t>(0x2),
__E_CHALLENGE_SESSION_UPGRADE = static_cast<int32_t>(0x3),
__E_PENDING_AGE_APPEAL = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SessionStatus_Unwrapped () const noexcept {
return static_cast<__SessionStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SessionStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SessionStatus(int32_t  value__) noexcept;

/// @brief Field CHALLENGE value: I32(2)
static ::GlobalNamespace::SessionStatus const CHALLENGE;

/// @brief Field CHALLENGE_SESSION_UPGRADE value: I32(3)
static ::GlobalNamespace::SessionStatus const CHALLENGE_SESSION_UPGRADE;

/// @brief Field PASS value: I32(0)
static ::GlobalNamespace::SessionStatus const PASS;

/// @brief Field PENDING_AGE_APPEAL value: I32(4)
static ::GlobalNamespace::SessionStatus const PENDING_AGE_APPEAL;

/// @brief Field PROHIBITED value: I32(1)
static ::GlobalNamespace::SessionStatus const PROHIBITED;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2868};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SessionStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SessionStatus) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
