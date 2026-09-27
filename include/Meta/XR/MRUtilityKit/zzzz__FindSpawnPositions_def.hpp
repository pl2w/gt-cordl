#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/FindSpawnPositions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/zzzz__FindSpawnPositions_SpawnLocation_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_RoomFilter_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FindSpawnPositions)
namespace GlobalNamespace {
struct FindSpawnPositions_SpawnLocation;
}
namespace Meta::XR::MRUtilityKit {
class MRUKRoom;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class FindSpawnPositions;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::FindSpawnPositions*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::FindSpawnPositions*, "Meta.XR.MRUtilityKit", "FindSpawnPositions");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.FindSpawnPositions::SpawnLocation, Meta.XR.MRUtilityKit.MRUK::RoomFilter, Meta.XR.MRUtilityKit.MRUKAnchor::SceneLabels, UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.FindSpawnPositions
class CORDL_TYPE FindSpawnPositions : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SpawnLocation = ::GlobalNamespace::FindSpawnPositions_SpawnLocation;

/// @brief Field CheckOverlaps, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_CheckOverlaps, put=__cordl_internal_set_CheckOverlaps)) bool  CheckOverlaps;

/// @brief Field Labels, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Labels, put=__cordl_internal_set_Labels)) ::GlobalNamespace::MRUKAnchor_SceneLabels  Labels;

/// @brief Field LayerMask, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_LayerMask, put=__cordl_internal_set_LayerMask)) ::UnityEngine::LayerMask  LayerMask;

/// @brief Field MaxIterations, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxIterations, put=__cordl_internal_set_MaxIterations)) int32_t  MaxIterations;

/// @brief Field OverrideBounds, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_OverrideBounds, put=__cordl_internal_set_OverrideBounds)) float_t  OverrideBounds;

/// @brief Field SpawnAmount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_SpawnAmount, put=__cordl_internal_set_SpawnAmount)) int32_t  SpawnAmount;

/// @brief Field SpawnLocations, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_SpawnLocations, put=__cordl_internal_set_SpawnLocations)) ::GlobalNamespace::FindSpawnPositions_SpawnLocation  SpawnLocations;

/// @brief Field SpawnObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_SpawnObject, put=__cordl_internal_set_SpawnObject)) ::UnityW<::UnityEngine::GameObject>  SpawnObject;

/// @brief Field SpawnOnStart, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_SpawnOnStart, put=__cordl_internal_set_SpawnOnStart)) ::GlobalNamespace::MRUK_RoomFilter  SpawnOnStart;

/// @brief Field SurfaceClearanceDistance, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SurfaceClearanceDistance, put=__cordl_internal_set_SurfaceClearanceDistance)) float_t  SurfaceClearanceDistance;

static inline ::Meta::XR::MRUtilityKit::FindSpawnPositions* New_ctor() ;

/// @brief Method Start, addr 0x9f0fb90, size 0x1ec, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartSpawn, addr 0x9f0fd7c, size 0x190, virtual false, abstract: false, final false
inline void StartSpawn() ;

/// @brief Method StartSpawn, addr 0x9f0ff0c, size 0x918, virtual false, abstract: false, final false
inline void StartSpawn(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__11_0, addr 0x9f1087c, size 0xd4, virtual false, abstract: false, final false
inline void _Start_b__11_0() ;

constexpr bool const& __cordl_internal_get_CheckOverlaps() const;

constexpr bool& __cordl_internal_get_CheckOverlaps() ;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& __cordl_internal_get_Labels() const;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& __cordl_internal_get_Labels() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_LayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_LayerMask() ;

constexpr int32_t const& __cordl_internal_get_MaxIterations() const;

constexpr int32_t& __cordl_internal_get_MaxIterations() ;

constexpr float_t const& __cordl_internal_get_OverrideBounds() const;

constexpr float_t& __cordl_internal_get_OverrideBounds() ;

constexpr int32_t const& __cordl_internal_get_SpawnAmount() const;

constexpr int32_t& __cordl_internal_get_SpawnAmount() ;

constexpr ::GlobalNamespace::FindSpawnPositions_SpawnLocation const& __cordl_internal_get_SpawnLocations() const;

constexpr ::GlobalNamespace::FindSpawnPositions_SpawnLocation& __cordl_internal_get_SpawnLocations() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_SpawnObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_SpawnObject() ;

constexpr ::GlobalNamespace::MRUK_RoomFilter const& __cordl_internal_get_SpawnOnStart() const;

constexpr ::GlobalNamespace::MRUK_RoomFilter& __cordl_internal_get_SpawnOnStart() ;

constexpr float_t const& __cordl_internal_get_SurfaceClearanceDistance() const;

constexpr float_t& __cordl_internal_get_SurfaceClearanceDistance() ;

constexpr void __cordl_internal_set_CheckOverlaps(bool  value) ;

constexpr void __cordl_internal_set_Labels(::GlobalNamespace::MRUKAnchor_SceneLabels  value) ;

constexpr void __cordl_internal_set_LayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_MaxIterations(int32_t  value) ;

constexpr void __cordl_internal_set_OverrideBounds(float_t  value) ;

constexpr void __cordl_internal_set_SpawnAmount(int32_t  value) ;

constexpr void __cordl_internal_set_SpawnLocations(::GlobalNamespace::FindSpawnPositions_SpawnLocation  value) ;

constexpr void __cordl_internal_set_SpawnObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_SpawnOnStart(::GlobalNamespace::MRUK_RoomFilter  value) ;

constexpr void __cordl_internal_set_SurfaceClearanceDistance(float_t  value) ;

/// @brief Method .ctor, addr 0x9f10824, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FindSpawnPositions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FindSpawnPositions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FindSpawnPositions(FindSpawnPositions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FindSpawnPositions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FindSpawnPositions(FindSpawnPositions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25780};

/// [Tooltip("When the scene data is loaded, this controls what room(s) the prefabs will spawn in.")]
/// @brief Field SpawnOnStart, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::MRUK_RoomFilter  ___SpawnOnStart;

/// [SerializeField]
/// [Tooltip("Prefab to be placed into the scene, or object in the scene to be moved around.")]
/// @brief Field SpawnObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___SpawnObject;

/// [SerializeField]
/// [Tooltip("Number of SpawnObject(s) to place into the scene per room, only applies to Prefabs.")]
/// @brief Field SpawnAmount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___SpawnAmount;

/// [SerializeField]
/// [Tooltip("Maximum number of times to attempt spawning/moving an object before giving up.")]
/// @brief Field MaxIterations, offset: 0x34, size: 0x4, def value: None
 int32_t  ___MaxIterations;

/// [FormerlySerializedAs("selectedSnapOption")]
/// [SerializeField]
/// [Tooltip("Attach content to scene surfaces.")]
/// @brief Field SpawnLocations, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::FindSpawnPositions_SpawnLocation  ___SpawnLocations;

/// [SerializeField]
/// [Tooltip("When using surface spawning, use this to filter which anchor labels should be included. Eg, spawn only on TABLE or OTHER.")]
/// @brief Field Labels, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::MRUKAnchor_SceneLabels  ___Labels;

/// [SerializeField]
/// [Tooltip("If enabled then the spawn position will be checked to make sure there is no overlap with physics colliders including themselves.")]
/// @brief Field CheckOverlaps, offset: 0x40, size: 0x1, def value: None
 bool  ___CheckOverlaps;

/// [SerializeField]
/// [Tooltip("Required free space for the object (Set negative to auto-detect using GetPrefabBounds)")]
/// @brief Field OverrideBounds, offset: 0x44, size: 0x4, def value: None
 float_t  ___OverrideBounds;

/// [FormerlySerializedAs("layerMask")]
/// [SerializeField]
/// [Tooltip("Set the layer(s) for the physics bounding box checks, collisions will be avoided with these layers.")]
/// @brief Field LayerMask, offset: 0x48, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___LayerMask;

/// [SerializeField]
/// [Tooltip("The clearance distance required in front of the surface in order for it to be considered a valid spawn position")]
/// @brief Field SurfaceClearanceDistance, offset: 0x4c, size: 0x4, def value: None
 float_t  ___SurfaceClearanceDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::FindSpawnPositions, ___SpawnOnStart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::FindSpawnPositions, ___SpawnObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::FindSpawnPositions, ___SpawnAmount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::FindSpawnPositions, ___MaxIterations) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::FindSpawnPositions, ___SpawnLocations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::FindSpawnPositions, ___Labels) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::FindSpawnPositions, ___CheckOverlaps) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::FindSpawnPositions, ___OverrideBounds) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::FindSpawnPositions, ___LayerMask) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::FindSpawnPositions, ___SurfaceClearanceDistance) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::FindSpawnPositions) == 0x50, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
