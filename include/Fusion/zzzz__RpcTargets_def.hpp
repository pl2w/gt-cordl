#pragma once
// IWYU pragma private; include "Fusion/RpcTargets.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RpcTargets)
// Forward declare root types
namespace Fusion {
struct RpcTargets;
}
// Write type traits
MARK_VAL_T(::Fusion::RpcTargets);
DEFINE_IL2CPP_CLASS(::Fusion::RpcTargets, "Fusion", "RpcTargets");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.RpcTargets
struct CORDL_TYPE RpcTargets {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RpcTargets_Unwrapped
enum struct __RpcTargets_Unwrapped : int32_t {
__E_StateAuthority = static_cast<int32_t>(0x1),
__E_InputAuthority = static_cast<int32_t>(0x2),
__E_Proxies = static_cast<int32_t>(0x4),
__E_All = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RpcTargets_Unwrapped () const noexcept {
return static_cast<__RpcTargets_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RpcTargets() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RpcTargets(int32_t  value__) noexcept;

/// @brief Field All value: I32(7)
static ::Fusion::RpcTargets const All;

/// @brief Field InputAuthority value: I32(2)
static ::Fusion::RpcTargets const InputAuthority;

/// @brief Field Proxies value: I32(4)
static ::Fusion::RpcTargets const Proxies;

/// @brief Field StateAuthority value: I32(1)
static ::Fusion::RpcTargets const StateAuthority;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19196};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RpcTargets, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::RpcTargets) == 0x4, "Size mismatch!");

} // namespace end def Fusion
