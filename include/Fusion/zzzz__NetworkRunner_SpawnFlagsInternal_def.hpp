#pragma once
// IWYU pragma private; include "Fusion/NetworkRunner_SpawnFlagsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkRunner_SpawnFlagsInternal)
// Forward declare root types
namespace GlobalNamespace {
struct NetworkRunner_SpawnFlagsInternal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkRunner_SpawnFlagsInternal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkRunner_SpawnFlagsInternal, "Fusion", "NetworkRunner/SpawnFlagsInternal");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkRunner/SpawnFlagsInternal
struct CORDL_TYPE NetworkRunner_SpawnFlagsInternal {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkRunner_SpawnFlagsInternal_Unwrapped
enum struct __NetworkRunner_SpawnFlagsInternal_Unwrapped : int32_t {
__E_DontDestroyOnLoad = static_cast<int32_t>(0x1),
__E_SharedModeStateAuthMasterClient = static_cast<int32_t>(0x2),
__E_SharedModeStateAuthLocalPlayer = static_cast<int32_t>(0x4),
__E_Synchronous = static_cast<int32_t>(0x10000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkRunner_SpawnFlagsInternal_Unwrapped () const noexcept {
return static_cast<__NetworkRunner_SpawnFlagsInternal_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner_SpawnFlagsInternal() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkRunner_SpawnFlagsInternal(int32_t  value__) noexcept;

/// @brief Field DontDestroyOnLoad value: I32(1)
static ::GlobalNamespace::NetworkRunner_SpawnFlagsInternal const DontDestroyOnLoad;

/// @brief Field SharedModeStateAuthLocalPlayer value: I32(4)
static ::GlobalNamespace::NetworkRunner_SpawnFlagsInternal const SharedModeStateAuthLocalPlayer;

/// @brief Field SharedModeStateAuthMasterClient value: I32(2)
static ::GlobalNamespace::NetworkRunner_SpawnFlagsInternal const SharedModeStateAuthMasterClient;

/// @brief Field Synchronous value: I32(65536)
static ::GlobalNamespace::NetworkRunner_SpawnFlagsInternal const Synchronous;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19209};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkRunner_SpawnFlagsInternal, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkRunner_SpawnFlagsInternal) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
