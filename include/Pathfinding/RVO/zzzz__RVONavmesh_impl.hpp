#pragma once
// IWYU pragma private; include "Pathfinding/RVO/RVONavmesh.hpp"
#include "Pathfinding/zzzz__GraphModifier_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/RVO/zzzz__RVONavmesh_def.hpp"
#include "Pathfinding/RVO/zzzz__ObstacleVertex_def.hpp"
#include "Pathfinding/RVO/zzzz__RVONavmesh_def.hpp"
#include "Pathfinding/RVO/zzzz__Simulator_def.hpp"
#include "Pathfinding/zzzz__GridGraph_def.hpp"
#include "Pathfinding/zzzz__INavmesh_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::RVO::RVONavmesh.OnPostCacheLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVONavmesh::*)()>(&::Pathfinding::RVO::RVONavmesh::OnPostCacheLoad)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ee9118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(),
                    {::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVONavmesh.OnGraphsPostUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVONavmesh::*)()>(&::Pathfinding::RVO::RVONavmesh::OnGraphsPostUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ee9128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(),
                    {::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVONavmesh.OnLatePostScan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVONavmesh::*)()>(&::Pathfinding::RVO::RVONavmesh::OnLatePostScan)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5ee9138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(),
                    {::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVONavmesh.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVONavmesh::*)()>(&::Pathfinding::RVO::RVONavmesh::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ee9844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(),
                    {::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVONavmesh.RemoveObstacles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVONavmesh::*)()>(&::Pathfinding::RVO::RVONavmesh::RemoveObstacles)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5ee9454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(),
                        {"RemoveObstacles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVONavmesh.AddGraphObstacles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVONavmesh::*)(::Pathfinding::RVO::Simulator*, ::Pathfinding::GridGraph*)>(&::Pathfinding::RVO::RVONavmesh::AddGraphObstacles)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5ee9634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(),
                        {"AddGraphObstacles", {}, {::i2c::type_of<::Pathfinding::RVO::Simulator*>(), ::i2c::type_of<::Pathfinding::GridGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVONavmesh.AddGraphObstacles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVONavmesh::*)(::Pathfinding::RVO::Simulator*, ::Pathfinding::INavmesh*)>(&::Pathfinding::RVO::RVONavmesh::AddGraphObstacles)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ee9550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(),
                        {"AddGraphObstacles", {}, {::i2c::type_of<::Pathfinding::RVO::Simulator*>(), ::i2c::type_of<::Pathfinding::INavmesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVONavmesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVONavmesh::*)()>(&::Pathfinding::RVO::RVONavmesh::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ee9870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Pathfinding::RVO::RVONavmesh::__cordl_internal_get_wallHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallHeight;
}
constexpr float_t const& Pathfinding::RVO::RVONavmesh::__cordl_internal_get_wallHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallHeight;
}
constexpr void Pathfinding::RVO::RVONavmesh::__cordl_internal_set_wallHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wallHeight = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*& Pathfinding::RVO::RVONavmesh::__cordl_internal_get_obstacles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obstacles;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* const& Pathfinding::RVO::RVONavmesh::__cordl_internal_get_obstacles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obstacles;
}
constexpr void Pathfinding::RVO::RVONavmesh::__cordl_internal_set_obstacles(::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___obstacles = value;
}
constexpr ::Pathfinding::RVO::Simulator*& Pathfinding::RVO::RVONavmesh::__cordl_internal_get_lastSim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSim;
}
constexpr ::Pathfinding::RVO::Simulator* const& Pathfinding::RVO::RVONavmesh::__cordl_internal_get_lastSim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSim;
}
constexpr void Pathfinding::RVO::RVONavmesh::__cordl_internal_set_lastSim(::Pathfinding::RVO::Simulator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSim = value;
}
inline void Pathfinding::RVO::RVONavmesh::OnPostCacheLoad()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVONavmesh::OnGraphsPostUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVONavmesh::OnLatePostScan()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVONavmesh::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVONavmesh::RemoveObstacles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(),
                        {"RemoveObstacles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVONavmesh::AddGraphObstacles(::Pathfinding::RVO::Simulator*  sim, ::Pathfinding::GridGraph*  grid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(),
                        {"AddGraphObstacles", {}, {::i2c::type_of<::Pathfinding::RVO::Simulator*>(), ::i2c::type_of<::Pathfinding::GridGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sim, grid);
}
inline void Pathfinding::RVO::RVONavmesh::AddGraphObstacles(::Pathfinding::RVO::Simulator*  simulator, ::Pathfinding::INavmesh*  navmesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(),
                        {"AddGraphObstacles", {}, {::i2c::type_of<::Pathfinding::RVO::Simulator*>(), ::i2c::type_of<::Pathfinding::INavmesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulator, navmesh);
}
inline void Pathfinding::RVO::RVONavmesh::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVONavmesh*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RVO::RVONavmesh* Pathfinding::RVO::RVONavmesh::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RVO::RVONavmesh*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RVO::RVONavmesh::RVONavmesh()   {
}
//  Writing Method size for method: ::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0::*)()>(&::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee9868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0._AddGraphObstacles_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0::*)(::System::Collections::Generic::List_1<::Pathfinding::Int3>*, bool)>(&::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0::_AddGraphObstacles_b__0)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5ee9a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0*>(),
                        {"<AddGraphObstacles>b__0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Int3>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Pathfinding::RVO::RVONavmesh>& Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Pathfinding::RVO::RVONavmesh> const& Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0::__cordl_internal_set___4__this(::UnityW<::Pathfinding::RVO::RVONavmesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Pathfinding::RVO::Simulator*& Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0::__cordl_internal_get_simulator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulator;
}
constexpr ::Pathfinding::RVO::Simulator* const& Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0::__cordl_internal_get_simulator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulator;
}
constexpr void Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0::__cordl_internal_set_simulator(::Pathfinding::RVO::Simulator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___simulator = value;
}
inline void Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0::_AddGraphObstacles_b__0(::System::Collections::Generic::List_1<::Pathfinding::Int3>*  vertices, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0*>(),
                        {"<AddGraphObstacles>b__0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Int3>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices, cycle);
}
inline ::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0* Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0::RVONavmesh___c__DisplayClass9_0()   {
}
//  Writing Method size for method: ::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0::*)()>(&::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee9860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0._AddGraphObstacles_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0::*)(::ArrayW<::UnityEngine::Vector3>)>(&::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0::_AddGraphObstacles_b__0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5ee9924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0*>(),
                        {"<AddGraphObstacles>b__0", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0::__cordl_internal_get_reverse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverse;
}
constexpr bool const& Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0::__cordl_internal_get_reverse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverse;
}
constexpr void Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0::__cordl_internal_set_reverse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverse = value;
}
constexpr ::UnityW<::Pathfinding::RVO::RVONavmesh>& Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Pathfinding::RVO::RVONavmesh> const& Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0::__cordl_internal_set___4__this(::UnityW<::Pathfinding::RVO::RVONavmesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Pathfinding::RVO::Simulator*& Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0::__cordl_internal_get_sim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sim;
}
constexpr ::Pathfinding::RVO::Simulator* const& Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0::__cordl_internal_get_sim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sim;
}
constexpr void Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0::__cordl_internal_set_sim(::Pathfinding::RVO::Simulator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sim = value;
}
inline void Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0::_AddGraphObstacles_b__0(::ArrayW<::UnityEngine::Vector3>  vertices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0*>(),
                        {"<AddGraphObstacles>b__0", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices);
}
inline ::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0* Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0::RVONavmesh___c__DisplayClass8_0()   {
}
