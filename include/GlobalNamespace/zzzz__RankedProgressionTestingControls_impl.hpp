#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedProgressionTestingControls.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RankedProgressionTestingControls_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionTestingControls._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionTestingControls::*)()>(&::GlobalNamespace::RankedProgressionTestingControls::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5968e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionTestingControls*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RankedProgressionTestingControls::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionTestingControls*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RankedProgressionTestingControls* GlobalNamespace::RankedProgressionTestingControls::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RankedProgressionTestingControls*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankedProgressionTestingControls::RankedProgressionTestingControls()   {
}
