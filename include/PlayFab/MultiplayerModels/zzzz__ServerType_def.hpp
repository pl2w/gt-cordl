#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ServerType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ServerType)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
struct ServerType;
}
// Write type traits
MARK_VAL_T(::PlayFab::MultiplayerModels::ServerType);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::ServerType, "PlayFab.MultiplayerModels", "ServerType");
// Dependencies 
namespace PlayFab::MultiplayerModels {
// Is value type: true
// CS Name: PlayFab.MultiplayerModels.ServerType
struct CORDL_TYPE ServerType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ServerType_Unwrapped
enum struct __ServerType_Unwrapped : int32_t {
__E_Container = static_cast<int32_t>(0x0),
__E_Process = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ServerType_Unwrapped () const noexcept {
return static_cast<__ServerType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ServerType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ServerType(int32_t  value__) noexcept;

/// @brief Field Container value: I32(0)
static ::PlayFab::MultiplayerModels::ServerType const Container;

/// @brief Field Process value: I32(1)
static ::PlayFab::MultiplayerModels::ServerType const Process;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19732};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::ServerType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::ServerType) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
