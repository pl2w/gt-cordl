#pragma once
// IWYU pragma private; include "Pathfinding/LocalSpaceGraph.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "Pathfinding/zzzz__LocalSpaceGraph_def.hpp"
#include "Pathfinding/Util/zzzz__GraphTransform_def.hpp"
//  Writing Method size for method: ::Pathfinding::LocalSpaceGraph.get_transformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Util::GraphTransform* (::Pathfinding::LocalSpaceGraph::*)()>(&::Pathfinding::LocalSpaceGraph::get_transformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6ace8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LocalSpaceGraph*>(),
                        {"get_transformation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LocalSpaceGraph.set_transformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LocalSpaceGraph::*)(::Pathfinding::Util::GraphTransform*)>(&::Pathfinding::LocalSpaceGraph::set_transformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6acf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LocalSpaceGraph*>(),
                        {"set_transformation", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LocalSpaceGraph.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LocalSpaceGraph::*)()>(&::Pathfinding::LocalSpaceGraph::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e6acf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LocalSpaceGraph*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LocalSpaceGraph.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LocalSpaceGraph::*)()>(&::Pathfinding::LocalSpaceGraph::Refresh)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5e6ad68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LocalSpaceGraph*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::LocalSpaceGraph._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LocalSpaceGraph::*)()>(&::Pathfinding::LocalSpaceGraph::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6ae7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LocalSpaceGraph*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Matrix4x4& Pathfinding::LocalSpaceGraph::__cordl_internal_get_originalMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& Pathfinding::LocalSpaceGraph::__cordl_internal_get_originalMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalMatrix;
}
constexpr void Pathfinding::LocalSpaceGraph::__cordl_internal_set_originalMatrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalMatrix = value;
}
constexpr ::Pathfinding::Util::GraphTransform*& Pathfinding::LocalSpaceGraph::__cordl_internal_get__transformation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformation_k__BackingField;
}
constexpr ::Pathfinding::Util::GraphTransform* const& Pathfinding::LocalSpaceGraph::__cordl_internal_get__transformation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformation_k__BackingField;
}
constexpr void Pathfinding::LocalSpaceGraph::__cordl_internal_set__transformation_k__BackingField(::Pathfinding::Util::GraphTransform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformation_k__BackingField = value;
}
inline ::Pathfinding::Util::GraphTransform* Pathfinding::LocalSpaceGraph::get_transformation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LocalSpaceGraph*>(),
                        {"get_transformation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::GraphTransform*>(this, ___internal_method);
}
inline void Pathfinding::LocalSpaceGraph::set_transformation(::Pathfinding::Util::GraphTransform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LocalSpaceGraph*>(),
                        {"set_transformation", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::LocalSpaceGraph::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LocalSpaceGraph*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::LocalSpaceGraph::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LocalSpaceGraph*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::LocalSpaceGraph::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LocalSpaceGraph*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::LocalSpaceGraph* Pathfinding::LocalSpaceGraph::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::LocalSpaceGraph*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::LocalSpaceGraph::LocalSpaceGraph()   {
}
