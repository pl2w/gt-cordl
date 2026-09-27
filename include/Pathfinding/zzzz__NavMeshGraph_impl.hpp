#pragma once
// IWYU pragma private; include "Pathfinding/NavMeshGraph.hpp"
#include "Pathfinding/zzzz__Int3_impl.hpp"
#include "Pathfinding/zzzz__IntRect_impl.hpp"
#include "Pathfinding/zzzz__NavmeshBase_impl.hpp"
#include "Pathfinding/zzzz__Progress_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__NavMeshGraph_def.hpp"
#include "Pathfinding/Serialization/zzzz__GraphSerializationContext_def.hpp"
#include "Pathfinding/Util/zzzz__GraphTransform_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateObject_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateThreading_def.hpp"
#include "Pathfinding/zzzz__INavmeshHolder_def.hpp"
#include "Pathfinding/zzzz__IUpdatableGraph_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__NavMeshGraph_def.hpp"
#include "Pathfinding/zzzz__Progress_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::Pathfinding::NavMeshGraph.get_RecalculateNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::NavMeshGraph::*)()>(&::Pathfinding::NavMeshGraph::get_RecalculateNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e84f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavMeshGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavMeshGraph*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph.get_TileWorldSizeX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::NavMeshGraph::*)()>(&::Pathfinding::NavMeshGraph::get_TileWorldSizeX)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e84f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavMeshGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavMeshGraph*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph.get_TileWorldSizeZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::NavMeshGraph::*)()>(&::Pathfinding::NavMeshGraph::get_TileWorldSizeZ)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e84f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavMeshGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavMeshGraph*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph.get_MaxTileConnectionEdgeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::NavMeshGraph::*)()>(&::Pathfinding::NavMeshGraph::get_MaxTileConnectionEdgeDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e84f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavMeshGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavMeshGraph*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph.CalculateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Util::GraphTransform* (::Pathfinding::NavMeshGraph::*)()>(&::Pathfinding::NavMeshGraph::CalculateTransform)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5e84f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavMeshGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavMeshGraph*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph.Pathfinding_IUpdatableGraph_CanUpdateAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphUpdateThreading (::Pathfinding::NavMeshGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::NavMeshGraph::Pathfinding_IUpdatableGraph_CanUpdateAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e8527c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph*>(),
                        {"Pathfinding.IUpdatableGraph.CanUpdateAsync", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph.Pathfinding_IUpdatableGraph_UpdateAreaInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavMeshGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::NavMeshGraph::Pathfinding_IUpdatableGraph_UpdateAreaInit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e85284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateAreaInit", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph.Pathfinding_IUpdatableGraph_UpdateAreaPost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavMeshGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::NavMeshGraph::Pathfinding_IUpdatableGraph_UpdateAreaPost)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e85288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateAreaPost", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph.Pathfinding_IUpdatableGraph_UpdateArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavMeshGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::NavMeshGraph::Pathfinding_IUpdatableGraph_UpdateArea)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e8528c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateArea", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph.UpdateArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::GraphUpdateObject*, ::Pathfinding::INavmeshHolder*)>(&::Pathfinding::NavMeshGraph::UpdateArea)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x5e8529c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph*>(),
                        {"UpdateArea", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>(), ::i2c::type_of<::Pathfinding::INavmeshHolder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph.ScanInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* (::Pathfinding::NavMeshGraph::*)()>(&::Pathfinding::NavMeshGraph::ScanInternal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e85798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavMeshGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavMeshGraph*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph.DeserializeSettingsCompatibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavMeshGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::NavMeshGraph::DeserializeSettingsCompatibility)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5e8584c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavMeshGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavMeshGraph*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavMeshGraph::*)()>(&::Pathfinding::NavMeshGraph::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e85960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Mesh>& Pathfinding::NavMeshGraph::__cordl_internal_get_sourceMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& Pathfinding::NavMeshGraph::__cordl_internal_get_sourceMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMesh;
}
constexpr void Pathfinding::NavMeshGraph::__cordl_internal_set_sourceMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMesh = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::NavMeshGraph::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::NavMeshGraph::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void Pathfinding::NavMeshGraph::__cordl_internal_set_offset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::NavMeshGraph::__cordl_internal_get_rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::NavMeshGraph::__cordl_internal_get_rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr void Pathfinding::NavMeshGraph::__cordl_internal_set_rotation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotation = value;
}
constexpr float_t& Pathfinding::NavMeshGraph::__cordl_internal_get_scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr float_t const& Pathfinding::NavMeshGraph::__cordl_internal_get_scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr void Pathfinding::NavMeshGraph::__cordl_internal_set_scale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scale = value;
}
constexpr bool& Pathfinding::NavMeshGraph::__cordl_internal_get_recalculateNormals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recalculateNormals;
}
constexpr bool const& Pathfinding::NavMeshGraph::__cordl_internal_get_recalculateNormals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recalculateNormals;
}
constexpr void Pathfinding::NavMeshGraph::__cordl_internal_set_recalculateNormals(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recalculateNormals = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::NavMeshGraph::__cordl_internal_get_cachedSourceMeshBoundsMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSourceMeshBoundsMin;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::NavMeshGraph::__cordl_internal_get_cachedSourceMeshBoundsMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSourceMeshBoundsMin;
}
constexpr void Pathfinding::NavMeshGraph::__cordl_internal_set_cachedSourceMeshBoundsMin(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedSourceMeshBoundsMin = value;
}
inline bool Pathfinding::NavMeshGraph::get_RecalculateNormals()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavMeshGraph*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Pathfinding::NavMeshGraph::get_TileWorldSizeX()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavMeshGraph*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Pathfinding::NavMeshGraph::get_TileWorldSizeZ()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavMeshGraph*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Pathfinding::NavMeshGraph::get_MaxTileConnectionEdgeDistance()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavMeshGraph*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Pathfinding::Util::GraphTransform* Pathfinding::NavMeshGraph::CalculateTransform()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavMeshGraph*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::GraphTransform*>(this, ___internal_method);
}
inline ::Pathfinding::GraphUpdateThreading Pathfinding::NavMeshGraph::Pathfinding_IUpdatableGraph_CanUpdateAsync(::Pathfinding::GraphUpdateObject*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph*>(),
                        {"Pathfinding.IUpdatableGraph.CanUpdateAsync", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphUpdateThreading>(this, ___internal_method, o);
}
inline void Pathfinding::NavMeshGraph::Pathfinding_IUpdatableGraph_UpdateAreaInit(::Pathfinding::GraphUpdateObject*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateAreaInit", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void Pathfinding::NavMeshGraph::Pathfinding_IUpdatableGraph_UpdateAreaPost(::Pathfinding::GraphUpdateObject*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateAreaPost", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void Pathfinding::NavMeshGraph::Pathfinding_IUpdatableGraph_UpdateArea(::Pathfinding::GraphUpdateObject*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateArea", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void Pathfinding::NavMeshGraph::UpdateArea(::Pathfinding::GraphUpdateObject*  o, ::Pathfinding::INavmeshHolder*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph*>(),
                        {"UpdateArea", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>(), ::i2c::type_of<::Pathfinding::INavmeshHolder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, o, graph);
}
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* Pathfinding::NavMeshGraph::ScanInternal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavMeshGraph*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(this, ___internal_method);
}
inline void Pathfinding::NavMeshGraph::DeserializeSettingsCompatibility(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavMeshGraph*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::NavMeshGraph::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::NavMeshGraph* Pathfinding::NavMeshGraph::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavMeshGraph*>());
}
/// @brief Convert operator to "::Pathfinding::IUpdatableGraph"
constexpr  Pathfinding::NavMeshGraph::operator ::Pathfinding::IUpdatableGraph*() noexcept {
return static_cast<::Pathfinding::IUpdatableGraph*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::IUpdatableGraph"
constexpr ::Pathfinding::IUpdatableGraph* Pathfinding::NavMeshGraph::i___Pathfinding__IUpdatableGraph() noexcept {
return static_cast<::Pathfinding::IUpdatableGraph*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::NavMeshGraph::NavMeshGraph()   {
}
//  Writing Method size for method: ::Pathfinding::NavMeshGraph__ScanInternal_d__20._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavMeshGraph__ScanInternal_d__20::*)(int32_t)>(&::Pathfinding::NavMeshGraph__ScanInternal_d__20::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e85818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph__ScanInternal_d__20*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph__ScanInternal_d__20.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavMeshGraph__ScanInternal_d__20::*)()>(&::Pathfinding::NavMeshGraph__ScanInternal_d__20::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e85ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph__ScanInternal_d__20*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph__ScanInternal_d__20.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::NavMeshGraph__ScanInternal_d__20::*)()>(&::Pathfinding::NavMeshGraph__ScanInternal_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x760;
  constexpr static std::size_t addrs = 0x5e85ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph__ScanInternal_d__20*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph__ScanInternal_d__20.System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Progress (::Pathfinding::NavMeshGraph__ScanInternal_d__20::*)()>(&::Pathfinding::NavMeshGraph__ScanInternal_d__20::System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e86880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph__ScanInternal_d__20*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph__ScanInternal_d__20.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavMeshGraph__ScanInternal_d__20::*)()>(&::Pathfinding::NavMeshGraph__ScanInternal_d__20::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e8688c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph__ScanInternal_d__20*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph__ScanInternal_d__20.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::NavMeshGraph__ScanInternal_d__20::*)()>(&::Pathfinding::NavMeshGraph__ScanInternal_d__20::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e868c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph__ScanInternal_d__20*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph__ScanInternal_d__20.System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* (::Pathfinding::NavMeshGraph__ScanInternal_d__20::*)()>(&::Pathfinding::NavMeshGraph__ScanInternal_d__20::System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e86920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph__ScanInternal_d__20*>(),
                        {"System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph__ScanInternal_d__20.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::NavMeshGraph__ScanInternal_d__20::*)()>(&::Pathfinding::NavMeshGraph__ScanInternal_d__20::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e869c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph__ScanInternal_d__20*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::Pathfinding::Progress& Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::Pathfinding::Progress const& Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_set___2__current(::Pathfinding::Progress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::Pathfinding::NavMeshGraph*& Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::NavMeshGraph* const& Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_set___4__this(::Pathfinding::NavMeshGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Int3>*& Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_get__intVertices_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intVertices_5__2;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Int3>* const& Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_get__intVertices_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intVertices_5__2;
}
constexpr void Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_set__intVertices_5__2(::System::Collections::Generic::List_1<::Pathfinding::Int3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____intVertices_5__2 = value;
}
constexpr ::ArrayW<::Pathfinding::Int3>& Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_get__compressedVertices_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressedVertices_5__3;
}
constexpr ::ArrayW<::Pathfinding::Int3> const& Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_get__compressedVertices_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressedVertices_5__3;
}
constexpr void Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_set__compressedVertices_5__3(::ArrayW<::Pathfinding::Int3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____compressedVertices_5__3 = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_get__compressedTriangles_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressedTriangles_5__4;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_get__compressedTriangles_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressedTriangles_5__4;
}
constexpr void Pathfinding::NavMeshGraph__ScanInternal_d__20::__cordl_internal_set__compressedTriangles_5__4(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____compressedTriangles_5__4 = value;
}
inline void Pathfinding::NavMeshGraph__ScanInternal_d__20::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph__ScanInternal_d__20*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::NavMeshGraph__ScanInternal_d__20::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph__ScanInternal_d__20*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::NavMeshGraph__ScanInternal_d__20::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph__ScanInternal_d__20*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Pathfinding::Progress Pathfinding::NavMeshGraph__ScanInternal_d__20::System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph__ScanInternal_d__20*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Progress>(this, ___internal_method);
}
inline void Pathfinding::NavMeshGraph__ScanInternal_d__20::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph__ScanInternal_d__20*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::NavMeshGraph__ScanInternal_d__20::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph__ScanInternal_d__20*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* Pathfinding::NavMeshGraph__ScanInternal_d__20::System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph__ScanInternal_d__20*>(),
                        {"System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Pathfinding::NavMeshGraph__ScanInternal_d__20::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph__ScanInternal_d__20*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::NavMeshGraph__ScanInternal_d__20* Pathfinding::NavMeshGraph__ScanInternal_d__20::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavMeshGraph__ScanInternal_d__20*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr  Pathfinding::NavMeshGraph__ScanInternal_d__20::operator ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* Pathfinding::NavMeshGraph__ScanInternal_d__20::i___System__Collections__Generic__IEnumerable_1___Pathfinding__Progress_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Pathfinding::NavMeshGraph__ScanInternal_d__20::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Pathfinding::NavMeshGraph__ScanInternal_d__20::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr  Pathfinding::NavMeshGraph__ScanInternal_d__20::operator ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* Pathfinding::NavMeshGraph__ScanInternal_d__20::i___System__Collections__Generic__IEnumerator_1___Pathfinding__Progress_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::NavMeshGraph__ScanInternal_d__20::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::NavMeshGraph__ScanInternal_d__20::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::NavMeshGraph__ScanInternal_d__20::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::NavMeshGraph__ScanInternal_d__20::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::NavMeshGraph__ScanInternal_d__20::NavMeshGraph__ScanInternal_d__20()   {
}
//  Writing Method size for method: ::Pathfinding::NavMeshGraph___c__DisplayClass19_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavMeshGraph___c__DisplayClass19_0::*)()>(&::Pathfinding::NavMeshGraph___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e85790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavMeshGraph___c__DisplayClass19_0._UpdateArea_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavMeshGraph___c__DisplayClass19_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::NavMeshGraph___c__DisplayClass19_0::_UpdateArea_b__0)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x5e859c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph___c__DisplayClass19_0*>(),
                        {"<UpdateArea>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::IntRect& Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_get_irect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___irect;
}
constexpr ::Pathfinding::IntRect const& Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_get_irect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___irect;
}
constexpr void Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_set_irect(::Pathfinding::IntRect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___irect = value;
}
constexpr ::Pathfinding::Int3& Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_get_a()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___a;
}
constexpr ::Pathfinding::Int3 const& Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_get_a() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___a;
}
constexpr void Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_set_a(::Pathfinding::Int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___a = value;
}
constexpr ::Pathfinding::Int3& Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_get_b()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___b;
}
constexpr ::Pathfinding::Int3 const& Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_get_b() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___b;
}
constexpr void Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_set_b(::Pathfinding::Int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___b = value;
}
constexpr ::Pathfinding::Int3& Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_get_c()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___c;
}
constexpr ::Pathfinding::Int3 const& Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_get_c() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___c;
}
constexpr void Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_set_c(::Pathfinding::Int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___c = value;
}
constexpr ::Pathfinding::Int3& Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_get_d()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___d;
}
constexpr ::Pathfinding::Int3 const& Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_get_d() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___d;
}
constexpr void Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_set_d(::Pathfinding::Int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___d = value;
}
constexpr int32_t& Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_get_ymin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ymin;
}
constexpr int32_t const& Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_get_ymin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ymin;
}
constexpr void Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_set_ymin(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ymin = value;
}
constexpr int32_t& Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_get_ymax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ymax;
}
constexpr int32_t const& Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_get_ymax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ymax;
}
constexpr void Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_set_ymax(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ymax = value;
}
constexpr ::Pathfinding::GraphUpdateObject*& Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_get_o()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___o;
}
constexpr ::Pathfinding::GraphUpdateObject* const& Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_get_o() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___o;
}
constexpr void Pathfinding::NavMeshGraph___c__DisplayClass19_0::__cordl_internal_set_o(::Pathfinding::GraphUpdateObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___o = value;
}
inline void Pathfinding::NavMeshGraph___c__DisplayClass19_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavMeshGraph___c__DisplayClass19_0::_UpdateArea_b__0(::Pathfinding::GraphNode*  _node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavMeshGraph___c__DisplayClass19_0*>(),
                        {"<UpdateArea>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _node);
}
inline ::Pathfinding::NavMeshGraph___c__DisplayClass19_0* Pathfinding::NavMeshGraph___c__DisplayClass19_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavMeshGraph___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::NavMeshGraph___c__DisplayClass19_0::NavMeshGraph___c__DisplayClass19_0()   {
}
