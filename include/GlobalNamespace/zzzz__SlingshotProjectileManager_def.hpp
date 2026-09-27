#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotProjectileManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
CORDL_MODULE_EXPORT(SlingshotProjectileManager)
namespace GlobalNamespace {
class SlingshotProjectile;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SlingshotProjectileManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SlingshotProjectileManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlingshotProjectileManager*, "", "SlingshotProjectileManager");
// Dependencies MonoBehaviourTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlingshotProjectileManager
class CORDL_TYPE SlingshotProjectileManager : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
/// @brief Field allsP, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allsP, put=setStaticF_allsP)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SlingshotProjectile>>*  allsP;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::SlingshotProjectileManager>  instance;

/// @brief Method Awake, addr 0x573c998, size 0xf4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateManager, addr 0x573cb70, size 0xc0, virtual false, abstract: false, final false
static inline void CreateManager() ;

static inline ::GlobalNamespace::SlingshotProjectileManager* New_ctor() ;

/// @brief Method RegisterSP, addr 0x573a5a4, size 0x154, virtual false, abstract: false, final false
static inline void RegisterSP(::GlobalNamespace::SlingshotProjectile*  sP) ;

/// @brief Method SetInstance, addr 0x573ca8c, size 0xe4, virtual false, abstract: false, final false
static inline void SetInstance(::GlobalNamespace::SlingshotProjectileManager*  manager) ;

/// @brief Method Tick, addr 0x573cc30, size 0xcc, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method UnregisterSP, addr 0x573a750, size 0x100, virtual false, abstract: false, final false
static inline void UnregisterSP(::GlobalNamespace::SlingshotProjectile*  sP) ;

/// @brief Method .ctor, addr 0x573ccfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SlingshotProjectile>>* getStaticF_allsP() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GlobalNamespace::SlingshotProjectileManager> getStaticF_instance() ;

static inline void setStaticF_allsP(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SlingshotProjectile>>*  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::SlingshotProjectileManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlingshotProjectileManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlingshotProjectileManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlingshotProjectileManager(SlingshotProjectileManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlingshotProjectileManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlingshotProjectileManager(SlingshotProjectileManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1224};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SlingshotProjectileManager) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
