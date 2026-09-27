#pragma once
// IWYU pragma private; include "GorillaTagScripts/GorillaIntervalTimerManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaIntervalTimerManager)
namespace GorillaTagScripts {
class GorillaIntervalTimer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaTagScripts {
class GorillaIntervalTimerManager;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GorillaIntervalTimerManager*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GorillaIntervalTimerManager*, "GorillaTagScripts", "GorillaIntervalTimerManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.GorillaIntervalTimerManager
class CORDL_TYPE GorillaIntervalTimerManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field allTimers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allTimers, put=setStaticF_allTimers)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GorillaIntervalTimer>>*  allTimers;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaTagScripts::GorillaIntervalTimerManager>  instance;

/// @brief Method Awake, addr 0x5bc9154, size 0x13c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateManager, addr 0x5bc9374, size 0xc0, virtual false, abstract: false, final false
static inline void CreateManager() ;

static inline ::GorillaTagScripts::GorillaIntervalTimerManager* New_ctor() ;

/// @brief Method RegisterGorillaTimer, addr 0x5bc9434, size 0x154, virtual false, abstract: false, final false
static inline void RegisterGorillaTimer(::GorillaTagScripts::GorillaIntervalTimer*  gTimer) ;

/// @brief Method SetInstance, addr 0x5bc9290, size 0xe4, virtual false, abstract: false, final false
static inline void SetInstance(::GorillaTagScripts::GorillaIntervalTimerManager*  manager) ;

/// @brief Method UnregisterGorillaTimer, addr 0x5bc9588, size 0x100, virtual false, abstract: false, final false
static inline void UnregisterGorillaTimer(::GorillaTagScripts::GorillaIntervalTimer*  gTimer) ;

/// @brief Method Update, addr 0x5bc9688, size 0xd0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x5bc9758, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GorillaIntervalTimer>>* getStaticF_allTimers() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GorillaTagScripts::GorillaIntervalTimerManager> getStaticF_instance() ;

static inline void setStaticF_allTimers(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GorillaIntervalTimer>>*  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GorillaTagScripts::GorillaIntervalTimerManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaIntervalTimerManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaIntervalTimerManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaIntervalTimerManager(GorillaIntervalTimerManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaIntervalTimerManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaIntervalTimerManager(GorillaIntervalTimerManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3988};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::GorillaIntervalTimerManager) == 0x20, "Size mismatch!");

} // namespace end def GorillaTagScripts
