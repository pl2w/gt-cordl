#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticCollectionDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticCollectionDisplay)
namespace GlobalNamespace {
struct CosmeticsController_CosmeticItem;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaNetworking {
class CosmeticCollectionDisplay___c__DisplayClass45_0;
}
namespace GorillaTag::CosmeticSystem {
struct CosmeticInfoV2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaNetworking {
class CosmeticCollectionDisplay;
}
namespace GorillaNetworking {
class CosmeticCollectionDisplay___c__DisplayClass45_0;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::CosmeticCollectionDisplay*);
MARK_REF_T(::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticCollectionDisplay*, "GorillaNetworking", "CosmeticCollectionDisplay");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0*, "GorillaNetworking", "CosmeticCollectionDisplay/<>c__DisplayClass45_0");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticCollectionDisplay
class CORDL_TYPE CosmeticCollectionDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass45_0 = ::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0;

 __declspec(property(get=get_ActiveCanonicalIndex)) int32_t  ActiveCanonicalIndex;

 __declspec(property(get=get_ActiveCollectable)) ::System::Nullable_1<::GlobalNamespace::CosmeticsController_CosmeticItem>  ActiveCollectable;

 __declspec(property(get=get_ActiveIndex)) int32_t  ActiveIndex;

/// @brief Field AllDisplays, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AllDisplays, put=setStaticF_AllDisplays)) ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*  AllDisplays;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsLocal)) bool  IsLocal;

 __declspec(property(get=get_ParentPlayFabID, put=set_ParentPlayFabID)) ::StringW  ParentPlayFabID;

/// @brief Field Registered, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Registered, put=setStaticF_Registered)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::StringW>,::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*  Registered;

 __declspec(property(get=get_VisibleMask)) int32_t  VisibleMask;

/// @brief Field <ParentPlayFabID>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__ParentPlayFabID_k__BackingField, put=__cordl_internal_set__ParentPlayFabID_k__BackingField)) ::StringW  _ParentPlayFabID_k__BackingField;

/// @brief Field activeIndex, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_activeIndex, put=__cordl_internal_set_activeIndex)) int32_t  activeIndex;

/// @brief Field canonicalIndices, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_canonicalIndices, put=__cordl_internal_set_canonicalIndices)) ::System::Collections::Generic::List_1<int32_t>*  canonicalIndices;

/// @brief Field isCycling, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isCycling, put=__cordl_internal_set_isCycling)) bool  isCycling;

/// @brief Field isLocal, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLocal, put=__cordl_internal_set_isLocal)) bool  isLocal;

/// @brief Field isVisible, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_isVisible, put=__cordl_internal_set_isVisible)) bool  isVisible;

/// @brief Field loadOps, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadOps, put=__cordl_internal_set_loadOps)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>*  loadOps;

/// @brief Field placedCollectables, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_placedCollectables, put=__cordl_internal_set_placedCollectables)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  placedCollectables;

/// @brief Field registeredParentID, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_registeredParentID, put=__cordl_internal_set_registeredParentID)) ::StringW  registeredParentID;

/// @brief Field registeredRig, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_registeredRig, put=__cordl_internal_set_registeredRig)) ::UnityW<::GlobalNamespace::VRRig>  registeredRig;

/// @brief Field spawnedAnchors, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnedAnchors, put=__cordl_internal_set_spawnedAnchors)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  spawnedAnchors;

/// @brief Field visibleMask, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_visibleMask, put=__cordl_internal_set_visibleMask)) int32_t  visibleMask;

/// @brief Method ApplyCyclingVisibility, addr 0x5c51b60, size 0x4, virtual false, abstract: false, final false
inline void ApplyCyclingVisibility() ;

/// @brief Method ClearSpawnedAnchors, addr 0x5c51538, size 0x2b4, virtual false, abstract: false, final false
inline void ClearSpawnedAnchors() ;

/// @brief Method ContentMatches, addr 0x5c505a4, size 0x1c4, virtual false, abstract: false, final false
inline bool ContentMatches(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  items) ;

/// @brief Method CycleActive, addr 0x5c520fc, size 0x80, virtual false, abstract: false, final false
inline void CycleActive(int32_t  direction) ;

/// @brief Method DestroyAllForParentExcept, addr 0x5c4ff4c, size 0x208, virtual false, abstract: false, final false
static inline void DestroyAllForParentExcept(::GlobalNamespace::VRRig*  rig, ::StringW  parentID, ::UnityEngine::GameObject*  host) ;

/// @brief Method FindForRig, addr 0x5c4fc68, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaNetworking::CosmeticCollectionDisplay> FindForRig(::GlobalNamespace::VRRig*  rig, ::StringW  parentID) ;

/// @brief Method GetAllForParent, addr 0x5c4fd38, size 0x214, virtual false, abstract: false, final false
static inline void GetAllForParent(::GlobalNamespace::VRRig*  rig, ::StringW  parentID, ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*  result) ;

/// @brief Method GetCollectableAt, addr 0x5c504b0, size 0xf4, virtual false, abstract: false, final false
inline ::System::Nullable_1<::GlobalNamespace::CosmeticsController_CosmeticItem> GetCollectableAt(int32_t  index) ;

/// @brief Method GetDisplaysForRig, addr 0x5c50154, size 0x270, virtual false, abstract: false, final false
static inline void GetDisplaysForRig(::GlobalNamespace::VRRig*  rig, ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*  result) ;

/// @brief Method InstantiateIntoAnchor, addr 0x5c518cc, size 0x294, virtual false, abstract: false, final false
inline void InstantiateIntoAnchor(::GlobalNamespace::CosmeticsController_CosmeticItem  collectable, ::UnityEngine::Transform*  anchor) ;

/// @brief Method IsEquippedAtCanonical, addr 0x5c52040, size 0x20, virtual false, abstract: false, final false
inline bool IsEquippedAtCanonical(int32_t  canonicalIndex) ;

static inline ::GorillaNetworking::CosmeticCollectionDisplay* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5c525c0, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5c52344, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5c52348, size 0x278, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PersistLocalState, addr 0x5c51e94, size 0x12c, virtual false, abstract: false, final false
inline void PersistLocalState() ;

/// @brief Method Populate, addr 0x5c50768, size 0xdd0, virtual false, abstract: false, final false
inline void Populate(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  ownedCollectables, ::GorillaTag::CosmeticSystem::CosmeticInfoV2  parentInfo, ::UnityEngine::Transform*  rootXform) ;

/// @brief Method RefreshAnchorVisibility, addr 0x5c51d0c, size 0x188, virtual false, abstract: false, final false
inline void RefreshAnchorVisibility() ;

/// @brief Method Register, addr 0x5c4f99c, size 0x2cc, virtual false, abstract: false, final false
static inline void Register(::GlobalNamespace::VRRig*  rig, ::StringW  parentID, ::GorillaNetworking::CosmeticCollectionDisplay*  display, bool  isLocal) ;

/// @brief Method ResolveCanonicalIndex, addr 0x5c517ec, size 0xe0, virtual false, abstract: false, final false
static inline int32_t ResolveCanonicalIndex(::StringW  parentPlayFabID, ::StringW  itemName) ;

/// @brief Method SetActiveIndex, addr 0x5c51c8c, size 0x80, virtual false, abstract: false, final false
inline void SetActiveIndex(int32_t  index) ;

/// @brief Method SetEquippedAtCanonical, addr 0x5c51fdc, size 0x64, virtual false, abstract: false, final false
inline bool SetEquippedAtCanonical(int32_t  canonicalIndex, bool  equipped) ;

/// @brief Method SetVisible, addr 0x5c5217c, size 0x8, virtual false, abstract: false, final false
inline void SetVisible(bool  visible) ;

/// @brief Method SetVisibleMask, addr 0x5c51fc0, size 0x1c, virtual false, abstract: false, final false
inline void SetVisibleMask(int32_t  mask) ;

/// @brief Method UnregisterIfOwner, addr 0x5c521f4, size 0x150, virtual false, abstract: false, final false
inline void UnregisterIfOwner() ;

constexpr ::StringW const& __cordl_internal_get__ParentPlayFabID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ParentPlayFabID_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_activeIndex() const;

constexpr int32_t& __cordl_internal_get_activeIndex() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_canonicalIndices() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_canonicalIndices() ;

constexpr bool const& __cordl_internal_get_isCycling() const;

constexpr bool& __cordl_internal_get_isCycling() ;

constexpr bool const& __cordl_internal_get_isLocal() const;

constexpr bool& __cordl_internal_get_isLocal() ;

constexpr bool const& __cordl_internal_get_isVisible() const;

constexpr bool& __cordl_internal_get_isVisible() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>* const& __cordl_internal_get_loadOps() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>*& __cordl_internal_get_loadOps() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& __cordl_internal_get_placedCollectables() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& __cordl_internal_get_placedCollectables() ;

constexpr ::StringW const& __cordl_internal_get_registeredParentID() const;

constexpr ::StringW& __cordl_internal_get_registeredParentID() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_registeredRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_registeredRig() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_spawnedAnchors() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_spawnedAnchors() ;

constexpr int32_t const& __cordl_internal_get_visibleMask() const;

constexpr int32_t& __cordl_internal_get_visibleMask() ;

constexpr void __cordl_internal_set__ParentPlayFabID_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_activeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_canonicalIndices(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_isCycling(bool  value) ;

constexpr void __cordl_internal_set_isLocal(bool  value) ;

constexpr void __cordl_internal_set_isVisible(bool  value) ;

constexpr void __cordl_internal_set_loadOps(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>*  value) ;

constexpr void __cordl_internal_set_placedCollectables(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value) ;

constexpr void __cordl_internal_set_registeredParentID(::StringW  value) ;

constexpr void __cordl_internal_set_registeredRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_spawnedAnchors(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_visibleMask(int32_t  value) ;

/// @brief Method .ctor, addr 0x5c52650, size 0x18c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>* getStaticF_AllDisplays() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::StringW>,::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>* getStaticF_Registered() ;

/// @brief Method get_ActiveCanonicalIndex, addr 0x5c52060, size 0x9c, virtual false, abstract: false, final false
inline int32_t get_ActiveCanonicalIndex() ;

/// @brief Method get_ActiveCollectable, addr 0x5c503c4, size 0xec, virtual false, abstract: false, final false
inline ::System::Nullable_1<::GlobalNamespace::CosmeticsController_CosmeticItem> get_ActiveCollectable() ;

/// @brief Method get_ActiveIndex, addr 0x5c4f93c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ActiveIndex() ;

/// @brief Method get_Count, addr 0x5c4f944, size 0x48, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IsLocal, addr 0x5c4f994, size 0x8, virtual false, abstract: false, final false
inline bool get_IsLocal() ;

/// [CompilerGenerated]
/// @brief Method get_ParentPlayFabID, addr 0x5c4f92c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ParentPlayFabID() ;

/// @brief Method get_VisibleMask, addr 0x5c4f98c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_VisibleMask() ;

static inline void setStaticF_AllDisplays(::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*  value) ;

static inline void setStaticF_Registered(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::StringW>,::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ParentPlayFabID, addr 0x5c4f934, size 0x8, virtual false, abstract: false, final false
inline void set_ParentPlayFabID(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCollectionDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCollectionDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCollectionDisplay(CosmeticCollectionDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCollectionDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCollectionDisplay(CosmeticCollectionDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4267};

/// @brief Field isCycling, offset: 0x20, size: 0x1, def value: None
 bool  ___isCycling;

/// @brief Field isVisible, offset: 0x21, size: 0x1, def value: None
 bool  ___isVisible;

/// @brief Field isLocal, offset: 0x22, size: 0x1, def value: None
 bool  ___isLocal;

/// @brief Field activeIndex, offset: 0x24, size: 0x4, def value: None
 int32_t  ___activeIndex;

/// @brief Field visibleMask, offset: 0x28, size: 0x4, def value: None
 int32_t  ___visibleMask;

/// @brief Field registeredRig, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___registeredRig;

/// @brief Field registeredParentID, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___registeredParentID;

/// @brief Field spawnedAnchors, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___spawnedAnchors;

/// @brief Field loadOps, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>*  ___loadOps;

/// @brief Field placedCollectables, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  ___placedCollectables;

/// @brief Field canonicalIndices, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___canonicalIndices;

/// [CompilerGenerated]
/// @brief Field <ParentPlayFabID>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::StringW  ____ParentPlayFabID_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticCollectionDisplay, ___isCycling) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticCollectionDisplay, ___isVisible) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticCollectionDisplay, ___isLocal) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticCollectionDisplay, ___activeIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticCollectionDisplay, ___visibleMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticCollectionDisplay, ___registeredRig) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticCollectionDisplay, ___registeredParentID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticCollectionDisplay, ___spawnedAnchors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticCollectionDisplay, ___loadOps) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticCollectionDisplay, ___placedCollectables) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticCollectionDisplay, ___canonicalIndices) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticCollectionDisplay, ____ParentPlayFabID_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticCollectionDisplay) == 0x68, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Vector3
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticCollectionDisplay/<>c__DisplayClass45_0
class CORDL_TYPE CosmeticCollectionDisplay___c__DisplayClass45_0 : public ::System::Object {
public:
// Declarations
/// @brief Field anchor, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchor, put=__cordl_internal_set_anchor)) ::UnityW<::UnityEngine::Transform>  anchor;

/// @brief Field attachScale, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_attachScale, put=__cordl_internal_set_attachScale)) ::UnityEngine::Vector3  attachScale;

static inline ::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0* New_ctor() ;

/// @brief Method <InstantiateIntoAnchor>b__0, addr 0x5c528cc, size 0x248, virtual false, abstract: false, final false
inline void _InstantiateIntoAnchor_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  handle) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_anchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_anchor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_attachScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_attachScale() ;

constexpr void __cordl_internal_set_anchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_attachScale(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5c52184, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCollectionDisplay___c__DisplayClass45_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCollectionDisplay___c__DisplayClass45_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCollectionDisplay___c__DisplayClass45_0(CosmeticCollectionDisplay___c__DisplayClass45_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCollectionDisplay___c__DisplayClass45_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCollectionDisplay___c__DisplayClass45_0(CosmeticCollectionDisplay___c__DisplayClass45_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4266};

/// @brief Field anchor, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___anchor;

/// @brief Field attachScale, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___attachScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0, ___anchor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0, ___attachScale) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking
