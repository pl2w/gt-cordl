#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotTestScenario.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SlingshotTestScenario_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SlingshotTestScenario._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotTestScenario::*)()>(&::GlobalNamespace::SlingshotTestScenario::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573d1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotTestScenario*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SlingshotTestScenario::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotTestScenario*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SlingshotTestScenario* GlobalNamespace::SlingshotTestScenario::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SlingshotTestScenario*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SlingshotTestScenario::SlingshotTestScenario()   {
}
