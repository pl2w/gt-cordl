#pragma once
// IWYU pragma private; include "GorillaTagScripts/GorillaTimerManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaTimerManager)
namespace GorillaTagScripts {
class GorillaTimer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaTagScripts {
class GorillaTimerManager;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GorillaTimerManager*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GorillaTimerManager*, "GorillaTagScripts", "GorillaTimerManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.GorillaTimerManager
class CORDL_TYPE GorillaTimerManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field allTimers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allTimers, put=setStaticF_allTimers)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GorillaTimer>>*  allTimers;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaTagScripts::GorillaTimerManager>  instance;

/// @brief Method Awake, addr 0x5bcb16c, size 0x13c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateManager, addr 0x5bcb38c, size 0xc0, virtual false, abstract: false, final false
static inline void CreateManager() ;

static inline ::GorillaTagScripts::GorillaTimerManager* New_ctor() ;

/// @brief Method RegisterGorillaTimer, addr 0x5bcadb8, size 0x154, virtual false, abstract: false, final false
static inline void RegisterGorillaTimer(::GorillaTagScripts::GorillaTimer*  gTimer) ;

/// @brief Method SetInstance, addr 0x5bcb2a8, size 0xe4, virtual false, abstract: false, final false
static inline void SetInstance(::GorillaTagScripts::GorillaTimerManager*  manager) ;

/// @brief Method UnregisterGorillaTimer, addr 0x5bcaf60, size 0x100, virtual false, abstract: false, final false
static inline void UnregisterGorillaTimer(::GorillaTagScripts::GorillaTimer*  gTimer) ;

/// @brief Method Update, addr 0x5bcb44c, size 0xcc, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x5bcb518, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GorillaTimer>>* getStaticF_allTimers() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GorillaTagScripts::GorillaTimerManager> getStaticF_instance() ;

static inline void setStaticF_allTimers(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GorillaTimer>>*  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GorillaTagScripts::GorillaTimerManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTimerManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTimerManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTimerManager(GorillaTimerManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTimerManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTimerManager(GorillaTimerManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3993};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::GorillaTimerManager) == 0x20, "Size mismatch!");

} // namespace end def GorillaTagScripts
