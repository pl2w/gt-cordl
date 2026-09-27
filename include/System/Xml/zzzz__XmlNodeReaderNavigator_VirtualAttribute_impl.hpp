#pragma once
// IWYU pragma private; include "System/Xml/XmlNodeReaderNavigator_VirtualAttribute.hpp"
#include "System/Xml/zzzz__XmlNodeReaderNavigator_VirtualAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute::*)(::StringW, ::StringW)>(&::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xabdec8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute::_ctor(::StringW  name, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, value);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute::XmlNodeReaderNavigator_VirtualAttribute(::StringW  name, ::StringW  value) noexcept  {
this->name = name;
this->value = value;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute::XmlNodeReaderNavigator_VirtualAttribute()   {
}
