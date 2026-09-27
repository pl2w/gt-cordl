#pragma once
// IWYU pragma private; include "BuildSafe/EditorOnlyScriptAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "BuildSafe/zzzz__EditorOnlyScriptAttribute_def.hpp"
//  Writing Method size for method: ::BuildSafe::EditorOnlyScriptAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BuildSafe::EditorOnlyScriptAttribute::*)()>(&::BuildSafe::EditorOnlyScriptAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4ec8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::EditorOnlyScriptAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void BuildSafe::EditorOnlyScriptAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::EditorOnlyScriptAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BuildSafe::EditorOnlyScriptAttribute* BuildSafe::EditorOnlyScriptAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BuildSafe::EditorOnlyScriptAttribute*>());
}
// Ctor Parameters []
constexpr ::BuildSafe::EditorOnlyScriptAttribute::EditorOnlyScriptAttribute()   {
}
