#pragma once
// IWYU pragma private; include "System/Data/Common/ObjectStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectStorage)
namespace GlobalNamespace {
struct ObjectStorage_Families;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections {
class BitArray;
}
namespace System::Data::Common {
class ObjectStorage_TempAssemblyComparer;
}
namespace System::Data {
struct AggregateType;
}
namespace System::Data {
class DataColumn;
}
namespace System::Xml::Serialization {
class XmlRootAttribute;
}
namespace System::Xml::Serialization {
class XmlSerializerFactory;
}
namespace System::Xml::Serialization {
class XmlSerializer;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data::Common {
class ObjectStorage;
}
namespace System::Data::Common {
class ObjectStorage_TempAssemblyComparer;
}
// Write type traits
MARK_REF_T(::System::Data::Common::ObjectStorage*);
MARK_REF_T(::System::Data::Common::ObjectStorage_TempAssemblyComparer*);
DEFINE_IL2CPP_CLASS(::System::Data::Common::ObjectStorage*, "System.Data.Common", "ObjectStorage");
DEFINE_IL2CPP_CLASS(::System::Data::Common::ObjectStorage_TempAssemblyComparer*, "System.Data.Common", "ObjectStorage/TempAssemblyComparer");
// Dependencies System.Data.Common.DataStorage, System.Object
namespace System::Data::Common {
// Is value type: false
// CS Name: System.Data.Common.ObjectStorage
class CORDL_TYPE ObjectStorage : public ::System::Data::Common::DataStorage {
public:
// Declarations
using Families = ::GlobalNamespace::ObjectStorage_Families;

using TempAssemblyComparer = ::System::Data::Common::ObjectStorage_TempAssemblyComparer;

/// @brief Field _implementsIXmlSerializable, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__implementsIXmlSerializable, put=__cordl_internal_set__implementsIXmlSerializable)) bool  _implementsIXmlSerializable;

/// @brief Field _values, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::ArrayW<::System::Object*>  _values;

/// @brief Field s_defaultValue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_defaultValue, put=setStaticF_s_defaultValue)) ::System::Object*  s_defaultValue;

/// @brief Field s_serializerFactory, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_serializerFactory, put=setStaticF_s_serializerFactory)) ::System::Xml::Serialization::XmlSerializerFactory*  s_serializerFactory;

/// @brief Field s_tempAssemblyCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_tempAssemblyCache, put=setStaticF_s_tempAssemblyCache)) ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::System::Xml::Serialization::XmlRootAttribute*>,::System::Xml::Serialization::XmlSerializer*>*  s_tempAssemblyCache;

/// @brief Field s_tempAssemblyCacheLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_tempAssemblyCacheLock, put=setStaticF_s_tempAssemblyCacheLock)) ::System::Object*  s_tempAssemblyCacheLock;

/// @brief Method Aggregate, addr 0xa99f154, size 0x30, virtual true, abstract: false, final false
inline ::System::Object* Aggregate(::ArrayW<int32_t>  records, ::System::Data::AggregateType  kind) ;

/// @brief Method Compare, addr 0xa99f184, size 0x1b4, virtual true, abstract: false, final false
inline int32_t Compare(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CompareTo, addr 0xa99f988, size 0x170, virtual false, abstract: false, final false
inline int32_t CompareTo(::System::Object*  valueNo1, ::System::Object*  valueNo2) ;

/// @brief Method CompareValueTo, addr 0xa99f7b0, size 0x1d8, virtual true, abstract: false, final false
inline int32_t CompareValueTo(int32_t  recordNo1, ::System::Object*  value) ;

/// @brief Method CompareWithFamilies, addr 0xa99f338, size 0x478, virtual false, abstract: false, final false
inline int32_t CompareWithFamilies(::System::Object*  valueNo1, ::System::Object*  valueNo2) ;

/// @brief Method ConvertObjectToXml, addr 0xa9a15f8, size 0x4cc, virtual true, abstract: false, final false
inline ::StringW ConvertObjectToXml(::System::Object*  value) ;

/// @brief Method ConvertObjectToXml, addr 0xa9a1ac4, size 0x164, virtual true, abstract: false, final false
inline void ConvertObjectToXml(::System::Object*  value, ::System::Xml::XmlWriter*  xmlWriter, ::System::Xml::Serialization::XmlRootAttribute*  xmlAttrib) ;

/// @brief Method ConvertXmlToObject, addr 0xa9a0444, size 0x4dc, virtual true, abstract: false, final false
inline ::System::Object* ConvertXmlToObject(::StringW  s) ;

/// @brief Method ConvertXmlToObject, addr 0xa9a0994, size 0x68c, virtual true, abstract: false, final false
inline ::System::Object* ConvertXmlToObject(::System::Xml::XmlReader*  xmlReader, ::System::Xml::Serialization::XmlRootAttribute*  xmlAttrib) ;

/// @brief Method Copy, addr 0xa99fbe0, size 0x78, virtual true, abstract: false, final false
inline void Copy(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CopyValue, addr 0xa9a1c70, size 0x218, virtual true, abstract: false, final false
inline void CopyValue(int32_t  record, ::System::Object*  store, ::System::Collections::BitArray*  nullbits, int32_t  storeIndex) ;

/// @brief Method Get, addr 0xa99fc58, size 0x3c, virtual true, abstract: false, final false
inline ::System::Object* Get(int32_t  recordNo) ;

/// @brief Method GetEmptyStorage, addr 0xa9a1c28, size 0x48, virtual true, abstract: false, final false
inline ::System::Object* GetEmptyStorage(int32_t  recordCount) ;

/// @brief Method GetFamily, addr 0xa99faf8, size 0xe8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ObjectStorage_Families GetFamily(::System::Type*  dataType) ;

/// @brief Method GetXmlSerializer, addr 0xa9a0920, size 0x74, virtual false, abstract: false, final false
static inline ::System::Xml::Serialization::XmlSerializer* GetXmlSerializer(::System::Type*  type) ;

/// @brief Method GetXmlSerializer, addr 0xa9a1020, size 0x5d8, virtual false, abstract: false, final false
static inline ::System::Xml::Serialization::XmlSerializer* GetXmlSerializer(::System::Type*  type, ::System::Xml::Serialization::XmlRootAttribute*  attribute) ;

/// @brief Method IsNull, addr 0xa99fc94, size 0x38, virtual true, abstract: false, final false
inline bool IsNull(int32_t  record) ;

static inline ::System::Data::Common::ObjectStorage* New_ctor(::System::Data::DataColumn*  column, ::System::Type*  type) ;

/// @brief Method Set, addr 0xa99fccc, size 0x6b8, virtual true, abstract: false, final false
inline void Set(int32_t  recordNo, ::System::Object*  value) ;

/// @brief Method SetCapacity, addr 0xa9a0384, size 0xc0, virtual true, abstract: false, final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method SetStorage, addr 0xa9a1e88, size 0x1e8, virtual true, abstract: false, final false
inline void SetStorage(::System::Object*  store, ::System::Collections::BitArray*  nullbits) ;

/// @brief Method VerifyIDynamicMetaObjectProvider, addr 0xa9a2070, size 0x118, virtual false, abstract: false, final false
static inline void VerifyIDynamicMetaObjectProvider(::System::Type*  type) ;

constexpr bool const& __cordl_internal_get__implementsIXmlSerializable() const;

constexpr bool& __cordl_internal_get__implementsIXmlSerializable() ;

constexpr ::ArrayW<::System::Object*> const& __cordl_internal_get__values() const;

constexpr ::ArrayW<::System::Object*>& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__implementsIXmlSerializable(bool  value) ;

constexpr void __cordl_internal_set__values(::ArrayW<::System::Object*>  value) ;

/// @brief Method .ctor, addr 0xa99efb4, size 0x1a0, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataColumn*  column, ::System::Type*  type) ;

static inline ::System::Object* getStaticF_s_defaultValue() ;

static inline ::System::Xml::Serialization::XmlSerializerFactory* getStaticF_s_serializerFactory() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::System::Xml::Serialization::XmlRootAttribute*>,::System::Xml::Serialization::XmlSerializer*>* getStaticF_s_tempAssemblyCache() ;

static inline ::System::Object* getStaticF_s_tempAssemblyCacheLock() ;

static inline void setStaticF_s_defaultValue(::System::Object*  value) ;

static inline void setStaticF_s_serializerFactory(::System::Xml::Serialization::XmlSerializerFactory*  value) ;

static inline void setStaticF_s_tempAssemblyCache(::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::System::Xml::Serialization::XmlRootAttribute*>,::System::Xml::Serialization::XmlSerializer*>*  value) ;

static inline void setStaticF_s_tempAssemblyCacheLock(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectStorage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectStorage(ObjectStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectStorage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectStorage(ObjectStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21112};

/// @brief Field _values, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  ____values;

/// @brief Field _implementsIXmlSerializable, offset: 0x58, size: 0x1, def value: None
 bool  ____implementsIXmlSerializable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Common::ObjectStorage, ____values) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Data::Common::ObjectStorage, ____implementsIXmlSerializable) == 0x58, "Offset mismatch!");

static_assert(sizeof(::System::Data::Common::ObjectStorage) == 0x60, "Size mismatch!");

} // namespace end def System::Data::Common
// Dependencies System.Object
namespace System::Data::Common {
// Is value type: false
// CS Name: System.Data.Common.ObjectStorage/TempAssemblyComparer
class CORDL_TYPE ObjectStorage_TempAssemblyComparer : public ::System::Object {
public:
// Declarations
/// @brief Field s_default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_default, put=setStaticF_s_default)) ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::System::Xml::Serialization::XmlRootAttribute*>>*  s_default;

/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::System::Xml::Serialization::XmlRootAttribute*>>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::System::Xml::Serialization::XmlRootAttribute*>>*() noexcept;

/// @brief Method Equals, addr 0xa9a2264, size 0x130, virtual true, abstract: false, final true
inline bool Equals(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::System::Xml::Serialization::XmlRootAttribute*>  x, ::System::Collections::Generic::KeyValuePair_2<::System::Type*,::System::Xml::Serialization::XmlRootAttribute*>  y) ;

/// @brief Method GetHashCode, addr 0xa9a2394, size 0x88, virtual true, abstract: false, final true
inline int32_t GetHashCode(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::System::Xml::Serialization::XmlRootAttribute*>  obj) ;

static inline ::System::Data::Common::ObjectStorage_TempAssemblyComparer* New_ctor() ;

/// @brief Method .ctor, addr 0xa9a225c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::System::Xml::Serialization::XmlRootAttribute*>>* getStaticF_s_default() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::System::Xml::Serialization::XmlRootAttribute*>>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::System::Xml::Serialization::XmlRootAttribute*>>* i___System__Collections__Generic__IEqualityComparer_1___System__Collections__Generic__KeyValuePair_2___System__Type____System__Xml__Serialization__XmlRootAttribute___() noexcept;

static inline void setStaticF_s_default(::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::System::Xml::Serialization::XmlRootAttribute*>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectStorage_TempAssemblyComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectStorage_TempAssemblyComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectStorage_TempAssemblyComparer(ObjectStorage_TempAssemblyComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectStorage_TempAssemblyComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectStorage_TempAssemblyComparer(ObjectStorage_TempAssemblyComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21111};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Data::Common::ObjectStorage_TempAssemblyComparer) == 0x10, "Size mismatch!");

} // namespace end def System::Data::Common
