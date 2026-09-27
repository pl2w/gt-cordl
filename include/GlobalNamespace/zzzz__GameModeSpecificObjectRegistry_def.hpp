#pragma once
// IWYU pragma private; include "GlobalNamespace/GameModeSpecificObjectRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GameModeSpecificObjectRegistry)
namespace GlobalNamespace {
class GameModeSpecificObject;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GameModeSpecificObjectRegistry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameModeSpecificObjectRegistry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameModeSpecificObjectRegistry*, "", "GameModeSpecificObjectRegistry");
// Dependencies GorillaGameModes.GameModeType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameModeSpecificObjectRegistry
class CORDL_TYPE GameModeSpecificObjectRegistry : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field currentGameType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentGameType, put=__cordl_internal_set_currentGameType)) ::GorillaGameModes::GameModeType  currentGameType;

/// @brief Field gameModeSpecificObjects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameModeSpecificObjects, put=__cordl_internal_set_gameModeSpecificObjects)) ::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameModeSpecificObject>>*>*  gameModeSpecificObjects;

/// @brief Method GameModeSpecificObject_OnAwake, addr 0x57ebc4c, size 0x404, virtual false, abstract: false, final false
inline void GameModeSpecificObject_OnAwake(::GlobalNamespace::GameModeSpecificObject*  obj) ;

/// @brief Method GameModeSpecificObject_OnDestroyed, addr 0x57ec050, size 0x1e4, virtual false, abstract: false, final false
inline void GameModeSpecificObject_OnDestroyed(::GlobalNamespace::GameModeSpecificObject*  obj) ;

/// @brief Method GameMode_OnStartGameMode, addr 0x57ec234, size 0x31c, virtual false, abstract: false, final false
inline void GameMode_OnStartGameMode(::GorillaGameModes::GameModeType  newGameModeType) ;

static inline ::GlobalNamespace::GameModeSpecificObjectRegistry* New_ctor() ;

/// @brief Method OnDisable, addr 0x57ebb1c, size 0x130, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57eb9ec, size 0x130, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::GorillaGameModes::GameModeType const& __cordl_internal_get_currentGameType() const;

constexpr ::GorillaGameModes::GameModeType& __cordl_internal_get_currentGameType() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameModeSpecificObject>>*>* const& __cordl_internal_get_gameModeSpecificObjects() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameModeSpecificObject>>*>*& __cordl_internal_get_gameModeSpecificObjects() ;

constexpr void __cordl_internal_set_currentGameType(::GorillaGameModes::GameModeType  value) ;

constexpr void __cordl_internal_set_gameModeSpecificObjects(::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameModeSpecificObject>>*>*  value) ;

/// @brief Method .ctor, addr 0x57ec550, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameModeSpecificObjectRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameModeSpecificObjectRegistry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameModeSpecificObjectRegistry(GameModeSpecificObjectRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameModeSpecificObjectRegistry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameModeSpecificObjectRegistry(GameModeSpecificObjectRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{172};

/// @brief Field gameModeSpecificObjects, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameModeSpecificObject>>*>*  ___gameModeSpecificObjects;

/// @brief Field currentGameType, offset: 0x28, size: 0x4, def value: None
 ::GorillaGameModes::GameModeType  ___currentGameType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameModeSpecificObjectRegistry, ___gameModeSpecificObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModeSpecificObjectRegistry, ___currentGameType) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameModeSpecificObjectRegistry) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
