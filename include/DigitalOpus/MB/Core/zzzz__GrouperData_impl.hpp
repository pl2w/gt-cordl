#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/GrouperData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__GrouperData_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_AgglomerativeClustering_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::GrouperData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::GrouperData::*)()>(&::DigitalOpus::MB::Core::GrouperData::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9dee228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::GrouperData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_clusterOnLMIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clusterOnLMIndex;
}
constexpr bool const& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_clusterOnLMIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clusterOnLMIndex;
}
constexpr void DigitalOpus::MB::Core::GrouperData::__cordl_internal_set_clusterOnLMIndex(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clusterOnLMIndex = value;
}
constexpr bool& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_clusterByLODLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clusterByLODLevel;
}
constexpr bool const& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_clusterByLODLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clusterByLODLevel;
}
constexpr void DigitalOpus::MB::Core::GrouperData::__cordl_internal_set_clusterByLODLevel(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clusterByLODLevel = value;
}
constexpr ::UnityEngine::Vector3& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_origin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origin;
}
constexpr ::UnityEngine::Vector3 const& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_origin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origin;
}
constexpr void DigitalOpus::MB::Core::GrouperData::__cordl_internal_set_origin(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___origin = value;
}
constexpr ::UnityEngine::Vector3& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_cellSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cellSize;
}
constexpr ::UnityEngine::Vector3 const& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_cellSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cellSize;
}
constexpr void DigitalOpus::MB::Core::GrouperData::__cordl_internal_set_cellSize(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cellSize = value;
}
constexpr int32_t& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_pieNumSegments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieNumSegments;
}
constexpr int32_t const& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_pieNumSegments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieNumSegments;
}
constexpr void DigitalOpus::MB::Core::GrouperData::__cordl_internal_set_pieNumSegments(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieNumSegments = value;
}
constexpr ::UnityEngine::Vector3& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_pieAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieAxis;
}
constexpr ::UnityEngine::Vector3 const& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_pieAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieAxis;
}
constexpr void DigitalOpus::MB::Core::GrouperData::__cordl_internal_set_pieAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieAxis = value;
}
constexpr float_t& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_ringSpacing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ringSpacing;
}
constexpr float_t const& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_ringSpacing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ringSpacing;
}
constexpr void DigitalOpus::MB::Core::GrouperData::__cordl_internal_set_ringSpacing(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ringSpacing = value;
}
constexpr bool& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_combineSegmentsInInnermostRing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combineSegmentsInInnermostRing;
}
constexpr bool const& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_combineSegmentsInInnermostRing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combineSegmentsInInnermostRing;
}
constexpr void DigitalOpus::MB::Core::GrouperData::__cordl_internal_set_combineSegmentsInInnermostRing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combineSegmentsInInnermostRing = value;
}
constexpr bool& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_includeCellsWithOnlyOneRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeCellsWithOnlyOneRenderer;
}
constexpr bool const& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_includeCellsWithOnlyOneRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeCellsWithOnlyOneRenderer;
}
constexpr void DigitalOpus::MB::Core::GrouperData::__cordl_internal_set_includeCellsWithOnlyOneRenderer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___includeCellsWithOnlyOneRenderer = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_cluster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cluster;
}
constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering* const& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_cluster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cluster;
}
constexpr void DigitalOpus::MB::Core::GrouperData::__cordl_internal_set_cluster(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cluster = value;
}
constexpr float_t& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_maxDistBetweenClusters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistBetweenClusters;
}
constexpr float_t const& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get_maxDistBetweenClusters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistBetweenClusters;
}
constexpr void DigitalOpus::MB::Core::GrouperData::__cordl_internal_set_maxDistBetweenClusters(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistBetweenClusters = value;
}
constexpr float_t& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get__lastMaxDistBetweenClusters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastMaxDistBetweenClusters;
}
constexpr float_t const& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get__lastMaxDistBetweenClusters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastMaxDistBetweenClusters;
}
constexpr void DigitalOpus::MB::Core::GrouperData::__cordl_internal_set__lastMaxDistBetweenClusters(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastMaxDistBetweenClusters = value;
}
constexpr float_t& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get__ObjsExtents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ObjsExtents;
}
constexpr float_t const& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get__ObjsExtents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ObjsExtents;
}
constexpr void DigitalOpus::MB::Core::GrouperData::__cordl_internal_set__ObjsExtents(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ObjsExtents = value;
}
constexpr float_t& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get__minDistBetweenClusters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDistBetweenClusters;
}
constexpr float_t const& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get__minDistBetweenClusters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDistBetweenClusters;
}
constexpr void DigitalOpus::MB::Core::GrouperData::__cordl_internal_set__minDistBetweenClusters(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minDistBetweenClusters = value;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>*& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get__clustersToDraw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clustersToDraw;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>* const& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get__clustersToDraw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clustersToDraw;
}
constexpr void DigitalOpus::MB::Core::GrouperData::__cordl_internal_set__clustersToDraw(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clustersToDraw = value;
}
constexpr ::ArrayW<float_t>& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get__radii()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radii;
}
constexpr ::ArrayW<float_t> const& DigitalOpus::MB::Core::GrouperData::__cordl_internal_get__radii() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radii;
}
constexpr void DigitalOpus::MB::Core::GrouperData::__cordl_internal_set__radii(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____radii = value;
}
inline void DigitalOpus::MB::Core::GrouperData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::GrouperData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::GrouperData* DigitalOpus::MB::Core::GrouperData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::GrouperData*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::GrouperData::GrouperData()   {
}
