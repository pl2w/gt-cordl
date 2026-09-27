#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/GTSphereVolumes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/Rendering/zzzz__GTSphereVolumes_def.hpp"
//  Writing Method size for method: ::GorillaTag::Rendering::GTSphereVolumes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::GTSphereVolumes::*)()>(&::GorillaTag::Rendering::GTSphereVolumes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d5e520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::GTSphereVolumes*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::Rendering::GTSphereVolumes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::GTSphereVolumes*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Rendering::GTSphereVolumes* GorillaTag::Rendering::GTSphereVolumes::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Rendering::GTSphereVolumes*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Rendering::GTSphereVolumes::GTSphereVolumes()   {
}
