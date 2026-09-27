#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/GrouperData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GrouperData)
namespace DigitalOpus::MB::Core {
class MB3_AgglomerativeClustering_ClusterNode;
}
namespace DigitalOpus::MB::Core {
class MB3_AgglomerativeClustering;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class GrouperData;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::GrouperData*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::GrouperData*, "DigitalOpus.MB.Core", "GrouperData");
// Dependencies System.Object, UnityEngine.Vector3
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.GrouperData
class CORDL_TYPE GrouperData : public ::System::Object {
public:
// Declarations
/// @brief Field _ObjsExtents, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__ObjsExtents, put=__cordl_internal_set__ObjsExtents)) float_t  _ObjsExtents;

/// @brief Field _clustersToDraw, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__clustersToDraw, put=__cordl_internal_set__clustersToDraw)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>*  _clustersToDraw;

/// @brief Field _lastMaxDistBetweenClusters, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastMaxDistBetweenClusters, put=__cordl_internal_set__lastMaxDistBetweenClusters)) float_t  _lastMaxDistBetweenClusters;

/// @brief Field _minDistBetweenClusters, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__minDistBetweenClusters, put=__cordl_internal_set__minDistBetweenClusters)) float_t  _minDistBetweenClusters;

/// @brief Field _radii, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__radii, put=__cordl_internal_set__radii)) ::ArrayW<float_t>  _radii;

/// @brief Field cellSize, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_cellSize, put=__cordl_internal_set_cellSize)) ::UnityEngine::Vector3  cellSize;

/// @brief Field cluster, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_cluster, put=__cordl_internal_set_cluster)) ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*  cluster;

/// @brief Field clusterByLODLevel, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_clusterByLODLevel, put=__cordl_internal_set_clusterByLODLevel)) bool  clusterByLODLevel;

/// @brief Field clusterOnLMIndex, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_clusterOnLMIndex, put=__cordl_internal_set_clusterOnLMIndex)) bool  clusterOnLMIndex;

/// @brief Field combineSegmentsInInnermostRing, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_combineSegmentsInInnermostRing, put=__cordl_internal_set_combineSegmentsInInnermostRing)) bool  combineSegmentsInInnermostRing;

/// @brief Field includeCellsWithOnlyOneRenderer, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_includeCellsWithOnlyOneRenderer, put=__cordl_internal_set_includeCellsWithOnlyOneRenderer)) bool  includeCellsWithOnlyOneRenderer;

/// @brief Field maxDistBetweenClusters, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistBetweenClusters, put=__cordl_internal_set_maxDistBetweenClusters)) float_t  maxDistBetweenClusters;

/// @brief Field origin, offset 0x14, size 0xc 
 __declspec(property(get=__cordl_internal_get_origin, put=__cordl_internal_set_origin)) ::UnityEngine::Vector3  origin;

/// @brief Field pieAxis, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_pieAxis, put=__cordl_internal_set_pieAxis)) ::UnityEngine::Vector3  pieAxis;

/// @brief Field pieNumSegments, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pieNumSegments, put=__cordl_internal_set_pieNumSegments)) int32_t  pieNumSegments;

/// @brief Field ringSpacing, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ringSpacing, put=__cordl_internal_set_ringSpacing)) float_t  ringSpacing;

static inline ::DigitalOpus::MB::Core::GrouperData* New_ctor() ;

constexpr float_t const& __cordl_internal_get__ObjsExtents() const;

constexpr float_t& __cordl_internal_get__ObjsExtents() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>* const& __cordl_internal_get__clustersToDraw() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>*& __cordl_internal_get__clustersToDraw() ;

constexpr float_t const& __cordl_internal_get__lastMaxDistBetweenClusters() const;

constexpr float_t& __cordl_internal_get__lastMaxDistBetweenClusters() ;

constexpr float_t const& __cordl_internal_get__minDistBetweenClusters() const;

constexpr float_t& __cordl_internal_get__minDistBetweenClusters() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__radii() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__radii() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cellSize() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_cellSize() ;

constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering* const& __cordl_internal_get_cluster() const;

constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*& __cordl_internal_get_cluster() ;

constexpr bool const& __cordl_internal_get_clusterByLODLevel() const;

constexpr bool& __cordl_internal_get_clusterByLODLevel() ;

constexpr bool const& __cordl_internal_get_clusterOnLMIndex() const;

constexpr bool& __cordl_internal_get_clusterOnLMIndex() ;

constexpr bool const& __cordl_internal_get_combineSegmentsInInnermostRing() const;

constexpr bool& __cordl_internal_get_combineSegmentsInInnermostRing() ;

constexpr bool const& __cordl_internal_get_includeCellsWithOnlyOneRenderer() const;

constexpr bool& __cordl_internal_get_includeCellsWithOnlyOneRenderer() ;

constexpr float_t const& __cordl_internal_get_maxDistBetweenClusters() const;

constexpr float_t& __cordl_internal_get_maxDistBetweenClusters() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_origin() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_origin() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pieAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_pieAxis() ;

constexpr int32_t const& __cordl_internal_get_pieNumSegments() const;

constexpr int32_t& __cordl_internal_get_pieNumSegments() ;

constexpr float_t const& __cordl_internal_get_ringSpacing() const;

constexpr float_t& __cordl_internal_get_ringSpacing() ;

constexpr void __cordl_internal_set__ObjsExtents(float_t  value) ;

constexpr void __cordl_internal_set__clustersToDraw(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>*  value) ;

constexpr void __cordl_internal_set__lastMaxDistBetweenClusters(float_t  value) ;

constexpr void __cordl_internal_set__minDistBetweenClusters(float_t  value) ;

constexpr void __cordl_internal_set__radii(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_cellSize(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_cluster(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*  value) ;

constexpr void __cordl_internal_set_clusterByLODLevel(bool  value) ;

constexpr void __cordl_internal_set_clusterOnLMIndex(bool  value) ;

constexpr void __cordl_internal_set_combineSegmentsInInnermostRing(bool  value) ;

constexpr void __cordl_internal_set_includeCellsWithOnlyOneRenderer(bool  value) ;

constexpr void __cordl_internal_set_maxDistBetweenClusters(float_t  value) ;

constexpr void __cordl_internal_set_origin(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_pieAxis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_pieNumSegments(int32_t  value) ;

constexpr void __cordl_internal_set_ringSpacing(float_t  value) ;

/// @brief Method .ctor, addr 0x9dee228, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrouperData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrouperData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrouperData(GrouperData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrouperData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrouperData(GrouperData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22838};

/// @brief Field clusterOnLMIndex, offset: 0x10, size: 0x1, def value: None
 bool  ___clusterOnLMIndex;

/// @brief Field clusterByLODLevel, offset: 0x11, size: 0x1, def value: None
 bool  ___clusterByLODLevel;

/// @brief Field origin, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___origin;

/// @brief Field cellSize, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___cellSize;

/// @brief Field pieNumSegments, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___pieNumSegments;

/// @brief Field pieAxis, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___pieAxis;

/// @brief Field ringSpacing, offset: 0x3c, size: 0x4, def value: None
 float_t  ___ringSpacing;

/// @brief Field combineSegmentsInInnermostRing, offset: 0x40, size: 0x1, def value: None
 bool  ___combineSegmentsInInnermostRing;

/// @brief Field includeCellsWithOnlyOneRenderer, offset: 0x41, size: 0x1, def value: None
 bool  ___includeCellsWithOnlyOneRenderer;

/// @brief Field cluster, offset: 0x48, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*  ___cluster;

/// @brief Field maxDistBetweenClusters, offset: 0x50, size: 0x4, def value: None
 float_t  ___maxDistBetweenClusters;

/// @brief Field _lastMaxDistBetweenClusters, offset: 0x54, size: 0x4, def value: None
 float_t  ____lastMaxDistBetweenClusters;

/// @brief Field _ObjsExtents, offset: 0x58, size: 0x4, def value: None
 float_t  ____ObjsExtents;

/// @brief Field _minDistBetweenClusters, offset: 0x5c, size: 0x4, def value: None
 float_t  ____minDistBetweenClusters;

/// @brief Field _clustersToDraw, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>*  ____clustersToDraw;

/// @brief Field _radii, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<float_t>  ____radii;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::GrouperData, ___clusterOnLMIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::GrouperData, ___clusterByLODLevel) == 0x11, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::GrouperData, ___origin) == 0x14, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::GrouperData, ___cellSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::GrouperData, ___pieNumSegments) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::GrouperData, ___pieAxis) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::GrouperData, ___ringSpacing) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::GrouperData, ___combineSegmentsInInnermostRing) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::GrouperData, ___includeCellsWithOnlyOneRenderer) == 0x41, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::GrouperData, ___cluster) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::GrouperData, ___maxDistBetweenClusters) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::GrouperData, ____lastMaxDistBetweenClusters) == 0x54, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::GrouperData, ____ObjsExtents) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::GrouperData, ____minDistBetweenClusters) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::GrouperData, ____clustersToDraw) == 0x60, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::GrouperData, ____radii) == 0x68, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::GrouperData) == 0x70, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
