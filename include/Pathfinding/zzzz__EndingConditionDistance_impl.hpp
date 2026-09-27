#pragma once
// IWYU pragma private; include "Pathfinding/EndingConditionDistance.hpp"
#include "Pathfinding/zzzz__PathEndingCondition_impl.hpp"
#include "Pathfinding/zzzz__EndingConditionDistance_def.hpp"
#include "Pathfinding/zzzz__PathNode_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
//  Writing Method size for method: ::Pathfinding::EndingConditionDistance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::EndingConditionDistance::*)(::Pathfinding::Path*, int32_t)>(&::Pathfinding::EndingConditionDistance::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ead838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EndingConditionDistance*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::EndingConditionDistance.TargetFound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::EndingConditionDistance::*)(::Pathfinding::PathNode*)>(&::Pathfinding::EndingConditionDistance::TargetFound)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5eae064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::EndingConditionDistance*>(),
                    {::i2c::class_of<::Pathfinding::EndingConditionDistance*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::EndingConditionDistance::__cordl_internal_get_maxGScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxGScore;
}
constexpr int32_t const& Pathfinding::EndingConditionDistance::__cordl_internal_get_maxGScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxGScore;
}
constexpr void Pathfinding::EndingConditionDistance::__cordl_internal_set_maxGScore(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxGScore = value;
}
inline void Pathfinding::EndingConditionDistance::_ctor(::Pathfinding::Path*  p, int32_t  maxGScore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::EndingConditionDistance*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, maxGScore);
}
inline bool Pathfinding::EndingConditionDistance::TargetFound(::Pathfinding::PathNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::EndingConditionDistance*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline ::Pathfinding::EndingConditionDistance* Pathfinding::EndingConditionDistance::New_ctor(::Pathfinding::Path*  p, int32_t  maxGScore)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::EndingConditionDistance*>(p, maxGScore));
}
// Ctor Parameters []
constexpr ::Pathfinding::EndingConditionDistance::EndingConditionDistance()   {
}
