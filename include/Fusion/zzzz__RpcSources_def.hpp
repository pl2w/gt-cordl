#pragma once
// IWYU pragma private; include "Fusion/RpcSources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RpcSources)
// Forward declare root types
namespace Fusion {
struct RpcSources;
}
// Write type traits
MARK_VAL_T(::Fusion::RpcSources);
DEFINE_IL2CPP_CLASS(::Fusion::RpcSources, "Fusion", "RpcSources");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.RpcSources
struct CORDL_TYPE RpcSources {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RpcSources_Unwrapped
enum struct __RpcSources_Unwrapped : int32_t {
__E_StateAuthority = static_cast<int32_t>(0x1),
__E_InputAuthority = static_cast<int32_t>(0x2),
__E_Proxies = static_cast<int32_t>(0x4),
__E_All = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RpcSources_Unwrapped () const noexcept {
return static_cast<__RpcSources_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RpcSources() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RpcSources(int32_t  value__) noexcept;

/// @brief Field All value: I32(7)
static ::Fusion::RpcSources const All;

/// @brief Field InputAuthority value: I32(2)
static ::Fusion::RpcSources const InputAuthority;

/// @brief Field Proxies value: I32(4)
static ::Fusion::RpcSources const Proxies;

/// @brief Field StateAuthority value: I32(1)
static ::Fusion::RpcSources const StateAuthority;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19193};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RpcSources, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::RpcSources) == 0x4, "Size mismatch!");

} // namespace end def Fusion
