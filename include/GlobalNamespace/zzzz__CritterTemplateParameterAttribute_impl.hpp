#pragma once
// IWYU pragma private; include "GlobalNamespace/CritterTemplateParameterAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__CritterTemplateParameterAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CritterTemplateParameterAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CritterTemplateParameterAttribute::*)()>(&::GlobalNamespace::CritterTemplateParameterAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56f851c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterTemplateParameterAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CritterTemplateParameterAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterTemplateParameterAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CritterTemplateParameterAttribute* GlobalNamespace::CritterTemplateParameterAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CritterTemplateParameterAttribute*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CritterTemplateParameterAttribute::CritterTemplateParameterAttribute()   {
}
