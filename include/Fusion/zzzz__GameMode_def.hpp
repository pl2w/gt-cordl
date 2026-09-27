#pragma once
// IWYU pragma private; include "Fusion/GameMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameMode)
// Forward declare root types
namespace Fusion {
struct GameMode;
}
// Write type traits
MARK_VAL_T(::Fusion::GameMode);
DEFINE_IL2CPP_CLASS(::Fusion::GameMode, "Fusion", "GameMode");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.GameMode
struct CORDL_TYPE GameMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GameMode_Unwrapped
enum struct __GameMode_Unwrapped : int32_t {
__E_Single = static_cast<int32_t>(0x1),
__E_Shared = static_cast<int32_t>(0x2),
__E_Server = static_cast<int32_t>(0x3),
__E_Host = static_cast<int32_t>(0x4),
__E_Client = static_cast<int32_t>(0x5),
__E_AutoHostOrClient = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GameMode_Unwrapped () const noexcept {
return static_cast<__GameMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GameMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GameMode(int32_t  value__) noexcept;

/// @brief Field AutoHostOrClient value: I32(6)
static ::Fusion::GameMode const AutoHostOrClient;

/// @brief Field Client value: I32(5)
static ::Fusion::GameMode const Client;

/// @brief Field Host value: I32(4)
static ::Fusion::GameMode const Host;

/// @brief Field Server value: I32(3)
static ::Fusion::GameMode const Server;

/// @brief Field Shared value: I32(2)
static ::Fusion::GameMode const Shared;

/// @brief Field Single value: I32(1)
static ::Fusion::GameMode const Single;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19273};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::GameMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::GameMode) == 0x4, "Size mismatch!");

} // namespace end def Fusion
