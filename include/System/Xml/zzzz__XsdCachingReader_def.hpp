#pragma once
// IWYU pragma private; include "System/Xml/XsdCachingReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ValidatingReaderNodeData_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XsdCachingReader_CachingReaderState_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XsdCachingReader)
namespace GlobalNamespace {
struct XsdCachingReader_CachingReaderState;
}
namespace System::Xml {
class CachingEventHandler;
}
namespace System::Xml {
class IXmlLineInfo;
}
namespace System::Xml {
struct ReadState;
}
namespace System::Xml {
class ValidatingReaderNodeData;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlReaderSettings;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
struct XmlSpace;
}
// Forward declare root types
namespace System::Xml {
class XsdCachingReader;
}
// Write type traits
MARK_REF_T(::System::Xml::XsdCachingReader*);
DEFINE_IL2CPP_CLASS(::System::Xml::XsdCachingReader*, "System.Xml", "XsdCachingReader");
// [DefaultMember("Item")]
// Dependencies System.Xml.ValidatingReaderNodeData, System.Xml.XmlReader, System.Xml.XsdCachingReader::CachingReaderState
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XsdCachingReader
class CORDL_TYPE XsdCachingReader : public ::System::Xml::XmlReader {
public:
// Declarations
using CachingReaderState = ::GlobalNamespace::XsdCachingReader_CachingReaderState;

 __declspec(property(get=get_AttributeCount)) int32_t  AttributeCount;

 __declspec(property(get=get_BaseURI)) ::StringW  BaseURI;

 __declspec(property(get=get_Depth)) int32_t  Depth;

 __declspec(property(get=get_IsDefault)) bool  IsDefault;

 __declspec(property(get=get_IsEmptyElement)) bool  IsEmptyElement;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NameTable)) ::System::Xml::XmlNameTable*  NameTable;

 __declspec(property(get=get_NamespaceURI)) ::StringW  NamespaceURI;

 __declspec(property(get=get_NodeType)) ::System::Xml::XmlNodeType  NodeType;

 __declspec(property(get=get_Prefix)) ::StringW  Prefix;

 __declspec(property(get=get_QuoteChar)) char16_t  QuoteChar;

 __declspec(property(get=get_ReadState)) ::System::Xml::ReadState  ReadState;

 __declspec(property(get=get_Settings)) ::System::Xml::XmlReaderSettings*  Settings;

 __declspec(property(get=System_Xml_IXmlLineInfo_get_LineNumber)) int32_t  System_Xml_IXmlLineInfo_LineNumber;

 __declspec(property(get=System_Xml_IXmlLineInfo_get_LinePosition)) int32_t  System_Xml_IXmlLineInfo_LinePosition;

 __declspec(property(get=get_Value)) ::StringW  Value;

 __declspec(property(get=get_XmlLang)) ::StringW  XmlLang;

 __declspec(property(get=get_XmlSpace)) ::System::Xml::XmlSpace  XmlSpace;

 __declspec(property(get=get_EOF)) bool  _cordl_EOF;

/// @brief Field attributeCount, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_attributeCount, put=__cordl_internal_set_attributeCount)) int32_t  attributeCount;

/// @brief Field attributeEvents, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributeEvents, put=__cordl_internal_set_attributeEvents)) ::ArrayW<::System::Xml::ValidatingReaderNodeData*>  attributeEvents;

/// @brief Field cacheHandler, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_cacheHandler, put=__cordl_internal_set_cacheHandler)) ::System::Xml::CachingEventHandler*  cacheHandler;

/// @brief Field cacheState, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_cacheState, put=__cordl_internal_set_cacheState)) ::GlobalNamespace::XsdCachingReader_CachingReaderState  cacheState;

/// @brief Field cachedNode, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedNode, put=__cordl_internal_set_cachedNode)) ::System::Xml::ValidatingReaderNodeData*  cachedNode;

/// @brief Field contentEvents, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_contentEvents, put=__cordl_internal_set_contentEvents)) ::ArrayW<::System::Xml::ValidatingReaderNodeData*>  contentEvents;

/// @brief Field contentIndex, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_contentIndex, put=__cordl_internal_set_contentIndex)) int32_t  contentIndex;

/// @brief Field coreReader, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_coreReader, put=__cordl_internal_set_coreReader)) ::System::Xml::XmlReader*  coreReader;

/// @brief Field coreReaderNameTable, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_coreReaderNameTable, put=__cordl_internal_set_coreReaderNameTable)) ::System::Xml::XmlNameTable*  coreReaderNameTable;

/// @brief Field currentAttrIndex, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentAttrIndex, put=__cordl_internal_set_currentAttrIndex)) int32_t  currentAttrIndex;

/// @brief Field currentContentIndex, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentContentIndex, put=__cordl_internal_set_currentContentIndex)) int32_t  currentContentIndex;

/// @brief Field lineInfo, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineInfo, put=__cordl_internal_set_lineInfo)) ::System::Xml::IXmlLineInfo*  lineInfo;

/// @brief Field readAhead, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_readAhead, put=__cordl_internal_set_readAhead)) bool  readAhead;

/// @brief Field returnOriginalStringValues, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_returnOriginalStringValues, put=__cordl_internal_set_returnOriginalStringValues)) bool  returnOriginalStringValues;

/// @brief Field textNode, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_textNode, put=__cordl_internal_set_textNode)) ::System::Xml::ValidatingReaderNodeData*  textNode;

/// @brief Convert operator to "::System::Xml::IXmlLineInfo"
constexpr operator  ::System::Xml::IXmlLineInfo*() noexcept;

/// @brief Method AddAttribute, addr 0xabbf244, size 0x174, virtual false, abstract: false, final false
inline ::System::Xml::ValidatingReaderNodeData* AddAttribute(int32_t  attIndex) ;

/// @brief Method AddContent, addr 0xabbddb4, size 0x18c, virtual false, abstract: false, final false
inline ::System::Xml::ValidatingReaderNodeData* AddContent(::System::Xml::XmlNodeType  nodeType) ;

/// @brief Method ClearAttributesInfo, addr 0xabbebf0, size 0x10, virtual false, abstract: false, final false
inline void ClearAttributesInfo() ;

/// @brief Method Close, addr 0xabbef18, size 0x34, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method CreateDummyTextNode, addr 0xabbf13c, size 0xa0, virtual false, abstract: false, final false
inline ::System::Xml::ValidatingReaderNodeData* CreateDummyTextNode(::StringW  attributeValue, int32_t  depth) ;

/// @brief Method GetAttribute, addr 0xabbe534, size 0x90, virtual true, abstract: false, final false
inline ::StringW GetAttribute(int32_t  i) ;

/// @brief Method GetAttribute, addr 0xabbe260, size 0x8c, virtual true, abstract: false, final false
inline ::StringW GetAttribute(::StringW  name) ;

/// @brief Method GetAttribute, addr 0xabbe43c, size 0xf8, virtual true, abstract: false, final false
inline ::StringW GetAttribute(::StringW  name, ::StringW  namespaceURI) ;

/// @brief Method GetAttributeIndexWithPrefix, addr 0xabbe39c, size 0xa0, virtual false, abstract: false, final false
inline int32_t GetAttributeIndexWithPrefix(::StringW  name) ;

/// @brief Method GetAttributeIndexWithoutPrefix, addr 0xabbe2ec, size 0xb0, virtual false, abstract: false, final false
inline int32_t GetAttributeIndexWithoutPrefix(::StringW  name) ;

/// @brief Method GetCoreReader, addr 0xabbf234, size 0x8, virtual false, abstract: false, final false
inline ::System::Xml::XmlReader* GetCoreReader() ;

/// @brief Method GetLineInfo, addr 0xabbf23c, size 0x8, virtual false, abstract: false, final false
inline ::System::Xml::IXmlLineInfo* GetLineInfo() ;

/// @brief Method Init, addr 0xabbdc48, size 0x16c, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method LookupNamespace, addr 0xabbf088, size 0x20, virtual true, abstract: false, final false
inline ::StringW LookupNamespace(::StringW  prefix) ;

/// @brief Method MoveToAttribute, addr 0xabbe5c4, size 0x98, virtual true, abstract: false, final false
inline bool MoveToAttribute(::StringW  name) ;

/// @brief Method MoveToAttribute, addr 0xabbe65c, size 0x12c, virtual true, abstract: false, final false
inline bool MoveToAttribute(::StringW  name, ::StringW  ns) ;

/// @brief Method MoveToAttribute, addr 0xabbe788, size 0x90, virtual true, abstract: false, final false
inline void MoveToAttribute(int32_t  i) ;

/// @brief Method MoveToElement, addr 0xabbe8bc, size 0x54, virtual true, abstract: false, final false
inline bool MoveToElement() ;

/// @brief Method MoveToFirstAttribute, addr 0xabbe818, size 0x44, virtual true, abstract: false, final false
inline bool MoveToFirstAttribute() ;

/// @brief Method MoveToNextAttribute, addr 0xabbe85c, size 0x60, virtual true, abstract: false, final false
inline bool MoveToNextAttribute() ;

static inline ::System::Xml::XsdCachingReader* New_ctor(::System::Xml::XmlReader*  reader, ::System::Xml::IXmlLineInfo*  lineInfo, ::System::Xml::CachingEventHandler*  handlerMethod) ;

/// @brief Method Read, addr 0xabbe910, size 0x2e0, virtual true, abstract: false, final false
inline bool Read() ;

/// @brief Method ReadAttributeValue, addr 0xabbf0e0, size 0x5c, virtual true, abstract: false, final false
inline bool ReadAttributeValue() ;

/// @brief Method ReadOriginalContentAsString, addr 0xabbeec0, size 0x24, virtual false, abstract: false, final false
inline ::StringW ReadOriginalContentAsString() ;

/// @brief Method RecordAttributes, addr 0xabbdf40, size 0x184, virtual false, abstract: false, final false
inline void RecordAttributes() ;

/// @brief Method RecordEndElementNode, addr 0xabbed90, size 0x130, virtual false, abstract: false, final false
inline void RecordEndElementNode() ;

/// @brief Method RecordTextNode, addr 0xabbec00, size 0x78, virtual false, abstract: false, final false
inline ::System::Xml::ValidatingReaderNodeData* RecordTextNode(::StringW  textValue, ::StringW  originalStringValue, int32_t  depth, int32_t  lineNo, int32_t  linePos) ;

/// @brief Method Reset, addr 0xabbe0c4, size 0x1c, virtual false, abstract: false, final false
inline void Reset(::System::Xml::XmlReader*  reader) ;

/// @brief Method ResolveEntity, addr 0xabbf0a8, size 0x38, virtual true, abstract: false, final false
inline void ResolveEntity() ;

/// @brief Method SetToReplayMode, addr 0xabbf214, size 0x20, virtual false, abstract: false, final false
inline void SetToReplayMode() ;

/// @brief Method Skip, addr 0xabbef6c, size 0x114, virtual true, abstract: false, final false
inline void Skip() ;

/// @brief Method SwitchTextNodeAndEndElement, addr 0xabbec78, size 0x118, virtual false, abstract: false, final false
inline void SwitchTextNodeAndEndElement(::StringW  textValue, ::StringW  originalStringValue) ;

/// @brief Method System.Xml.IXmlLineInfo.HasLineInfo, addr 0xabbf1dc, size 0x8, virtual true, abstract: false, final true
inline bool System_Xml_IXmlLineInfo_HasLineInfo() ;

/// @brief Method System.Xml.IXmlLineInfo.get_LineNumber, addr 0xabbf1e4, size 0x18, virtual true, abstract: false, final true
inline int32_t System_Xml_IXmlLineInfo_get_LineNumber() ;

/// @brief Method System.Xml.IXmlLineInfo.get_LinePosition, addr 0xabbf1fc, size 0x18, virtual true, abstract: false, final true
inline int32_t System_Xml_IXmlLineInfo_get_LinePosition() ;

constexpr int32_t const& __cordl_internal_get_attributeCount() const;

constexpr int32_t& __cordl_internal_get_attributeCount() ;

constexpr ::ArrayW<::System::Xml::ValidatingReaderNodeData*> const& __cordl_internal_get_attributeEvents() const;

constexpr ::ArrayW<::System::Xml::ValidatingReaderNodeData*>& __cordl_internal_get_attributeEvents() ;

constexpr ::System::Xml::CachingEventHandler* const& __cordl_internal_get_cacheHandler() const;

constexpr ::System::Xml::CachingEventHandler*& __cordl_internal_get_cacheHandler() ;

constexpr ::GlobalNamespace::XsdCachingReader_CachingReaderState const& __cordl_internal_get_cacheState() const;

constexpr ::GlobalNamespace::XsdCachingReader_CachingReaderState& __cordl_internal_get_cacheState() ;

constexpr ::System::Xml::ValidatingReaderNodeData* const& __cordl_internal_get_cachedNode() const;

constexpr ::System::Xml::ValidatingReaderNodeData*& __cordl_internal_get_cachedNode() ;

constexpr ::ArrayW<::System::Xml::ValidatingReaderNodeData*> const& __cordl_internal_get_contentEvents() const;

constexpr ::ArrayW<::System::Xml::ValidatingReaderNodeData*>& __cordl_internal_get_contentEvents() ;

constexpr int32_t const& __cordl_internal_get_contentIndex() const;

constexpr int32_t& __cordl_internal_get_contentIndex() ;

constexpr ::System::Xml::XmlReader* const& __cordl_internal_get_coreReader() const;

constexpr ::System::Xml::XmlReader*& __cordl_internal_get_coreReader() ;

constexpr ::System::Xml::XmlNameTable* const& __cordl_internal_get_coreReaderNameTable() const;

constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_coreReaderNameTable() ;

constexpr int32_t const& __cordl_internal_get_currentAttrIndex() const;

constexpr int32_t& __cordl_internal_get_currentAttrIndex() ;

constexpr int32_t const& __cordl_internal_get_currentContentIndex() const;

constexpr int32_t& __cordl_internal_get_currentContentIndex() ;

constexpr ::System::Xml::IXmlLineInfo* const& __cordl_internal_get_lineInfo() const;

constexpr ::System::Xml::IXmlLineInfo*& __cordl_internal_get_lineInfo() ;

constexpr bool const& __cordl_internal_get_readAhead() const;

constexpr bool& __cordl_internal_get_readAhead() ;

constexpr bool const& __cordl_internal_get_returnOriginalStringValues() const;

constexpr bool& __cordl_internal_get_returnOriginalStringValues() ;

constexpr ::System::Xml::ValidatingReaderNodeData* const& __cordl_internal_get_textNode() const;

constexpr ::System::Xml::ValidatingReaderNodeData*& __cordl_internal_get_textNode() ;

constexpr void __cordl_internal_set_attributeCount(int32_t  value) ;

constexpr void __cordl_internal_set_attributeEvents(::ArrayW<::System::Xml::ValidatingReaderNodeData*>  value) ;

constexpr void __cordl_internal_set_cacheHandler(::System::Xml::CachingEventHandler*  value) ;

constexpr void __cordl_internal_set_cacheState(::GlobalNamespace::XsdCachingReader_CachingReaderState  value) ;

constexpr void __cordl_internal_set_cachedNode(::System::Xml::ValidatingReaderNodeData*  value) ;

constexpr void __cordl_internal_set_contentEvents(::ArrayW<::System::Xml::ValidatingReaderNodeData*>  value) ;

constexpr void __cordl_internal_set_contentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_coreReader(::System::Xml::XmlReader*  value) ;

constexpr void __cordl_internal_set_coreReaderNameTable(::System::Xml::XmlNameTable*  value) ;

constexpr void __cordl_internal_set_currentAttrIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentContentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_lineInfo(::System::Xml::IXmlLineInfo*  value) ;

constexpr void __cordl_internal_set_readAhead(bool  value) ;

constexpr void __cordl_internal_set_returnOriginalStringValues(bool  value) ;

constexpr void __cordl_internal_set_textNode(::System::Xml::ValidatingReaderNodeData*  value) ;

/// @brief Method .ctor, addr 0xabbdb50, size 0xf8, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::XmlReader*  reader, ::System::Xml::IXmlLineInfo*  lineInfo, ::System::Xml::CachingEventHandler*  handlerMethod) ;

/// @brief Method get_AttributeCount, addr 0xabbe258, size 0x8, virtual true, abstract: false, final false
inline int32_t get_AttributeCount() ;

/// @brief Method get_BaseURI, addr 0xabbe1c8, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_BaseURI() ;

/// @brief Method get_Depth, addr 0xabbe1b0, size 0x18, virtual true, abstract: false, final false
inline int32_t get_Depth() ;

/// @brief Method get_EOF, addr 0xabbeee4, size 0x34, virtual true, abstract: false, final false
inline bool get_EOF() ;

/// @brief Method get_IsDefault, addr 0xabbe1f0, size 0x8, virtual true, abstract: false, final false
inline bool get_IsDefault() ;

/// @brief Method get_IsEmptyElement, addr 0xabbe1e8, size 0x8, virtual true, abstract: false, final false
inline bool get_IsEmptyElement() ;

/// @brief Method get_LocalName, addr 0xabbe134, size 0x18, virtual true, abstract: false, final false
inline ::StringW get_LocalName() ;

/// @brief Method get_Name, addr 0xabbe114, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NameTable, addr 0xabbf080, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XmlNameTable* get_NameTable() ;

/// @brief Method get_NamespaceURI, addr 0xabbe14c, size 0x18, virtual true, abstract: false, final false
inline ::StringW get_NamespaceURI() ;

/// @brief Method get_NodeType, addr 0xabbe0fc, size 0x18, virtual true, abstract: false, final false
inline ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Prefix, addr 0xabbe164, size 0x18, virtual true, abstract: false, final false
inline ::StringW get_Prefix() ;

/// @brief Method get_QuoteChar, addr 0xabbe1f8, size 0x20, virtual true, abstract: false, final false
inline char16_t get_QuoteChar() ;

/// @brief Method get_ReadState, addr 0xabbef4c, size 0x20, virtual true, abstract: false, final false
inline ::System::Xml::ReadState get_ReadState() ;

/// @brief Method get_Settings, addr 0xabbe0e0, size 0x1c, virtual true, abstract: false, final false
inline ::System::Xml::XmlReaderSettings* get_Settings() ;

/// @brief Method get_Value, addr 0xabbe17c, size 0x34, virtual true, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method get_XmlLang, addr 0xabbe238, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_XmlLang() ;

/// @brief Method get_XmlSpace, addr 0xabbe218, size 0x20, virtual true, abstract: false, final false
inline ::System::Xml::XmlSpace get_XmlSpace() ;

/// @brief Convert to "::System::Xml::IXmlLineInfo"
constexpr ::System::Xml::IXmlLineInfo* i___System__Xml__IXmlLineInfo() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XsdCachingReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XsdCachingReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XsdCachingReader(XsdCachingReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XsdCachingReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XsdCachingReader(XsdCachingReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14100};

/// @brief Field coreReader, offset: 0x10, size: 0x8, def value: None
 ::System::Xml::XmlReader*  ___coreReader;

/// @brief Field coreReaderNameTable, offset: 0x18, size: 0x8, def value: None
 ::System::Xml::XmlNameTable*  ___coreReaderNameTable;

/// @brief Field contentEvents, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::System::Xml::ValidatingReaderNodeData*>  ___contentEvents;

/// @brief Field attributeEvents, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::System::Xml::ValidatingReaderNodeData*>  ___attributeEvents;

/// @brief Field cachedNode, offset: 0x30, size: 0x8, def value: None
 ::System::Xml::ValidatingReaderNodeData*  ___cachedNode;

/// @brief Field cacheState, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::XsdCachingReader_CachingReaderState  ___cacheState;

/// @brief Field contentIndex, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___contentIndex;

/// @brief Field attributeCount, offset: 0x40, size: 0x4, def value: None
 int32_t  ___attributeCount;

/// @brief Field returnOriginalStringValues, offset: 0x44, size: 0x1, def value: None
 bool  ___returnOriginalStringValues;

/// @brief Field cacheHandler, offset: 0x48, size: 0x8, def value: None
 ::System::Xml::CachingEventHandler*  ___cacheHandler;

/// @brief Field currentAttrIndex, offset: 0x50, size: 0x4, def value: None
 int32_t  ___currentAttrIndex;

/// @brief Field currentContentIndex, offset: 0x54, size: 0x4, def value: None
 int32_t  ___currentContentIndex;

/// @brief Field readAhead, offset: 0x58, size: 0x1, def value: None
 bool  ___readAhead;

/// @brief Field lineInfo, offset: 0x60, size: 0x8, def value: None
 ::System::Xml::IXmlLineInfo*  ___lineInfo;

/// @brief Field textNode, offset: 0x68, size: 0x8, def value: None
 ::System::Xml::ValidatingReaderNodeData*  ___textNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XsdCachingReader, ___coreReader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___coreReaderNameTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___contentEvents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___attributeEvents) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___cachedNode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___cacheState) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___contentIndex) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___attributeCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___returnOriginalStringValues) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___cacheHandler) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___currentAttrIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___currentContentIndex) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___readAhead) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___lineInfo) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___textNode) == 0x68, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XsdCachingReader) == 0x70, "Size mismatch!");

} // namespace end def System::Xml
