#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugTooling.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DebugTooling_def.hpp"
#include "GlobalNamespace/zzzz__DebugTooling_DebugScreen_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DebugTooling._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugTooling::*)()>(&::GlobalNamespace::DebugTooling::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5799310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugTooling*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DebugTooling::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugTooling*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DebugTooling* GlobalNamespace::DebugTooling::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DebugTooling*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugTooling::DebugTooling()   {
}
