#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotTestScenario1.hpp"
#include "GlobalNamespace/zzzz__SlingshotTestScenario_impl.hpp"
#include "GlobalNamespace/zzzz__SlingshotTestScenario1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SlingshotTestScenario1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotTestScenario1::*)()>(&::GlobalNamespace::SlingshotTestScenario1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573d1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotTestScenario1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SlingshotTestScenario1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotTestScenario1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SlingshotTestScenario1* GlobalNamespace::SlingshotTestScenario1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SlingshotTestScenario1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SlingshotTestScenario1::SlingshotTestScenario1()   {
}
