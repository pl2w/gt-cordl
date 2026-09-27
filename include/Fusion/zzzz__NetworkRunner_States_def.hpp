#pragma once
// IWYU pragma private; include "Fusion/NetworkRunner_States.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkRunner_States)
// Forward declare root types
namespace GlobalNamespace {
struct NetworkRunner_States;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkRunner_States);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkRunner_States, "Fusion", "NetworkRunner/States");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkRunner/States
struct CORDL_TYPE NetworkRunner_States {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkRunner_States_Unwrapped
enum struct __NetworkRunner_States_Unwrapped : int32_t {
__E_Starting = static_cast<int32_t>(0x1),
__E_Running = static_cast<int32_t>(0x2),
__E_Shutdown = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkRunner_States_Unwrapped () const noexcept {
return static_cast<__NetworkRunner_States_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner_States() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkRunner_States(int32_t  value__) noexcept;

/// @brief Field Running value: I32(2)
static ::GlobalNamespace::NetworkRunner_States const Running;

/// @brief Field Shutdown value: I32(3)
static ::GlobalNamespace::NetworkRunner_States const Shutdown;

/// @brief Field Starting value: I32(1)
static ::GlobalNamespace::NetworkRunner_States const Starting;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19201};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkRunner_States, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkRunner_States) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
