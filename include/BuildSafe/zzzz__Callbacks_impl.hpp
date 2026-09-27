#pragma once
// IWYU pragma private; include "BuildSafe/Callbacks.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BuildSafe/zzzz__Callbacks_def.hpp"
#include "BuildSafe/zzzz__Callbacks_def.hpp"
// Ctor Parameters []
constexpr ::BuildSafe::Callbacks::Callbacks()   {
}
//  Writing Method size for method: ::BuildSafe::Callbacks_DidReloadScripts._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BuildSafe::Callbacks_DidReloadScripts::*)(bool)>(&::BuildSafe::Callbacks_DidReloadScripts::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c4ec48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Callbacks_DidReloadScripts*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& BuildSafe::Callbacks_DidReloadScripts::__cordl_internal_get_activeOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeOnly;
}
constexpr bool const& BuildSafe::Callbacks_DidReloadScripts::__cordl_internal_get_activeOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeOnly;
}
constexpr void BuildSafe::Callbacks_DidReloadScripts::__cordl_internal_set_activeOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeOnly = value;
}
inline void BuildSafe::Callbacks_DidReloadScripts::_ctor(bool  activeOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Callbacks_DidReloadScripts*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeOnly);
}
inline ::BuildSafe::Callbacks_DidReloadScripts* BuildSafe::Callbacks_DidReloadScripts::New_ctor(bool  activeOnly)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BuildSafe::Callbacks_DidReloadScripts*>(activeOnly));
}
// Ctor Parameters []
constexpr ::BuildSafe::Callbacks_DidReloadScripts::Callbacks_DidReloadScripts()   {
}
