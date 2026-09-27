#pragma once
// IWYU pragma private; include "Fusion/NetworkRunner_ShutdownFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkRunner_ShutdownFlags)
// Forward declare root types
namespace GlobalNamespace {
struct NetworkRunner_ShutdownFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkRunner_ShutdownFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkRunner_ShutdownFlags, "Fusion", "NetworkRunner/ShutdownFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkRunner/ShutdownFlags
struct CORDL_TYPE NetworkRunner_ShutdownFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkRunner_ShutdownFlags_Unwrapped
enum struct __NetworkRunner_ShutdownFlags_Unwrapped : int32_t {
__E_Regular = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkRunner_ShutdownFlags_Unwrapped () const noexcept {
return static_cast<__NetworkRunner_ShutdownFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner_ShutdownFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkRunner_ShutdownFlags(int32_t  value__) noexcept;

/// @brief Field Regular value: I32(1)
static ::GlobalNamespace::NetworkRunner_ShutdownFlags const Regular;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19202};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkRunner_ShutdownFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkRunner_ShutdownFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
