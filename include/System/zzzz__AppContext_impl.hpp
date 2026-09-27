#pragma once
// IWYU pragma private; include "System/AppContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__AppContext_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__AppContext_SwitchValueState_def.hpp"
//  Writing Method size for method: ::System::AppContext.InitializeDefaultSwitchValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::AppContext::InitializeDefaultSwitchValues)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa30862c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::AppContext*>(),
                        {"InitializeDefaultSwitchValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppContext.TryGetSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<bool>)>(&::System::AppContext::TryGetSwitch)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0xa3087a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::AppContext*>(),
                        {"TryGetSwitch", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::AppContext::setStaticF_s_switchMap(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AppContext_SwitchValueState>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AppContext_SwitchValueState>*, "s_switchMap", ::System::AppContext*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AppContext_SwitchValueState>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AppContext_SwitchValueState>* System::AppContext::getStaticF_s_switchMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AppContext_SwitchValueState>*, "s_switchMap", ::System::AppContext*>();
}
inline void System::AppContext::setStaticF_s_defaultsInitialized(bool  value)  {
::cordl_internals::setStaticField<bool, "s_defaultsInitialized", ::System::AppContext*>(std::forward<bool>(value));
}
inline bool System::AppContext::getStaticF_s_defaultsInitialized()  {
return ::cordl_internals::getStaticField<bool, "s_defaultsInitialized", ::System::AppContext*>();
}
inline void System::AppContext::InitializeDefaultSwitchValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::AppContext*>(),
                        {"InitializeDefaultSwitchValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool System::AppContext::TryGetSwitch(::StringW  switchName, ::by_ref<bool>  isEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::AppContext*>(),
                        {"TryGetSwitch", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, switchName, isEnabled);
}
// Ctor Parameters []
constexpr ::System::AppContext::AppContext()   {
}
