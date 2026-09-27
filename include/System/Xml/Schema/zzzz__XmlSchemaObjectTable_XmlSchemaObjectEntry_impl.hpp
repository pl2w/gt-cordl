#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaObjectTable_XmlSchemaObjectEntry.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectTable_XmlSchemaObjectEntry_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*)>(&::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xab40590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry::_ctor(::System::Xml::XmlQualifiedName*  name, ::System::Xml::Schema::XmlSchemaObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, value);
}
// Ctor Parameters [CppParam { name: "qname", ty: "::System::Xml::XmlQualifiedName*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "xso", ty: "::System::Xml::Schema::XmlSchemaObject*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry::XmlSchemaObjectTable_XmlSchemaObjectEntry(::System::Xml::XmlQualifiedName*  qname, ::System::Xml::Schema::XmlSchemaObject*  xso) noexcept  {
this->qname = qname;
this->xso = xso;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry::XmlSchemaObjectTable_XmlSchemaObjectEntry()   {
}
