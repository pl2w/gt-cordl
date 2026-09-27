#pragma once
// IWYU pragma private; include "Pathfinding/ABPathEndingCondition.hpp"
#include "Pathfinding/zzzz__PathEndingCondition_impl.hpp"
#include "Pathfinding/zzzz__ABPathEndingCondition_def.hpp"
#include "Pathfinding/zzzz__ABPath_def.hpp"
#include "Pathfinding/zzzz__PathNode_def.hpp"
//  Writing Method size for method: ::Pathfinding::ABPathEndingCondition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ABPathEndingCondition::*)(::Pathfinding::ABPath*)>(&::Pathfinding::ABPathEndingCondition::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5eb20bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPathEndingCondition*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::ABPath*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ABPathEndingCondition.TargetFound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ABPathEndingCondition::*)(::Pathfinding::PathNode*)>(&::Pathfinding::ABPathEndingCondition::TargetFound)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5eb24c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ABPathEndingCondition*>(),
                    {::i2c::class_of<::Pathfinding::ABPathEndingCondition*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::ABPath*& Pathfinding::ABPathEndingCondition::__cordl_internal_get_abPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abPath;
}
constexpr ::Pathfinding::ABPath* const& Pathfinding::ABPathEndingCondition::__cordl_internal_get_abPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abPath;
}
constexpr void Pathfinding::ABPathEndingCondition::__cordl_internal_set_abPath(::Pathfinding::ABPath*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abPath = value;
}
inline void Pathfinding::ABPathEndingCondition::_ctor(::Pathfinding::ABPath*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ABPathEndingCondition*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::ABPath*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline bool Pathfinding::ABPathEndingCondition::TargetFound(::Pathfinding::PathNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ABPathEndingCondition*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline ::Pathfinding::ABPathEndingCondition* Pathfinding::ABPathEndingCondition::New_ctor(::Pathfinding::ABPath*  p)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ABPathEndingCondition*>(p));
}
// Ctor Parameters []
constexpr ::Pathfinding::ABPathEndingCondition::ABPathEndingCondition()   {
}
