#pragma once
// IWYU pragma private; include "GlobalNamespace/DevInspectorYellow.hpp"
#include "GlobalNamespace/zzzz__DevInspectorColor_impl.hpp"
#include "GlobalNamespace/zzzz__DevInspectorYellow_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DevInspectorYellow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevInspectorYellow::*)()>(&::GlobalNamespace::DevInspectorYellow::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x566f79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevInspectorYellow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DevInspectorYellow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevInspectorYellow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DevInspectorYellow* GlobalNamespace::DevInspectorYellow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevInspectorYellow*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevInspectorYellow::DevInspectorYellow()   {
}
