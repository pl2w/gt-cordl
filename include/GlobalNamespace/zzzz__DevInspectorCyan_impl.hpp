#pragma once
// IWYU pragma private; include "GlobalNamespace/DevInspectorCyan.hpp"
#include "GlobalNamespace/zzzz__DevInspectorColor_impl.hpp"
#include "GlobalNamespace/zzzz__DevInspectorCyan_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DevInspectorCyan._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevInspectorCyan::*)()>(&::GlobalNamespace::DevInspectorCyan::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x566f7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevInspectorCyan*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DevInspectorCyan::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevInspectorCyan*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DevInspectorCyan* GlobalNamespace::DevInspectorCyan::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevInspectorCyan*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevInspectorCyan::DevInspectorCyan()   {
}
