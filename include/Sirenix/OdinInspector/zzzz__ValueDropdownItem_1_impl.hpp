#pragma once
// IWYU pragma private; include "Sirenix/OdinInspector/ValueDropdownItem_1.hpp"
#include "Sirenix/OdinInspector/zzzz__ValueDropdownItem_1_def.hpp"
template<typename T>
inline void Sirenix::OdinInspector::ValueDropdownItem_1<T>::_ctor(::StringW  text, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Sirenix::OdinInspector::ValueDropdownItem_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text, value);
}
template<typename T>
inline ::StringW Sirenix::OdinInspector::ValueDropdownItem_1<T>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Sirenix::OdinInspector::ValueDropdownItem_1<T>>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Text", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Value", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::Sirenix::OdinInspector::ValueDropdownItem_1<T>::ValueDropdownItem_1(::StringW  Text, T  Value) noexcept  {
this->Text = Text;
this->Value = Value;
}
// Ctor Parameters []
template<typename T>
constexpr ::Sirenix::OdinInspector::ValueDropdownItem_1<T>::ValueDropdownItem_1()   {
}
