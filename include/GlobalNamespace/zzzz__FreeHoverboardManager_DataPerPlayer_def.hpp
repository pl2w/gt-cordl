#pragma once
// IWYU pragma private; include "GlobalNamespace/FreeHoverboardManager_DataPerPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FreeHoverboardManager_DataPerPlayer)
namespace GlobalNamespace {
class CallLimiterWithCooldown;
}
namespace GlobalNamespace {
class FreeHoverboardInstance;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct FreeHoverboardManager_DataPerPlayer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FreeHoverboardManager_DataPerPlayer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FreeHoverboardManager_DataPerPlayer, "", "FreeHoverboardManager/DataPerPlayer");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FreeHoverboardManager/DataPerPlayer
struct CORDL_TYPE FreeHoverboardManager_DataPerPlayer {
public:
// Declarations
/// @brief Method GetBoard, addr 0x5955780, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::FreeHoverboardInstance> GetBoard(int32_t  boardIndex) ;

/// @brief Method Init, addr 0x59544a4, size 0xf0, virtual false, abstract: false, final false
inline void Init(int32_t  actorNumber, ::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::FreeHoverboardInstance>>*  freeBoardPool) ;

/// @brief Method ReturnBoards, addr 0x59548d0, size 0xa8, virtual false, abstract: false, final false
inline void ReturnBoards(::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::FreeHoverboardInstance>>*  freeBoardPool) ;

// Ctor Parameters []
// @brief default ctor
constexpr FreeHoverboardManager_DataPerPlayer() ;

// Ctor Parameters [CppParam { name: "board0", ty: "::UnityW<::GlobalNamespace::FreeHoverboardInstance>", modifiers: "", def_value: None, comment: None }, CppParam { name: "board1", ty: "::UnityW<::GlobalNamespace::FreeHoverboardInstance>", modifiers: "", def_value: None, comment: None }, CppParam { name: "spamCheck", ty: "::GlobalNamespace::CallLimiterWithCooldown*", modifiers: "", def_value: None, comment: None }]
constexpr FreeHoverboardManager_DataPerPlayer(::UnityW<::GlobalNamespace::FreeHoverboardInstance>  board0, ::UnityW<::GlobalNamespace::FreeHoverboardInstance>  board1, ::GlobalNamespace::CallLimiterWithCooldown*  spamCheck) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2310};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field board0, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FreeHoverboardInstance>  board0;

/// @brief Field board1, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FreeHoverboardInstance>  board1;

/// @brief Field spamCheck, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiterWithCooldown*  spamCheck;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FreeHoverboardManager_DataPerPlayer, board0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardManager_DataPerPlayer, board1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardManager_DataPerPlayer, spamCheck) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FreeHoverboardManager_DataPerPlayer) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
