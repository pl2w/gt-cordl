#pragma once
// IWYU pragma private; include "GlobalNamespace/OnEnterPlay_Attribute.hpp"
#include "GlobalNamespace/zzzz__OnPlayChange_BaseAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__OnEnterPlay_Attribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OnEnterPlay_Attribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnEnterPlay_Attribute::*)()>(&::GlobalNamespace::OnEnterPlay_Attribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b0da44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnEnterPlay_Attribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OnEnterPlay_Attribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnEnterPlay_Attribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OnEnterPlay_Attribute* GlobalNamespace::OnEnterPlay_Attribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnEnterPlay_Attribute*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnEnterPlay_Attribute::OnEnterPlay_Attribute()   {
}
