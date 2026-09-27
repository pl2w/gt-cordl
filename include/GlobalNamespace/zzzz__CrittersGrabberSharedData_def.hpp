#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersGrabberSharedData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CrittersGrabberSharedData)
namespace GlobalNamespace {
class CrittersActorGrabber;
}
namespace GlobalNamespace {
class CrittersActor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class CapsuleCollider;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersGrabberSharedData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersGrabberSharedData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersGrabberSharedData*, "", "CrittersGrabberSharedData");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersGrabberSharedData
class CORDL_TYPE CrittersGrabberSharedData : public ::System::Object {
public:
// Declarations
/// @brief Field actorGrabbers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_actorGrabbers, put=setStaticF_actorGrabbers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActorGrabber>>*  actorGrabbers;

/// @brief Field enteredCritterActor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_enteredCritterActor, put=setStaticF_enteredCritterActor)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  enteredCritterActor;

/// @brief Field heldActor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_heldActor, put=setStaticF_heldActor)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  heldActor;

/// @brief Field initialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_initialized, put=setStaticF_initialized)) bool  initialized;

/// @brief Field triggerCollidersToCheck, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_triggerCollidersToCheck, put=setStaticF_triggerCollidersToCheck)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CapsuleCollider>>*  triggerCollidersToCheck;

/// @brief Method AddActorGrabber, addr 0x55fa7a4, size 0x108, virtual false, abstract: false, final false
static inline void AddActorGrabber(::GlobalNamespace::CrittersActorGrabber*  grabber) ;

/// @brief Method AddEnteredActor, addr 0x55fa42c, size 0x108, virtual false, abstract: false, final false
static inline void AddEnteredActor(::GlobalNamespace::CrittersActor*  actor) ;

/// @brief Method AddTrigger, addr 0x55fa5e8, size 0x108, virtual false, abstract: false, final false
static inline void AddTrigger(::UnityEngine::CapsuleCollider*  trigger) ;

/// @brief Method DisableEmptyGrabberJoints, addr 0x55fa960, size 0x1e8, virtual false, abstract: false, final false
static inline void DisableEmptyGrabberJoints() ;

/// @brief Method Initialize, addr 0x55fa2a4, size 0x188, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method RemoveActorGrabber, addr 0x55fa8ac, size 0xb4, virtual false, abstract: false, final false
static inline void RemoveActorGrabber(::GlobalNamespace::CrittersActorGrabber*  grabber) ;

/// @brief Method RemoveEnteredActor, addr 0x55fa534, size 0xb4, virtual false, abstract: false, final false
static inline void RemoveEnteredActor(::GlobalNamespace::CrittersActor*  actor) ;

/// @brief Method RemoveTrigger, addr 0x55fa6f0, size 0xb4, virtual false, abstract: false, final false
static inline void RemoveTrigger(::UnityEngine::CapsuleCollider*  trigger) ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActorGrabber>>* getStaticF_actorGrabbers() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* getStaticF_enteredCritterActor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* getStaticF_heldActor() ;

static inline bool getStaticF_initialized() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CapsuleCollider>>* getStaticF_triggerCollidersToCheck() ;

static inline void setStaticF_actorGrabbers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActorGrabber>>*  value) ;

static inline void setStaticF_enteredCritterActor(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

static inline void setStaticF_heldActor(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

static inline void setStaticF_initialized(bool  value) ;

static inline void setStaticF_triggerCollidersToCheck(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CapsuleCollider>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersGrabberSharedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersGrabberSharedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersGrabberSharedData(CrittersGrabberSharedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersGrabberSharedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersGrabberSharedData(CrittersGrabberSharedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{78};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CrittersGrabberSharedData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
