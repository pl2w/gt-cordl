#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/SceneDecorator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_RoomFilter_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SceneDecorator)
namespace GlobalNamespace {
struct MRUKAnchor_SceneLabels;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Candidate;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class PoolManagerComponent;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class PoolManagerSingleton;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class SceneDecoration;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class SceneDecorator_IDistribution;
}
namespace Meta::XR::MRUtilityKit {
class MRUKAnchor;
}
namespace Meta::XR::MRUtilityKit {
class MRUKRoom;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class SceneDecorator;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class SceneDecorator_IDistribution;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*);
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*, "Meta.XR.MRUtilityKit.SceneDecorator", "SceneDecorator");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*, "Meta.XR.MRUtilityKit.SceneDecorator", "SceneDecorator/IDistribution");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.MRUK::RoomFilter, UnityEngine.Collider, UnityEngine.MonoBehaviour
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator
class CORDL_TYPE SceneDecorator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using IDistribution = ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution;

/// @brief Field DecorateOnStart, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_DecorateOnStart, put=__cordl_internal_set_DecorateOnStart)) ::GlobalNamespace::MRUK_RoomFilter  DecorateOnStart;

/// @brief Field PI, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_PI, put=setStaticF_PI)) float_t  PI;

/// @brief Field TrackUpdates, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_TrackUpdates, put=__cordl_internal_set_TrackUpdates)) bool  TrackUpdates;

/// @brief Field _parent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator>  _parent;

/// @brief Field _poolManagerComponent, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__poolManagerComponent, put=__cordl_internal_set__poolManagerComponent)) ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent>  _poolManagerComponent;

/// @brief Field _poolManagerSingleton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__poolManagerSingleton, put=__cordl_internal_set__poolManagerSingleton)) ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton>  _poolManagerSingleton;

/// @brief Field _recursionDepth, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__recursionDepth, put=__cordl_internal_set__recursionDepth)) int32_t  _recursionDepth;

/// @brief Field _spawnedDecorations, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__spawnedDecorations, put=__cordl_internal_set__spawnedDecorations)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  _spawnedDecorations;

/// @brief Field customColliders, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_customColliders, put=__cordl_internal_set_customColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  customColliders;

/// @brief Field customTargetTags, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_customTargetTags, put=__cordl_internal_set_customTargetTags)) ::ArrayW<::StringW>  customTargetTags;

/// @brief Field recursionLimit, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_recursionLimit, put=__cordl_internal_set_recursionLimit)) int32_t  recursionLimit;

/// @brief Field sceneDecorations, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneDecorations, put=__cordl_internal_set_sceneDecorations)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration>>*  sceneDecorations;

/// @brief Method ApplyModifiers, addr 0x9f57394, size 0xc8, virtual false, abstract: false, final false
inline void ApplyModifiers(::UnityEngine::GameObject*  decorationGO, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate) ;

/// @brief Method ClearDecorations, addr 0x9f56174, size 0x148, virtual false, abstract: false, final false
inline void ClearDecorations() ;

/// @brief Method ClearDecorations, addr 0x9f55cdc, size 0x35c, virtual false, abstract: false, final false
inline void ClearDecorations(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// @brief Method ClearDecorations, addr 0x9f55658, size 0x370, virtual false, abstract: false, final false
inline void ClearDecorations(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method Decorate, addr 0x9f56038, size 0x134, virtual false, abstract: false, final false
inline void Decorate(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// @brief Method Decorate, addr 0x9f56864, size 0x30, virtual false, abstract: false, final false
inline void Decorate(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration) ;

/// @brief Method Decorate, addr 0x9f56450, size 0x414, virtual false, abstract: false, final false
inline void Decorate(::Meta::XR::MRUtilityKit::MRUKRoom*  room, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration) ;

/// @brief Method DecorateScene, addr 0x9f562bc, size 0x194, virtual false, abstract: false, final false
inline void DecorateScene() ;

/// @brief Method DecorateScene, addr 0x9f55b5c, size 0x8, virtual false, abstract: false, final false
inline void DecorateScene(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method DecorateScene, addr 0x9f54d30, size 0x14c, virtual false, abstract: false, final false
inline void DecorateScene(::Meta::XR::MRUtilityKit::MRUKRoom*  room, int32_t  recursionDepth) ;

/// @brief Method DecorateScene, addr 0x9f54e7c, size 0x138, virtual false, abstract: false, final false
inline void DecorateScene(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms, int32_t  recursionDepth) ;

/// @brief Method Distribute, addr 0x9f56894, size 0x184, virtual false, abstract: false, final false
inline void Distribute(::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration) ;

/// @brief Method GenerateAt, addr 0x9f5745c, size 0xdbc, virtual false, abstract: false, final false
inline void GenerateAt(::UnityEngine::Vector3  worldPos, ::UnityEngine::Vector2  localPos, ::UnityEngine::Vector2  localPosNormalized, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration) ;

/// @brief Method GenerateOn, addr 0x9f4fde8, size 0x174, virtual false, abstract: false, final false
inline void GenerateOn(::UnityEngine::Vector2  localPos, ::UnityEngine::Vector2  localPosNormalized, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration) ;

/// @brief Method GetAnchorsWithLabel, addr 0x9f56a18, size 0x200, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* GetAnchorsWithLabel(::Meta::XR::MRUtilityKit::MRUKRoom*  room, ::GlobalNamespace::MRUKAnchor_SceneLabels  label) ;

/// @brief Method InitPools, addr 0x9f54a20, size 0x310, virtual false, abstract: false, final false
inline void InitPools() ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9f54fb4, size 0x22c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9f55408, size 0x228, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9f551e0, size 0x228, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReceiveAnchorCreated, addr 0x9f56170, size 0x4, virtual false, abstract: false, final false
inline void ReceiveAnchorCreated(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// @brief Method ReceiveAnchorRemoved, addr 0x9f5616c, size 0x4, virtual false, abstract: false, final false
inline void ReceiveAnchorRemoved(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// @brief Method ReceiveAnchorUpdated, addr 0x9f55ca8, size 0x34, virtual false, abstract: false, final false
inline void ReceiveAnchorUpdated(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// @brief Method ReceiveRoomCreated, addr 0x9f55b0c, size 0x50, virtual false, abstract: false, final false
inline void ReceiveRoomCreated(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method ReceiveRoomRemoved, addr 0x9f55630, size 0x28, virtual false, abstract: false, final false
inline void ReceiveRoomRemoved(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method RegisterAnchorUpdates, addr 0x9f55b64, size 0x144, virtual false, abstract: false, final false
inline void RegisterAnchorUpdates(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method Start, addr 0x9f5458c, size 0x494, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TestCollider, addr 0x9f56c18, size 0x2dc, virtual false, abstract: false, final false
static inline void TestCollider(::UnityEngine::Collider*  c, ::UnityEngine::Vector3  worldPos, ::UnityEngine::Vector3  rayDir, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration, ::by_ref<::UnityEngine::RaycastHit>  closestHit) ;

/// @brief Method TestConstraints, addr 0x9f57234, size 0x160, virtual false, abstract: false, final false
inline bool TestConstraints(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

/// @brief Method TestPhysicsLayers, addr 0x9f56ef4, size 0x340, virtual false, abstract: false, final false
static inline void TestPhysicsLayers(::UnityEngine::Vector3  worldPos, ::UnityEngine::Vector3  rayDir, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration, ::by_ref<::UnityEngine::RaycastHit>  closestHit) ;

/// @brief Method UnRegisterAnchorUpdates, addr 0x9f559c8, size 0x144, virtual false, abstract: false, final false
inline void UnRegisterAnchorUpdates(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__13_0, addr 0x9f58308, size 0x138, virtual false, abstract: false, final false
inline void _Start_b__13_0() ;

constexpr ::GlobalNamespace::MRUK_RoomFilter const& __cordl_internal_get_DecorateOnStart() const;

constexpr ::GlobalNamespace::MRUK_RoomFilter& __cordl_internal_get_DecorateOnStart() ;

constexpr bool const& __cordl_internal_get_TrackUpdates() const;

constexpr bool& __cordl_internal_get_TrackUpdates() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator> const& __cordl_internal_get__parent() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator>& __cordl_internal_get__parent() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent> const& __cordl_internal_get__poolManagerComponent() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent>& __cordl_internal_get__poolManagerComponent() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton> const& __cordl_internal_get__poolManagerSingleton() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton>& __cordl_internal_get__poolManagerSingleton() ;

constexpr int32_t const& __cordl_internal_get__recursionDepth() const;

constexpr int32_t& __cordl_internal_get__recursionDepth() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* const& __cordl_internal_get__spawnedDecorations() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*& __cordl_internal_get__spawnedDecorations() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_customColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_customColliders() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_customTargetTags() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_customTargetTags() ;

constexpr int32_t const& __cordl_internal_get_recursionLimit() const;

constexpr int32_t& __cordl_internal_get_recursionLimit() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration>>* const& __cordl_internal_get_sceneDecorations() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration>>*& __cordl_internal_get_sceneDecorations() ;

constexpr void __cordl_internal_set_DecorateOnStart(::GlobalNamespace::MRUK_RoomFilter  value) ;

constexpr void __cordl_internal_set_TrackUpdates(bool  value) ;

constexpr void __cordl_internal_set__parent(::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator>  value) ;

constexpr void __cordl_internal_set__poolManagerComponent(::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent>  value) ;

constexpr void __cordl_internal_set__poolManagerSingleton(::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton>  value) ;

constexpr void __cordl_internal_set__recursionDepth(int32_t  value) ;

constexpr void __cordl_internal_set__spawnedDecorations(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value) ;

constexpr void __cordl_internal_set_customColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_customTargetTags(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_recursionLimit(int32_t  value) ;

constexpr void __cordl_internal_set_sceneDecorations(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration>>*  value) ;

/// @brief Method .ctor, addr 0x9f58218, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_PI() ;

static inline void setStaticF_PI(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneDecorator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneDecorator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneDecorator(SceneDecorator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneDecorator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneDecorator(SceneDecorator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25970};

/// [SerializeField]
/// @brief Field sceneDecorations, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration>>*  ___sceneDecorations;

/// [SerializeField]
/// @brief Field customColliders, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___customColliders;

/// [SerializeField]
/// @brief Field customTargetTags, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___customTargetTags;

/// [SerializeField]
/// @brief Field recursionLimit, offset: 0x38, size: 0x4, def value: None
 int32_t  ___recursionLimit;

/// @brief Field _recursionDepth, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____recursionDepth;

/// @brief Field _parent, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator>  ____parent;

/// [Tooltip("When the scene data is loaded, this controls what room(s) the decorator will add decorations.")]
/// @brief Field DecorateOnStart, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::MRUK_RoomFilter  ___DecorateOnStart;

/// [Tooltip("If enabled, updates on scene elements such as rooms and anchors will be handled by this class")]
/// @brief Field TrackUpdates, offset: 0x4c, size: 0x1, def value: None
 bool  ___TrackUpdates;

/// @brief Field _poolManagerComponent, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent>  ____poolManagerComponent;

/// @brief Field _poolManagerSingleton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton>  ____poolManagerSingleton;

/// @brief Field _spawnedDecorations, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  ____spawnedDecorations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator, ___sceneDecorations) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator, ___customColliders) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator, ___customTargetTags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator, ___recursionLimit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator, ____recursionDepth) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator, ____parent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator, ___DecorateOnStart) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator, ___TrackUpdates) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator, ____poolManagerComponent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator, ____poolManagerSingleton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator, ____spawnedDecorations) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator) == 0x68, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
// Dependencies 
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator/IDistribution
class CORDL_TYPE SceneDecorator_IDistribution {
public:
// Declarations
/// @brief Method Distribute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Distribute(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*  sceneDecorator, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration) ;

// Ctor Parameters [CppParam { name: "", ty: "SceneDecorator_IDistribution", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneDecorator_IDistribution(SceneDecorator_IDistribution const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25969};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
