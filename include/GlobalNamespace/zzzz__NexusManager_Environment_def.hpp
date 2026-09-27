#pragma once
// IWYU pragma private; include "GlobalNamespace/NexusManager_Environment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NexusManager_Environment)
// Forward declare root types
namespace GlobalNamespace {
struct NexusManager_Environment;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NexusManager_Environment);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NexusManager_Environment, "", "NexusManager/Environment");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: NexusManager/Environment
struct CORDL_TYPE NexusManager_Environment {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NexusManager_Environment_Unwrapped
enum struct __NexusManager_Environment_Unwrapped : int32_t {
__E_PRODUCTION = static_cast<int32_t>(0x0),
__E_SANDBOX = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NexusManager_Environment_Unwrapped () const noexcept {
return static_cast<__NexusManager_Environment_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NexusManager_Environment() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NexusManager_Environment(int32_t  value__) noexcept;

/// @brief Field PRODUCTION value: I32(0)
static ::GlobalNamespace::NexusManager_Environment const PRODUCTION;

/// @brief Field SANDBOX value: I32(1)
static ::GlobalNamespace::NexusManager_Environment const SANDBOX;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1375};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NexusManager_Environment, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NexusManager_Environment) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
