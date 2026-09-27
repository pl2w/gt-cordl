#pragma once
// IWYU pragma private; include "GlobalNamespace/GetSessionStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetSessionStatus)
// Forward declare root types
namespace GlobalNamespace {
struct GetSessionStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GetSessionStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GetSessionStatus, "", "GetSessionStatus");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GetSessionStatus
struct CORDL_TYPE GetSessionStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GetSessionStatus_Unwrapped
enum struct __GetSessionStatus_Unwrapped : int32_t {
__E_PASS = static_cast<int32_t>(0x0),
__E_CHALLENGE = static_cast<int32_t>(0x1),
__E_PROHIBITED = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GetSessionStatus_Unwrapped () const noexcept {
return static_cast<__GetSessionStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GetSessionStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GetSessionStatus(int32_t  value__) noexcept;

/// @brief Field CHALLENGE value: I32(1)
static ::GlobalNamespace::GetSessionStatus const CHALLENGE;

/// @brief Field PASS value: I32(0)
static ::GlobalNamespace::GetSessionStatus const PASS;

/// @brief Field PROHIBITED value: I32(2)
static ::GlobalNamespace::GetSessionStatus const PROHIBITED;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2866};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetSessionStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GetSessionStatus) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
