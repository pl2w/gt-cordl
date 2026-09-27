#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextField.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextInputBaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextField_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextField_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.get_textInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TextField_TextInput* (::UnityEngine::UIElements::TextField::*)()>(&::UnityEngine::UIElements::TextField::get_textInput)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb848138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                        {"get_textInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.get_multiline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TextField::*)()>(&::UnityEngine::UIElements::TextField::get_multiline)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb8481bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                        {"get_multiline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.set_multiline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextField::*)(bool)>(&::UnityEngine::UIElements::TextField::set_multiline)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb848294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                        {"set_multiline", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextField::*)()>(&::UnityEngine::UIElements::TextField::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb848604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextField::*)(::StringW)>(&::UnityEngine::UIElements::TextField::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb84861c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextField::*)(::StringW, int32_t, bool, bool, char16_t)>(&::UnityEngine::UIElements::TextField::_ctor)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xb848630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::TextField::*)()>(&::UnityEngine::UIElements::TextField::get_value)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb8488f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::TextField*>(), 141}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.set_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextField::*)(::StringW)>(&::UnityEngine::UIElements::TextField::set_value)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb84893c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::TextField*>(), 142}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.SetValueWithoutNotify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextField::*)(::StringW)>(&::UnityEngine::UIElements::TextField::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb848a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::TextField*>(), 152}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.UpdateTextFromValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextField::*)()>(&::UnityEngine::UIElements::TextField::UpdateTextFromValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb848bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::TextField*>(), 157}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.HandleEventBubbleUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextField::*)(::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::TextField::HandleEventBubbleUp)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xb848c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::TextField*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.OnViewDataReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextField::*)()>(&::UnityEngine::UIElements::TextField::OnViewDataReady)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb848e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::TextField*>(), 130}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.ValueToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::TextField::*)(::StringW)>(&::UnityEngine::UIElements::TextField::ValueToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb848ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::TextField*>(), 154}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.StringToValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::TextField::*)(::StringW)>(&::UnityEngine::UIElements::TextField::StringToValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb848ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::TextField*>(), 155}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::TextField::setStaticF_multilineProperty(::UnityEngine::UIElements::BindingId  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "multilineProperty", ::UnityEngine::UIElements::TextField*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextField::getStaticF_multilineProperty()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "multilineProperty", ::UnityEngine::UIElements::TextField*>();
}
inline void UnityEngine::UIElements::TextField::setStaticF_ussClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::TextField*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TextField::getStaticF_ussClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::TextField*>();
}
inline void UnityEngine::UIElements::TextField::setStaticF_labelUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::TextField*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TextField::getStaticF_labelUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::TextField*>();
}
inline void UnityEngine::UIElements::TextField::setStaticF_inputUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::TextField*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TextField::getStaticF_inputUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::TextField*>();
}
inline ::UnityEngine::UIElements::TextField_TextInput* UnityEngine::UIElements::TextField::get_textInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                        {"get_textInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextField_TextInput*>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::TextField::get_multiline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                        {"get_multiline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextField::set_multiline(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                        {"set_multiline", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::TextField::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextField::_ctor(::StringW  label)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label);
}
inline void UnityEngine::UIElements::TextField::_ctor(::StringW  label, int32_t  maxLength, bool  multiline, bool  isPasswordField, char16_t  maskChar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, maxLength, multiline, isPasswordField, maskChar);
}
inline ::StringW UnityEngine::UIElements::TextField::get_value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::TextField*>(), 141}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextField::set_value(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::TextField*>(), 142}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::TextField::SetValueWithoutNotify(::StringW  newValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::TextField*>(), 152}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void UnityEngine::UIElements::TextField::UpdateTextFromValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::TextField*>(), 157}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextField::HandleEventBubbleUp(::UnityEngine::UIElements::EventBase*  evt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::TextField*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::TextField::OnViewDataReady()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::TextField*>(), 130}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::TextField::ValueToString(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::TextField*>(), 154}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::UIElements::TextField::StringToValue(::StringW  str)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::TextField*>(), 155}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, str);
}
inline ::UnityEngine::UIElements::TextField* UnityEngine::UIElements::TextField::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TextField*>());
}
inline ::UnityEngine::UIElements::TextField* UnityEngine::UIElements::TextField::New_ctor(::StringW  label)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TextField*>(label));
}
inline ::UnityEngine::UIElements::TextField* UnityEngine::UIElements::TextField::New_ctor(::StringW  label, int32_t  maxLength, bool  multiline, bool  isPasswordField, char16_t  maskChar)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TextField*>(label, maxLength, multiline, isPasswordField, maskChar));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextField::TextField()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::TextField_TextInput.get_parentTextField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TextField* (::UnityEngine::UIElements::TextField_TextInput::*)()>(&::UnityEngine::UIElements::TextField_TextInput::get_parentTextField)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb849418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField_TextInput*>(),
                        {"get_parentTextField", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField_TextInput.get_multiline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TextField_TextInput::*)()>(&::UnityEngine::UIElements::TextField_TextInput::get_multiline)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb8481d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField_TextInput*>(),
                        {"get_multiline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField_TextInput.set_multiline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextField_TextInput::*)(bool)>(&::UnityEngine::UIElements::TextField_TextInput::set_multiline)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0xb848340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField_TextInput*>(),
                        {"set_multiline", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField_TextInput.StringToValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::TextField_TextInput::*)(::StringW)>(&::UnityEngine::UIElements::TextField_TextInput::StringToValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb849498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::TextField_TextInput*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::TextField_TextInput*>(), 134}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField_TextInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextField_TextInput::*)()>(&::UnityEngine::UIElements::TextField_TextInput::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb848888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField_TextInput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::TextField* UnityEngine::UIElements::TextField_TextInput::get_parentTextField()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField_TextInput*>(),
                        {"get_parentTextField", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextField*>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::TextField_TextInput::get_multiline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField_TextInput*>(),
                        {"get_multiline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextField_TextInput::set_multiline(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField_TextInput*>(),
                        {"set_multiline", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::UIElements::TextField_TextInput::StringToValue(::StringW  str)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::TextField_TextInput*>(), 134}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, str);
}
inline void UnityEngine::UIElements::TextField_TextInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField_TextInput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TextField_TextInput* UnityEngine::UIElements::TextField_TextInput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TextField_TextInput*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextField_TextInput::TextField_TextInput()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::TextField_UxmlTraits.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextField_UxmlTraits::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::TextField_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xb84909c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::TextField_UxmlTraits*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::TextField_UxmlTraits*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField_UxmlTraits._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextField_UxmlTraits::*)()>(&::UnityEngine::UIElements::TextField_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb84925c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField_UxmlTraits*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::TextField_UxmlTraits::__cordl_internal_get_m_Multiline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Multiline;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::TextField_UxmlTraits::__cordl_internal_get_m_Multiline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Multiline;
}
constexpr void UnityEngine::UIElements::TextField_UxmlTraits::__cordl_internal_set_m_Multiline(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Multiline = value;
}
inline void UnityEngine::UIElements::TextField_UxmlTraits::setStaticF_k_Value(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, "k_Value", ::UnityEngine::UIElements::TextField_UxmlTraits*>(std::forward<::UnityEngine::UIElements::UxmlStringAttributeDescription*>(value));
}
inline ::UnityEngine::UIElements::UxmlStringAttributeDescription* UnityEngine::UIElements::TextField_UxmlTraits::getStaticF_k_Value()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, "k_Value", ::UnityEngine::UIElements::TextField_UxmlTraits*>();
}
inline void UnityEngine::UIElements::TextField_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::TextField_UxmlTraits*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::TextField_UxmlTraits::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField_UxmlTraits*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TextField_UxmlTraits* UnityEngine::UIElements::TextField_UxmlTraits::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TextField_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextField_UxmlTraits::TextField_UxmlTraits()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::TextField_UxmlFactory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextField_UxmlFactory::*)()>(&::UnityEngine::UIElements::TextField_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb849054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField_UxmlFactory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::TextField_UxmlFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TextField_UxmlFactory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TextField_UxmlFactory* UnityEngine::UIElements::TextField_UxmlFactory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TextField_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextField_UxmlFactory::TextField_UxmlFactory()   {
}
