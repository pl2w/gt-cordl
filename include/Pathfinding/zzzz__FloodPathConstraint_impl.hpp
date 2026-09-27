#pragma once
// IWYU pragma private; include "Pathfinding/FloodPathConstraint.hpp"
#include "Pathfinding/zzzz__NNConstraint_impl.hpp"
#include "Pathfinding/zzzz__FloodPathConstraint_def.hpp"
#include "Pathfinding/zzzz__FloodPath_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
//  Writing Method size for method: ::Pathfinding::FloodPathConstraint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::FloodPathConstraint::*)(::Pathfinding::FloodPath*)>(&::Pathfinding::FloodPathConstraint::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5eaecd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPathConstraint*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::FloodPath*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FloodPathConstraint.Suitable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::FloodPathConstraint::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::FloodPathConstraint::Suitable)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5eaed64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::FloodPathConstraint*>(),
                    {::i2c::class_of<::Pathfinding::FloodPathConstraint*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::FloodPath*& Pathfinding::FloodPathConstraint::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::Pathfinding::FloodPath* const& Pathfinding::FloodPathConstraint::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Pathfinding::FloodPathConstraint::__cordl_internal_set_path(::Pathfinding::FloodPath*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
inline void Pathfinding::FloodPathConstraint::_ctor(::Pathfinding::FloodPath*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPathConstraint*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::FloodPath*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline bool Pathfinding::FloodPathConstraint::Suitable(::Pathfinding::GraphNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::FloodPathConstraint*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline ::Pathfinding::FloodPathConstraint* Pathfinding::FloodPathConstraint::New_ctor(::Pathfinding::FloodPath*  path)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::FloodPathConstraint*>(path));
}
// Ctor Parameters []
constexpr ::Pathfinding::FloodPathConstraint::FloodPathConstraint()   {
}
