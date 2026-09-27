#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/IBoundsTraversalTest.hpp"
#include "Fusion/LagCompensation/zzzz__IBoundsTraversalTest_def.hpp"
#include "Fusion/LagCompensation/zzzz__AABB_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::IBoundsTraversalTest.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::IBoundsTraversalTest::*)(::by_ref<::Fusion::LagCompensation::AABB>)>(&::Fusion::LagCompensation::IBoundsTraversalTest::Check)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::IBoundsTraversalTest*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::IBoundsTraversalTest*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool Fusion::LagCompensation::IBoundsTraversalTest::Check(::by_ref<::Fusion::LagCompensation::AABB>  bounds)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::IBoundsTraversalTest*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bounds);
}
