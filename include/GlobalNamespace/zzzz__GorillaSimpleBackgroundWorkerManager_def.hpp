#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSimpleBackgroundWorkerManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaSimpleBackgroundWorkerManager)
namespace GlobalNamespace {
class IGorillaSimpleBackgroundWorker;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaSimpleBackgroundWorkerManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*, "", "GorillaSimpleBackgroundWorkerManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaSimpleBackgroundWorkerManager
class CORDL_TYPE GorillaSimpleBackgroundWorkerManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field MINIMUM_TICKS_OF_WORK, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MINIMUM_TICKS_OF_WORK, put=setStaticF_MINIMUM_TICKS_OF_WORK)) int64_t  MINIMUM_TICKS_OF_WORK;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager>  _instance;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field stopwatch, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_stopwatch, put=__cordl_internal_set_stopwatch)) ::System::Diagnostics::Stopwatch*  stopwatch;

/// @brief Field workerSignups, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_workerSignups, put=__cordl_internal_set_workerSignups)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::IGorillaSimpleBackgroundWorker*>*  workerSignups;

/// @brief Method Awake, addr 0x592333c, size 0xf4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateManager, addr 0x5923514, size 0xf0, virtual false, abstract: false, final false
static inline void CreateManager() ;

/// @brief Method DoWork, addr 0x5923604, size 0x98, virtual false, abstract: false, final false
static inline int64_t DoWork(int64_t  ticksOfWork) ;

static inline ::GlobalNamespace::GorillaSimpleBackgroundWorkerManager* New_ctor() ;

/// @brief Method SetInstance, addr 0x5923430, size 0xe4, virtual false, abstract: false, final false
static inline void SetInstance(::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*  manager) ;

/// @brief Method WorkerSignup, addr 0x5923814, size 0xb8, virtual false, abstract: false, final false
static inline void WorkerSignup(::GlobalNamespace::IGorillaSimpleBackgroundWorker*  worker) ;

/// @brief Method _DoWork, addr 0x592369c, size 0x178, virtual false, abstract: false, final false
inline int64_t _DoWork(int64_t  ticksOfWork) ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_stopwatch() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_stopwatch() ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::IGorillaSimpleBackgroundWorker*>* const& __cordl_internal_get_workerSignups() const;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::IGorillaSimpleBackgroundWorker*>*& __cordl_internal_get_workerSignups() ;

constexpr void __cordl_internal_set_stopwatch(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_workerSignups(::System::Collections::Generic::Queue_1<::GlobalNamespace::IGorillaSimpleBackgroundWorker*>*  value) ;

/// @brief Method .ctor, addr 0x59238cc, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int64_t getStaticF_MINIMUM_TICKS_OF_WORK() ;

static inline ::UnityW<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager> getStaticF__instance() ;

static inline bool getStaticF_hasInstance() ;

static inline void setStaticF_MINIMUM_TICKS_OF_WORK(int64_t  value) ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager>  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaSimpleBackgroundWorkerManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaSimpleBackgroundWorkerManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaSimpleBackgroundWorkerManager(GorillaSimpleBackgroundWorkerManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaSimpleBackgroundWorkerManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaSimpleBackgroundWorkerManager(GorillaSimpleBackgroundWorkerManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2213};

/// @brief Field workerSignups, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::GlobalNamespace::IGorillaSimpleBackgroundWorker*>*  ___workerSignups;

/// @brief Field stopwatch, offset: 0x28, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___stopwatch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaSimpleBackgroundWorkerManager, ___workerSignups) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSimpleBackgroundWorkerManager, ___stopwatch) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaSimpleBackgroundWorkerManager) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
