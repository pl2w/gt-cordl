#pragma once
// IWYU pragma private; include "Pathfinding/NavmeshTile.hpp"
#include "Pathfinding/zzzz__Int3_impl.hpp"
#include "Pathfinding/zzzz__TriangleMeshNode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__NavmeshTile_def.hpp"
#include "Pathfinding/Util/zzzz__GraphTransform_def.hpp"
#include "Pathfinding/zzzz__BBTree_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__INavmeshHolder_def.hpp"
#include "Pathfinding/zzzz__INavmesh_def.hpp"
#include "Pathfinding/zzzz__ITransformedGraph_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__NavmeshBase_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Pathfinding::NavmeshTile.GetTileCoordinates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshTile::*)(int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Pathfinding::NavmeshTile::GetTileCoordinates)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e985e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshTile*>(),
                        {"GetTileCoordinates", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshTile.GetVertexArrayIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::NavmeshTile::*)(int32_t)>(&::Pathfinding::NavmeshTile::GetVertexArrayIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e985f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshTile*>(),
                        {"GetVertexArrayIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshTile.GetVertex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Int3 (::Pathfinding::NavmeshTile::*)(int32_t)>(&::Pathfinding::NavmeshTile::GetVertex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e98600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshTile*>(),
                        {"GetVertex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshTile.GetVertexInGraphSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Int3 (::Pathfinding::NavmeshTile::*)(int32_t)>(&::Pathfinding::NavmeshTile::GetVertexInGraphSpace)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e9863c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshTile*>(),
                        {"GetVertexInGraphSpace", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshTile.get_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Util::GraphTransform* (::Pathfinding::NavmeshTile::*)()>(&::Pathfinding::NavmeshTile::get_transform)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e98678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshTile*>(),
                        {"get_transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshTile.GetNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshTile::*)(::System::Action_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::NavmeshTile::GetNodes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e98690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshTile*>(),
                        {"GetNodes", {}, {::i2c::type_of<::System::Action_1<::Pathfinding::GraphNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshTile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshTile::*)()>(&::Pathfinding::NavmeshTile::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e986fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshTile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& Pathfinding::NavmeshTile::__cordl_internal_get_tris()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tris;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::NavmeshTile::__cordl_internal_get_tris() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tris;
}
constexpr void Pathfinding::NavmeshTile::__cordl_internal_set_tris(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tris = value;
}
constexpr ::ArrayW<::Pathfinding::Int3>& Pathfinding::NavmeshTile::__cordl_internal_get_verts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verts;
}
constexpr ::ArrayW<::Pathfinding::Int3> const& Pathfinding::NavmeshTile::__cordl_internal_get_verts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verts;
}
constexpr void Pathfinding::NavmeshTile::__cordl_internal_set_verts(::ArrayW<::Pathfinding::Int3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verts = value;
}
constexpr ::ArrayW<::Pathfinding::Int3>& Pathfinding::NavmeshTile::__cordl_internal_get_vertsInGraphSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertsInGraphSpace;
}
constexpr ::ArrayW<::Pathfinding::Int3> const& Pathfinding::NavmeshTile::__cordl_internal_get_vertsInGraphSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertsInGraphSpace;
}
constexpr void Pathfinding::NavmeshTile::__cordl_internal_set_vertsInGraphSpace(::ArrayW<::Pathfinding::Int3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertsInGraphSpace = value;
}
constexpr int32_t& Pathfinding::NavmeshTile::__cordl_internal_get_x()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr int32_t const& Pathfinding::NavmeshTile::__cordl_internal_get_x() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr void Pathfinding::NavmeshTile::__cordl_internal_set_x(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___x = value;
}
constexpr int32_t& Pathfinding::NavmeshTile::__cordl_internal_get_z()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___z;
}
constexpr int32_t const& Pathfinding::NavmeshTile::__cordl_internal_get_z() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___z;
}
constexpr void Pathfinding::NavmeshTile::__cordl_internal_set_z(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___z = value;
}
constexpr int32_t& Pathfinding::NavmeshTile::__cordl_internal_get_w()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w;
}
constexpr int32_t const& Pathfinding::NavmeshTile::__cordl_internal_get_w() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w;
}
constexpr void Pathfinding::NavmeshTile::__cordl_internal_set_w(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___w = value;
}
constexpr int32_t& Pathfinding::NavmeshTile::__cordl_internal_get_d()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___d;
}
constexpr int32_t const& Pathfinding::NavmeshTile::__cordl_internal_get_d() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___d;
}
constexpr void Pathfinding::NavmeshTile::__cordl_internal_set_d(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___d = value;
}
constexpr ::ArrayW<::Pathfinding::TriangleMeshNode*>& Pathfinding::NavmeshTile::__cordl_internal_get_nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr ::ArrayW<::Pathfinding::TriangleMeshNode*> const& Pathfinding::NavmeshTile::__cordl_internal_get_nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr void Pathfinding::NavmeshTile::__cordl_internal_set_nodes(::ArrayW<::Pathfinding::TriangleMeshNode*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodes = value;
}
constexpr ::Pathfinding::BBTree*& Pathfinding::NavmeshTile::__cordl_internal_get_bbTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bbTree;
}
constexpr ::Pathfinding::BBTree* const& Pathfinding::NavmeshTile::__cordl_internal_get_bbTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bbTree;
}
constexpr void Pathfinding::NavmeshTile::__cordl_internal_set_bbTree(::Pathfinding::BBTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bbTree = value;
}
constexpr bool& Pathfinding::NavmeshTile::__cordl_internal_get_flag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flag;
}
constexpr bool const& Pathfinding::NavmeshTile::__cordl_internal_get_flag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flag;
}
constexpr void Pathfinding::NavmeshTile::__cordl_internal_set_flag(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flag = value;
}
constexpr ::Pathfinding::NavmeshBase*& Pathfinding::NavmeshTile::__cordl_internal_get_graph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr ::Pathfinding::NavmeshBase* const& Pathfinding::NavmeshTile::__cordl_internal_get_graph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr void Pathfinding::NavmeshTile::__cordl_internal_set_graph(::Pathfinding::NavmeshBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graph = value;
}
inline void Pathfinding::NavmeshTile::GetTileCoordinates(int32_t  tileIndex, ::by_ref<int32_t>  x, ::by_ref<int32_t>  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshTile*>(),
                        {"GetTileCoordinates", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tileIndex, x, z);
}
inline int32_t Pathfinding::NavmeshTile::GetVertexArrayIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshTile*>(),
                        {"GetVertexArrayIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline ::Pathfinding::Int3 Pathfinding::NavmeshTile::GetVertex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshTile*>(),
                        {"GetVertex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Int3>(this, ___internal_method, index);
}
inline ::Pathfinding::Int3 Pathfinding::NavmeshTile::GetVertexInGraphSpace(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshTile*>(),
                        {"GetVertexInGraphSpace", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Int3>(this, ___internal_method, index);
}
inline ::Pathfinding::Util::GraphTransform* Pathfinding::NavmeshTile::get_transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshTile*>(),
                        {"get_transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::GraphTransform*>(this, ___internal_method);
}
inline void Pathfinding::NavmeshTile::GetNodes(::System::Action_1<::Pathfinding::GraphNode*>*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshTile*>(),
                        {"GetNodes", {}, {::i2c::type_of<::System::Action_1<::Pathfinding::GraphNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void Pathfinding::NavmeshTile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshTile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::NavmeshTile* Pathfinding::NavmeshTile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavmeshTile*>());
}
/// @brief Convert operator to "::Pathfinding::INavmeshHolder"
constexpr  Pathfinding::NavmeshTile::operator ::Pathfinding::INavmeshHolder*() noexcept {
return static_cast<::Pathfinding::INavmeshHolder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::INavmeshHolder"
constexpr ::Pathfinding::INavmeshHolder* Pathfinding::NavmeshTile::i___Pathfinding__INavmeshHolder() noexcept {
return static_cast<::Pathfinding::INavmeshHolder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Pathfinding::ITransformedGraph"
constexpr  Pathfinding::NavmeshTile::operator ::Pathfinding::ITransformedGraph*() noexcept {
return static_cast<::Pathfinding::ITransformedGraph*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::ITransformedGraph"
constexpr ::Pathfinding::ITransformedGraph* Pathfinding::NavmeshTile::i___Pathfinding__ITransformedGraph() noexcept {
return static_cast<::Pathfinding::ITransformedGraph*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Pathfinding::INavmesh"
constexpr  Pathfinding::NavmeshTile::operator ::Pathfinding::INavmesh*() noexcept {
return static_cast<::Pathfinding::INavmesh*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::INavmesh"
constexpr ::Pathfinding::INavmesh* Pathfinding::NavmeshTile::i___Pathfinding__INavmesh() noexcept {
return static_cast<::Pathfinding::INavmesh*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::NavmeshTile::NavmeshTile()   {
}
