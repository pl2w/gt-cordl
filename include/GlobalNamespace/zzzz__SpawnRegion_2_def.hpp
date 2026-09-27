#pragma once
// IWYU pragma private; include "GlobalNamespace/SpawnRegion_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpawnRegion_2)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TItem,typename TRegion>
class SpawnRegion_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::SpawnRegion_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::SpawnRegion_2, "", "SpawnRegion`2");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.RaycastHit, UnityEngine.Transform
namespace GlobalNamespace {
// cpp template
template<typename TItem,typename TRegion>
// Is value type: false
// CS Name: SpawnRegion`2<TItem,TRegion>
class CORDL_TYPE SpawnRegion_2 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_HasSpawnOrigins)) bool  HasSpawnOrigins;

 __declspec(property(get=get_ItemCount)) int32_t  ItemCount;

 __declspec(property(get=get_Items)) ::System::Collections::Generic::List_1<TItem>*  Items;

 __declspec(property(get=get_MaxItems, put=set_MaxItems)) int32_t  MaxItems;

/// @brief Field <ID>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__ID_k__BackingField, put=__cordl_internal_set__ID_k__BackingField)) int32_t  _ID_k__BackingField;

/// @brief Field <MaxItems>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxItems_k__BackingField, put=__cordl_internal_set__MaxItems_k__BackingField)) int32_t  _MaxItems_k__BackingField;

 __declspec(property(get=get_ID, put=set_ID)) int32_t  _cordl_ID;

/// @brief Field _hitTestBuffer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__hitTestBuffer, put=__cordl_internal_set__hitTestBuffer)) ::ArrayW<::UnityEngine::RaycastHit>  _hitTestBuffer;

/// @brief Field _itemRegionLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__itemRegionLookup, put=setStaticF__itemRegionLookup)) ::System::Collections::Generic::Dictionary_2<TItem,int32_t>*  _itemRegionLookup;

/// @brief Field _items, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__items, put=__cordl_internal_set__items)) ::System::Collections::Generic::List_1<TItem>*  _items;

/// @brief Field _regionLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__regionLookup, put=setStaticF__regionLookup)) ::System::Collections::Generic::Dictionary_2<int32_t,TRegion>*  _regionLookup;

/// @brief Field _regions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__regions, put=setStaticF__regions)) ::System::Collections::Generic::List_1<TRegion>*  _regions;

/// @brief Field _scale, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__scale, put=__cordl_internal_set__scale)) float_t  _scale;

/// @brief Field _testAgainstGeo, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get__testAgainstGeo, put=__cordl_internal_set__testAgainstGeo)) bool  _testAgainstGeo;

/// @brief Field _useSpawnOrigins, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__useSpawnOrigins, put=__cordl_internal_set__useSpawnOrigins)) bool  _useSpawnOrigins;

/// @brief Field geoTestPoint, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_geoTestPoint, put=__cordl_internal_set_geoTestPoint)) ::UnityW<::UnityEngine::Transform>  geoTestPoint;

/// @brief Field spawnOrigins, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnOrigins, put=__cordl_internal_set_spawnOrigins)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  spawnOrigins;

/// @brief Method AddItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddItem(TItem  item) ;

/// @brief Method AddItemToRegion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void AddItemToRegion(TItem  item, int32_t  regionId) ;

/// @brief Method GetSpawnPointWithNormal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ValueTuple_3<bool,::UnityEngine::Vector3,::UnityEngine::Vector3> GetSpawnPointWithNormal(int32_t  maxTries) ;

/// @brief Method IsInsideGeo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsInsideGeo(::UnityEngine::Vector3  point) ;

static inline ::GlobalNamespace::SpawnRegion_2<TItem,TRegion>* New_ctor() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RegisterRegion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void RegisterRegion(TRegion  region) ;

/// @brief Method RemoveItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveItem(TItem  item) ;

/// @brief Method RemoveItemFromRegion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void RemoveItemFromRegion(TItem  item) ;

/// @brief Method TryGetSpawnPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetSpawnPoint(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  distance, ::by_ref<::UnityEngine::RaycastHit>  spawnPoint) ;

/// @brief Method TryGetSpawnPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetSpawnPoint(::by_ref<::UnityEngine::RaycastHit>  spawnPoint) ;

/// @brief Method UnregisterRegion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void UnregisterRegion(TRegion  region) ;

constexpr int32_t const& __cordl_internal_get__ID_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ID_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__MaxItems_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__MaxItems_k__BackingField() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get__hitTestBuffer() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get__hitTestBuffer() ;

constexpr ::System::Collections::Generic::List_1<TItem>* const& __cordl_internal_get__items() const;

constexpr ::System::Collections::Generic::List_1<TItem>*& __cordl_internal_get__items() ;

constexpr float_t const& __cordl_internal_get__scale() const;

constexpr float_t& __cordl_internal_get__scale() ;

constexpr bool const& __cordl_internal_get__testAgainstGeo() const;

constexpr bool& __cordl_internal_get__testAgainstGeo() ;

constexpr bool const& __cordl_internal_get__useSpawnOrigins() const;

constexpr bool& __cordl_internal_get__useSpawnOrigins() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_geoTestPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_geoTestPoint() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_spawnOrigins() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_spawnOrigins() ;

constexpr void __cordl_internal_set__ID_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__MaxItems_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__hitTestBuffer(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__items(::System::Collections::Generic::List_1<TItem>*  value) ;

constexpr void __cordl_internal_set__scale(float_t  value) ;

constexpr void __cordl_internal_set__testAgainstGeo(bool  value) ;

constexpr void __cordl_internal_set__useSpawnOrigins(bool  value) ;

constexpr void __cordl_internal_set_geoTestPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_spawnOrigins(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<TItem,int32_t>* getStaticF__itemRegionLookup() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,TRegion>* getStaticF__regionLookup() ;

static inline ::System::Collections::Generic::List_1<TRegion>* getStaticF__regions() ;

/// @brief Method get_HasSpawnOrigins, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_HasSpawnOrigins() ;

/// [CompilerGenerated]
/// @brief Method get_ID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_ID() ;

/// @brief Method get_ItemCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_ItemCount() ;

/// @brief Method get_Items, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<TItem>* get_Items() ;

/// [CompilerGenerated]
/// @brief Method get_MaxItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_MaxItems() ;

/// @brief Method get_Regions, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<TRegion>* get_Regions() ;

static inline void setStaticF__itemRegionLookup(::System::Collections::Generic::Dictionary_2<TItem,int32_t>*  value) ;

static inline void setStaticF__regionLookup(::System::Collections::Generic::Dictionary_2<int32_t,TRegion>*  value) ;

static inline void setStaticF__regions(::System::Collections::Generic::List_1<TRegion>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_ID(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_MaxItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_MaxItems(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpawnRegion_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpawnRegion_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpawnRegion_2(SpawnRegion_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpawnRegion_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpawnRegion_2(SpawnRegion_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{381};

/// [SerializeField]
/// @brief Field _scale, offset: 0x20, size: 0x4, def value: None
 float_t  ____scale;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <MaxItems>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  ____MaxItems_k__BackingField;

/// [SerializeField]
/// [Tooltip("If set, spawn points will be created via raycasts from one of these points.")]
/// @brief Field spawnOrigins, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___spawnOrigins;

/// [SerializeField]
/// [Tooltip("If set, all spawn points will be tested against this transform to see if they\'re inside geo.  Ignored if spawn origins are configured.")]
/// @brief Field geoTestPoint, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___geoTestPoint;

/// @brief Field _items, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<TItem>*  ____items;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <ID>k__BackingField, offset: 0x40, size: 0x4, def value: None
 int32_t  ____ID_k__BackingField;

/// @brief Field _useSpawnOrigins, offset: 0x44, size: 0x1, def value: None
 bool  ____useSpawnOrigins;

/// @brief Field _testAgainstGeo, offset: 0x45, size: 0x1, def value: None
 bool  ____testAgainstGeo;

/// @brief Field _hitTestBuffer, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ____hitTestBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
