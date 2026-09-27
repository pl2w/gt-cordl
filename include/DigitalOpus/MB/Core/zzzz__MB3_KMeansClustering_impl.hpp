#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_KMeansClustering.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_KMeansClustering_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_KMeansClustering_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_KMeansClustering._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_KMeansClustering::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, int32_t)>(&::DigitalOpus::MB::Core::MB3_KMeansClustering::_ctor)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x9d844e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_KMeansClustering.InitializeCentroids
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_KMeansClustering::*)()>(&::DigitalOpus::MB::Core::MB3_KMeansClustering::InitializeCentroids)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d849dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering*>(),
                        {"InitializeCentroids", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_KMeansClustering.UpdateDataPointMeans
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_KMeansClustering::*)(bool)>(&::DigitalOpus::MB::Core::MB3_KMeansClustering::UpdateDataPointMeans)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x9d84abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering*>(),
                        {"UpdateDataPointMeans", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_KMeansClustering.AnyAreEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_KMeansClustering::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>*)>(&::DigitalOpus::MB::Core::MB3_KMeansClustering::AnyAreEmpty)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9d84cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering*>(),
                        {"AnyAreEmpty", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_KMeansClustering.UpdateClusterMembership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_KMeansClustering::*)()>(&::DigitalOpus::MB::Core::MB3_KMeansClustering::UpdateClusterMembership)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x9d84e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering*>(),
                        {"UpdateClusterMembership", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_KMeansClustering.ElucidanDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::DigitalOpus::MB::Core::MB3_KMeansClustering::*)(::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*, ::UnityEngine::Vector3)>(&::DigitalOpus::MB::Core::MB3_KMeansClustering::ElucidanDistance)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d84f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering*>(),
                        {"ElucidanDistance", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_KMeansClustering.MinIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_KMeansClustering::*)(::ArrayW<float_t>)>(&::DigitalOpus::MB::Core::MB3_KMeansClustering::MinIndex)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9d85028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering*>(),
                        {"MinIndex", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_KMeansClustering.GetCluster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* (::DigitalOpus::MB::Core::MB3_KMeansClustering::*)(int32_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::DigitalOpus::MB::Core::MB3_KMeansClustering::GetCluster)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x9d8508c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering*>(),
                        {"GetCluster", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_KMeansClustering.Cluster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_KMeansClustering::*)()>(&::DigitalOpus::MB::Core::MB3_KMeansClustering::Cluster)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9d8540c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering*>(),
                        {"Cluster", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>*& DigitalOpus::MB::Core::MB3_KMeansClustering::__cordl_internal_get__normalizedDataToCluster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalizedDataToCluster;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>* const& DigitalOpus::MB::Core::MB3_KMeansClustering::__cordl_internal_get__normalizedDataToCluster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalizedDataToCluster;
}
constexpr void DigitalOpus::MB::Core::MB3_KMeansClustering::__cordl_internal_set__normalizedDataToCluster(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalizedDataToCluster = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& DigitalOpus::MB::Core::MB3_KMeansClustering::__cordl_internal_get__clusters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clusters;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& DigitalOpus::MB::Core::MB3_KMeansClustering::__cordl_internal_get__clusters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clusters;
}
constexpr void DigitalOpus::MB::Core::MB3_KMeansClustering::__cordl_internal_set__clusters(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clusters = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_KMeansClustering::__cordl_internal_get__numberOfClusters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numberOfClusters;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_KMeansClustering::__cordl_internal_get__numberOfClusters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numberOfClusters;
}
constexpr void DigitalOpus::MB::Core::MB3_KMeansClustering::__cordl_internal_set__numberOfClusters(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____numberOfClusters = value;
}
inline void DigitalOpus::MB::Core::MB3_KMeansClustering::_ctor(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gos, int32_t  numClusters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gos, numClusters);
}
inline void DigitalOpus::MB::Core::MB3_KMeansClustering::InitializeCentroids()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering*>(),
                        {"InitializeCentroids", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_KMeansClustering::UpdateDataPointMeans(bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering*>(),
                        {"UpdateDataPointMeans", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, force);
}
inline bool DigitalOpus::MB::Core::MB3_KMeansClustering::AnyAreEmpty(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering*>(),
                        {"AnyAreEmpty", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
inline bool DigitalOpus::MB::Core::MB3_KMeansClustering::UpdateClusterMembership()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering*>(),
                        {"UpdateClusterMembership", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t DigitalOpus::MB::Core::MB3_KMeansClustering::ElucidanDistance(::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*  dataPoint, ::UnityEngine::Vector3  mean)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering*>(),
                        {"ElucidanDistance", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, dataPoint, mean);
}
inline int32_t DigitalOpus::MB::Core::MB3_KMeansClustering::MinIndex(::ArrayW<float_t>  distances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering*>(),
                        {"MinIndex", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, distances);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* DigitalOpus::MB::Core::MB3_KMeansClustering::GetCluster(int32_t  idx, ::by_ref<::UnityEngine::Vector3>  mean, ::by_ref<float_t>  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering*>(),
                        {"GetCluster", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>(this, ___internal_method, idx, mean, size);
}
inline void DigitalOpus::MB::Core::MB3_KMeansClustering::Cluster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering*>(),
                        {"Cluster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_KMeansClustering* DigitalOpus::MB::Core::MB3_KMeansClustering::New_ctor(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gos, int32_t  numClusters)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_KMeansClustering*>(gos, numClusters));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_KMeansClustering::MB3_KMeansClustering()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint::*)(::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9d84884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint::__cordl_internal_get_center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr ::UnityEngine::Vector3 const& DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint::__cordl_internal_get_center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr void DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint::__cordl_internal_set_center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___center = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint::__cordl_internal_get_gameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint::__cordl_internal_get_gameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr void DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObject = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint::__cordl_internal_get_Cluster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cluster;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint::__cordl_internal_get_Cluster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cluster;
}
constexpr void DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint::__cordl_internal_set_Cluster(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Cluster = value;
}
inline void DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint::_ctor(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, go);
}
inline ::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint* DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint::New_ctor(::UnityEngine::GameObject*  go)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*>(go));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint::MB3_KMeansClustering_DataPoint()   {
}
