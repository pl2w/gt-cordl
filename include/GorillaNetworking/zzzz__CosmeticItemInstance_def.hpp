#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticItemInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticSlots_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticAnchorAntiIntersectOffsets_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CosmeticItemInstance)
namespace GlobalNamespace {
class BodyDockPositions;
}
namespace GlobalNamespace {
struct CosmeticsController_CosmeticSlots;
}
namespace GlobalNamespace {
class VRRigAnchorOverrides;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GorillaNetworking {
class CosmeticItemInstance;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::CosmeticItemInstance*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticItemInstance*, "GorillaNetworking", "CosmeticItemInstance");
// Dependencies GorillaNetworking.CosmeticsController::CosmeticSlots, GorillaTag.CosmeticSystem.CosmeticAnchorAntiIntersectOffsets, System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticItemInstance
class CORDL_TYPE CosmeticItemInstance : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ActiveSlot)) ::GlobalNamespace::CosmeticsController_CosmeticSlots  ActiveSlot;

/// @brief Field _activeSlot, offset 0x258, size 0x4 
 __declspec(property(get=__cordl_internal_get__activeSlot, put=__cordl_internal_set__activeSlot)) ::GlobalNamespace::CosmeticsController_CosmeticSlots  _activeSlot;

/// @brief Field _anchorOverrides, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get__anchorOverrides, put=__cordl_internal_set__anchorOverrides)) ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  _anchorOverrides;

/// @brief Field _bodyDockPositions, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyDockPositions, put=__cordl_internal_set__bodyDockPositions)) ::UnityW<::GlobalNamespace::BodyDockPositions>  _bodyDockPositions;

/// @brief Field allParticles, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_allParticles, put=__cordl_internal_set_allParticles)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  allParticles;

/// @brief Field allRenderers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_allRenderers, put=__cordl_internal_set_allRenderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  allRenderers;

/// @brief Field clippingOffsets, offset 0x40, size 0x1f8 
 __declspec(property(get=__cordl_internal_get_clippingOffsets, put=__cordl_internal_set_clippingOffsets)) ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets  clippingOffsets;

/// @brief Field dbgname, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get_dbgname, put=__cordl_internal_set_dbgname)) ::StringW  dbgname;

/// @brief Field holdableObjects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_holdableObjects, put=__cordl_internal_set_holdableObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  holdableObjects;

/// @brief Field isHoldableItem, offset 0x238, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHoldableItem, put=__cordl_internal_set_isHoldableItem)) bool  isHoldableItem;

/// @brief Field leftObjects, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftObjects, put=__cordl_internal_set_leftObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  leftObjects;

/// @brief Field objects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_objects, put=__cordl_internal_set_objects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objects;

/// @brief Field rightObjects, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightObjects, put=__cordl_internal_set_rightObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  rightObjects;

/// @brief Method ApplyClippingOffsets, addr 0x5c5399c, size 0x3c4, virtual false, abstract: false, final false
inline void ApplyClippingOffsets(bool  itemEnabled) ;

/// @brief Method DisableItem, addr 0x5c53d60, size 0x2ec, virtual false, abstract: false, final false
inline void DisableItem(::GlobalNamespace::CosmeticsController_CosmeticSlots  cosmeticSlot) ;

/// @brief Method EnableItem, addr 0x5c5404c, size 0x4f0, virtual false, abstract: false, final false
inline void EnableItem(::GlobalNamespace::CosmeticsController_CosmeticSlots  cosmeticSlot, ::GlobalNamespace::VRRig*  rig) ;

/// @brief Method EnableItem, addr 0x5c538c4, size 0xd8, virtual false, abstract: false, final false
inline void EnableItem(::UnityEngine::GameObject*  obj, bool  enable) ;

static inline ::GorillaNetworking::CosmeticItemInstance* New_ctor() ;

/// @brief Method ToggleParticles, addr 0x5c545d8, size 0xb0, virtual false, abstract: false, final false
inline void ToggleParticles(bool  enabled) ;

/// @brief Method ToggleRenderers, addr 0x5c5453c, size 0x9c, virtual false, abstract: false, final false
inline void ToggleRenderers(bool  enabled) ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots const& __cordl_internal_get__activeSlot() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots& __cordl_internal_get__activeSlot() ;

constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides> const& __cordl_internal_get__anchorOverrides() const;

constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>& __cordl_internal_get__anchorOverrides() ;

constexpr ::UnityW<::GlobalNamespace::BodyDockPositions> const& __cordl_internal_get__bodyDockPositions() const;

constexpr ::UnityW<::GlobalNamespace::BodyDockPositions>& __cordl_internal_get__bodyDockPositions() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>* const& __cordl_internal_get_allParticles() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*& __cordl_internal_get_allParticles() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_allRenderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_allRenderers() ;

constexpr ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets const& __cordl_internal_get_clippingOffsets() const;

constexpr ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets& __cordl_internal_get_clippingOffsets() ;

constexpr ::StringW const& __cordl_internal_get_dbgname() const;

constexpr ::StringW& __cordl_internal_get_dbgname() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_holdableObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_holdableObjects() ;

constexpr bool const& __cordl_internal_get_isHoldableItem() const;

constexpr bool& __cordl_internal_get_isHoldableItem() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_leftObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_leftObjects() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_objects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_objects() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_rightObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_rightObjects() ;

constexpr void __cordl_internal_set__activeSlot(::GlobalNamespace::CosmeticsController_CosmeticSlots  value) ;

constexpr void __cordl_internal_set__anchorOverrides(::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  value) ;

constexpr void __cordl_internal_set__bodyDockPositions(::UnityW<::GlobalNamespace::BodyDockPositions>  value) ;

constexpr void __cordl_internal_set_allParticles(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  value) ;

constexpr void __cordl_internal_set_allRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_clippingOffsets(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets  value) ;

constexpr void __cordl_internal_set_dbgname(::StringW  value) ;

constexpr void __cordl_internal_set_holdableObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_isHoldableItem(bool  value) ;

constexpr void __cordl_internal_set_leftObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_objects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_rightObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method .ctor, addr 0x5c53508, size 0x19c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActiveSlot, addr 0x5c538bc, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CosmeticsController_CosmeticSlots get_ActiveSlot() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticItemInstance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticItemInstance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticItemInstance(CosmeticItemInstance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticItemInstance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticItemInstance(CosmeticItemInstance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4269};

/// @brief Field leftObjects, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___leftObjects;

/// @brief Field rightObjects, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___rightObjects;

/// @brief Field objects, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___objects;

/// @brief Field holdableObjects, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___holdableObjects;

/// @brief Field allRenderers, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___allRenderers;

/// @brief Field allParticles, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  ___allParticles;

/// @brief Field clippingOffsets, offset: 0x40, size: 0x1f8, def value: None
 ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets  ___clippingOffsets;

/// @brief Field isHoldableItem, offset: 0x238, size: 0x1, def value: None
 bool  ___isHoldableItem;

/// @brief Field dbgname, offset: 0x240, size: 0x8, def value: None
 ::StringW  ___dbgname;

/// @brief Field _bodyDockPositions, offset: 0x248, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BodyDockPositions>  ____bodyDockPositions;

/// @brief Field _anchorOverrides, offset: 0x250, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  ____anchorOverrides;

/// @brief Field _activeSlot, offset: 0x258, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticSlots  ____activeSlot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticItemInstance, ___leftObjects) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticItemInstance, ___rightObjects) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticItemInstance, ___objects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticItemInstance, ___holdableObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticItemInstance, ___allRenderers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticItemInstance, ___allParticles) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticItemInstance, ___clippingOffsets) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticItemInstance, ___isHoldableItem) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticItemInstance, ___dbgname) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticItemInstance, ____bodyDockPositions) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticItemInstance, ____anchorOverrides) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticItemInstance, ____activeSlot) == 0x258, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticItemInstance) == 0x260, "Size mismatch!");

} // namespace end def GorillaNetworking
