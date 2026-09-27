#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorLevelGeneratorV2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelGeneratorV2_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelGeneratorV2_TreeLevelConfig_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGeneratorV2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelGeneratorV2::*)()>(&::GlobalNamespace::GhostReactorLevelGeneratorV2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58483f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGeneratorV2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GhostReactorLevelGeneratorV2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGeneratorV2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactorLevelGeneratorV2* GlobalNamespace::GhostReactorLevelGeneratorV2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactorLevelGeneratorV2*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorLevelGeneratorV2::GhostReactorLevelGeneratorV2()   {
}
