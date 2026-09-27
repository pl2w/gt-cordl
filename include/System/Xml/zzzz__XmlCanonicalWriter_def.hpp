#pragma once
// IWYU pragma private; include "System/Xml/XmlCanonicalWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlCanonicalWriter_Attribute_def.hpp"
#include "System/Xml/zzzz__XmlCanonicalWriter_Element_def.hpp"
#include "System/Xml/zzzz__XmlCanonicalWriter_Scope_def.hpp"
#include "System/Xml/zzzz__XmlCanonicalWriter_XmlnsAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlCanonicalWriter)
namespace GlobalNamespace {
struct XmlCanonicalWriter_Attribute;
}
namespace GlobalNamespace {
struct XmlCanonicalWriter_Element;
}
namespace GlobalNamespace {
struct XmlCanonicalWriter_Scope;
}
namespace GlobalNamespace {
struct XmlCanonicalWriter_XmlnsAttribute;
}
namespace System::Collections {
class IComparer;
}
namespace System::IO {
class MemoryStream;
}
namespace System::Xml {
class XmlCanonicalWriter_AttributeSorter;
}
namespace System::Xml {
class XmlUTF8NodeWriter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class XmlCanonicalWriter;
}
namespace System::Xml {
class XmlCanonicalWriter_AttributeSorter;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlCanonicalWriter*);
MARK_REF_T(::System::Xml::XmlCanonicalWriter_AttributeSorter*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlCanonicalWriter*, "System.Xml", "XmlCanonicalWriter");
DEFINE_IL2CPP_CLASS(::System::Xml::XmlCanonicalWriter_AttributeSorter*, "System.Xml", "XmlCanonicalWriter/AttributeSorter");
// Dependencies System.Object, System.Xml.XmlCanonicalWriter::Attribute, System.Xml.XmlCanonicalWriter::Element, System.Xml.XmlCanonicalWriter::Scope, System.Xml.XmlCanonicalWriter::XmlnsAttribute
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlCanonicalWriter
class CORDL_TYPE XmlCanonicalWriter : public ::System::Object {
public:
// Declarations
using Attribute = ::GlobalNamespace::XmlCanonicalWriter_Attribute;

using Element = ::GlobalNamespace::XmlCanonicalWriter_Element;

using Scope = ::GlobalNamespace::XmlCanonicalWriter_Scope;

using XmlnsAttribute = ::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute;

using AttributeSorter = ::System::Xml::XmlCanonicalWriter_AttributeSorter;

/// @brief Field attribute, offset 0x60, size 0x20 
 __declspec(property(get=__cordl_internal_get_attribute, put=__cordl_internal_set_attribute)) ::GlobalNamespace::XmlCanonicalWriter_Attribute  attribute;

/// @brief Field attributeCount, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_attributeCount, put=__cordl_internal_set_attributeCount)) int32_t  attributeCount;

/// @brief Field attributes, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::ArrayW<::GlobalNamespace::XmlCanonicalWriter_Attribute>  attributes;

/// @brief Field depth, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_depth, put=__cordl_internal_set_depth)) int32_t  depth;

/// @brief Field element, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_element, put=__cordl_internal_set_element)) ::GlobalNamespace::XmlCanonicalWriter_Element  element;

/// @brief Field elementBuffer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementBuffer, put=__cordl_internal_set_elementBuffer)) ::ArrayW<uint8_t>  elementBuffer;

/// @brief Field elementStream, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementStream, put=__cordl_internal_set_elementStream)) ::System::IO::MemoryStream*  elementStream;

/// @brief Field elementWriter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementWriter, put=__cordl_internal_set_elementWriter)) ::System::Xml::XmlUTF8NodeWriter*  elementWriter;

/// @brief Field inStartElement, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_inStartElement, put=__cordl_internal_set_inStartElement)) bool  inStartElement;

/// @brief Field includeComments, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_includeComments, put=__cordl_internal_set_includeComments)) bool  includeComments;

/// @brief Field inclusivePrefixes, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_inclusivePrefixes, put=__cordl_internal_set_inclusivePrefixes)) ::ArrayW<::StringW>  inclusivePrefixes;

/// @brief Field isEscapedAttributeChar, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_isEscapedAttributeChar, put=setStaticF_isEscapedAttributeChar)) ::ArrayW<bool>  isEscapedAttributeChar;

/// @brief Field isEscapedElementChar, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_isEscapedElementChar, put=setStaticF_isEscapedElementChar)) ::ArrayW<bool>  isEscapedElementChar;

/// @brief Field scopes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_scopes, put=__cordl_internal_set_scopes)) ::ArrayW<::GlobalNamespace::XmlCanonicalWriter_Scope>  scopes;

/// @brief Field writer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_writer, put=__cordl_internal_set_writer)) ::System::Xml::XmlUTF8NodeWriter*  writer;

/// @brief Field xmlnsAttributeCount, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_xmlnsAttributeCount, put=__cordl_internal_set_xmlnsAttributeCount)) int32_t  xmlnsAttributeCount;

/// @brief Field xmlnsAttributes, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_xmlnsAttributes, put=__cordl_internal_set_xmlnsAttributes)) ::ArrayW<::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute>  xmlnsAttributes;

/// @brief Field xmlnsBuffer, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_xmlnsBuffer, put=__cordl_internal_set_xmlnsBuffer)) ::ArrayW<uint8_t>  xmlnsBuffer;

/// @brief Field xmlnsOffset, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_xmlnsOffset, put=__cordl_internal_set_xmlnsOffset)) int32_t  xmlnsOffset;

/// @brief Method AddAttribute, addr 0xaa20d74, size 0xf4, virtual false, abstract: false, final false
inline void AddAttribute(::by_ref<::GlobalNamespace::XmlCanonicalWriter_Attribute>  attribute) ;

/// @brief Method AddXmlnsAttribute, addr 0xaa1fffc, size 0x24c, virtual false, abstract: false, final false
inline void AddXmlnsAttribute(::by_ref<::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute>  xmlnsAttribute) ;

/// @brief Method Close, addr 0xaa1fa98, size 0x110, virtual false, abstract: false, final false
inline void Close() ;

/// @brief Method Compare, addr 0xaa2187c, size 0x78, virtual false, abstract: false, final false
inline int32_t Compare(::by_ref<::GlobalNamespace::XmlCanonicalWriter_Attribute>  attribute1, ::by_ref<::GlobalNamespace::XmlCanonicalWriter_Attribute>  attribute2) ;

/// @brief Method Compare, addr 0xaa21c90, size 0x20, virtual false, abstract: false, final false
inline int32_t Compare(::ArrayW<uint8_t>  buffer, int32_t  offset1, int32_t  length1, int32_t  offset2, int32_t  length2) ;

/// @brief Method Compare, addr 0xaa21cb0, size 0x124, virtual false, abstract: false, final false
inline int32_t Compare(::ArrayW<uint8_t>  buffer1, int32_t  offset1, int32_t  length1, ::ArrayW<uint8_t>  buffer2, int32_t  offset2, int32_t  length2) ;

/// @brief Method Compare, addr 0xaa21b14, size 0x2c, virtual false, abstract: false, final false
inline int32_t Compare(::by_ref<::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute>  xmlnsAttribute1, ::by_ref<::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute>  xmlnsAttribute2) ;

/// @brief Method EndElement, addr 0xaa1fd28, size 0x44, virtual false, abstract: false, final false
inline void EndElement() ;

/// @brief Method EnsureXmlnsBuffer, addr 0xaa208b8, size 0x13c, virtual false, abstract: false, final false
inline void EnsureXmlnsBuffer(int32_t  byteCount) ;

/// @brief Method Equals, addr 0xaa20594, size 0xa4, virtual false, abstract: false, final false
inline bool Equals(::ArrayW<uint8_t>  buffer1, int32_t  offset1, int32_t  length1, ::ArrayW<uint8_t>  buffer2, int32_t  offset2, int32_t  length2) ;

/// @brief Method Flush, addr 0xaa1fa60, size 0x24, virtual false, abstract: false, final false
inline void Flush() ;

/// @brief Method IsInclusivePrefix, addr 0xaa1ff2c, size 0xd0, virtual false, abstract: false, final false
inline bool IsInclusivePrefix(::by_ref<::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute>  xmlnsAttribute) ;

/// @brief Method ResolvePrefix, addr 0xaa21c74, size 0x1c, virtual false, abstract: false, final false
inline void ResolvePrefix(::by_ref<::GlobalNamespace::XmlCanonicalWriter_Attribute>  attribute) ;

/// @brief Method ResolvePrefix, addr 0xaa21b40, size 0x134, virtual false, abstract: false, final false
inline void ResolvePrefix(int32_t  prefixOffset, int32_t  prefixLength, ::by_ref<int32_t>  nsOffset, ::by_ref<int32_t>  nsLength) ;

/// @brief Method ResolvePrefixes, addr 0xaa204fc, size 0x98, virtual false, abstract: false, final false
inline void ResolvePrefixes() ;

/// @brief Method SortAttributes, addr 0xaa20678, size 0x1c8, virtual false, abstract: false, final false
inline void SortAttributes() ;

/// @brief Method StartElement, addr 0xaa1fc18, size 0x110, virtual false, abstract: false, final false
inline void StartElement() ;

/// @brief Method ThrowClosed, addr 0xaa21808, size 0x74, virtual false, abstract: false, final false
inline void ThrowClosed() ;

/// @brief Method ThrowIfClosed, addr 0xaa1fa84, size 0x14, virtual false, abstract: false, final false
inline void ThrowIfClosed() ;

/// @brief Method WriteCharEntity, addr 0xaa20e68, size 0xa4, virtual false, abstract: false, final false
inline void WriteCharEntity(int32_t  ch) ;

/// @brief Method WriteComment, addr 0xaa1fbac, size 0x6c, virtual false, abstract: false, final false
inline void WriteComment(::StringW  value) ;

/// @brief Method WriteDeclaration, addr 0xaa1fba8, size 0x4, virtual false, abstract: false, final false
inline void WriteDeclaration() ;

/// @brief Method WriteEndAttribute, addr 0xaa20d14, size 0x60, virtual false, abstract: false, final false
inline void WriteEndAttribute() ;

/// @brief Method WriteEndElement, addr 0xaa20840, size 0x78, virtual false, abstract: false, final false
inline void WriteEndElement(::StringW  prefix, ::StringW  localName) ;

/// @brief Method WriteEndStartElement, addr 0xaa20248, size 0x2b4, virtual false, abstract: false, final false
inline void WriteEndStartElement(bool  isEmpty) ;

/// @brief Method WriteEscapedText, addr 0xaa20f0c, size 0x54, virtual false, abstract: false, final false
inline void WriteEscapedText(::ArrayW<char16_t>  chars, int32_t  offset, int32_t  count) ;

/// @brief Method WriteEscapedText, addr 0xaa21020, size 0x27c, virtual false, abstract: false, final false
inline void WriteEscapedText(::ArrayW<uint8_t>  chars, int32_t  offset, int32_t  count) ;

/// @brief Method WriteEscapedText, addr 0xaa20f98, size 0x88, virtual false, abstract: false, final false
inline void WriteEscapedText(::StringW  value) ;

/// @brief Method WriteStartAttribute, addr 0xaa20c0c, size 0x108, virtual false, abstract: false, final false
inline void WriteStartAttribute(::StringW  prefix, ::StringW  localName) ;

/// @brief Method WriteStartElement, addr 0xaa1fd6c, size 0x1c0, virtual false, abstract: false, final false
inline void WriteStartElement(::StringW  prefix, ::StringW  localName) ;

/// @brief Method WriteText, addr 0xaa20f60, size 0x38, virtual false, abstract: false, final false
inline void WriteText(int32_t  ch) ;

/// @brief Method WriteText, addr 0xaa215a4, size 0x264, virtual false, abstract: false, final false
inline void WriteText(::ArrayW<char16_t>  chars, int32_t  offset, int32_t  count) ;

/// @brief Method WriteText, addr 0xaa2129c, size 0x264, virtual false, abstract: false, final false
inline void WriteText(::ArrayW<uint8_t>  chars, int32_t  offset, int32_t  count) ;

/// @brief Method WriteText, addr 0xaa21500, size 0xa4, virtual false, abstract: false, final false
inline void WriteText(::StringW  value) ;

/// @brief Method WriteXmlnsAttribute, addr 0xaa209f4, size 0x218, virtual false, abstract: false, final false
inline void WriteXmlnsAttribute(::StringW  prefix, ::StringW  ns) ;

/// @brief Method WriteXmlnsAttribute, addr 0xaa20638, size 0x40, virtual false, abstract: false, final false
inline void WriteXmlnsAttribute(::by_ref<::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute>  xmlnsAttribute) ;

constexpr ::GlobalNamespace::XmlCanonicalWriter_Attribute const& __cordl_internal_get_attribute() const;

constexpr ::GlobalNamespace::XmlCanonicalWriter_Attribute& __cordl_internal_get_attribute() ;

constexpr int32_t const& __cordl_internal_get_attributeCount() const;

constexpr int32_t& __cordl_internal_get_attributeCount() ;

constexpr ::ArrayW<::GlobalNamespace::XmlCanonicalWriter_Attribute> const& __cordl_internal_get_attributes() const;

constexpr ::ArrayW<::GlobalNamespace::XmlCanonicalWriter_Attribute>& __cordl_internal_get_attributes() ;

constexpr int32_t const& __cordl_internal_get_depth() const;

constexpr int32_t& __cordl_internal_get_depth() ;

constexpr ::GlobalNamespace::XmlCanonicalWriter_Element const& __cordl_internal_get_element() const;

constexpr ::GlobalNamespace::XmlCanonicalWriter_Element& __cordl_internal_get_element() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_elementBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_elementBuffer() ;

constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_elementStream() const;

constexpr ::System::IO::MemoryStream*& __cordl_internal_get_elementStream() ;

constexpr ::System::Xml::XmlUTF8NodeWriter* const& __cordl_internal_get_elementWriter() const;

constexpr ::System::Xml::XmlUTF8NodeWriter*& __cordl_internal_get_elementWriter() ;

constexpr bool const& __cordl_internal_get_inStartElement() const;

constexpr bool& __cordl_internal_get_inStartElement() ;

constexpr bool const& __cordl_internal_get_includeComments() const;

constexpr bool& __cordl_internal_get_includeComments() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_inclusivePrefixes() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_inclusivePrefixes() ;

constexpr ::ArrayW<::GlobalNamespace::XmlCanonicalWriter_Scope> const& __cordl_internal_get_scopes() const;

constexpr ::ArrayW<::GlobalNamespace::XmlCanonicalWriter_Scope>& __cordl_internal_get_scopes() ;

constexpr ::System::Xml::XmlUTF8NodeWriter* const& __cordl_internal_get_writer() const;

constexpr ::System::Xml::XmlUTF8NodeWriter*& __cordl_internal_get_writer() ;

constexpr int32_t const& __cordl_internal_get_xmlnsAttributeCount() const;

constexpr int32_t& __cordl_internal_get_xmlnsAttributeCount() ;

constexpr ::ArrayW<::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute> const& __cordl_internal_get_xmlnsAttributes() const;

constexpr ::ArrayW<::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute>& __cordl_internal_get_xmlnsAttributes() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_xmlnsBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_xmlnsBuffer() ;

constexpr int32_t const& __cordl_internal_get_xmlnsOffset() const;

constexpr int32_t& __cordl_internal_get_xmlnsOffset() ;

constexpr void __cordl_internal_set_attribute(::GlobalNamespace::XmlCanonicalWriter_Attribute  value) ;

constexpr void __cordl_internal_set_attributeCount(int32_t  value) ;

constexpr void __cordl_internal_set_attributes(::ArrayW<::GlobalNamespace::XmlCanonicalWriter_Attribute>  value) ;

constexpr void __cordl_internal_set_depth(int32_t  value) ;

constexpr void __cordl_internal_set_element(::GlobalNamespace::XmlCanonicalWriter_Element  value) ;

constexpr void __cordl_internal_set_elementBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_elementStream(::System::IO::MemoryStream*  value) ;

constexpr void __cordl_internal_set_elementWriter(::System::Xml::XmlUTF8NodeWriter*  value) ;

constexpr void __cordl_internal_set_inStartElement(bool  value) ;

constexpr void __cordl_internal_set_includeComments(bool  value) ;

constexpr void __cordl_internal_set_inclusivePrefixes(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_scopes(::ArrayW<::GlobalNamespace::XmlCanonicalWriter_Scope>  value) ;

constexpr void __cordl_internal_set_writer(::System::Xml::XmlUTF8NodeWriter*  value) ;

constexpr void __cordl_internal_set_xmlnsAttributeCount(int32_t  value) ;

constexpr void __cordl_internal_set_xmlnsAttributes(::ArrayW<::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute>  value) ;

constexpr void __cordl_internal_set_xmlnsBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_xmlnsOffset(int32_t  value) ;

static inline ::ArrayW<bool> getStaticF_isEscapedAttributeChar() ;

static inline ::ArrayW<bool> getStaticF_isEscapedElementChar() ;

static inline void setStaticF_isEscapedAttributeChar(::ArrayW<bool>  value) ;

static inline void setStaticF_isEscapedElementChar(::ArrayW<bool>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlCanonicalWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlCanonicalWriter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlCanonicalWriter(XmlCanonicalWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlCanonicalWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlCanonicalWriter(XmlCanonicalWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24453};

/// @brief Field writer, offset: 0x10, size: 0x8, def value: None
 ::System::Xml::XmlUTF8NodeWriter*  ___writer;

/// @brief Field elementStream, offset: 0x18, size: 0x8, def value: None
 ::System::IO::MemoryStream*  ___elementStream;

/// @brief Field elementBuffer, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___elementBuffer;

/// @brief Field elementWriter, offset: 0x28, size: 0x8, def value: None
 ::System::Xml::XmlUTF8NodeWriter*  ___elementWriter;

/// @brief Field inStartElement, offset: 0x30, size: 0x1, def value: None
 bool  ___inStartElement;

/// @brief Field depth, offset: 0x34, size: 0x4, def value: None
 int32_t  ___depth;

/// @brief Field scopes, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::XmlCanonicalWriter_Scope>  ___scopes;

/// @brief Field xmlnsAttributeCount, offset: 0x40, size: 0x4, def value: None
 int32_t  ___xmlnsAttributeCount;

/// @brief Field xmlnsAttributes, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute>  ___xmlnsAttributes;

/// @brief Field attributeCount, offset: 0x50, size: 0x4, def value: None
 int32_t  ___attributeCount;

/// @brief Field attributes, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::XmlCanonicalWriter_Attribute>  ___attributes;

/// @brief Field attribute, offset: 0x60, size: 0x20, def value: None
 ::GlobalNamespace::XmlCanonicalWriter_Attribute  ___attribute;

/// @brief Field element, offset: 0x80, size: 0x10, def value: None
 ::GlobalNamespace::XmlCanonicalWriter_Element  ___element;

/// @brief Field xmlnsBuffer, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___xmlnsBuffer;

/// @brief Field xmlnsOffset, offset: 0x98, size: 0x4, def value: None
 int32_t  ___xmlnsOffset;

/// @brief Field includeComments, offset: 0x9c, size: 0x1, def value: None
 bool  ___includeComments;

/// @brief Field inclusivePrefixes, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___inclusivePrefixes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___writer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___elementStream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___elementBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___elementWriter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___inStartElement) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___depth) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___scopes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___xmlnsAttributeCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___xmlnsAttributes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___attributeCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___attributes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___attribute) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___element) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___xmlnsBuffer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___xmlnsOffset) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___includeComments) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___inclusivePrefixes) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlCanonicalWriter) == 0xa8, "Size mismatch!");

} // namespace end def System::Xml
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlCanonicalWriter/AttributeSorter
class CORDL_TYPE XmlCanonicalWriter_AttributeSorter : public ::System::Object {
public:
// Declarations
/// @brief Field writer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_writer, put=__cordl_internal_set_writer)) ::System::Xml::XmlCanonicalWriter*  writer;

/// @brief Convert operator to "::System::Collections::IComparer"
constexpr operator  ::System::Collections::IComparer*() noexcept;

/// @brief Method Compare, addr 0xaa21eb8, size 0xc4, virtual true, abstract: false, final true
inline int32_t Compare(::System::Object*  obj1, ::System::Object*  obj2) ;

static inline ::System::Xml::XmlCanonicalWriter_AttributeSorter* New_ctor(::System::Xml::XmlCanonicalWriter*  writer) ;

/// @brief Method Sort, addr 0xaa21924, size 0x1f0, virtual false, abstract: false, final false
inline void Sort() ;

constexpr ::System::Xml::XmlCanonicalWriter* const& __cordl_internal_get_writer() const;

constexpr ::System::Xml::XmlCanonicalWriter*& __cordl_internal_get_writer() ;

constexpr void __cordl_internal_set_writer(::System::Xml::XmlCanonicalWriter*  value) ;

/// @brief Method .ctor, addr 0xaa218f4, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::XmlCanonicalWriter*  writer) ;

/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlCanonicalWriter_AttributeSorter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlCanonicalWriter_AttributeSorter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlCanonicalWriter_AttributeSorter(XmlCanonicalWriter_AttributeSorter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlCanonicalWriter_AttributeSorter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlCanonicalWriter_AttributeSorter(XmlCanonicalWriter_AttributeSorter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24448};

/// @brief Field writer, offset: 0x10, size: 0x8, def value: None
 ::System::Xml::XmlCanonicalWriter*  ___writer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlCanonicalWriter_AttributeSorter, ___writer) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlCanonicalWriter_AttributeSorter) == 0x18, "Size mismatch!");

} // namespace end def System::Xml
