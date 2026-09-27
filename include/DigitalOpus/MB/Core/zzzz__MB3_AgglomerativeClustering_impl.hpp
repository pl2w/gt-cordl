#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_AgglomerativeClustering.hpp"
#include "System/zzzz__IComparable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_AgglomerativeClustering_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_AgglomerativeClustering_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__PriorityQueue_2_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ProgressUpdateCancelableDelegate_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering.euclidean_distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::euclidean_distance)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9d8147c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*>(),
                        {"euclidean_distance", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering.agglomerate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::*)(::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*)>(&::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::agglomerate)> {
  constexpr static std::size_t size = 0xf20;
  constexpr static std::size_t addrs = 0x9d81514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*>(),
                        {"agglomerate", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering._RefillPriorityQWithSome
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::*)(::DigitalOpus::MB::Core::PriorityQueue_2<float_t,::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>*, ::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>, ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*)>(&::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::_RefillPriorityQWithSome)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x9d82500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*>(),
                        {"_RefillPriorityQWithSome", {}, {::i2c::type_of<::DigitalOpus::MB::Core::PriorityQueue_2<float_t,::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>*>(), ::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>>(), ::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering.TestRun
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::TestRun)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x9d82b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*>(),
                        {"TestRun", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering.Main
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::Main)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9d82d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*>(),
                        {"Main", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::*)()>(&::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9d82ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>*& DigitalOpus::MB::Core::MB3_AgglomerativeClustering::__cordl_internal_get_items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___items;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>* const& DigitalOpus::MB::Core::MB3_AgglomerativeClustering::__cordl_internal_get_items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___items;
}
constexpr void DigitalOpus::MB::Core::MB3_AgglomerativeClustering::__cordl_internal_set_items(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___items = value;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>& DigitalOpus::MB::Core::MB3_AgglomerativeClustering::__cordl_internal_get_clusters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clusters;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*> const& DigitalOpus::MB::Core::MB3_AgglomerativeClustering::__cordl_internal_get_clusters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clusters;
}
constexpr void DigitalOpus::MB::Core::MB3_AgglomerativeClustering::__cordl_internal_set_clusters(::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clusters = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_AgglomerativeClustering::__cordl_internal_get_wasCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasCanceled;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_AgglomerativeClustering::__cordl_internal_get_wasCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasCanceled;
}
constexpr void DigitalOpus::MB::Core::MB3_AgglomerativeClustering::__cordl_internal_set_wasCanceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasCanceled = value;
}
inline float_t DigitalOpus::MB::Core::MB3_AgglomerativeClustering::euclidean_distance(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*>(),
                        {"euclidean_distance", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, a, b);
}
inline bool DigitalOpus::MB::Core::MB3_AgglomerativeClustering::agglomerate(::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*  progFunc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*>(),
                        {"agglomerate", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, progFunc);
}
inline float_t DigitalOpus::MB::Core::MB3_AgglomerativeClustering::_RefillPriorityQWithSome(::DigitalOpus::MB::Core::PriorityQueue_2<float_t,::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance*>*  pq, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>*  unclustered, ::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>  clusters, ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*  progFunc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*>(),
                        {"_RefillPriorityQWithSome", {}, {::i2c::type_of<::DigitalOpus::MB::Core::PriorityQueue_2<float_t,::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>*>(), ::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>>(), ::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, pq, unclustered, clusters, progFunc);
}
inline int32_t DigitalOpus::MB::Core::MB3_AgglomerativeClustering::TestRun(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*>(),
                        {"TestRun", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, gos);
}
inline void DigitalOpus::MB::Core::MB3_AgglomerativeClustering::Main()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*>(),
                        {"Main", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*>)
inline T DigitalOpus::MB::Core::MB3_AgglomerativeClustering::NthSmallestElement(::System::Collections::Generic::List_1<T>*  array, int32_t  n)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*>(),
                    {"NthSmallestElement", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, array, n);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*>)
inline ::System::Collections::Generic::List_1<T>* DigitalOpus::MB::Core::MB3_AgglomerativeClustering::QuickSelectSmallest(::System::Collections::Generic::List_1<T>*  input, int32_t  n)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*>(),
                    {"QuickSelectSmallest", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, input, n);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*>)
inline int32_t DigitalOpus::MB::Core::MB3_AgglomerativeClustering::QuickSelectPartition(::System::Collections::Generic::List_1<T>*  array, int32_t  startIndex, int32_t  endIndex, int32_t  pivotIndex)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*>(),
                    {"QuickSelectPartition", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, startIndex, endIndex, pivotIndex);
}
template<typename T>
inline void DigitalOpus::MB::Core::MB3_AgglomerativeClustering::Swap(::System::Collections::Generic::List_1<T>*  array, int32_t  index1, int32_t  index2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*>(),
                    {"Swap", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index1, index2);
}
inline void DigitalOpus::MB::Core::MB3_AgglomerativeClustering::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering* DigitalOpus::MB::Core::MB3_AgglomerativeClustering::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::MB3_AgglomerativeClustering()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance::*)(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*)>(&::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9d82b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance::__cordl_internal_get_a()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___a;
}
constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* const& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance::__cordl_internal_get_a() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___a;
}
constexpr void DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance::__cordl_internal_set_a(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___a = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance::__cordl_internal_get_b()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___b;
}
constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* const& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance::__cordl_internal_get_b() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___b;
}
constexpr void DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance::__cordl_internal_set_b(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___b = value;
}
inline void DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance::_ctor(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  aa, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  bb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aa, bb);
}
inline ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance* DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance::New_ctor(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  aa, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  bb)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance*>(aa, bb));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance::MB3_AgglomerativeClustering_ClusterDistance()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s::*)()>(&::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d82d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s::__cordl_internal_get_go()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___go;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s::__cordl_internal_get_go() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___go;
}
constexpr void DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s::__cordl_internal_set_go(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___go = value;
}
constexpr ::UnityEngine::Vector3& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s::__cordl_internal_get_coord()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coord;
}
constexpr ::UnityEngine::Vector3 const& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s::__cordl_internal_get_coord() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coord;
}
constexpr void DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s::__cordl_internal_set_coord(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coord = value;
}
inline void DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s* DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s::MB3_AgglomerativeClustering_item_s()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::*)(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*, int32_t)>(&::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9d82434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::*)(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*, int32_t, int32_t, float_t, ::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>)>(&::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x9d82924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_get_leaf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leaf;
}
constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s* const& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_get_leaf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leaf;
}
constexpr void DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_set_leaf(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leaf = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_get_cha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cha;
}
constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* const& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_get_cha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cha;
}
constexpr void DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_set_cha(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cha = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_get_chb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chb;
}
constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* const& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_get_chb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chb;
}
constexpr void DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_set_chb(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chb = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_set_height(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr float_t& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_get_distToMergedCentroid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distToMergedCentroid;
}
constexpr float_t const& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_get_distToMergedCentroid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distToMergedCentroid;
}
constexpr void DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_set_distToMergedCentroid(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distToMergedCentroid = value;
}
constexpr ::UnityEngine::Vector3& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_get_centroid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centroid;
}
constexpr ::UnityEngine::Vector3 const& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_get_centroid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centroid;
}
constexpr void DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_set_centroid(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centroid = value;
}
constexpr ::ArrayW<int32_t>& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_get_leafs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leafs;
}
constexpr ::ArrayW<int32_t> const& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_get_leafs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leafs;
}
constexpr void DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_set_leafs(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leafs = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_get_idx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idx;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_get_idx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idx;
}
constexpr void DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_set_idx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idx = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_get_isUnclustered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isUnclustered;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_get_isUnclustered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isUnclustered;
}
constexpr void DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::__cordl_internal_set_isUnclustered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isUnclustered = value;
}
inline void DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::_ctor(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*  ii, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ii, index);
}
inline void DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::_ctor(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  a, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  b, int32_t  index, int32_t  h, float_t  dist, ::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>  clusters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, index, h, dist, clusters);
}
inline ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::New_ctor(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*  ii, int32_t  index)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>(ii, index));
}
inline ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::New_ctor(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  a, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  b, int32_t  index, int32_t  h, float_t  dist, ::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>  clusters)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>(a, b, index, h, dist, clusters));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode::MB3_AgglomerativeClustering_ClusterNode()   {
}
