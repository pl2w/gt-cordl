#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/CustomMatchmaking_RoomOperationResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CustomMatchmaking_RoomOperationResult)
// Forward declare root types
namespace GlobalNamespace {
struct CustomMatchmaking_RoomOperationResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CustomMatchmaking_RoomOperationResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMatchmaking_RoomOperationResult, "Meta.XR.MultiplayerBlocks.Shared", "CustomMatchmaking/RoomOperationResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking/RoomOperationResult
struct CORDL_TYPE CustomMatchmaking_RoomOperationResult {
public:
// Declarations
 __declspec(property(get=get_IsSuccess)) bool  IsSuccess;

/// @brief Method get_IsSuccess, addr 0x9f6b164, size 0xc, virtual false, abstract: false, final false
inline bool get_IsSuccess() ;

// Ctor Parameters []
// @brief default ctor
constexpr CustomMatchmaking_RoomOperationResult() ;

// Ctor Parameters [CppParam { name: "ErrorMessage", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "RoomToken", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "RoomPassword", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr CustomMatchmaking_RoomOperationResult(::StringW  ErrorMessage, ::StringW  RoomToken, ::StringW  RoomPassword) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30623};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field ErrorMessage, offset: 0x0, size: 0x8, def value: None
 ::StringW  ErrorMessage;

/// @brief Field RoomToken, offset: 0x8, size: 0x8, def value: None
 ::StringW  RoomToken;

/// @brief Field RoomPassword, offset: 0x10, size: 0x8, def value: None
 ::StringW  RoomPassword;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMatchmaking_RoomOperationResult, ErrorMessage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMatchmaking_RoomOperationResult, RoomToken) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMatchmaking_RoomOperationResult, RoomPassword) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMatchmaking_RoomOperationResult) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
