#pragma once
// IWYU pragma private; include "Pathfinding/NNConstraint.hpp"
#include "Pathfinding/zzzz__GraphMask_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__NNConstraint_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__NavGraph_def.hpp"
//  Writing Method size for method: ::Pathfinding::NNConstraint.SuitableGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::NNConstraint::*)(int32_t, ::Pathfinding::NavGraph*)>(&::Pathfinding::NNConstraint::SuitableGraph)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e48040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NNConstraint*>(),
                    {::i2c::class_of<::Pathfinding::NNConstraint*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NNConstraint.Suitable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::NNConstraint::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::NNConstraint::Suitable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e48060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NNConstraint*>(),
                    {::i2c::class_of<::Pathfinding::NNConstraint*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NNConstraint.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNConstraint* (*)()>(&::Pathfinding::NNConstraint::get_Default)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e48108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NNConstraint*>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NNConstraint.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNConstraint* (*)()>(&::Pathfinding::NNConstraint::get_None)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e481ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NNConstraint*>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NNConstraint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NNConstraint::*)()>(&::Pathfinding::NNConstraint::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e48180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NNConstraint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::GraphMask& Pathfinding::NNConstraint::__cordl_internal_get_graphMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphMask;
}
constexpr ::Pathfinding::GraphMask const& Pathfinding::NNConstraint::__cordl_internal_get_graphMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphMask;
}
constexpr void Pathfinding::NNConstraint::__cordl_internal_set_graphMask(::Pathfinding::GraphMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphMask = value;
}
constexpr bool& Pathfinding::NNConstraint::__cordl_internal_get_constrainArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constrainArea;
}
constexpr bool const& Pathfinding::NNConstraint::__cordl_internal_get_constrainArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constrainArea;
}
constexpr void Pathfinding::NNConstraint::__cordl_internal_set_constrainArea(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constrainArea = value;
}
constexpr int32_t& Pathfinding::NNConstraint::__cordl_internal_get_area()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___area;
}
constexpr int32_t const& Pathfinding::NNConstraint::__cordl_internal_get_area() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___area;
}
constexpr void Pathfinding::NNConstraint::__cordl_internal_set_area(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___area = value;
}
constexpr bool& Pathfinding::NNConstraint::__cordl_internal_get_constrainWalkability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constrainWalkability;
}
constexpr bool const& Pathfinding::NNConstraint::__cordl_internal_get_constrainWalkability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constrainWalkability;
}
constexpr void Pathfinding::NNConstraint::__cordl_internal_set_constrainWalkability(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constrainWalkability = value;
}
constexpr bool& Pathfinding::NNConstraint::__cordl_internal_get_walkable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___walkable;
}
constexpr bool const& Pathfinding::NNConstraint::__cordl_internal_get_walkable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___walkable;
}
constexpr void Pathfinding::NNConstraint::__cordl_internal_set_walkable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___walkable = value;
}
constexpr bool& Pathfinding::NNConstraint::__cordl_internal_get_distanceXZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceXZ;
}
constexpr bool const& Pathfinding::NNConstraint::__cordl_internal_get_distanceXZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceXZ;
}
constexpr void Pathfinding::NNConstraint::__cordl_internal_set_distanceXZ(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceXZ = value;
}
constexpr bool& Pathfinding::NNConstraint::__cordl_internal_get_constrainTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constrainTags;
}
constexpr bool const& Pathfinding::NNConstraint::__cordl_internal_get_constrainTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constrainTags;
}
constexpr void Pathfinding::NNConstraint::__cordl_internal_set_constrainTags(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constrainTags = value;
}
constexpr int32_t& Pathfinding::NNConstraint::__cordl_internal_get_tags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tags;
}
constexpr int32_t const& Pathfinding::NNConstraint::__cordl_internal_get_tags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tags;
}
constexpr void Pathfinding::NNConstraint::__cordl_internal_set_tags(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tags = value;
}
constexpr bool& Pathfinding::NNConstraint::__cordl_internal_get_constrainDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constrainDistance;
}
constexpr bool const& Pathfinding::NNConstraint::__cordl_internal_get_constrainDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constrainDistance;
}
constexpr void Pathfinding::NNConstraint::__cordl_internal_set_constrainDistance(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constrainDistance = value;
}
inline bool Pathfinding::NNConstraint::SuitableGraph(int32_t  graphIndex, ::Pathfinding::NavGraph*  graph)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NNConstraint*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, graphIndex, graph);
}
inline bool Pathfinding::NNConstraint::Suitable(::Pathfinding::GraphNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NNConstraint*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline ::Pathfinding::NNConstraint* Pathfinding::NNConstraint::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NNConstraint*>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNConstraint*>(nullptr, ___internal_method);
}
inline ::Pathfinding::NNConstraint* Pathfinding::NNConstraint::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NNConstraint*>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNConstraint*>(nullptr, ___internal_method);
}
inline void Pathfinding::NNConstraint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NNConstraint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::NNConstraint* Pathfinding::NNConstraint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NNConstraint*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::NNConstraint::NNConstraint()   {
}
