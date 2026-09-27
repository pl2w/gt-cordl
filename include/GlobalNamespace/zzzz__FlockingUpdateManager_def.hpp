#pragma once
// IWYU pragma private; include "GlobalNamespace/FlockingUpdateManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FlockingUpdateManager)
namespace GlobalNamespace {
class Flocking;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FlockingUpdateManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FlockingUpdateManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FlockingUpdateManager*, "", "FlockingUpdateManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlockingUpdateManager
class CORDL_TYPE FlockingUpdateManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field allFlockings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allFlockings, put=setStaticF_allFlockings)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*  allFlockings;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::FlockingUpdateManager>  instance;

/// @brief Method Awake, addr 0x5808660, size 0x13c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateManager, addr 0x5808880, size 0xc0, virtual false, abstract: false, final false
static inline void CreateManager() ;

static inline ::GlobalNamespace::FlockingUpdateManager* New_ctor() ;

/// @brief Method RegisterFlocking, addr 0x58084d0, size 0x154, virtual false, abstract: false, final false
static inline void RegisterFlocking(::GlobalNamespace::Flocking*  flocking) ;

/// @brief Method SetInstance, addr 0x580879c, size 0xe4, virtual false, abstract: false, final false
static inline void SetInstance(::GlobalNamespace::FlockingUpdateManager*  manager) ;

/// @brief Method UnregisterFlocking, addr 0x58064ac, size 0x100, virtual false, abstract: false, final false
static inline void UnregisterFlocking(::GlobalNamespace::Flocking*  flocking) ;

/// @brief Method Update, addr 0x5808940, size 0xcc, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x5808a0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>* getStaticF_allFlockings() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GlobalNamespace::FlockingUpdateManager> getStaticF_instance() ;

static inline void setStaticF_allFlockings(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::FlockingUpdateManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlockingUpdateManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlockingUpdateManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FlockingUpdateManager(FlockingUpdateManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlockingUpdateManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlockingUpdateManager(FlockingUpdateManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1697};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FlockingUpdateManager) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
