#pragma once
// IWYU pragma private; include "Fusion/CallbackInterfaceInvoker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CallbackInterfaceInvoker)
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
struct SceneLoadDoneArgs;
}
namespace Fusion {
struct SceneRef;
}
namespace Fusion {
class SimulationBehaviourUpdater;
}
// Forward declare root types
namespace Fusion {
class CallbackInterfaceInvoker;
}
// Write type traits
MARK_REF_T(::Fusion::CallbackInterfaceInvoker*);
DEFINE_IL2CPP_CLASS(::Fusion::CallbackInterfaceInvoker*, "Fusion", "CallbackInterfaceInvoker");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.CallbackInterfaceInvoker
class CORDL_TYPE CallbackInterfaceInvoker : public ::System::Object {
public:
// Declarations
/// @brief Method IAfterAllTicks, addr 0x5f7cd50, size 0x344, virtual false, abstract: false, final false
static inline void IAfterAllTicks(::Fusion::SimulationBehaviourUpdater*  updater, bool  resimulation, int32_t  tickCount) ;

/// @brief Method IAfterClientPredictionReset, addr 0x5f7ba1c, size 0x330, virtual false, abstract: false, final false
static inline void IAfterClientPredictionReset(::Fusion::SimulationBehaviourUpdater*  updater) ;

/// @brief Method IAfterHostMigration, addr 0x5f7ed50, size 0x40c, virtual false, abstract: false, final false
static inline void IAfterHostMigration(::Fusion::SimulationBehaviourUpdater*  updater) ;

/// @brief Method IAfterRender, addr 0x5f7e3c0, size 0x328, virtual false, abstract: false, final false
static inline void IAfterRender(::Fusion::SimulationBehaviourUpdater*  updater) ;

/// @brief Method IAfterTick, addr 0x5f7c6dc, size 0x330, virtual false, abstract: false, final false
static inline void IAfterTick(::Fusion::SimulationBehaviourUpdater*  updater) ;

/// @brief Method IAfterUpdate, addr 0x5f7dd60, size 0x330, virtual false, abstract: false, final false
static inline void IAfterUpdate(::Fusion::SimulationBehaviourUpdater*  updater) ;

/// @brief Method IAfterUpdateRemotePrefabs, addr 0x5f7c07c, size 0x330, virtual false, abstract: false, final false
static inline void IAfterUpdateRemotePrefabs(::Fusion::SimulationBehaviourUpdater*  updater) ;

/// @brief Method IBeforeAllTicks, addr 0x5f7ca0c, size 0x344, virtual false, abstract: false, final false
static inline void IBeforeAllTicks(::Fusion::SimulationBehaviourUpdater*  updater, bool  resimulation, int32_t  tickCount) ;

/// @brief Method IBeforeClientPredictionReset, addr 0x5f7b6ec, size 0x330, virtual false, abstract: false, final false
static inline void IBeforeClientPredictionReset(::Fusion::SimulationBehaviourUpdater*  updater) ;

/// @brief Method IBeforeCopyPreviousState, addr 0x5f7b3bc, size 0x330, virtual false, abstract: false, final false
static inline void IBeforeCopyPreviousState(::Fusion::SimulationBehaviourUpdater*  updater) ;

/// @brief Method IBeforeHitboxRegistration, addr 0x5f7da30, size 0x330, virtual false, abstract: false, final false
static inline void IBeforeHitboxRegistration(::Fusion::SimulationBehaviourUpdater*  updater) ;

/// @brief Method IBeforeSimulation, addr 0x5f7d094, size 0x334, virtual false, abstract: false, final false
static inline void IBeforeSimulation(::Fusion::SimulationBehaviourUpdater*  updater, int32_t  forwardTickCount) ;

/// @brief Method IBeforeTick, addr 0x5f7c3ac, size 0x330, virtual false, abstract: false, final false
static inline void IBeforeTick(::Fusion::SimulationBehaviourUpdater*  updater) ;

/// @brief Method IBeforeUpdate, addr 0x5f7e090, size 0x330, virtual false, abstract: false, final false
static inline void IBeforeUpdate(::Fusion::SimulationBehaviourUpdater*  updater) ;

/// @brief Method IBeforeUpdateRemotePrefabs, addr 0x5f7bd4c, size 0x330, virtual false, abstract: false, final false
static inline void IBeforeUpdateRemotePrefabs(::Fusion::SimulationBehaviourUpdater*  updater) ;

/// @brief Method IPlayerJoined, addr 0x5f7d3c8, size 0x334, virtual false, abstract: false, final false
static inline void IPlayerJoined(::Fusion::SimulationBehaviourUpdater*  updater, ::Fusion::PlayerRef  player) ;

/// @brief Method IPlayerLeft, addr 0x5f7d6fc, size 0x334, virtual false, abstract: false, final false
static inline void IPlayerLeft(::Fusion::SimulationBehaviourUpdater*  updater, ::Fusion::PlayerRef  player) ;

/// @brief Method ISceneLoadDone, addr 0x5f7e6e8, size 0x334, virtual false, abstract: false, final false
static inline void ISceneLoadDone(::Fusion::SimulationBehaviourUpdater*  updater, /* [IsReadOnly] */ ::by_ref<::Fusion::SceneLoadDoneArgs>  sceneLoadDoneArgs) ;

/// @brief Method ISceneLoadStart, addr 0x5f7ea1c, size 0x334, virtual false, abstract: false, final false
static inline void ISceneLoadStart(::Fusion::SimulationBehaviourUpdater*  updater, ::Fusion::SceneRef  sceneRef) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallbackInterfaceInvoker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallbackInterfaceInvoker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CallbackInterfaceInvoker(CallbackInterfaceInvoker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallbackInterfaceInvoker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallbackInterfaceInvoker(CallbackInterfaceInvoker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18892};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::CallbackInterfaceInvoker) == 0x10, "Size mismatch!");

} // namespace end def Fusion
