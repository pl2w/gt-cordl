#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlNumeric2Converter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XmlNumeric2Converter)
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlNumeric2Converter;
}
// Write type traits
MARK_REF_T(::System::Xml::Schema::XmlNumeric2Converter*);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::XmlNumeric2Converter*, "System.Xml.Schema", "XmlNumeric2Converter");
// Dependencies System.Xml.Schema.XmlBaseConverter
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlNumeric2Converter
class CORDL_TYPE XmlNumeric2Converter : public ::System::Xml::Schema::XmlBaseConverter {
public:
// Declarations
/// @brief Method ChangeType, addr 0xab60484, size 0x360, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::StringW  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType, addr 0xab607e4, size 0x6a4, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType, addr 0xab60160, size 0x324, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(double_t  value, ::System::Type*  destinationType) ;

/// @brief Method Create, addr 0xab5f510, size 0x58, virtual false, abstract: false, final false
static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

static inline ::System::Xml::Schema::XmlNumeric2Converter* New_ctor(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

/// @brief Method ToDouble, addr 0xab5f568, size 0xd8, virtual true, abstract: false, final false
inline double_t ToDouble(::StringW  value) ;

/// @brief Method ToDouble, addr 0xab5f640, size 0x2f8, virtual true, abstract: false, final false
inline double_t ToDouble(::System::Object*  value) ;

/// @brief Method ToSingle, addr 0xab5f940, size 0xd8, virtual true, abstract: false, final false
inline float_t ToSingle(::StringW  value) ;

/// @brief Method ToSingle, addr 0xab5fa18, size 0x308, virtual true, abstract: false, final false
inline float_t ToSingle(::System::Object*  value) ;

/// @brief Method ToSingle, addr 0xab5f938, size 0x8, virtual true, abstract: false, final false
inline float_t ToSingle(double_t  value) ;

/// @brief Method ToString, addr 0xab5fe64, size 0x2fc, virtual true, abstract: false, final false
inline ::StringW ToString(::System::Object*  value, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ToString, addr 0xab5fd20, size 0xb4, virtual true, abstract: false, final false
inline ::StringW ToString(double_t  value) ;

/// @brief Method ToString, addr 0xab5fdd4, size 0x90, virtual true, abstract: false, final false
inline ::StringW ToString(float_t  value) ;

/// @brief Method .ctor, addr 0xab5f4a8, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlNumeric2Converter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlNumeric2Converter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlNumeric2Converter(XmlNumeric2Converter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlNumeric2Converter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlNumeric2Converter(XmlNumeric2Converter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14565};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::Schema::XmlNumeric2Converter) == 0x28, "Size mismatch!");

} // namespace end def System::Xml::Schema
