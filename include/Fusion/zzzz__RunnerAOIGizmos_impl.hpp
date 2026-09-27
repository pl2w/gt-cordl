#pragma once
// IWYU pragma private; include "Fusion/RunnerAOIGizmos.hpp"
#include "Fusion/zzzz__SimulationBehaviour_impl.hpp"
#include "Fusion/zzzz__RunnerAOIGizmos_def.hpp"
//  Writing Method size for method: ::Fusion::RunnerAOIGizmos._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerAOIGizmos::*)()>(&::Fusion::RunnerAOIGizmos::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f4c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerAOIGizmos*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::RunnerAOIGizmos::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerAOIGizmos*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::RunnerAOIGizmos* Fusion::RunnerAOIGizmos::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::RunnerAOIGizmos*>());
}
// Ctor Parameters []
constexpr ::Fusion::RunnerAOIGizmos::RunnerAOIGizmos()   {
}
