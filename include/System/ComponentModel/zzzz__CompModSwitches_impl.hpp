#pragma once
// IWYU pragma private; include "System/ComponentModel/CompModSwitches.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__CompModSwitches_def.hpp"
#include "System/Diagnostics/zzzz__BooleanSwitch_def.hpp"
#include "System/Diagnostics/zzzz__TraceSwitch_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::CompModSwitches.get_CommonDesignerServices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::BooleanSwitch* (*)()>(&::System::ComponentModel::CompModSwitches::get_CommonDesignerServices)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xad6dae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::CompModSwitches*>(),
                        {"get_CommonDesignerServices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CompModSwitches.get_EventLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::TraceSwitch* (*)()>(&::System::ComponentModel::CompModSwitches::get_EventLog)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xad6dbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::CompModSwitches*>(),
                        {"get_EventLog", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::ComponentModel::CompModSwitches::setStaticF_commonDesignerServices(::System::Diagnostics::BooleanSwitch*  value)  {
::cordl_internals::setStaticField<::System::Diagnostics::BooleanSwitch*, "commonDesignerServices", ::System::ComponentModel::CompModSwitches*>(std::forward<::System::Diagnostics::BooleanSwitch*>(value));
}
inline ::System::Diagnostics::BooleanSwitch* System::ComponentModel::CompModSwitches::getStaticF_commonDesignerServices()  {
return ::cordl_internals::getStaticField<::System::Diagnostics::BooleanSwitch*, "commonDesignerServices", ::System::ComponentModel::CompModSwitches*>();
}
inline void System::ComponentModel::CompModSwitches::setStaticF_eventLog(::System::Diagnostics::TraceSwitch*  value)  {
::cordl_internals::setStaticField<::System::Diagnostics::TraceSwitch*, "eventLog", ::System::ComponentModel::CompModSwitches*>(std::forward<::System::Diagnostics::TraceSwitch*>(value));
}
inline ::System::Diagnostics::TraceSwitch* System::ComponentModel::CompModSwitches::getStaticF_eventLog()  {
return ::cordl_internals::getStaticField<::System::Diagnostics::TraceSwitch*, "eventLog", ::System::ComponentModel::CompModSwitches*>();
}
inline ::System::Diagnostics::BooleanSwitch* System::ComponentModel::CompModSwitches::get_CommonDesignerServices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::CompModSwitches*>(),
                        {"get_CommonDesignerServices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::BooleanSwitch*>(nullptr, ___internal_method);
}
inline ::System::Diagnostics::TraceSwitch* System::ComponentModel::CompModSwitches::get_EventLog()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::CompModSwitches*>(),
                        {"get_EventLog", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceSwitch*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::CompModSwitches::CompModSwitches()   {
}
