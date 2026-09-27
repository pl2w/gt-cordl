#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_KMeansClustering.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_KMeansClustering)
namespace DigitalOpus::MB::Core {
class MB3_KMeansClustering_DataPoint;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_KMeansClustering;
}
namespace DigitalOpus::MB::Core {
class MB3_KMeansClustering_DataPoint;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_KMeansClustering*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_KMeansClustering*, "DigitalOpus.MB.Core", "MB3_KMeansClustering");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*, "DigitalOpus.MB.Core", "MB3_KMeansClustering/DataPoint");
// Dependencies System.Object, UnityEngine.Vector3
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_KMeansClustering
class CORDL_TYPE MB3_KMeansClustering : public ::System::Object {
public:
// Declarations
using DataPoint = ::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint;

/// @brief Field _clusters, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__clusters, put=__cordl_internal_set__clusters)) ::ArrayW<::UnityEngine::Vector3>  _clusters;

/// @brief Field _normalizedDataToCluster, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__normalizedDataToCluster, put=__cordl_internal_set__normalizedDataToCluster)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>*  _normalizedDataToCluster;

/// @brief Field _numberOfClusters, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__numberOfClusters, put=__cordl_internal_set__numberOfClusters)) int32_t  _numberOfClusters;

/// @brief Method AnyAreEmpty, addr 0x9d84cdc, size 0x124, virtual false, abstract: false, final false
inline bool AnyAreEmpty(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>*  data) ;

/// @brief Method Cluster, addr 0x9d8540c, size 0x98, virtual false, abstract: false, final false
inline void Cluster() ;

/// @brief Method ElucidanDistance, addr 0x9d84f8c, size 0x9c, virtual false, abstract: false, final false
inline float_t ElucidanDistance(::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*  dataPoint, ::UnityEngine::Vector3  mean) ;

/// @brief Method GetCluster, addr 0x9d8508c, size 0x380, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* GetCluster(int32_t  idx, ::by_ref<::UnityEngine::Vector3>  mean, ::by_ref<float_t>  size) ;

/// @brief Method InitializeCentroids, addr 0x9d849dc, size 0xe0, virtual false, abstract: false, final false
inline void InitializeCentroids() ;

/// @brief Method MinIndex, addr 0x9d85028, size 0x64, virtual false, abstract: false, final false
inline int32_t MinIndex(::ArrayW<float_t>  distances) ;

static inline ::DigitalOpus::MB::Core::MB3_KMeansClustering* New_ctor(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gos, int32_t  numClusters) ;

/// @brief Method UpdateClusterMembership, addr 0x9d84e00, size 0x18c, virtual false, abstract: false, final false
inline bool UpdateClusterMembership() ;

/// @brief Method UpdateDataPointMeans, addr 0x9d84abc, size 0x220, virtual false, abstract: false, final false
inline bool UpdateDataPointMeans(bool  force) ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__clusters() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__clusters() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>* const& __cordl_internal_get__normalizedDataToCluster() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>*& __cordl_internal_get__normalizedDataToCluster() ;

constexpr int32_t const& __cordl_internal_get__numberOfClusters() const;

constexpr int32_t& __cordl_internal_get__numberOfClusters() ;

constexpr void __cordl_internal_set__clusters(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__normalizedDataToCluster(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>*  value) ;

constexpr void __cordl_internal_set__numberOfClusters(int32_t  value) ;

/// @brief Method .ctor, addr 0x9d844e8, size 0x39c, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gos, int32_t  numClusters) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_KMeansClustering() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_KMeansClustering", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_KMeansClustering(MB3_KMeansClustering && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_KMeansClustering", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_KMeansClustering(MB3_KMeansClustering const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22618};

/// @brief Field _normalizedDataToCluster, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>*  ____normalizedDataToCluster;

/// @brief Field _clusters, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____clusters;

/// @brief Field _numberOfClusters, offset: 0x20, size: 0x4, def value: None
 int32_t  ____numberOfClusters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_KMeansClustering, ____normalizedDataToCluster) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_KMeansClustering, ____clusters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_KMeansClustering, ____numberOfClusters) == 0x20, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_KMeansClustering) == 0x28, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object, UnityEngine.Vector3
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_KMeansClustering/DataPoint
class CORDL_TYPE MB3_KMeansClustering_DataPoint : public ::System::Object {
public:
// Declarations
/// @brief Field Cluster, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Cluster, put=__cordl_internal_set_Cluster)) int32_t  Cluster;

/// @brief Field center, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_center, put=__cordl_internal_set_center)) ::UnityEngine::Vector3  center;

/// @brief Field gameObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObject, put=__cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

static inline ::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint* New_ctor(::UnityEngine::GameObject*  go) ;

constexpr int32_t const& __cordl_internal_get_Cluster() const;

constexpr int32_t& __cordl_internal_get_Cluster() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_center() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject() ;

constexpr void __cordl_internal_set_Cluster(int32_t  value) ;

constexpr void __cordl_internal_set_center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9d84884, size 0x158, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::GameObject*  go) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_KMeansClustering_DataPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_KMeansClustering_DataPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_KMeansClustering_DataPoint(MB3_KMeansClustering_DataPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_KMeansClustering_DataPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_KMeansClustering_DataPoint(MB3_KMeansClustering_DataPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22617};

/// @brief Field center, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___center;

/// @brief Field gameObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gameObject;

/// @brief Field Cluster, offset: 0x28, size: 0x4, def value: None
 int32_t  ___Cluster;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint, ___center) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint, ___gameObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint, ___Cluster) == 0x28, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint) == 0x30, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
