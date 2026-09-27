#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_TexArrayForProperty.hpp"
#include "GlobalNamespace/zzzz__MB_TextureArrayReference_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MB_TexArrayForProperty_def.hpp"
#include "GlobalNamespace/zzzz__MB_TextureArrayReference_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_TexArrayForProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_TexArrayForProperty::*)(::StringW, ::ArrayW<::GlobalNamespace::MB_TextureArrayReference*>)>(&::GlobalNamespace::MB_TexArrayForProperty::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9d72934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TexArrayForProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MB_TextureArrayReference*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MB_TexArrayForProperty::__cordl_internal_get_texPropertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texPropertyName;
}
constexpr ::StringW const& GlobalNamespace::MB_TexArrayForProperty::__cordl_internal_get_texPropertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texPropertyName;
}
constexpr void GlobalNamespace::MB_TexArrayForProperty::__cordl_internal_set_texPropertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texPropertyName = value;
}
constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayReference*>& GlobalNamespace::MB_TexArrayForProperty::__cordl_internal_get_formats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formats;
}
constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayReference*> const& GlobalNamespace::MB_TexArrayForProperty::__cordl_internal_get_formats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formats;
}
constexpr void GlobalNamespace::MB_TexArrayForProperty::__cordl_internal_set_formats(::ArrayW<::GlobalNamespace::MB_TextureArrayReference*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___formats = value;
}
inline void GlobalNamespace::MB_TexArrayForProperty::_ctor(::StringW  name, ::ArrayW<::GlobalNamespace::MB_TextureArrayReference*>  texRefs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TexArrayForProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MB_TextureArrayReference*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, texRefs);
}
inline ::GlobalNamespace::MB_TexArrayForProperty* GlobalNamespace::MB_TexArrayForProperty::New_ctor(::StringW  name, ::ArrayW<::GlobalNamespace::MB_TextureArrayReference*>  texRefs)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_TexArrayForProperty*>(name, texRefs));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_TexArrayForProperty::MB_TexArrayForProperty()   {
}
