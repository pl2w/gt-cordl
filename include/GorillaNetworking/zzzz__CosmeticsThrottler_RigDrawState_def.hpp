#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticsThrottler_RigDrawState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsThrottler_RigDrawState)
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticsThrottler_RigDrawState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticsThrottler_RigDrawState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsThrottler_RigDrawState, "GorillaNetworking", "CosmeticsThrottler/RigDrawState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.CosmeticsThrottler/RigDrawState
struct CORDL_TYPE CosmeticsThrottler_RigDrawState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CosmeticsThrottler_RigDrawState_Unwrapped
enum struct __CosmeticsThrottler_RigDrawState_Unwrapped : int32_t {
__E_All = static_cast<int32_t>(0x0),
__E_Partial = static_cast<int32_t>(0x1),
__E_Min = static_cast<int32_t>(0x2),
__E_Startup = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CosmeticsThrottler_RigDrawState_Unwrapped () const noexcept {
return static_cast<__CosmeticsThrottler_RigDrawState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsThrottler_RigDrawState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticsThrottler_RigDrawState(int32_t  value__) noexcept;

/// @brief Field All value: I32(0)
static ::GlobalNamespace::CosmeticsThrottler_RigDrawState const All;

/// @brief Field Min value: I32(2)
static ::GlobalNamespace::CosmeticsThrottler_RigDrawState const Min;

/// @brief Field Partial value: I32(1)
static ::GlobalNamespace::CosmeticsThrottler_RigDrawState const Partial;

/// @brief Field Startup value: I32(-1)
static ::GlobalNamespace::CosmeticsThrottler_RigDrawState const Startup;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4314};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticsThrottler_RigDrawState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticsThrottler_RigDrawState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
