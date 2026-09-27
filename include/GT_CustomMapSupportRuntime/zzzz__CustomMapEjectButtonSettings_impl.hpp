#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/CustomMapEjectButtonSettings.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__CustomMapEjectButtonSettings_EjectType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__CustomMapEjectButtonSettings_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__CustomMapEjectButtonSettings_EjectType_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings::*)()>(&::GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cb6c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CustomMapEjectButtonSettings_EjectType& GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings::__cordl_internal_get_ejectType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ejectType;
}
constexpr ::GlobalNamespace::CustomMapEjectButtonSettings_EjectType const& GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings::__cordl_internal_get_ejectType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ejectType;
}
constexpr void GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings::__cordl_internal_set_ejectType(::GlobalNamespace::CustomMapEjectButtonSettings_EjectType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ejectType = value;
}
inline void GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings* GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings::CustomMapEjectButtonSettings()   {
}
