#pragma once
// IWYU pragma private; include "Pathfinding/GraphUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__GraphUtilities_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__GraphUtilities_def.hpp"
#include "Pathfinding/zzzz__GridGraph_def.hpp"
#include "Pathfinding/zzzz__GridNodeBase_def.hpp"
#include "Pathfinding/zzzz__INavmesh_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__NavGraph_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::GraphUtilities.GetContours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (*)(::Pathfinding::NavGraph*)>(&::Pathfinding::GraphUtilities::GetContours)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5e597ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUtilities*>(),
                        {"GetContours", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUtilities.GetContours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::INavmesh*, ::System::Action_2<::System::Collections::Generic::List_1<::Pathfinding::Int3>*,bool>*)>(&::Pathfinding::GraphUtilities::GetContours)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5e599b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUtilities*>(),
                        {"GetContours", {}, {::i2c::type_of<::Pathfinding::INavmesh*>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::Pathfinding::Int3>*,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUtilities.GetContours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::GridGraph*, ::System::Action_1<::ArrayW<::UnityEngine::Vector3>>*, float_t, ::ArrayW<::Pathfinding::GridNodeBase*>)>(&::Pathfinding::GraphUtilities::GetContours)> {
  constexpr static std::size_t size = 0x9e4;
  constexpr static std::size_t addrs = 0x5e59c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUtilities*>(),
                        {"GetContours", {}, {::i2c::type_of<::Pathfinding::GridGraph*>(), ::i2c::type_of<::System::Action_1<::ArrayW<::UnityEngine::Vector3>>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::Pathfinding::GridNodeBase*>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Pathfinding::GraphUtilities::GetContours(::Pathfinding::NavGraph*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUtilities*>(),
                        {"GetContours", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(nullptr, ___internal_method, graph);
}
inline void Pathfinding::GraphUtilities::GetContours(::Pathfinding::INavmesh*  navmesh, ::System::Action_2<::System::Collections::Generic::List_1<::Pathfinding::Int3>*,bool>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUtilities*>(),
                        {"GetContours", {}, {::i2c::type_of<::Pathfinding::INavmesh*>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::Pathfinding::Int3>*,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, navmesh, results);
}
inline void Pathfinding::GraphUtilities::GetContours(::Pathfinding::GridGraph*  grid, ::System::Action_1<::ArrayW<::UnityEngine::Vector3>>*  callback, float_t  yMergeThreshold, ::ArrayW<::Pathfinding::GridNodeBase*>  nodes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUtilities*>(),
                        {"GetContours", {}, {::i2c::type_of<::Pathfinding::GridGraph*>(), ::i2c::type_of<::System::Action_1<::ArrayW<::UnityEngine::Vector3>>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::Pathfinding::GridNodeBase*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, grid, callback, yMergeThreshold, nodes);
}
// Ctor Parameters []
constexpr ::Pathfinding::GraphUtilities::GraphUtilities()   {
}
//  Writing Method size for method: ::Pathfinding::GraphUtilities___c__DisplayClass1_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUtilities___c__DisplayClass1_0::*)()>(&::Pathfinding::GraphUtilities___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e5a674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUtilities___c__DisplayClass1_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUtilities___c__DisplayClass1_0._GetContours_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUtilities___c__DisplayClass1_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::GraphUtilities___c__DisplayClass1_0::_GetContours_b__0)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5e5aa08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUtilities___c__DisplayClass1_0*>(),
                        {"<GetContours>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUtilities___c__DisplayClass1_0._GetContours_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUtilities___c__DisplayClass1_0::*)(::System::Collections::Generic::List_1<int32_t>*, bool)>(&::Pathfinding::GraphUtilities___c__DisplayClass1_0::_GetContours_b__1)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5e5acbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUtilities___c__DisplayClass1_0*>(),
                        {"<GetContours>b__1", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<bool>& Pathfinding::GraphUtilities___c__DisplayClass1_0::__cordl_internal_get_uses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uses;
}
constexpr ::ArrayW<bool> const& Pathfinding::GraphUtilities___c__DisplayClass1_0::__cordl_internal_get_uses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uses;
}
constexpr void Pathfinding::GraphUtilities___c__DisplayClass1_0::__cordl_internal_set_uses(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uses = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& Pathfinding::GraphUtilities___c__DisplayClass1_0::__cordl_internal_get_outline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outline;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& Pathfinding::GraphUtilities___c__DisplayClass1_0::__cordl_internal_get_outline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outline;
}
constexpr void Pathfinding::GraphUtilities___c__DisplayClass1_0::__cordl_internal_set_outline(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outline = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& Pathfinding::GraphUtilities___c__DisplayClass1_0::__cordl_internal_get_hasInEdge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasInEdge;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& Pathfinding::GraphUtilities___c__DisplayClass1_0::__cordl_internal_get_hasInEdge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasInEdge;
}
constexpr void Pathfinding::GraphUtilities___c__DisplayClass1_0::__cordl_internal_set_hasInEdge(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasInEdge = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Pathfinding::Int3>*& Pathfinding::GraphUtilities___c__DisplayClass1_0::__cordl_internal_get_vertexPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertexPositions;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Pathfinding::Int3>* const& Pathfinding::GraphUtilities___c__DisplayClass1_0::__cordl_internal_get_vertexPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertexPositions;
}
constexpr void Pathfinding::GraphUtilities___c__DisplayClass1_0::__cordl_internal_set_vertexPositions(::System::Collections::Generic::Dictionary_2<int32_t,::Pathfinding::Int3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertexPositions = value;
}
constexpr ::System::Action_2<::System::Collections::Generic::List_1<::Pathfinding::Int3>*,bool>*& Pathfinding::GraphUtilities___c__DisplayClass1_0::__cordl_internal_get_results()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___results;
}
constexpr ::System::Action_2<::System::Collections::Generic::List_1<::Pathfinding::Int3>*,bool>* const& Pathfinding::GraphUtilities___c__DisplayClass1_0::__cordl_internal_get_results() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___results;
}
constexpr void Pathfinding::GraphUtilities___c__DisplayClass1_0::__cordl_internal_set_results(::System::Action_2<::System::Collections::Generic::List_1<::Pathfinding::Int3>*,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___results = value;
}
inline void Pathfinding::GraphUtilities___c__DisplayClass1_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUtilities___c__DisplayClass1_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphUtilities___c__DisplayClass1_0::_GetContours_b__0(::Pathfinding::GraphNode*  _node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUtilities___c__DisplayClass1_0*>(),
                        {"<GetContours>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _node);
}
inline void Pathfinding::GraphUtilities___c__DisplayClass1_0::_GetContours_b__1(::System::Collections::Generic::List_1<int32_t>*  chain, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUtilities___c__DisplayClass1_0*>(),
                        {"<GetContours>b__1", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chain, cycle);
}
inline ::Pathfinding::GraphUtilities___c__DisplayClass1_0* Pathfinding::GraphUtilities___c__DisplayClass1_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GraphUtilities___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::GraphUtilities___c__DisplayClass1_0::GraphUtilities___c__DisplayClass1_0()   {
}
//  Writing Method size for method: ::Pathfinding::GraphUtilities___c__DisplayClass0_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUtilities___c__DisplayClass0_0::*)()>(&::Pathfinding::GraphUtilities___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e599b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUtilities___c__DisplayClass0_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUtilities___c__DisplayClass0_0._GetContours_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUtilities___c__DisplayClass0_0::*)(::System::Collections::Generic::List_1<::Pathfinding::Int3>*, bool)>(&::Pathfinding::GraphUtilities___c__DisplayClass0_0::_GetContours_b__0)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5e5a6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUtilities___c__DisplayClass0_0*>(),
                        {"<GetContours>b__0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Int3>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUtilities___c__DisplayClass0_0._GetContours_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUtilities___c__DisplayClass0_0::*)(::ArrayW<::UnityEngine::Vector3>)>(&::Pathfinding::GraphUtilities___c__DisplayClass0_0::_GetContours_b__1)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5e5a89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUtilities___c__DisplayClass0_0*>(),
                        {"<GetContours>b__1", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& Pathfinding::GraphUtilities___c__DisplayClass0_0::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& Pathfinding::GraphUtilities___c__DisplayClass0_0::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void Pathfinding::GraphUtilities___c__DisplayClass0_0::__cordl_internal_set_result(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
inline void Pathfinding::GraphUtilities___c__DisplayClass0_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUtilities___c__DisplayClass0_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphUtilities___c__DisplayClass0_0::_GetContours_b__0(::System::Collections::Generic::List_1<::Pathfinding::Int3>*  vertices, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUtilities___c__DisplayClass0_0*>(),
                        {"<GetContours>b__0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Int3>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices, cycle);
}
inline void Pathfinding::GraphUtilities___c__DisplayClass0_0::_GetContours_b__1(::ArrayW<::UnityEngine::Vector3>  vertices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUtilities___c__DisplayClass0_0*>(),
                        {"<GetContours>b__1", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices);
}
inline ::Pathfinding::GraphUtilities___c__DisplayClass0_0* Pathfinding::GraphUtilities___c__DisplayClass0_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GraphUtilities___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::GraphUtilities___c__DisplayClass0_0::GraphUtilities___c__DisplayClass0_0()   {
}
