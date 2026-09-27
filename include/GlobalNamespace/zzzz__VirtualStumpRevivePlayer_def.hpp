#pragma once
// IWYU pragma private; include "GlobalNamespace/VirtualStumpRevivePlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VirtualStumpRevivePlayer)
namespace GlobalNamespace {
class GRReviveStation;
}
namespace GlobalNamespace {
class GhostReactorManager;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class VirtualStumpRevivePlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VirtualStumpRevivePlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VirtualStumpRevivePlayer*, "", "VirtualStumpRevivePlayer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VirtualStumpRevivePlayer
class CORDL_TYPE VirtualStumpRevivePlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field defaultReviveStation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultReviveStation, put=__cordl_internal_set_defaultReviveStation)) ::UnityW<::GlobalNamespace::GRReviveStation>  defaultReviveStation;

/// @brief Field ghostReactorManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ghostReactorManager, put=__cordl_internal_set_ghostReactorManager)) ::UnityW<::GlobalNamespace::GhostReactorManager>  ghostReactorManager;

static inline ::GlobalNamespace::VirtualStumpRevivePlayer* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5a0c468, size 0x270, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

constexpr ::UnityW<::GlobalNamespace::GRReviveStation> const& __cordl_internal_get_defaultReviveStation() const;

constexpr ::UnityW<::GlobalNamespace::GRReviveStation>& __cordl_internal_get_defaultReviveStation() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& __cordl_internal_get_ghostReactorManager() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& __cordl_internal_get_ghostReactorManager() ;

constexpr void __cordl_internal_set_defaultReviveStation(::UnityW<::GlobalNamespace::GRReviveStation>  value) ;

constexpr void __cordl_internal_set_ghostReactorManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value) ;

/// @brief Method .ctor, addr 0x5a0c6d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualStumpRevivePlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpRevivePlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualStumpRevivePlayer(VirtualStumpRevivePlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpRevivePlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualStumpRevivePlayer(VirtualStumpRevivePlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2771};

/// [SerializeField]
/// @brief Field ghostReactorManager, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorManager>  ___ghostReactorManager;

/// [SerializeField]
/// @brief Field defaultReviveStation, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRReviveStation>  ___defaultReviveStation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VirtualStumpRevivePlayer, ___ghostReactorManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpRevivePlayer, ___defaultReviveStation) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VirtualStumpRevivePlayer) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
