#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorSoak.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GhostReactorSoak_State_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorSoak)
namespace GlobalNamespace {
class GRPlayer;
}
namespace GlobalNamespace {
class GhostReactorManager;
}
namespace GlobalNamespace {
struct GhostReactorSoak_State;
}
namespace GorillaTagScripts::GhostReactor::SoakTasks {
class IGhostReactorSoakTask;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostReactorSoak;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GhostReactorSoak*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorSoak*, "", "GhostReactorSoak");
// Dependencies GhostReactorSoak::State, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactorSoak
class CORDL_TYPE GhostReactorSoak : public ::System::Object {
public:
// Declarations
using State = ::GlobalNamespace::GhostReactorSoak_State;

/// @brief Field _activeTask, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeTask, put=__cordl_internal_set__activeTask)) ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*  _activeTask;

/// @brief Field _soakTasks, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__soakTasks, put=__cordl_internal_set__soakTasks)) ::System::Collections::Generic::List_1<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>*  _soakTasks;

/// @brief Field disconnectTime, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_disconnectTime, put=__cordl_internal_set_disconnectTime)) double_t  disconnectTime;

/// @brief Field grManager, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_grManager, put=__cordl_internal_set_grManager)) ::UnityW<::GlobalNamespace::GhostReactorManager>  grManager;

/// @brief Field grPlayer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_grPlayer, put=__cordl_internal_set_grPlayer)) ::UnityW<::GlobalNamespace::GRPlayer>  grPlayer;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::GlobalNamespace::GhostReactorSoak*  instance;

/// @brief Field reconnectTime, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_reconnectTime, put=__cordl_internal_set_reconnectTime)) double_t  reconnectTime;

/// @brief Field state, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GhostReactorSoak_State  state;

/// @brief Field stateStartTime, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateStartTime, put=__cordl_internal_set_stateStartTime)) double_t  stateStartTime;

/// @brief Method GetActorNumber, addr 0x5865d20, size 0x44, virtual false, abstract: false, final false
inline int32_t GetActorNumber() ;

/// @brief Method IsSoaking, addr 0x586572c, size 0x8, virtual false, abstract: false, final false
inline bool IsSoaking() ;

/// @brief Method JoinRoom, addr 0x5865e88, size 0x130, virtual false, abstract: false, final false
inline void JoinRoom() ;

/// @brief Method LeaveRoom, addr 0x5865d64, size 0x124, virtual false, abstract: false, final false
inline void LeaveRoom() ;

static inline ::GlobalNamespace::GhostReactorSoak* New_ctor() ;

/// @brief Method OnUpdate, addr 0x5865734, size 0x44, virtual false, abstract: false, final false
inline void OnUpdate() ;

/// @brief Method SetState, addr 0x5865778, size 0x328, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::GhostReactorSoak_State  newState) ;

/// @brief Method Setup, addr 0x5865404, size 0x328, virtual false, abstract: false, final false
inline void Setup(::GlobalNamespace::GRPlayer*  grPlayer) ;

/// @brief Method UpdateActive, addr 0x5865aa0, size 0x280, virtual false, abstract: false, final false
inline void UpdateActive() ;

constexpr ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask* const& __cordl_internal_get__activeTask() const;

constexpr ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*& __cordl_internal_get__activeTask() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>* const& __cordl_internal_get__soakTasks() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>*& __cordl_internal_get__soakTasks() ;

constexpr double_t const& __cordl_internal_get_disconnectTime() const;

constexpr double_t& __cordl_internal_get_disconnectTime() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& __cordl_internal_get_grManager() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& __cordl_internal_get_grManager() ;

constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& __cordl_internal_get_grPlayer() const;

constexpr ::UnityW<::GlobalNamespace::GRPlayer>& __cordl_internal_get_grPlayer() ;

constexpr double_t const& __cordl_internal_get_reconnectTime() const;

constexpr double_t& __cordl_internal_get_reconnectTime() ;

constexpr ::GlobalNamespace::GhostReactorSoak_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GhostReactorSoak_State& __cordl_internal_get_state() ;

constexpr double_t const& __cordl_internal_get_stateStartTime() const;

constexpr double_t& __cordl_internal_get_stateStartTime() ;

constexpr void __cordl_internal_set__activeTask(::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*  value) ;

constexpr void __cordl_internal_set__soakTasks(::System::Collections::Generic::List_1<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>*  value) ;

constexpr void __cordl_internal_set_disconnectTime(double_t  value) ;

constexpr void __cordl_internal_set_grManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value) ;

constexpr void __cordl_internal_set_grPlayer(::UnityW<::GlobalNamespace::GRPlayer>  value) ;

constexpr void __cordl_internal_set_reconnectTime(double_t  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GhostReactorSoak_State  value) ;

constexpr void __cordl_internal_set_stateStartTime(double_t  value) ;

/// @brief Method .ctor, addr 0x5865fb8, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::GhostReactorSoak* getStaticF_instance() ;

static inline void setStaticF_instance(::GlobalNamespace::GhostReactorSoak*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorSoak() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorSoak", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactorSoak(GhostReactorSoak && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorSoak", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactorSoak(GhostReactorSoak const& ) = delete;

/// @brief Field MAX_CONNECTED_TIME offset 0xffffffff size 0x4
static constexpr float_t  MAX_CONNECTED_TIME{static_cast<float_t>(60.0f)};

/// @brief Field MAX_DISCONNECTED_TIME offset 0xffffffff size 0x4
static constexpr float_t  MAX_DISCONNECTED_TIME{static_cast<float_t>(6.0f)};

/// @brief Field MIN_CONNECTED_TIME offset 0xffffffff size 0x4
static constexpr float_t  MIN_CONNECTED_TIME{static_cast<float_t>(5.0f)};

/// @brief Field MIN_DISCONNECTED_TIME offset 0xffffffff size 0x4
static constexpr float_t  MIN_DISCONNECTED_TIME{static_cast<float_t>(3.0f)};

/// @brief Field SOAK_ROOM offset 0xffffffff size 0x8
static constexpr ::ConstString  SOAK_ROOM{u"AKJSOAK"};

/// @brief Field START_NEW_TASK_ODDS offset 0xffffffff size 0x4
static constexpr float_t  START_NEW_TASK_ODDS{static_cast<float_t>(0.005f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1833};

/// @brief Field grPlayer, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPlayer>  ___grPlayer;

/// @brief Field grManager, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorManager>  ___grManager;

/// @brief Field state, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GhostReactorSoak_State  ___state;

/// @brief Field stateStartTime, offset: 0x28, size: 0x8, def value: None
 double_t  ___stateStartTime;

/// @brief Field reconnectTime, offset: 0x30, size: 0x8, def value: None
 double_t  ___reconnectTime;

/// @brief Field disconnectTime, offset: 0x38, size: 0x8, def value: None
 double_t  ___disconnectTime;

/// @brief Field _activeTask, offset: 0x40, size: 0x8, def value: None
 ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*  ____activeTask;

/// @brief Field _soakTasks, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>*  ____soakTasks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorSoak, ___grPlayer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorSoak, ___grManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorSoak, ___state) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorSoak, ___stateStartTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorSoak, ___reconnectTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorSoak, ___disconnectTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorSoak, ____activeTask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorSoak, ____soakTasks) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorSoak) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
