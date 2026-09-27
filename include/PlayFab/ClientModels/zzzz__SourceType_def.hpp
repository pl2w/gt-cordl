#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/SourceType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SourceType)
// Forward declare root types
namespace PlayFab::ClientModels {
struct SourceType;
}
// Write type traits
MARK_VAL_T(::PlayFab::ClientModels::SourceType);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::SourceType, "PlayFab.ClientModels", "SourceType");
// Dependencies 
namespace PlayFab::ClientModels {
// Is value type: true
// CS Name: PlayFab.ClientModels.SourceType
struct CORDL_TYPE SourceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SourceType_Unwrapped
enum struct __SourceType_Unwrapped : int32_t {
__E_Admin = static_cast<int32_t>(0x0),
__E_BackEnd = static_cast<int32_t>(0x1),
__E_GameClient = static_cast<int32_t>(0x2),
__E_GameServer = static_cast<int32_t>(0x3),
__E_Partner = static_cast<int32_t>(0x4),
__E_Custom = static_cast<int32_t>(0x5),
__E_API = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SourceType_Unwrapped () const noexcept {
return static_cast<__SourceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SourceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SourceType(int32_t  value__) noexcept;

/// @brief Field API value: I32(6)
static ::PlayFab::ClientModels::SourceType const API;

/// @brief Field Admin value: I32(0)
static ::PlayFab::ClientModels::SourceType const Admin;

/// @brief Field BackEnd value: I32(1)
static ::PlayFab::ClientModels::SourceType const BackEnd;

/// @brief Field Custom value: I32(5)
static ::PlayFab::ClientModels::SourceType const Custom;

/// @brief Field GameClient value: I32(2)
static ::PlayFab::ClientModels::SourceType const GameClient;

/// @brief Field GameServer value: I32(3)
static ::PlayFab::ClientModels::SourceType const GameServer;

/// @brief Field Partner value: I32(4)
static ::PlayFab::ClientModels::SourceType const Partner;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20221};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::SourceType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::SourceType) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
