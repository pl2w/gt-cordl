#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRScene.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRScene_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRScene.RequestSpaceSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (*)()>(&::GlobalNamespace::OVRScene::RequestSpaceSetup)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa57e62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScene*>(),
                        {"RequestSpaceSetup", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRScene::RequestSpaceSetup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScene*>(),
                        {"RequestSpaceSetup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRScene::OVRScene()   {
}
