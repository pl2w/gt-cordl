#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/GorillaRopeSwingUpdateManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaRopeSwingUpdateManager)
namespace GorillaLocomotion::Gameplay {
class GorillaRopeSwing;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaLocomotion::Gameplay {
class GorillaRopeSwingUpdateManager;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Gameplay::GorillaRopeSwingUpdateManager*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::GorillaRopeSwingUpdateManager*, "GorillaLocomotion.Gameplay", "GorillaRopeSwingUpdateManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaLocomotion::Gameplay {
// Is value type: false
// CS Name: GorillaLocomotion.Gameplay.GorillaRopeSwingUpdateManager
class CORDL_TYPE GorillaRopeSwingUpdateManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field allGorillaRopeSwings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allGorillaRopeSwings, put=setStaticF_allGorillaRopeSwings)) ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*  allGorillaRopeSwings;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwingUpdateManager>  instance;

/// @brief Method Awake, addr 0x5cecef0, size 0x13c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateManager, addr 0x5ced110, size 0xc0, virtual false, abstract: false, final false
static inline void CreateManager() ;

static inline ::GorillaLocomotion::Gameplay::GorillaRopeSwingUpdateManager* New_ctor() ;

/// @brief Method RegisterRopeSwing, addr 0x5ce9f0c, size 0x154, virtual false, abstract: false, final false
static inline void RegisterRopeSwing(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  ropeSwing) ;

/// @brief Method SetInstance, addr 0x5ced02c, size 0xe4, virtual false, abstract: false, final false
static inline void SetInstance(::GorillaLocomotion::Gameplay::GorillaRopeSwingUpdateManager*  manager) ;

/// @brief Method UnregisterRopeSwing, addr 0x5cea1cc, size 0x100, virtual false, abstract: false, final false
static inline void UnregisterRopeSwing(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  ropeSwing) ;

/// @brief Method Update, addr 0x5ced1d0, size 0xcc, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x5ced29c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>* getStaticF_allGorillaRopeSwings() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwingUpdateManager> getStaticF_instance() ;

static inline void setStaticF_allGorillaRopeSwings(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwingUpdateManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaRopeSwingUpdateManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaRopeSwingUpdateManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaRopeSwingUpdateManager(GorillaRopeSwingUpdateManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaRopeSwingUpdateManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaRopeSwingUpdateManager(GorillaRopeSwingUpdateManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4529};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaLocomotion::Gameplay::GorillaRopeSwingUpdateManager) == 0x20, "Size mismatch!");

} // namespace end def GorillaLocomotion::Gameplay
