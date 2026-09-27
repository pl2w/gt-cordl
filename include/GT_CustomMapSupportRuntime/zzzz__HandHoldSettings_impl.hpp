#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/HandHoldSettings.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__HandHoldSettings_HandSnapMethod_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__HandHoldSettings_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__HandHoldSettings_HandSnapMethod_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::HandHoldSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::HandHoldSettings::*)()>(&::GT_CustomMapSupportRuntime::HandHoldSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cb70b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::HandHoldSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::HandHoldSettings_HandSnapMethod& GT_CustomMapSupportRuntime::HandHoldSettings::__cordl_internal_get_handSnapMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handSnapMethod;
}
constexpr ::GlobalNamespace::HandHoldSettings_HandSnapMethod const& GT_CustomMapSupportRuntime::HandHoldSettings::__cordl_internal_get_handSnapMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handSnapMethod;
}
constexpr void GT_CustomMapSupportRuntime::HandHoldSettings::__cordl_internal_set_handSnapMethod(::GlobalNamespace::HandHoldSettings_HandSnapMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handSnapMethod = value;
}
constexpr bool& GT_CustomMapSupportRuntime::HandHoldSettings::__cordl_internal_get_rotatePlayerWhenHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatePlayerWhenHeld;
}
constexpr bool const& GT_CustomMapSupportRuntime::HandHoldSettings::__cordl_internal_get_rotatePlayerWhenHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatePlayerWhenHeld;
}
constexpr void GT_CustomMapSupportRuntime::HandHoldSettings::__cordl_internal_set_rotatePlayerWhenHeld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotatePlayerWhenHeld = value;
}
constexpr bool& GT_CustomMapSupportRuntime::HandHoldSettings::__cordl_internal_get_allowPreGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowPreGrab;
}
constexpr bool const& GT_CustomMapSupportRuntime::HandHoldSettings::__cordl_internal_get_allowPreGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowPreGrab;
}
constexpr void GT_CustomMapSupportRuntime::HandHoldSettings::__cordl_internal_set_allowPreGrab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowPreGrab = value;
}
inline void GT_CustomMapSupportRuntime::HandHoldSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::HandHoldSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::HandHoldSettings* GT_CustomMapSupportRuntime::HandHoldSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::HandHoldSettings*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::HandHoldSettings::HandHoldSettings()   {
}
