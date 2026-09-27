#pragma once
// IWYU pragma private; include "Pathfinding/EndingConditionProximity.hpp"
#include "Pathfinding/zzzz__ABPathEndingCondition_impl.hpp"
#include "Pathfinding/zzzz__EndingConditionProximity_def.hpp"
#include "Pathfinding/zzzz__ABPath_def.hpp"
#include "Pathfinding/zzzz__PathNode_def.hpp"
//  Writing Method size for method: ::Pathfinding::EndingConditionProximity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EndingConditionProximity::*)(::Pathfinding::ABPath*, float_t)>(&::Pathfinding::EndingConditionProximity::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5eb24f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EndingConditionProximity*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::ABPath*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::EndingConditionProximity.TargetFound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::EndingConditionProximity::*)(::Pathfinding::PathNode*)>(&::Pathfinding::EndingConditionProximity::TargetFound)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5eb2520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::EndingConditionProximity*>(),
                    {::i2c::class_of<::Pathfinding::EndingConditionProximity*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr float_t& Pathfinding::EndingConditionProximity::__cordl_internal_get_maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr float_t const& Pathfinding::EndingConditionProximity::__cordl_internal_get_maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr void Pathfinding::EndingConditionProximity::__cordl_internal_set_maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistance = value;
}
inline void Pathfinding::EndingConditionProximity::_ctor(::Pathfinding::ABPath*  p, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EndingConditionProximity*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::ABPath*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, maxDistance);
}
inline bool Pathfinding::EndingConditionProximity::TargetFound(::Pathfinding::PathNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::EndingConditionProximity*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline ::Pathfinding::EndingConditionProximity* Pathfinding::EndingConditionProximity::New_ctor(::Pathfinding::ABPath*  p, float_t  maxDistance)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::EndingConditionProximity*>(p, maxDistance));
}
// Ctor Parameters []
constexpr ::Pathfinding::EndingConditionProximity::EndingConditionProximity()   {
}
