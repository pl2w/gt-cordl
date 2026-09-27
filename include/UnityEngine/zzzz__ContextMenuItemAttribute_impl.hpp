#pragma once
// IWYU pragma private; include "UnityEngine/ContextMenuItemAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__ContextMenuItemAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::ContextMenuItemAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ContextMenuItemAttribute::*)(::StringW, ::StringW)>(&::UnityEngine::ContextMenuItemAttribute::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb5d4d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContextMenuItemAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::ContextMenuItemAttribute::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& UnityEngine::ContextMenuItemAttribute::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void UnityEngine::ContextMenuItemAttribute::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::StringW& UnityEngine::ContextMenuItemAttribute::__cordl_internal_get_function()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___function;
}
constexpr ::StringW const& UnityEngine::ContextMenuItemAttribute::__cordl_internal_get_function() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___function;
}
constexpr void UnityEngine::ContextMenuItemAttribute::__cordl_internal_set_function(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___function = value;
}
inline void UnityEngine::ContextMenuItemAttribute::_ctor(::StringW  name, ::StringW  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContextMenuItemAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, function);
}
inline ::UnityEngine::ContextMenuItemAttribute* UnityEngine::ContextMenuItemAttribute::New_ctor(::StringW  name, ::StringW  function)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ContextMenuItemAttribute*>(name, function));
}
// Ctor Parameters []
constexpr ::UnityEngine::ContextMenuItemAttribute::ContextMenuItemAttribute()   {
}
