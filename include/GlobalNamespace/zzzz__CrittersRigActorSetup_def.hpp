#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersRigActorSetup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersRigActorSetup_RigActor_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersRigActorSetup)
namespace GlobalNamespace {
class CrittersActor;
}
namespace GlobalNamespace {
struct CrittersRigActorSetup_RigActor;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersRigActorSetup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersRigActorSetup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersRigActorSetup*, "", "CrittersRigActorSetup");
// Dependencies CrittersRigActorSetup::RigActor, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersRigActorSetup
class CORDL_TYPE CrittersRigActorSetup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RigActor = ::GlobalNamespace::CrittersRigActorSetup_RigActor;

/// @brief Field myRig, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field rigActorData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigActorData, put=__cordl_internal_set_rigActorData)) ::System::Collections::Generic::List_1<::System::Object*>*  rigActorData;

/// @brief Field rigActors, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigActors, put=__cordl_internal_set_rigActors)) ::ArrayW<::GlobalNamespace::CrittersRigActorSetup_RigActor>  rigActors;

/// @brief Method CheckUpdate, addr 0x56f42bc, size 0x214, virtual false, abstract: false, final false
inline void CheckUpdate(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>  refActorData, bool  forceCheck) ;

static inline ::GlobalNamespace::CrittersRigActorSetup* New_ctor() ;

/// @brief Method OnDisable, addr 0x56f4088, size 0x68, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56f4080, size 0x8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RefreshActorForIndex, addr 0x56f40f0, size 0x1cc, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::CrittersActor> RefreshActorForIndex(int32_t  index) ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get_rigActorData() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get_rigActorData() ;

constexpr ::ArrayW<::GlobalNamespace::CrittersRigActorSetup_RigActor> const& __cordl_internal_get_rigActors() const;

constexpr ::ArrayW<::GlobalNamespace::CrittersRigActorSetup_RigActor>& __cordl_internal_get_rigActors() ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_rigActorData(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set_rigActors(::ArrayW<::GlobalNamespace::CrittersRigActorSetup_RigActor>  value) ;

/// @brief Method .ctor, addr 0x56f44d0, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersRigActorSetup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersRigActorSetup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersRigActorSetup(CrittersRigActorSetup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersRigActorSetup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersRigActorSetup(CrittersRigActorSetup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{121};

/// @brief Field rigActors, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CrittersRigActorSetup_RigActor>  ___rigActors;

/// @brief Field rigActorData, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ___rigActorData;

/// @brief Field myRig, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersRigActorSetup, ___rigActors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersRigActorSetup, ___rigActorData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersRigActorSetup, ___myRig) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersRigActorSetup) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
