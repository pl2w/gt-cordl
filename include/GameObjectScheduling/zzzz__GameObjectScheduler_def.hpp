#pragma once
// IWYU pragma private; include "GameObjectScheduling/GameObjectScheduler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameObjectScheduler)
namespace GameObjectScheduling {
class GameObjectSchedule;
}
namespace GameObjectScheduling {
class GameObjectSchedulerEventDispatcher;
}
namespace GlobalNamespace {
struct GameObjectScheduler__Start_d__8;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GameObjectScheduling {
class GameObjectScheduler;
}
// Write type traits
MARK_REF_T(::GameObjectScheduling::GameObjectScheduler*);
DEFINE_IL2CPP_CLASS(::GameObjectScheduling::GameObjectScheduler*, "GameObjectScheduling", "GameObjectScheduler");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GameObjectScheduling {
// Is value type: false
// CS Name: GameObjectScheduling.GameObjectScheduler
class CORDL_TYPE GameObjectScheduler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__8 = ::GlobalNamespace::GameObjectScheduler__Start_d__8;

/// @brief Field currentNodeIndex, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentNodeIndex, put=__cordl_internal_set_currentNodeIndex)) int32_t  currentNodeIndex;

/// @brief Field debugTime, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugTime, put=__cordl_internal_set_debugTime)) bool  debugTime;

/// @brief Field dispatcher, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_dispatcher, put=__cordl_internal_set_dispatcher)) ::UnityW<::GameObjectScheduling::GameObjectSchedulerEventDispatcher>  dispatcher;

/// @brief Field lastMinuteCheck, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastMinuteCheck, put=__cordl_internal_set_lastMinuteCheck)) int32_t  lastMinuteCheck;

/// @brief Field previousState, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_previousState, put=__cordl_internal_set_previousState)) bool  previousState;

/// @brief Field ready, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_ready, put=__cordl_internal_set_ready)) bool  ready;

/// @brief Field schedule, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_schedule, put=__cordl_internal_set_schedule)) ::UnityW<::GameObjectScheduling::GameObjectSchedule>  schedule;

/// @brief Field scheduledGameObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_scheduledGameObject, put=__cordl_internal_set_scheduledGameObject)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  scheduledGameObject;

/// @brief Field useSecondsFidelity, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_useSecondsFidelity, put=__cordl_internal_set_useSecondsFidelity)) bool  useSecondsFidelity;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

static inline ::GameObjectScheduling::GameObjectScheduler* New_ctor() ;

/// @brief Method OnDisable, addr 0x5de05d0, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5de05a0, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetInitialState, addr 0x5de01a8, size 0x1e0, virtual false, abstract: false, final false
inline void SetInitialState() ;

/// @brief Method SliceUpdate, addr 0x5de0744, size 0xf4, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// [AsyncStateMachine(typeof(GameObjectScheduling.GameObjectScheduler::<Start>d__8))]
/// @brief Method Start, addr 0x5de0100, size 0xa8, virtual false, abstract: false, final false
inline void Start() ;

constexpr int32_t const& __cordl_internal_get_currentNodeIndex() const;

constexpr int32_t& __cordl_internal_get_currentNodeIndex() ;

constexpr bool const& __cordl_internal_get_debugTime() const;

constexpr bool& __cordl_internal_get_debugTime() ;

constexpr ::UnityW<::GameObjectScheduling::GameObjectSchedulerEventDispatcher> const& __cordl_internal_get_dispatcher() const;

constexpr ::UnityW<::GameObjectScheduling::GameObjectSchedulerEventDispatcher>& __cordl_internal_get_dispatcher() ;

constexpr int32_t const& __cordl_internal_get_lastMinuteCheck() const;

constexpr int32_t& __cordl_internal_get_lastMinuteCheck() ;

constexpr bool const& __cordl_internal_get_previousState() const;

constexpr bool& __cordl_internal_get_previousState() ;

constexpr bool const& __cordl_internal_get_ready() const;

constexpr bool& __cordl_internal_get_ready() ;

constexpr ::UnityW<::GameObjectScheduling::GameObjectSchedule> const& __cordl_internal_get_schedule() const;

constexpr ::UnityW<::GameObjectScheduling::GameObjectSchedule>& __cordl_internal_get_schedule() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_scheduledGameObject() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_scheduledGameObject() ;

constexpr bool const& __cordl_internal_get_useSecondsFidelity() const;

constexpr bool& __cordl_internal_get_useSecondsFidelity() ;

constexpr void __cordl_internal_set_currentNodeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_debugTime(bool  value) ;

constexpr void __cordl_internal_set_dispatcher(::UnityW<::GameObjectScheduling::GameObjectSchedulerEventDispatcher>  value) ;

constexpr void __cordl_internal_set_lastMinuteCheck(int32_t  value) ;

constexpr void __cordl_internal_set_previousState(bool  value) ;

constexpr void __cordl_internal_set_ready(bool  value) ;

constexpr void __cordl_internal_set_schedule(::UnityW<::GameObjectScheduling::GameObjectSchedule>  value) ;

constexpr void __cordl_internal_set_scheduledGameObject(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_useSecondsFidelity(bool  value) ;

/// @brief Method .ctor, addr 0x5de0838, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method changeActiveState, addr 0x5de05dc, size 0x168, virtual false, abstract: false, final false
inline void changeActiveState(bool  state) ;

/// @brief Method getActiveState, addr 0x5de0388, size 0x1ac, virtual false, abstract: false, final false
inline void getActiveState(::by_ref<bool>  state, ::by_ref<double_t>  totalSeconds) ;

/// @brief Method getServerTime, addr 0x5de0534, size 0x6c, virtual false, abstract: false, final false
inline ::System::DateTime getServerTime() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObjectScheduler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectScheduler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectScheduler(GameObjectScheduler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectScheduler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectScheduler(GameObjectScheduler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5128};

/// [SerializeField]
/// @brief Field schedule, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GameObjectScheduling::GameObjectSchedule>  ___schedule;

/// @brief Field scheduledGameObject, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___scheduledGameObject;

/// @brief Field dispatcher, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GameObjectScheduling::GameObjectSchedulerEventDispatcher>  ___dispatcher;

/// @brief Field currentNodeIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  ___currentNodeIndex;

/// @brief Field ready, offset: 0x3c, size: 0x1, def value: None
 bool  ___ready;

/// @brief Field previousState, offset: 0x3d, size: 0x1, def value: None
 bool  ___previousState;

/// @brief Field lastMinuteCheck, offset: 0x40, size: 0x4, def value: None
 int32_t  ___lastMinuteCheck;

/// @brief Field useSecondsFidelity, offset: 0x44, size: 0x1, def value: None
 bool  ___useSecondsFidelity;

/// @brief Field debugTime, offset: 0x45, size: 0x1, def value: None
 bool  ___debugTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GameObjectScheduling::GameObjectScheduler, ___schedule) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::GameObjectScheduler, ___scheduledGameObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::GameObjectScheduler, ___dispatcher) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::GameObjectScheduler, ___currentNodeIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::GameObjectScheduler, ___ready) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::GameObjectScheduler, ___previousState) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::GameObjectScheduler, ___lastMinuteCheck) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::GameObjectScheduler, ___useSecondsFidelity) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::GameObjectScheduler, ___debugTime) == 0x45, "Offset mismatch!");

static_assert(sizeof(::GameObjectScheduling::GameObjectScheduler) == 0x48, "Size mismatch!");

} // namespace end def GameObjectScheduling
