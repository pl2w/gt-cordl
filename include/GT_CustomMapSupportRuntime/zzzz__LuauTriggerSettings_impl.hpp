#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/LuauTriggerSettings.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSettings_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__LuauTriggerSettings_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::LuauTriggerSettings.PropagateProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::LuauTriggerSettings::*)()>(&::GT_CustomMapSupportRuntime::LuauTriggerSettings::PropagateProperties)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cb7170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GT_CustomMapSupportRuntime::LuauTriggerSettings*>(),
                    {::i2c::class_of<::GT_CustomMapSupportRuntime::LuauTriggerSettings*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::LuauTriggerSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::LuauTriggerSettings::*)()>(&::GT_CustomMapSupportRuntime::LuauTriggerSettings::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9cb717c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::LuauTriggerSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GT_CustomMapSupportRuntime::LuauTriggerSettings::__cordl_internal_get_syncedToAllPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedToAllPlayers;
}
constexpr bool const& GT_CustomMapSupportRuntime::LuauTriggerSettings::__cordl_internal_get_syncedToAllPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedToAllPlayers;
}
constexpr void GT_CustomMapSupportRuntime::LuauTriggerSettings::__cordl_internal_set_syncedToAllPlayers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncedToAllPlayers = value;
}
inline void GT_CustomMapSupportRuntime::LuauTriggerSettings::PropagateProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GT_CustomMapSupportRuntime::LuauTriggerSettings*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::LuauTriggerSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::LuauTriggerSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::LuauTriggerSettings* GT_CustomMapSupportRuntime::LuauTriggerSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::LuauTriggerSettings*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::LuauTriggerSettings::LuauTriggerSettings()   {
}
