#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializationReaderInterpreter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__SerializationFormat_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationReader_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSerializationReaderInterpreter)
namespace System::Xml::Serialization {
class ClassMap;
}
namespace System::Xml::Serialization {
class TypeData;
}
namespace System::Xml::Serialization {
class XmlMapping;
}
namespace System::Xml::Serialization {
class XmlMembersMapping;
}
namespace System::Xml::Serialization {
class XmlSerializationReaderInterpreter_FixupCallbackInfo;
}
namespace System::Xml::Serialization {
class XmlSerializationReaderInterpreter_ReaderCallbackInfo;
}
namespace System::Xml::Serialization {
class XmlTypeMapElementInfo;
}
namespace System::Xml::Serialization {
class XmlTypeMapMember;
}
namespace System::Xml::Serialization {
class XmlTypeMapping;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlSerializationReaderInterpreter;
}
namespace System::Xml::Serialization {
class XmlSerializationReaderInterpreter_FixupCallbackInfo;
}
namespace System::Xml::Serialization {
class XmlSerializationReaderInterpreter_ReaderCallbackInfo;
}
// Write type traits
MARK_REF_T(::System::Xml::Serialization::XmlSerializationReaderInterpreter*);
MARK_REF_T(::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo*);
MARK_REF_T(::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo*);
DEFINE_IL2CPP_CLASS(::System::Xml::Serialization::XmlSerializationReaderInterpreter*, "System.Xml.Serialization", "XmlSerializationReaderInterpreter");
DEFINE_IL2CPP_CLASS(::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo*, "System.Xml.Serialization", "XmlSerializationReaderInterpreter/FixupCallbackInfo");
DEFINE_IL2CPP_CLASS(::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo*, "System.Xml.Serialization", "XmlSerializationReaderInterpreter/ReaderCallbackInfo");
// Dependencies System.Object, System.Xml.Serialization.SerializationFormat, System.Xml.Serialization.XmlSerializationReader
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializationReaderInterpreter
class CORDL_TYPE XmlSerializationReaderInterpreter : public ::System::Xml::Serialization::XmlSerializationReader {
public:
// Declarations
using FixupCallbackInfo = ::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo;

using ReaderCallbackInfo = ::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo;

/// @brief Field AnyType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnyType, put=setStaticF_AnyType)) ::System::Xml::XmlQualifiedName*  AnyType;

/// @brief Field _format, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get__format, put=__cordl_internal_set__format)) ::System::Xml::Serialization::SerializationFormat  _format;

/// @brief Field _typeMap, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__typeMap, put=__cordl_internal_set__typeMap)) ::System::Xml::Serialization::XmlMapping*  _typeMap;

/// @brief Field empty_array, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_empty_array, put=setStaticF_empty_array)) ::ArrayW<::System::Object*>  empty_array;

/// @brief Method AddListValue, addr 0xac19b80, size 0x304, virtual false, abstract: false, final false
inline void AddListValue(::System::Xml::Serialization::TypeData*  listType, ::by_ref<::System::Object*>  list, int32_t  index, ::System::Object*  value, bool  canCreateInstance) ;

/// @brief Method CopyEnumerableList, addr 0xac1acb0, size 0x410, virtual false, abstract: false, final false
inline void CopyEnumerableList(::System::Object*  source, ::System::Object*  dest) ;

/// @brief Method CreateInstance, addr 0xac16778, size 0x64, virtual false, abstract: false, final false
inline ::System::Object* CreateInstance(::System::Type*  type) ;

/// @brief Method CreateInstance, addr 0xac19744, size 0x8, virtual false, abstract: false, final false
static inline ::System::Object* CreateInstance(::System::Type*  type, bool  nonPublic) ;

/// @brief Method CreateList, addr 0xac1a110, size 0x9c, virtual false, abstract: false, final false
inline ::System::Object* CreateList(::System::Type*  listType) ;

/// @brief Method FillList, addr 0xac1aca0, size 0x10, virtual false, abstract: false, final false
inline void FillList(::System::Object*  list, ::System::Object*  items) ;

/// @brief Method FixupMembers, addr 0xac1a408, size 0x3c8, virtual false, abstract: false, final false
inline void FixupMembers(::System::Xml::Serialization::ClassMap*  map, ::System::Object*  obfixup, bool  isValueList) ;

/// @brief Method GetEnumValue, addr 0xac1ab68, size 0x138, virtual false, abstract: false, final false
inline ::System::Object* GetEnumValue(::System::Xml::Serialization::XmlTypeMapping*  typeMap, ::StringW  val) ;

/// @brief Method GetMemberValue, addr 0xac19ab0, size 0xd0, virtual false, abstract: false, final false
inline ::System::Object* GetMemberValue(::System::Xml::Serialization::XmlTypeMapMember*  member, ::System::Object*  ob, bool  isValueList) ;

/// @brief Method GetValueFromXmlString, addr 0xac197f4, size 0x128, virtual false, abstract: false, final false
inline ::System::Object* GetValueFromXmlString(::StringW  value, ::System::Xml::Serialization::TypeData*  typeData, ::System::Xml::Serialization::XmlTypeMapping*  typeMap) ;

/// @brief Method InitCallbacks, addr 0xac15c34, size 0x38c, virtual true, abstract: false, final false
inline void InitCallbacks() ;

/// @brief Method InitIDs, addr 0xac16004, size 0x4, virtual true, abstract: false, final false
inline void InitIDs() ;

/// @brief Method InitializeList, addr 0xac1a02c, size 0x8c, virtual false, abstract: false, final false
inline ::System::Object* InitializeList(::System::Xml::Serialization::TypeData*  listType) ;

/// @brief Method IsReadOnly, addr 0xac19fc8, size 0x64, virtual false, abstract: false, final false
inline bool IsReadOnly(::System::Xml::Serialization::XmlTypeMapMember*  member, ::System::Xml::Serialization::TypeData*  memType, ::System::Object*  ob, bool  isValueList) ;

static inline ::System::Xml::Serialization::XmlSerializationReaderInterpreter* New_ctor(::System::Xml::Serialization::XmlMapping*  typeMap) ;

/// @brief Method ProcessUnknownAttribute, addr 0xac1a7d0, size 0x34, virtual true, abstract: false, final false
inline void ProcessUnknownAttribute(::System::Object*  target) ;

/// @brief Method ProcessUnknownElement, addr 0xac1a804, size 0x34, virtual true, abstract: false, final false
inline void ProcessUnknownElement(::System::Object*  target) ;

/// @brief Method ReadAttributeMembers, addr 0xac1687c, size 0x3f4, virtual false, abstract: false, final false
inline void ReadAttributeMembers(::System::Xml::Serialization::ClassMap*  map, ::System::Object*  ob, bool  isValueList) ;

/// @brief Method ReadClassInstance, addr 0xac19490, size 0x2b4, virtual true, abstract: false, final false
inline ::System::Object* ReadClassInstance(::System::Xml::Serialization::XmlTypeMapping*  typeMap, bool  isNullable, bool  checkType) ;

/// @brief Method ReadClassInstanceMembers, addr 0xac1974c, size 0xa8, virtual true, abstract: false, final false
inline void ReadClassInstanceMembers(::System::Xml::Serialization::XmlTypeMapping*  typeMap, ::System::Object*  ob) ;

/// @brief Method ReadEncodedObject, addr 0xac161e8, size 0x104, virtual false, abstract: false, final false
inline ::System::Object* ReadEncodedObject(::System::Xml::Serialization::XmlTypeMapping*  typeMap) ;

/// @brief Method ReadEnumElement, addr 0xac19290, size 0x6c, virtual false, abstract: false, final false
inline ::System::Object* ReadEnumElement(::System::Xml::Serialization::XmlTypeMapping*  typeMap, bool  isNullable) ;

/// @brief Method ReadListElement, addr 0xac18e38, size 0x3a0, virtual false, abstract: false, final false
inline ::System::Object* ReadListElement(::System::Xml::Serialization::XmlTypeMapping*  typeMap, bool  isNullable, ::System::Object*  list, bool  canCreateInstance) ;

/// @brief Method ReadListString, addr 0xac1a944, size 0x224, virtual false, abstract: false, final false
inline ::System::Object* ReadListString(::System::Xml::Serialization::XmlTypeMapping*  typeMap, ::StringW  values) ;

/// @brief Method ReadMembers, addr 0xac16c70, size 0x20b8, virtual false, abstract: false, final false
inline void ReadMembers(::System::Xml::Serialization::ClassMap*  map, ::System::Object*  ob, bool  isValueList, bool  readBySoapOrder) ;

/// @brief Method ReadMessage, addr 0xac162ec, size 0x48c, virtual true, abstract: false, final false
inline ::System::Object* ReadMessage(::System::Xml::Serialization::XmlMembersMapping*  typeMap) ;

/// @brief Method ReadObject, addr 0xac18d40, size 0xf8, virtual true, abstract: false, final false
inline ::System::Object* ReadObject(::System::Xml::Serialization::XmlTypeMapping*  typeMap, bool  isNullable, bool  checkType) ;

/// @brief Method ReadObjectElement, addr 0xac1a1ac, size 0x1a8, virtual false, abstract: false, final false
inline ::System::Object* ReadObjectElement(::System::Xml::Serialization::XmlTypeMapElementInfo*  elem) ;

/// @brief Method ReadPrimitiveElement, addr 0xac191d8, size 0xb8, virtual false, abstract: false, final false
inline ::System::Object* ReadPrimitiveElement(::System::Xml::Serialization::XmlTypeMapping*  typeMap, bool  isNullable) ;

/// @brief Method ReadPrimitiveValue, addr 0xac1a838, size 0x10c, virtual false, abstract: false, final false
inline ::System::Object* ReadPrimitiveValue(::System::Xml::Serialization::XmlTypeMapElementInfo*  elem) ;

/// @brief Method ReadRoot, addr 0xac16008, size 0x108, virtual false, abstract: false, final false
inline ::System::Object* ReadRoot() ;

/// @brief Method ReadRoot, addr 0xac16110, size 0xd8, virtual false, abstract: false, final false
inline ::System::Object* ReadRoot(::System::Xml::Serialization::XmlTypeMapping*  rootMap) ;

/// @brief Method ReadXmlNode, addr 0xac1a354, size 0xb4, virtual false, abstract: false, final false
inline ::System::Object* ReadXmlNode(::System::Xml::Serialization::TypeData*  type, bool  wrapped) ;

/// @brief Method ReadXmlNodeElement, addr 0xac18d28, size 0x18, virtual false, abstract: false, final false
inline ::System::Object* ReadXmlNodeElement(::System::Xml::Serialization::XmlTypeMapping*  typeMap, bool  isNullable) ;

/// @brief Method ReadXmlSerializableElement, addr 0xac192fc, size 0x194, virtual false, abstract: false, final false
inline ::System::Object* ReadXmlSerializableElement(::System::Xml::Serialization::XmlTypeMapping*  typeMap, bool  isNullable) ;

/// @brief Method SetListMembersDefaults, addr 0xac19e84, size 0x144, virtual false, abstract: false, final false
inline void SetListMembersDefaults(::System::Xml::Serialization::ClassMap*  map, ::System::Object*  ob, bool  isValueList) ;

/// @brief Method SetMemberValue, addr 0xac1991c, size 0x194, virtual false, abstract: false, final false
inline void SetMemberValue(::System::Xml::Serialization::XmlTypeMapMember*  member, ::System::Object*  ob, ::System::Object*  value, bool  isValueList) ;

/// @brief Method SetMemberValueFromAttr, addr 0xac167dc, size 0xa0, virtual false, abstract: false, final false
inline void SetMemberValueFromAttr(::System::Xml::Serialization::XmlTypeMapMember*  member, ::System::Object*  ob, ::System::Object*  value, bool  isValueList) ;

constexpr ::System::Xml::Serialization::SerializationFormat const& __cordl_internal_get__format() const;

constexpr ::System::Xml::Serialization::SerializationFormat& __cordl_internal_get__format() ;

constexpr ::System::Xml::Serialization::XmlMapping* const& __cordl_internal_get__typeMap() const;

constexpr ::System::Xml::Serialization::XmlMapping*& __cordl_internal_get__typeMap() ;

constexpr void __cordl_internal_set__format(::System::Xml::Serialization::SerializationFormat  value) ;

constexpr void __cordl_internal_set__typeMap(::System::Xml::Serialization::XmlMapping*  value) ;

/// @brief Method .ctor, addr 0xac15bf0, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Serialization::XmlMapping*  typeMap) ;

static inline ::System::Xml::XmlQualifiedName* getStaticF_AnyType() ;

static inline ::ArrayW<::System::Object*> getStaticF_empty_array() ;

static inline void setStaticF_AnyType(::System::Xml::XmlQualifiedName*  value) ;

static inline void setStaticF_empty_array(::ArrayW<::System::Object*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSerializationReaderInterpreter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReaderInterpreter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSerializationReaderInterpreter(XmlSerializationReaderInterpreter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReaderInterpreter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSerializationReaderInterpreter(XmlSerializationReaderInterpreter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14264};

/// @brief Field _typeMap, offset: 0xd0, size: 0x8, def value: None
 ::System::Xml::Serialization::XmlMapping*  ____typeMap;

/// @brief Field _format, offset: 0xd8, size: 0x4, def value: None
 ::System::Xml::Serialization::SerializationFormat  ____format;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReaderInterpreter, ____typeMap) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReaderInterpreter, ____format) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Serialization::XmlSerializationReaderInterpreter) == 0xe0, "Size mismatch!");

} // namespace end def System::Xml::Serialization
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializationReaderInterpreter/ReaderCallbackInfo
class CORDL_TYPE XmlSerializationReaderInterpreter_ReaderCallbackInfo : public ::System::Object {
public:
// Declarations
/// @brief Field _sri, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__sri, put=__cordl_internal_set__sri)) ::System::Xml::Serialization::XmlSerializationReaderInterpreter*  _sri;

/// @brief Field _typeMap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__typeMap, put=__cordl_internal_set__typeMap)) ::System::Xml::Serialization::XmlTypeMapping*  _typeMap;

static inline ::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo* New_ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter*  sri, ::System::Xml::Serialization::XmlTypeMapping*  typeMap) ;

/// @brief Method ReadObject, addr 0xac1b1d8, size 0x2c, virtual false, abstract: false, final false
inline ::System::Object* ReadObject() ;

constexpr ::System::Xml::Serialization::XmlSerializationReaderInterpreter* const& __cordl_internal_get__sri() const;

constexpr ::System::Xml::Serialization::XmlSerializationReaderInterpreter*& __cordl_internal_get__sri() ;

constexpr ::System::Xml::Serialization::XmlTypeMapping* const& __cordl_internal_get__typeMap() const;

constexpr ::System::Xml::Serialization::XmlTypeMapping*& __cordl_internal_get__typeMap() ;

constexpr void __cordl_internal_set__sri(::System::Xml::Serialization::XmlSerializationReaderInterpreter*  value) ;

constexpr void __cordl_internal_set__typeMap(::System::Xml::Serialization::XmlTypeMapping*  value) ;

/// @brief Method .ctor, addr 0xac15fc0, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter*  sri, ::System::Xml::Serialization::XmlTypeMapping*  typeMap) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSerializationReaderInterpreter_ReaderCallbackInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReaderInterpreter_ReaderCallbackInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSerializationReaderInterpreter_ReaderCallbackInfo(XmlSerializationReaderInterpreter_ReaderCallbackInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReaderInterpreter_ReaderCallbackInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSerializationReaderInterpreter_ReaderCallbackInfo(XmlSerializationReaderInterpreter_ReaderCallbackInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14263};

/// @brief Field _sri, offset: 0x10, size: 0x8, def value: None
 ::System::Xml::Serialization::XmlSerializationReaderInterpreter*  ____sri;

/// @brief Field _typeMap, offset: 0x18, size: 0x8, def value: None
 ::System::Xml::Serialization::XmlTypeMapping*  ____typeMap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo, ____sri) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo, ____typeMap) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo) == 0x20, "Size mismatch!");

} // namespace end def System::Xml::Serialization
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializationReaderInterpreter/FixupCallbackInfo
class CORDL_TYPE XmlSerializationReaderInterpreter_FixupCallbackInfo : public ::System::Object {
public:
// Declarations
/// @brief Field _isValueList, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__isValueList, put=__cordl_internal_set__isValueList)) bool  _isValueList;

/// @brief Field _map, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__map, put=__cordl_internal_set__map)) ::System::Xml::Serialization::ClassMap*  _map;

/// @brief Field _sri, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__sri, put=__cordl_internal_set__sri)) ::System::Xml::Serialization::XmlSerializationReaderInterpreter*  _sri;

/// @brief Method FixupMembers, addr 0xac1b1b4, size 0x24, virtual false, abstract: false, final false
inline void FixupMembers(::System::Object*  fixup) ;

static inline ::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo* New_ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter*  sri, ::System::Xml::Serialization::ClassMap*  map, bool  isValueList) ;

constexpr bool const& __cordl_internal_get__isValueList() const;

constexpr bool& __cordl_internal_get__isValueList() ;

constexpr ::System::Xml::Serialization::ClassMap* const& __cordl_internal_get__map() const;

constexpr ::System::Xml::Serialization::ClassMap*& __cordl_internal_get__map() ;

constexpr ::System::Xml::Serialization::XmlSerializationReaderInterpreter* const& __cordl_internal_get__sri() const;

constexpr ::System::Xml::Serialization::XmlSerializationReaderInterpreter*& __cordl_internal_get__sri() ;

constexpr void __cordl_internal_set__isValueList(bool  value) ;

constexpr void __cordl_internal_set__map(::System::Xml::Serialization::ClassMap*  value) ;

constexpr void __cordl_internal_set__sri(::System::Xml::Serialization::XmlSerializationReaderInterpreter*  value) ;

/// @brief Method .ctor, addr 0xac1a0b8, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter*  sri, ::System::Xml::Serialization::ClassMap*  map, bool  isValueList) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSerializationReaderInterpreter_FixupCallbackInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReaderInterpreter_FixupCallbackInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSerializationReaderInterpreter_FixupCallbackInfo(XmlSerializationReaderInterpreter_FixupCallbackInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReaderInterpreter_FixupCallbackInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSerializationReaderInterpreter_FixupCallbackInfo(XmlSerializationReaderInterpreter_FixupCallbackInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14262};

/// @brief Field _sri, offset: 0x10, size: 0x8, def value: None
 ::System::Xml::Serialization::XmlSerializationReaderInterpreter*  ____sri;

/// @brief Field _map, offset: 0x18, size: 0x8, def value: None
 ::System::Xml::Serialization::ClassMap*  ____map;

/// @brief Field _isValueList, offset: 0x20, size: 0x1, def value: None
 bool  ____isValueList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo, ____sri) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo, ____map) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo, ____isValueList) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo) == 0x28, "Size mismatch!");

} // namespace end def System::Xml::Serialization
