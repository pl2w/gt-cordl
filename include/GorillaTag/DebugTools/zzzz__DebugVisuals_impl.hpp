#pragma once
// IWYU pragma private; include "GorillaTag/DebugTools/DebugVisuals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/DebugTools/zzzz__DebugVisuals_def.hpp"
//  Writing Method size for method: ::GorillaTag::DebugTools::DebugVisuals._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::DebugTools::DebugVisuals::*)()>(&::GorillaTag::DebugTools::DebugVisuals::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d45a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DebugTools::DebugVisuals*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::DebugTools::DebugVisuals::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DebugTools::DebugVisuals*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::DebugTools::DebugVisuals* GorillaTag::DebugTools::DebugVisuals::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::DebugTools::DebugVisuals*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::DebugTools::DebugVisuals::DebugVisuals()   {
}
