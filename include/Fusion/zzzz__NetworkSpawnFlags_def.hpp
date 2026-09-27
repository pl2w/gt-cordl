#pragma once
// IWYU pragma private; include "Fusion/NetworkSpawnFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSpawnFlags)
// Forward declare root types
namespace Fusion {
struct NetworkSpawnFlags;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkSpawnFlags);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSpawnFlags, "Fusion", "NetworkSpawnFlags");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkSpawnFlags
struct CORDL_TYPE NetworkSpawnFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int16_t;

/// @brief Nested struct __NetworkSpawnFlags_Unwrapped
enum struct __NetworkSpawnFlags_Unwrapped : int16_t {
__E_DontDestroyOnLoad = static_cast<int16_t>(0x1),
__E_SharedModeStateAuthMasterClient = static_cast<int16_t>(0x2),
__E_SharedModeStateAuthLocalPlayer = static_cast<int16_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkSpawnFlags_Unwrapped () const noexcept {
return static_cast<__NetworkSpawnFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int16_t () const noexcept {
return static_cast<int16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSpawnFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSpawnFlags(int16_t  value__) noexcept;

/// @brief Field DontDestroyOnLoad value: I16(1)
static ::Fusion::NetworkSpawnFlags const DontDestroyOnLoad;

/// @brief Field SharedModeStateAuthLocalPlayer value: I16(4)
static ::Fusion::NetworkSpawnFlags const SharedModeStateAuthLocalPlayer;

/// @brief Field SharedModeStateAuthMasterClient value: I16(2)
static ::Fusion::NetworkSpawnFlags const SharedModeStateAuthMasterClient;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19253};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x0, size: 0x2, def value: None
 int16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSpawnFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSpawnFlags) == 0x2, "Size mismatch!");

} // namespace end def Fusion
