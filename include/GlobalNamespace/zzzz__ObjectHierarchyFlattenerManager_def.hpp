#pragma once
// IWYU pragma private; include "GlobalNamespace/ObjectHierarchyFlattenerManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourPostTick_def.hpp"
CORDL_MODULE_EXPORT(ObjectHierarchyFlattenerManager)
namespace GlobalNamespace {
class ObjectHierarchyFlattener;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ObjectHierarchyFlattenerManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ObjectHierarchyFlattenerManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObjectHierarchyFlattenerManager*, "", "ObjectHierarchyFlattenerManager");
// Dependencies MonoBehaviourPostTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObjectHierarchyFlattenerManager
class CORDL_TYPE ObjectHierarchyFlattenerManager : public ::GlobalNamespace::MonoBehaviourPostTick {
public:
// Declarations
/// @brief Field alloHF, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_alloHF, put=setStaticF_alloHF)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>>*  alloHF;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::ObjectHierarchyFlattenerManager>  instance;

/// @brief Method Awake, addr 0x567c9bc, size 0xf4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateManager, addr 0x567cb94, size 0xc0, virtual false, abstract: false, final false
static inline void CreateManager() ;

static inline ::GlobalNamespace::ObjectHierarchyFlattenerManager* New_ctor() ;

/// @brief Method PostTick, addr 0x567cc54, size 0xcc, virtual true, abstract: false, final false
inline void PostTick() ;

/// @brief Method RegisterOHF, addr 0x567c858, size 0x154, virtual false, abstract: false, final false
static inline void RegisterOHF(::GlobalNamespace::ObjectHierarchyFlattener*  rbWI) ;

/// @brief Method SetInstance, addr 0x567cab0, size 0xe4, virtual false, abstract: false, final false
static inline void SetInstance(::GlobalNamespace::ObjectHierarchyFlattenerManager*  manager) ;

/// @brief Method UnregisterOHF, addr 0x567c1e0, size 0x100, virtual false, abstract: false, final false
static inline void UnregisterOHF(::GlobalNamespace::ObjectHierarchyFlattener*  rbWI) ;

/// @brief Method .ctor, addr 0x567cd20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>>* getStaticF_alloHF() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GlobalNamespace::ObjectHierarchyFlattenerManager> getStaticF_instance() ;

static inline void setStaticF_alloHF(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>>*  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::ObjectHierarchyFlattenerManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectHierarchyFlattenerManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectHierarchyFlattenerManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectHierarchyFlattenerManager(ObjectHierarchyFlattenerManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectHierarchyFlattenerManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectHierarchyFlattenerManager(ObjectHierarchyFlattenerManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{865};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ObjectHierarchyFlattenerManager) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
