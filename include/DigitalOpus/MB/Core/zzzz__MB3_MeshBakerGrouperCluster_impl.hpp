#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshBakerGrouperCluster.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshBakerGrouperBehaviour_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshBakerGrouperCluster_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__GrouperData_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_AgglomerativeClustering_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshBakerGrouperCluster_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ProgressUpdateCancelableDelegate_def.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerGrouper_ClusterType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster.FilterIntoGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>* (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, ::DigitalOpus::MB::Core::GrouperData*)>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::FilterIntoGroups)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x9df17e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster.BuildClusters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*, ::DigitalOpus::MB::Core::GrouperData*)>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::BuildClusters)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x9df1b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster*>(),
                        {"BuildClusters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::GrouperData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster._BuildListOfClustersToDraw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::*)(::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*, ::by_ref<float_t>, ::by_ref<float_t>, ::DigitalOpus::MB::Core::GrouperData*)>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::_BuildListOfClustersToDraw)> {
  constexpr static std::size_t size = 0x870;
  constexpr static std::size_t addrs = 0x9df200c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster*>(),
                        {"_BuildListOfClustersToDraw", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::DigitalOpus::MB::Core::GrouperData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::*)(::UnityEngine::Bounds, ::DigitalOpus::MB::Core::GrouperData*)>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::DrawGizmos)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9df287c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster.GetClusterType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::*)()>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::GetClusterType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9df29b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::*)()>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9df29c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>* DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::FilterIntoGroups(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  selection, ::DigitalOpus::MB::Core::GrouperData*  d)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>*>(this, ___internal_method, selection, d);
}
inline void DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::BuildClusters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gos, ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*  progFunc, ::DigitalOpus::MB::Core::GrouperData*  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster*>(),
                        {"BuildClusters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::GrouperData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gos, progFunc, d);
}
inline void DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::_BuildListOfClustersToDraw(::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*  progFunc, ::by_ref<float_t>  smallest, ::by_ref<float_t>  largest, ::DigitalOpus::MB::Core::GrouperData*  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster*>(),
                        {"_BuildListOfClustersToDraw", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::DigitalOpus::MB::Core::GrouperData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progFunc, smallest, largest, d);
}
inline void DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::DrawGizmos(::UnityEngine::Bounds  sceneObjectBounds, ::DigitalOpus::MB::Core::GrouperData*  d)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneObjectBounds, d);
}
inline ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::GetClusterType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster* DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster::MB3_MeshBakerGrouperCluster()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0::*)()>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9df2004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0._BuildClusters_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0::*)(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*)>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0::_BuildClusters_b__0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9df29c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0*>(),
                        {"<BuildClusters>b__0", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0::__cordl_internal_get_gos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gos;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0::__cordl_internal_get_gos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gos;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0::__cordl_internal_set_gos(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gos = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0::__cordl_internal_get_i()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0::__cordl_internal_get_i() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0::__cordl_internal_set_i(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___i = value;
}
constexpr ::System::Predicate_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>*& DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr ::System::Predicate_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>* const& DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0::__cordl_internal_set___9__0(::System::Predicate_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__0 = value;
}
inline void DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0::_BuildClusters_b__0(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0*>(),
                        {"<BuildClusters>b__0", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0* DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0()   {
}
