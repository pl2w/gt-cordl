#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIOAccountLinkingTerminal.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ModIOAccountLinkingTerminal_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModIOAccountLinkingTerminal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModIOAccountLinkingTerminal::*)()>(&::GlobalNamespace::ModIOAccountLinkingTerminal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c75b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOAccountLinkingTerminal*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ModIOAccountLinkingTerminal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOAccountLinkingTerminal*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ModIOAccountLinkingTerminal* GlobalNamespace::ModIOAccountLinkingTerminal::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ModIOAccountLinkingTerminal*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModIOAccountLinkingTerminal::ModIOAccountLinkingTerminal()   {
}
