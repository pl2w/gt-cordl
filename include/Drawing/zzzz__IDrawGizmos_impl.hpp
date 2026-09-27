#pragma once
// IWYU pragma private; include "Drawing/IDrawGizmos.hpp"
#include "Drawing/zzzz__IDrawGizmos_def.hpp"
//  Writing Method size for method: ::Drawing::IDrawGizmos.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::IDrawGizmos::*)()>(&::Drawing::IDrawGizmos::DrawGizmos)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::IDrawGizmos*>(),
                    {::i2c::class_of<::Drawing::IDrawGizmos*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Drawing::IDrawGizmos::DrawGizmos()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::IDrawGizmos*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
