#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/PlayerNameTagSpawnerFusion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayerNameTagSpawnerFusion)
namespace Fusion {
class NetworkRunner;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class INameTagSpawner;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Fusion {
class PlayerNameTagSpawnerFusion;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion*, "Meta.XR.MultiplayerBlocks.Fusion", "PlayerNameTagSpawnerFusion");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Fusion {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Fusion.PlayerNameTagSpawnerFusion
class CORDL_TYPE PlayerNameTagSpawnerFusion : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsConnected)) bool  IsConnected;

/// @brief Field _networkRunner, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__networkRunner, put=__cordl_internal_set__networkRunner)) ::UnityW<::Fusion::NetworkRunner>  _networkRunner;

/// @brief Field _sceneLoaded, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__sceneLoaded, put=__cordl_internal_set__sceneLoaded)) bool  _sceneLoaded;

/// @brief Field playerNameTagPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerNameTagPrefab, put=__cordl_internal_set_playerNameTagPrefab)) ::UnityW<::UnityEngine::GameObject>  playerNameTagPrefab;

/// @brief Convert operator to "::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner"
constexpr operator  ::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner*() noexcept;

static inline ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion* New_ctor() ;

/// @brief Method OnDisable, addr 0x9f60d08, size 0x7c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9f60c8c, size 0x7c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLoaded, addr 0x9f60d84, size 0x10, virtual false, abstract: false, final false
inline void OnLoaded(::Fusion::NetworkRunner*  networkRunner) ;

/// @brief Method Spawn, addr 0x9f60e10, size 0x21c, virtual true, abstract: false, final true
inline void Spawn(::StringW  playerName) ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get__networkRunner() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get__networkRunner() ;

constexpr bool const& __cordl_internal_get__sceneLoaded() const;

constexpr bool& __cordl_internal_get__sceneLoaded() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_playerNameTagPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_playerNameTagPrefab() ;

constexpr void __cordl_internal_set__networkRunner(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set__sceneLoaded(bool  value) ;

constexpr void __cordl_internal_set_playerNameTagPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9f6102c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsConnected, addr 0x9f60d94, size 0x7c, virtual true, abstract: false, final true
inline bool get_IsConnected() ;

/// @brief Convert to "::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner"
constexpr ::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner* i___Meta__XR__MultiplayerBlocks__Shared__INameTagSpawner() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerNameTagSpawnerFusion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerNameTagSpawnerFusion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerNameTagSpawnerFusion(PlayerNameTagSpawnerFusion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerNameTagSpawnerFusion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerNameTagSpawnerFusion(PlayerNameTagSpawnerFusion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31181};

/// [SerializeField]
/// @brief Field playerNameTagPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___playerNameTagPrefab;

/// @brief Field _networkRunner, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  ____networkRunner;

/// @brief Field _sceneLoaded, offset: 0x30, size: 0x1, def value: None
 bool  ____sceneLoaded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion, ___playerNameTagPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion, ____networkRunner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion, ____sceneLoaded) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion) == 0x38, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Fusion
