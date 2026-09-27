#pragma once
// IWYU pragma private; include "GorillaTag/GTOnUnityEditorStartUpAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GorillaTag/zzzz__GTOnUnityEditorStartUpAttribute_def.hpp"
//  Writing Method size for method: ::GorillaTag::GTOnUnityEditorStartUpAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GTOnUnityEditorStartUpAttribute::*)()>(&::GorillaTag::GTOnUnityEditorStartUpAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1f750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTOnUnityEditorStartUpAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::GTOnUnityEditorStartUpAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTOnUnityEditorStartUpAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::GTOnUnityEditorStartUpAttribute* GorillaTag::GTOnUnityEditorStartUpAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::GTOnUnityEditorStartUpAttribute*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::GTOnUnityEditorStartUpAttribute::GTOnUnityEditorStartUpAttribute()   {
}
