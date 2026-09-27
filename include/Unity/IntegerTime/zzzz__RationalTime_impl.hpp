#pragma once
// IWYU pragma private; include "Unity/IntegerTime/RationalTime.hpp"
#include "Unity/IntegerTime/zzzz__RationalTime_TicksPerSecond_impl.hpp"
#include "Unity/IntegerTime/zzzz__RationalTime_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "Unity/IntegerTime/zzzz__RationalTime_TicksPerSecond_def.hpp"
//  Writing Method size for method: ::Unity::IntegerTime::RationalTime.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::IntegerTime::RationalTime::*)()>(&::Unity::IntegerTime::RationalTime::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb55c6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::IntegerTime::RationalTime>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::RationalTime.op_Explicit___Unity__IntegerTime__DiscreteTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IntegerTime::DiscreteTime (*)(::Unity::IntegerTime::RationalTime)>(&::Unity::IntegerTime::RationalTime::op_Explicit___Unity__IntegerTime__DiscreteTime)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb55c6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::IntegerTime::RationalTime>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Unity::IntegerTime::RationalTime>()}}
                    )));
    return ___internal_method;
  }
};
inline int64_t Unity::IntegerTime::RationalTime::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::IntegerTime::RationalTime>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline ::Unity::IntegerTime::DiscreteTime Unity::IntegerTime::RationalTime::op_Explicit___Unity__IntegerTime__DiscreteTime(::Unity::IntegerTime::RationalTime  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::IntegerTime::RationalTime>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Unity::IntegerTime::RationalTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::IntegerTime::DiscreteTime>(nullptr, ___internal_method, t);
}
// Ctor Parameters [CppParam { name: "m_Count", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TicksPerSecond", ty: "::GlobalNamespace::RationalTime_TicksPerSecond", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::IntegerTime::RationalTime::RationalTime(int64_t  m_Count, ::GlobalNamespace::RationalTime_TicksPerSecond  m_TicksPerSecond) noexcept  {
this->m_Count = m_Count;
this->m_TicksPerSecond = m_TicksPerSecond;
}
// Ctor Parameters []
constexpr ::Unity::IntegerTime::RationalTime::RationalTime()   {
}
