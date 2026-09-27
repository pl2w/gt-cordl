#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/AnchorPrefabSpawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_RoomFilter_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_SceneTrackingSettings_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AnchorPrefabSpawner)
namespace GlobalNamespace {
struct AnchorPrefabSpawner_AlignMode;
}
namespace GlobalNamespace {
struct AnchorPrefabSpawner_AnchorPrefabGroup;
}
namespace GlobalNamespace {
struct AnchorPrefabSpawner_ScalingMode;
}
namespace GlobalNamespace {
struct AnchorPrefabSpawner_SelectionMode;
}
namespace GlobalNamespace {
struct MRUKAnchor_SceneLabels;
}
namespace Meta::XR::MRUtilityKit {
class ICustomAnchorPrefabSpawner;
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
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Random;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class AnchorPrefabSpawner;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*, "Meta.XR.MRUtilityKit", "AnchorPrefabSpawner");
// [HelpURL("https://developers.meta.com/horizon/reference/mruk/latest/class_meta_x_r_m_r_utility_kit_anchor_prefab_spawner")]
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.MRUK::RoomFilter, Meta.XR.MRUtilityKit.MRUK::SceneTrackingSettings, UnityEngine.MonoBehaviour
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.AnchorPrefabSpawner
class CORDL_TYPE AnchorPrefabSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AlignMode = ::GlobalNamespace::AnchorPrefabSpawner_AlignMode;

using AnchorPrefabGroup = ::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup;

using ScalingMode = ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode;

using SelectionMode = ::GlobalNamespace::AnchorPrefabSpawner_SelectionMode;

 __declspec(property(get=get_AnchorPrefabSpawnerObjects)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*  AnchorPrefabSpawnerObjects;

/// @brief Field PrefabsToSpawn, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_PrefabsToSpawn, put=__cordl_internal_set_PrefabsToSpawn)) ::System::Collections::Generic::List_1<::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup>*  PrefabsToSpawn;

/// @brief Field SceneTrackingSettings, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_SceneTrackingSettings, put=__cordl_internal_set_SceneTrackingSettings)) ::GlobalNamespace::MRUK_SceneTrackingSettings  SceneTrackingSettings;

/// @brief Field SeedValue, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_SeedValue, put=__cordl_internal_set_SeedValue)) int32_t  SeedValue;

/// @brief Field SpawnOnStart, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_SpawnOnStart, put=__cordl_internal_set_SpawnOnStart)) ::GlobalNamespace::MRUK_RoomFilter  SpawnOnStart;

/// @brief [Obsolete("Use AnchorPrefabSpawnerObjects property instead. This property is inefficient because it will generate a new list each time it is accessed")]
 __declspec(property(get=get_SpawnedPrefabs)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  SpawnedPrefabs;

/// @brief Field Suffix, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Suffix, put=setStaticF_Suffix)) ::StringW  Suffix;

/// @brief Field TrackUpdates, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_TrackUpdates, put=__cordl_internal_set_TrackUpdates)) bool  TrackUpdates;

/// @brief Field <AnchorPrefabSpawnerObjects>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__AnchorPrefabSpawnerObjects_k__BackingField, put=__cordl_internal_set__AnchorPrefabSpawnerObjects_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*  _AnchorPrefabSpawnerObjects_k__BackingField;

/// @brief Field _customPrefabAlignmentPlaneRect, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__customPrefabAlignmentPlaneRect, put=__cordl_internal_set__customPrefabAlignmentPlaneRect)) ::System::Func_3<::UnityEngine::Rect,::System::Nullable_1<::UnityEngine::Bounds>,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector2>>*  _customPrefabAlignmentPlaneRect;

/// @brief Field _customPrefabAlignmentVolume, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__customPrefabAlignmentVolume, put=__cordl_internal_set__customPrefabAlignmentVolume)) ::System::Func_3<::UnityEngine::Bounds,::System::Nullable_1<::UnityEngine::Bounds>,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>*  _customPrefabAlignmentVolume;

/// @brief Field _customPrefabScalingPlaneRect, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__customPrefabScalingPlaneRect, put=__cordl_internal_set__customPrefabScalingPlaneRect)) ::System::Func_2<::UnityEngine::Vector2,::UnityEngine::Vector2>*  _customPrefabScalingPlaneRect;

/// @brief Field _customPrefabScalingVolume, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__customPrefabScalingVolume, put=__cordl_internal_set__customPrefabScalingVolume)) ::System::Func_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*  _customPrefabScalingVolume;

/// @brief Field _customPrefabSelection, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__customPrefabSelection, put=__cordl_internal_set__customPrefabSelection)) ::System::Func_3<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*,::UnityW<::UnityEngine::GameObject>>*  _customPrefabSelection;

/// @brief Field _random, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__random, put=__cordl_internal_set__random)) ::System::Random*  _random;

/// @brief Field onPrefabSpawned, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPrefabSpawned, put=__cordl_internal_set_onPrefabSpawned)) ::UnityEngine::Events::UnityEvent*  onPrefabSpawned;

/// @brief Convert operator to "::Meta::XR::MRUtilityKit::ICustomAnchorPrefabSpawner"
constexpr operator  ::Meta::XR::MRUtilityKit::ICustomAnchorPrefabSpawner*() noexcept;

/// @brief Method ClearPrefab, addr 0x9f04884, size 0xf8, virtual true, abstract: false, final false
inline void ClearPrefab(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo) ;

/// @brief Method ClearPrefab, addr 0x9f0482c, size 0x58, virtual true, abstract: false, final false
inline void ClearPrefab(::UnityEngine::GameObject*  go) ;

/// @brief Method ClearPrefabs, addr 0x9f0497c, size 0x16c, virtual true, abstract: false, final false
inline void ClearPrefabs() ;

/// @brief Method ClearPrefabs, addr 0x9f04460, size 0x3cc, virtual true, abstract: false, final false
inline void ClearPrefabs(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method CustomPrefabAlignment, addr 0x9f0699c, size 0x4c, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 CustomPrefabAlignment(::UnityEngine::Rect  anchorPlaneRect, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds) ;

/// @brief Method CustomPrefabAlignment, addr 0x9f06950, size 0x4c, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 CustomPrefabAlignment(::UnityEngine::Bounds  anchorVolumeBounds, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds) ;

/// @brief Method CustomPrefabScaling, addr 0x9f06904, size 0x4c, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 CustomPrefabScaling(::UnityEngine::Vector2  localScale) ;

/// @brief Method CustomPrefabScaling, addr 0x9f068b8, size 0x4c, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 CustomPrefabScaling(::UnityEngine::Vector3  localScale) ;

/// @brief Method CustomPrefabSelection, addr 0x9f0686c, size 0x4c, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> CustomPrefabSelection(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  prefabs) ;

/// @brief Method InitializeRandom, addr 0x9f04e4c, size 0x88, virtual false, abstract: false, final false
inline void InitializeRandom(::by_ref<int32_t>  seed) ;

/// @brief Method LabelToPrefab, addr 0x9f057d8, size 0x28c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> LabelToPrefab(::GlobalNamespace::MRUKAnchor_SceneLabels  labels, ::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::by_ref<::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup>  prefabGroup) ;

static inline ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9f069e8, size 0x18, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9f03de4, size 0x20c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9f03bd8, size 0x20c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReceiveAnchorCreatedEvent, addr 0x9f0436c, size 0x8c, virtual true, abstract: false, final false
inline void ReceiveAnchorCreatedEvent(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo) ;

/// @brief Method ReceiveAnchorRemovedCallback, addr 0x9f0435c, size 0x10, virtual true, abstract: false, final false
inline void ReceiveAnchorRemovedCallback(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo) ;

/// @brief Method ReceiveAnchorUpdatedCallback, addr 0x9f04260, size 0xfc, virtual true, abstract: false, final false
inline void ReceiveAnchorUpdatedCallback(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo) ;

/// @brief Method ReceiveCreatedRoom, addr 0x9f043f8, size 0x68, virtual true, abstract: false, final false
inline void ReceiveCreatedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method ReceiveRemovedRoom, addr 0x9f03ff0, size 0x40, virtual true, abstract: false, final false
inline void ReceiveRemovedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method RegisterAnchorUpdates, addr 0x9f04148, size 0x118, virtual true, abstract: false, final false
inline void RegisterAnchorUpdates(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method SpawnPrefab, addr 0x9f04ed4, size 0x904, virtual true, abstract: false, final false
inline void SpawnPrefab(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo) ;

/// @brief Method SpawnPrefabs, addr 0x9f04ae8, size 0x1c0, virtual true, abstract: false, final false
inline void SpawnPrefabs(bool  clearPrefabs) ;

/// @brief Method SpawnPrefabs, addr 0x9f04df4, size 0x58, virtual true, abstract: false, final false
inline void SpawnPrefabs(::Meta::XR::MRUtilityKit::MRUKRoom*  room, bool  clearPrefabs) ;

/// @brief Method SpawnPrefabsInternal, addr 0x9f04ca8, size 0x14c, virtual false, abstract: false, final false
inline void SpawnPrefabsInternal(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method Start, addr 0x9f03988, size 0x250, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UnRegisterAnchorUpdates, addr 0x9f04030, size 0x118, virtual true, abstract: false, final false
inline void UnRegisterAnchorUpdates(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__22_0, addr 0x9f06b34, size 0x12c, virtual false, abstract: false, final false
inline void _Start_b__22_0() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup>* const& __cordl_internal_get_PrefabsToSpawn() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup>*& __cordl_internal_get_PrefabsToSpawn() ;

constexpr ::GlobalNamespace::MRUK_SceneTrackingSettings const& __cordl_internal_get_SceneTrackingSettings() const;

constexpr ::GlobalNamespace::MRUK_SceneTrackingSettings& __cordl_internal_get_SceneTrackingSettings() ;

constexpr int32_t const& __cordl_internal_get_SeedValue() const;

constexpr int32_t& __cordl_internal_get_SeedValue() ;

constexpr ::GlobalNamespace::MRUK_RoomFilter const& __cordl_internal_get_SpawnOnStart() const;

constexpr ::GlobalNamespace::MRUK_RoomFilter& __cordl_internal_get_SpawnOnStart() ;

constexpr bool const& __cordl_internal_get_TrackUpdates() const;

constexpr bool& __cordl_internal_get_TrackUpdates() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__AnchorPrefabSpawnerObjects_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__AnchorPrefabSpawnerObjects_k__BackingField() ;

constexpr ::System::Func_3<::UnityEngine::Rect,::System::Nullable_1<::UnityEngine::Bounds>,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector2>>* const& __cordl_internal_get__customPrefabAlignmentPlaneRect() const;

constexpr ::System::Func_3<::UnityEngine::Rect,::System::Nullable_1<::UnityEngine::Bounds>,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector2>>*& __cordl_internal_get__customPrefabAlignmentPlaneRect() ;

constexpr ::System::Func_3<::UnityEngine::Bounds,::System::Nullable_1<::UnityEngine::Bounds>,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>* const& __cordl_internal_get__customPrefabAlignmentVolume() const;

constexpr ::System::Func_3<::UnityEngine::Bounds,::System::Nullable_1<::UnityEngine::Bounds>,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>*& __cordl_internal_get__customPrefabAlignmentVolume() ;

constexpr ::System::Func_2<::UnityEngine::Vector2,::UnityEngine::Vector2>* const& __cordl_internal_get__customPrefabScalingPlaneRect() const;

constexpr ::System::Func_2<::UnityEngine::Vector2,::UnityEngine::Vector2>*& __cordl_internal_get__customPrefabScalingPlaneRect() ;

constexpr ::System::Func_2<::UnityEngine::Vector3,::UnityEngine::Vector3>* const& __cordl_internal_get__customPrefabScalingVolume() const;

constexpr ::System::Func_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*& __cordl_internal_get__customPrefabScalingVolume() ;

constexpr ::System::Func_3<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__customPrefabSelection() const;

constexpr ::System::Func_3<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__customPrefabSelection() ;

constexpr ::System::Random* const& __cordl_internal_get__random() const;

constexpr ::System::Random*& __cordl_internal_get__random() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onPrefabSpawned() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onPrefabSpawned() ;

constexpr void __cordl_internal_set_PrefabsToSpawn(::System::Collections::Generic::List_1<::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup>*  value) ;

constexpr void __cordl_internal_set_SceneTrackingSettings(::GlobalNamespace::MRUK_SceneTrackingSettings  value) ;

constexpr void __cordl_internal_set_SeedValue(int32_t  value) ;

constexpr void __cordl_internal_set_SpawnOnStart(::GlobalNamespace::MRUK_RoomFilter  value) ;

constexpr void __cordl_internal_set_TrackUpdates(bool  value) ;

constexpr void __cordl_internal_set__AnchorPrefabSpawnerObjects_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__customPrefabAlignmentPlaneRect(::System::Func_3<::UnityEngine::Rect,::System::Nullable_1<::UnityEngine::Bounds>,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector2>>*  value) ;

constexpr void __cordl_internal_set__customPrefabAlignmentVolume(::System::Func_3<::UnityEngine::Bounds,::System::Nullable_1<::UnityEngine::Bounds>,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>*  value) ;

constexpr void __cordl_internal_set__customPrefabScalingPlaneRect(::System::Func_2<::UnityEngine::Vector2,::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set__customPrefabScalingVolume(::System::Func_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set__customPrefabSelection(::System::Func_3<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*,::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__random(::System::Random*  value) ;

constexpr void __cordl_internal_set_onPrefabSpawned(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x9f06a00, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_Suffix() ;

/// [CompilerGenerated]
/// @brief Method get_AnchorPrefabSpawnerObjects, addr 0x9f038e0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>* get_AnchorPrefabSpawnerObjects() ;

/// @brief Method get_SpawnedPrefabs, addr 0x9f038e8, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* get_SpawnedPrefabs() ;

/// @brief Convert to "::Meta::XR::MRUtilityKit::ICustomAnchorPrefabSpawner"
constexpr ::Meta::XR::MRUtilityKit::ICustomAnchorPrefabSpawner* i___Meta__XR__MRUtilityKit__ICustomAnchorPrefabSpawner() noexcept;

static inline void setStaticF_Suffix(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnchorPrefabSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnchorPrefabSpawner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnchorPrefabSpawner(AnchorPrefabSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnchorPrefabSpawner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnchorPrefabSpawner(AnchorPrefabSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25765};

/// [Tooltip("When the scene data is loaded, this controls what room(s) the prefabs will spawn in.")]
/// @brief Field SpawnOnStart, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::MRUK_RoomFilter  ___SpawnOnStart;

/// [Tooltip("If enabled, updates on scene elements such as rooms and anchors will be handled by this class")]
/// @brief Field TrackUpdates, offset: 0x24, size: 0x1, def value: None
 bool  ___TrackUpdates;

/// [Tooltip("Specify a seed value for consistent prefab selection (0 = Random).")]
/// @brief Field SeedValue, offset: 0x28, size: 0x4, def value: None
 int32_t  ___SeedValue;

/// [CompilerGenerated]
/// @brief Field <AnchorPrefabSpawnerObjects>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*  ____AnchorPrefabSpawnerObjects_k__BackingField;

/// [Obsolete("Event onPrefabSpawned will be deprecated in a future version")]
/// @brief Field onPrefabSpawned, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onPrefabSpawned;

/// @brief Field PrefabsToSpawn, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup>*  ___PrefabsToSpawn;

/// @brief Field _random, offset: 0x48, size: 0x8, def value: None
 ::System::Random*  ____random;

/// @brief Field SceneTrackingSettings, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::MRUK_SceneTrackingSettings  ___SceneTrackingSettings;

/// @brief Field _customPrefabScalingVolume, offset: 0x60, size: 0x8, def value: None
 ::System::Func_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*  ____customPrefabScalingVolume;

/// @brief Field _customPrefabAlignmentVolume, offset: 0x68, size: 0x8, def value: None
 ::System::Func_3<::UnityEngine::Bounds,::System::Nullable_1<::UnityEngine::Bounds>,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>*  ____customPrefabAlignmentVolume;

/// @brief Field _customPrefabScalingPlaneRect, offset: 0x70, size: 0x8, def value: None
 ::System::Func_2<::UnityEngine::Vector2,::UnityEngine::Vector2>*  ____customPrefabScalingPlaneRect;

/// @brief Field _customPrefabAlignmentPlaneRect, offset: 0x78, size: 0x8, def value: None
 ::System::Func_3<::UnityEngine::Rect,::System::Nullable_1<::UnityEngine::Bounds>,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector2>>*  ____customPrefabAlignmentPlaneRect;

/// @brief Field _customPrefabSelection, offset: 0x80, size: 0x8, def value: None
 ::System::Func_3<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*,::UnityW<::UnityEngine::GameObject>>*  ____customPrefabSelection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::AnchorPrefabSpawner, ___SpawnOnStart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::AnchorPrefabSpawner, ___TrackUpdates) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::AnchorPrefabSpawner, ___SeedValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::AnchorPrefabSpawner, ____AnchorPrefabSpawnerObjects_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::AnchorPrefabSpawner, ___onPrefabSpawned) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::AnchorPrefabSpawner, ___PrefabsToSpawn) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::AnchorPrefabSpawner, ____random) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::AnchorPrefabSpawner, ___SceneTrackingSettings) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::AnchorPrefabSpawner, ____customPrefabScalingVolume) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::AnchorPrefabSpawner, ____customPrefabAlignmentVolume) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::AnchorPrefabSpawner, ____customPrefabScalingPlaneRect) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::AnchorPrefabSpawner, ____customPrefabAlignmentPlaneRect) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::AnchorPrefabSpawner, ____customPrefabSelection) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::AnchorPrefabSpawner) == 0x88, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
