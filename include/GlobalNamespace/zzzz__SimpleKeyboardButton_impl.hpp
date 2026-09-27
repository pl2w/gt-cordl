#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleKeyboardButton.hpp"
#include "GlobalNamespace/zzzz__SimpleButton_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleKeyboardButton_ButtonFunction_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleKeyboardButton_def.hpp"
#include "GlobalNamespace/zzzz__SimpleKeyboardButton_ButtonFunction_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleKeyboardButton.get_KeyValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SimpleKeyboardButton::*)()>(&::GlobalNamespace::SimpleKeyboardButton::get_KeyValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac358c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleKeyboardButton*>(),
                        {"get_KeyValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleKeyboardButton.get_Function
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SimpleKeyboardButton_ButtonFunction (::GlobalNamespace::SimpleKeyboardButton::*)()>(&::GlobalNamespace::SimpleKeyboardButton::get_Function)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac3594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleKeyboardButton*>(),
                        {"get_Function", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleKeyboardButton.handlePress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleKeyboardButton::*)(bool)>(&::GlobalNamespace::SimpleKeyboardButton::handlePress)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ac359c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SimpleKeyboardButton*>(),
                    {::i2c::class_of<::GlobalNamespace::SimpleKeyboardButton*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleKeyboardButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleKeyboardButton::*)()>(&::GlobalNamespace::SimpleKeyboardButton::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ac361c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleKeyboardButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SimpleKeyboardButton::__cordl_internal_get_keyValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyValue;
}
constexpr ::StringW const& GlobalNamespace::SimpleKeyboardButton::__cordl_internal_get_keyValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyValue;
}
constexpr void GlobalNamespace::SimpleKeyboardButton::__cordl_internal_set_keyValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyValue = value;
}
constexpr ::GlobalNamespace::SimpleKeyboardButton_ButtonFunction& GlobalNamespace::SimpleKeyboardButton::__cordl_internal_get_buttonFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonFunction;
}
constexpr ::GlobalNamespace::SimpleKeyboardButton_ButtonFunction const& GlobalNamespace::SimpleKeyboardButton::__cordl_internal_get_buttonFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonFunction;
}
constexpr void GlobalNamespace::SimpleKeyboardButton::__cordl_internal_set_buttonFunction(::GlobalNamespace::SimpleKeyboardButton_ButtonFunction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonFunction = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>*& GlobalNamespace::SimpleKeyboardButton::__cordl_internal_get_KeyPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyPress;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>* const& GlobalNamespace::SimpleKeyboardButton::__cordl_internal_get_KeyPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyPress;
}
constexpr void GlobalNamespace::SimpleKeyboardButton::__cordl_internal_set_KeyPress(::UnityEngine::Events::UnityEvent_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KeyPress = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SimpleKeyboardButton>,bool>*& GlobalNamespace::SimpleKeyboardButton::__cordl_internal_get_OnKeyPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnKeyPress;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SimpleKeyboardButton>,bool>* const& GlobalNamespace::SimpleKeyboardButton::__cordl_internal_get_OnKeyPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnKeyPress;
}
constexpr void GlobalNamespace::SimpleKeyboardButton::__cordl_internal_set_OnKeyPress(::System::Action_2<::UnityW<::GlobalNamespace::SimpleKeyboardButton>,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnKeyPress = value;
}
inline ::StringW GlobalNamespace::SimpleKeyboardButton::get_KeyValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleKeyboardButton*>(),
                        {"get_KeyValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::SimpleKeyboardButton_ButtonFunction GlobalNamespace::SimpleKeyboardButton::get_Function()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleKeyboardButton*>(),
                        {"get_Function", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SimpleKeyboardButton_ButtonFunction>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleKeyboardButton::handlePress(bool  isLeft)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SimpleKeyboardButton*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeft);
}
inline void GlobalNamespace::SimpleKeyboardButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleKeyboardButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SimpleKeyboardButton* GlobalNamespace::SimpleKeyboardButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SimpleKeyboardButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleKeyboardButton::SimpleKeyboardButton()   {
}
