#pragma once
// IWYU pragma private; include "GlobalNamespace/WS_PROXY_ACTIONS.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WS_PROXY_ACTIONS)
// Forward declare root types
namespace GlobalNamespace {
struct WS_PROXY_ACTIONS;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WS_PROXY_ACTIONS);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WS_PROXY_ACTIONS, "", "WS_PROXY_ACTIONS");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: WS_PROXY_ACTIONS
struct CORDL_TYPE WS_PROXY_ACTIONS {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WS_PROXY_ACTIONS_Unwrapped
enum struct __WS_PROXY_ACTIONS_Unwrapped : int32_t {
__E_NOTHING = static_cast<int32_t>(0x0),
__E_BROADCAST = static_cast<int32_t>(0x1),
__E_UNICAST = static_cast<int32_t>(0x2),
__E_AWAIT_SYNCHRONIZATION = static_cast<int32_t>(0x3),
__E_SYNCHRONIZED = static_cast<int32_t>(0x4),
__E_CANCEL_AWAIT_SYNCHRONIZATION = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WS_PROXY_ACTIONS_Unwrapped () const noexcept {
return static_cast<__WS_PROXY_ACTIONS_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WS_PROXY_ACTIONS() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WS_PROXY_ACTIONS(int32_t  value__) noexcept;

/// @brief Field AWAIT_SYNCHRONIZATION value: I32(3)
static ::GlobalNamespace::WS_PROXY_ACTIONS const AWAIT_SYNCHRONIZATION;

/// @brief Field BROADCAST value: I32(1)
static ::GlobalNamespace::WS_PROXY_ACTIONS const BROADCAST;

/// @brief Field CANCEL_AWAIT_SYNCHRONIZATION value: I32(5)
static ::GlobalNamespace::WS_PROXY_ACTIONS const CANCEL_AWAIT_SYNCHRONIZATION;

/// @brief Field NOTHING value: I32(0)
static ::GlobalNamespace::WS_PROXY_ACTIONS const NOTHING;

/// @brief Field SYNCHRONIZED value: I32(4)
static ::GlobalNamespace::WS_PROXY_ACTIONS const SYNCHRONIZED;

/// @brief Field UNICAST value: I32(2)
static ::GlobalNamespace::WS_PROXY_ACTIONS const UNICAST;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3625};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WS_PROXY_ACTIONS, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WS_PROXY_ACTIONS) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
