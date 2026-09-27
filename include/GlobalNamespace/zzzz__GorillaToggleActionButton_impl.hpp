#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaToggleActionButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaToggleActionButton_def.hpp"
#include "GlobalNamespace/zzzz__ComponentFunctionReference_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaToggleActionButton.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaToggleActionButton::*)()>(&::GlobalNamespace::GorillaToggleActionButton::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59a2134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaToggleActionButton*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaToggleActionButton*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaToggleActionButton.BindToggleAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaToggleActionButton::*)()>(&::GlobalNamespace::GorillaToggleActionButton::BindToggleAction)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x59a2138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaToggleActionButton*>(),
                        {"BindToggleAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaToggleActionButton.ExecuteToggleAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaToggleActionButton::*)()>(&::GlobalNamespace::GorillaToggleActionButton::ExecuteToggleAction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59a2254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaToggleActionButton*>(),
                        {"ExecuteToggleAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaToggleActionButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaToggleActionButton::*)()>(&::GlobalNamespace::GorillaToggleActionButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a22b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaToggleActionButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ComponentFunctionReference_1<bool>*& GlobalNamespace::GorillaToggleActionButton::__cordl_internal_get_ToggleAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToggleAction;
}
constexpr ::GlobalNamespace::ComponentFunctionReference_1<bool>* const& GlobalNamespace::GorillaToggleActionButton::__cordl_internal_get_ToggleAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToggleAction;
}
constexpr void GlobalNamespace::GorillaToggleActionButton::__cordl_internal_set_ToggleAction(::GlobalNamespace::ComponentFunctionReference_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ToggleAction = value;
}
constexpr ::System::Func_1<bool>*& GlobalNamespace::GorillaToggleActionButton::__cordl_internal_get_toggleFunc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleFunc;
}
constexpr ::System::Func_1<bool>* const& GlobalNamespace::GorillaToggleActionButton::__cordl_internal_get_toggleFunc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleFunc;
}
constexpr void GlobalNamespace::GorillaToggleActionButton::__cordl_internal_set_toggleFunc(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggleFunc = value;
}
inline void GlobalNamespace::GorillaToggleActionButton::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaToggleActionButton*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaToggleActionButton::BindToggleAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaToggleActionButton*>(),
                        {"BindToggleAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaToggleActionButton::ExecuteToggleAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaToggleActionButton*>(),
                        {"ExecuteToggleAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaToggleActionButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaToggleActionButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaToggleActionButton* GlobalNamespace::GorillaToggleActionButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaToggleActionButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaToggleActionButton::GorillaToggleActionButton()   {
}
