#pragma once
// IWYU pragma private; include "Fusion/SimulationBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Behaviour_def.hpp"
#include "Fusion/zzzz__SimulationBehaviourRuntimeFlags_def.hpp"
CORDL_MODULE_EXPORT(SimulationBehaviour)
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
class NetworkRunner;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Fusion {
class SimulationBehaviour;
}
// Write type traits
MARK_REF_T(::Fusion::SimulationBehaviour*);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationBehaviour*, "Fusion", "SimulationBehaviour");
// [ScriptHelp(BackColor = (Fusion.ScriptHeaderBackColor)4)]
// [HelpURL("https://doc.photonengine.com/fusion/current/manual/network-object#simulationbehaviour")]
// Dependencies Fusion.Behaviour, Fusion.SimulationBehaviourRuntimeFlags
namespace Fusion {
// Is value type: false
// CS Name: Fusion.SimulationBehaviour
class CORDL_TYPE SimulationBehaviour : public ::Fusion::Behaviour {
public:
// Declarations
 __declspec(property(get=get_CanReceiveRenderCallback)) bool  CanReceiveRenderCallback;

 __declspec(property(get=get_CanReceiveSimulationCallback)) bool  CanReceiveSimulationCallback;

/// @brief Field Flags, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Flags, put=__cordl_internal_set_Flags)) ::Fusion::SimulationBehaviourRuntimeFlags  Flags;

/// @brief Field Next, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Next, put=__cordl_internal_set_Next)) ::UnityW<::Fusion::SimulationBehaviour>  Next;

 __declspec(property(get=get_Object)) ::UnityW<::Fusion::NetworkObject>  Object;

/// @brief Field Prev, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Prev, put=__cordl_internal_set_Prev)) ::UnityW<::Fusion::SimulationBehaviour>  Prev;

 __declspec(property(get=get_Runner)) ::UnityW<::Fusion::NetworkRunner>  Runner;

/// @brief Field _object, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__object, put=__cordl_internal_set__object)) ::UnityW<::Fusion::NetworkObject>  _object;

/// @brief Field _runner, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__runner, put=__cordl_internal_set__runner)) ::UnityW<::Fusion::NetworkRunner>  _runner;

/// [Conditional("DEBUG")]
/// @brief Method DebugNotifyDespawned, addr 0x5f86a98, size 0x8c, virtual false, abstract: false, final false
inline void DebugNotifyDespawned() ;

/// [Conditional("DEBUG")]
/// @brief Method DebugNotifySpawned, addr 0x5f86a0c, size 0x8c, virtual false, abstract: false, final false
inline void DebugNotifySpawned() ;

/// @brief Method FixedUpdateNetwork, addr 0x5f86744, size 0x4, virtual true, abstract: false, final false
inline void FixedUpdateNetwork() ;

/// @brief Method GetDumpString, addr 0x5f86b24, size 0x1e8, virtual true, abstract: false, final false
inline void GetDumpString(::System::Text::StringBuilder*  builder) ;

/// @brief Method MakeOwned, addr 0x5f869b4, size 0x30, virtual false, abstract: false, final false
inline void MakeOwned(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj) ;

/// @brief Method MakeUnowned, addr 0x5f869e4, size 0x28, virtual false, abstract: false, final false
inline void MakeUnowned() ;

static inline ::Fusion::SimulationBehaviour* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5f86750, size 0xcc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5f868e8, size 0xcc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5f8681c, size 0xcc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PreRender, addr 0x5f86748, size 0x4, virtual true, abstract: false, final false
inline void PreRender() ;

/// @brief Method Render, addr 0x5f8674c, size 0x4, virtual true, abstract: false, final false
inline void Render() ;

constexpr ::Fusion::SimulationBehaviourRuntimeFlags const& __cordl_internal_get_Flags() const;

constexpr ::Fusion::SimulationBehaviourRuntimeFlags& __cordl_internal_get_Flags() ;

constexpr ::UnityW<::Fusion::SimulationBehaviour> const& __cordl_internal_get_Next() const;

constexpr ::UnityW<::Fusion::SimulationBehaviour>& __cordl_internal_get_Next() ;

constexpr ::UnityW<::Fusion::SimulationBehaviour> const& __cordl_internal_get_Prev() const;

constexpr ::UnityW<::Fusion::SimulationBehaviour>& __cordl_internal_get_Prev() ;

constexpr ::UnityW<::Fusion::NetworkObject> const& __cordl_internal_get__object() const;

constexpr ::UnityW<::Fusion::NetworkObject>& __cordl_internal_get__object() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get__runner() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get__runner() ;

constexpr void __cordl_internal_set_Flags(::Fusion::SimulationBehaviourRuntimeFlags  value) ;

constexpr void __cordl_internal_set_Next(::UnityW<::Fusion::SimulationBehaviour>  value) ;

constexpr void __cordl_internal_set_Prev(::UnityW<::Fusion::SimulationBehaviour>  value) ;

constexpr void __cordl_internal_set__object(::UnityW<::Fusion::NetworkObject>  value) ;

constexpr void __cordl_internal_set__runner(::UnityW<::Fusion::NetworkRunner>  value) ;

/// @brief Method .ctor, addr 0x5f80a4c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanReceiveRenderCallback, addr 0x5f8670c, size 0x10, virtual false, abstract: false, final false
inline bool get_CanReceiveRenderCallback() ;

/// @brief Method get_CanReceiveSimulationCallback, addr 0x5f8671c, size 0x18, virtual false, abstract: false, final false
inline bool get_CanReceiveSimulationCallback() ;

/// @brief Method get_Object, addr 0x5f8673c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkObject> get_Object() ;

/// @brief Method get_Runner, addr 0x5f86734, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkRunner> get_Runner() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulationBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulationBehaviour", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulationBehaviour(SimulationBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulationBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulationBehaviour(SimulationBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18926};

/// @brief Field Prev, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Fusion::SimulationBehaviour>  ___Prev;

/// @brief Field Next, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Fusion::SimulationBehaviour>  ___Next;

/// @brief Field Flags, offset: 0x30, size: 0x4, def value: None
 ::Fusion::SimulationBehaviourRuntimeFlags  ___Flags;

/// @brief Field _runner, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  ____runner;

/// @brief Field _object, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkObject>  ____object;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationBehaviour, ___Prev) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviour, ___Next) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviour, ___Flags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviour, ____runner) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviour, ____object) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationBehaviour) == 0x48, "Size mismatch!");

} // namespace end def Fusion
