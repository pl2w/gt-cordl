#pragma once
// IWYU pragma private; include "Sirenix/OdinInspector/ValueDropdownItem.hpp"
#include "Sirenix/OdinInspector/zzzz__ValueDropdownItem_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Sirenix::OdinInspector::ValueDropdownItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Sirenix::OdinInspector::ValueDropdownItem::*)(::StringW, ::System::Object*)>(&::Sirenix::OdinInspector::ValueDropdownItem::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa84e7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Sirenix::OdinInspector::ValueDropdownItem>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Sirenix::OdinInspector::ValueDropdownItem.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Sirenix::OdinInspector::ValueDropdownItem::*)()>(&::Sirenix::OdinInspector::ValueDropdownItem::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa84e804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Sirenix::OdinInspector::ValueDropdownItem>(),
                    {::i2c::class_of<::Sirenix::OdinInspector::ValueDropdownItem>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Sirenix::OdinInspector::ValueDropdownItem::_ctor(::StringW  text, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Sirenix::OdinInspector::ValueDropdownItem>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text, value);
}
inline ::StringW Sirenix::OdinInspector::ValueDropdownItem::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Sirenix::OdinInspector::ValueDropdownItem>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Text", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Value", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Sirenix::OdinInspector::ValueDropdownItem::ValueDropdownItem(::StringW  Text, ::System::Object*  Value) noexcept  {
this->Text = Text;
this->Value = Value;
}
// Ctor Parameters []
constexpr ::Sirenix::OdinInspector::ValueDropdownItem::ValueDropdownItem()   {
}
