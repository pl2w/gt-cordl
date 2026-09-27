#pragma once
// IWYU pragma private; include "Pathfinding/PathEndingCondition.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__PathEndingCondition_def.hpp"
#include "Pathfinding/zzzz__PathNode_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
//  Writing Method size for method: ::Pathfinding::PathEndingCondition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathEndingCondition::*)()>(&::Pathfinding::PathEndingCondition::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eb24c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathEndingCondition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathEndingCondition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathEndingCondition::*)(::Pathfinding::Path*)>(&::Pathfinding::PathEndingCondition::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5eadfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathEndingCondition*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathEndingCondition.TargetFound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::PathEndingCondition::*)(::Pathfinding::PathNode*)>(&::Pathfinding::PathEndingCondition::TargetFound)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PathEndingCondition*>(),
                    {::i2c::class_of<::Pathfinding::PathEndingCondition*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Path*& Pathfinding::PathEndingCondition::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::Pathfinding::Path* const& Pathfinding::PathEndingCondition::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Pathfinding::PathEndingCondition::__cordl_internal_set_path(::Pathfinding::Path*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
inline void Pathfinding::PathEndingCondition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathEndingCondition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::PathEndingCondition::_ctor(::Pathfinding::Path*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathEndingCondition*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline bool Pathfinding::PathEndingCondition::TargetFound(::Pathfinding::PathNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PathEndingCondition*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline ::Pathfinding::PathEndingCondition* Pathfinding::PathEndingCondition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PathEndingCondition*>());
}
inline ::Pathfinding::PathEndingCondition* Pathfinding::PathEndingCondition::New_ctor(::Pathfinding::Path*  p)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PathEndingCondition*>(p));
}
// Ctor Parameters []
constexpr ::Pathfinding::PathEndingCondition::PathEndingCondition()   {
}
