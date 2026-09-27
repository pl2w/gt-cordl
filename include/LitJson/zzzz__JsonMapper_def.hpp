#pragma once
// IWYU pragma private; include "LitJson/JsonMapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonMapper)
namespace LitJson {
struct ArrayMetadata;
}
namespace LitJson {
template<typename T>
class ExporterFunc_1;
}
namespace LitJson {
class ExporterFunc;
}
namespace LitJson {
class IJsonWrapper;
}
namespace LitJson {
template<typename TJson,typename TValue>
class ImporterFunc_2;
}
namespace LitJson {
class ImporterFunc;
}
namespace LitJson {
class JsonData;
}
namespace LitJson {
class JsonMapper___c;
}
namespace LitJson {
template<typename T>
class JsonMapper___c__DisplayClass37_0_1;
}
namespace LitJson {
template<typename TJson,typename TValue>
class JsonMapper___c__DisplayClass38_0_2;
}
namespace LitJson {
class JsonReader;
}
namespace LitJson {
class JsonWriter;
}
namespace LitJson {
struct ObjectMetadata;
}
namespace LitJson {
struct PropertyMetadata;
}
namespace LitJson {
class WrapperFactory;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::IO {
class TextReader;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace LitJson {
class JsonMapper;
}
namespace LitJson {
class JsonMapper___c;
}
namespace LitJson {
template<typename T>
class JsonMapper___c__DisplayClass37_0_1;
}
namespace LitJson {
template<typename TJson,typename TValue>
class JsonMapper___c__DisplayClass38_0_2;
}
// Write type traits
MARK_REF_T(::LitJson::JsonMapper*);
MARK_REF_T(::LitJson::JsonMapper___c*);
MARK_GEN_REF_T_PTR(::LitJson::JsonMapper___c__DisplayClass37_0_1);
MARK_GEN_REF_T_PTR(::LitJson::JsonMapper___c__DisplayClass38_0_2);
DEFINE_IL2CPP_CLASS(::LitJson::JsonMapper*, "LitJson", "JsonMapper");
DEFINE_IL2CPP_CLASS(::LitJson::JsonMapper___c*, "LitJson", "JsonMapper/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::LitJson::JsonMapper___c__DisplayClass37_0_1, "LitJson", "JsonMapper/<>c__DisplayClass37_0`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::LitJson::JsonMapper___c__DisplayClass38_0_2, "LitJson", "JsonMapper/<>c__DisplayClass38_0`2");
// Dependencies System.Object
namespace LitJson {
// Is value type: false
// CS Name: LitJson.JsonMapper
class CORDL_TYPE JsonMapper : public ::System::Object {
public:
// Declarations
using __c = ::LitJson::JsonMapper___c;

template<typename T>
using __c__DisplayClass37_0_1 = ::LitJson::JsonMapper___c__DisplayClass37_0_1<T>;

template<typename TJson,typename TValue>
using __c__DisplayClass38_0_2 = ::LitJson::JsonMapper___c__DisplayClass38_0_2<TJson, TValue>;

/// @brief Field array_metadata, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_array_metadata, put=setStaticF_array_metadata)) ::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ArrayMetadata>*  array_metadata;

/// @brief Field array_metadata_lock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_array_metadata_lock, put=setStaticF_array_metadata_lock)) ::System::Object*  array_metadata_lock;

/// @brief Field base_exporters_table, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_base_exporters_table, put=setStaticF_base_exporters_table)) ::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ExporterFunc*>*  base_exporters_table;

/// @brief Field base_importers_table, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_base_importers_table, put=setStaticF_base_importers_table)) ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>*  base_importers_table;

/// @brief Field conv_ops, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_conv_ops, put=setStaticF_conv_ops)) ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Reflection::MethodInfo*>*>*  conv_ops;

/// @brief Field conv_ops_lock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_conv_ops_lock, put=setStaticF_conv_ops_lock)) ::System::Object*  conv_ops_lock;

/// @brief Field custom_exporters_table, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_custom_exporters_table, put=setStaticF_custom_exporters_table)) ::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ExporterFunc*>*  custom_exporters_table;

/// @brief Field custom_importers_table, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_custom_importers_table, put=setStaticF_custom_importers_table)) ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>*  custom_importers_table;

/// @brief Field datetime_format, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_datetime_format, put=setStaticF_datetime_format)) ::System::IFormatProvider*  datetime_format;

/// @brief Field max_nesting_depth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_max_nesting_depth, put=setStaticF_max_nesting_depth)) int32_t  max_nesting_depth;

/// @brief Field object_metadata, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_object_metadata, put=setStaticF_object_metadata)) ::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ObjectMetadata>*  object_metadata;

/// @brief Field object_metadata_lock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_object_metadata_lock, put=setStaticF_object_metadata_lock)) ::System::Object*  object_metadata_lock;

/// @brief Field static_writer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_static_writer, put=setStaticF_static_writer)) ::LitJson::JsonWriter*  static_writer;

/// @brief Field static_writer_lock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_static_writer_lock, put=setStaticF_static_writer_lock)) ::System::Object*  static_writer_lock;

/// @brief Field type_properties, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_type_properties, put=setStaticF_type_properties)) ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IList_1<::LitJson::PropertyMetadata>*>*  type_properties;

/// @brief Field type_properties_lock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_type_properties_lock, put=setStaticF_type_properties_lock)) ::System::Object*  type_properties_lock;

/// @brief Method AddArrayMetadata, addr 0x5b61a9c, size 0x474, virtual false, abstract: false, final false
static inline void AddArrayMetadata(::System::Type*  type) ;

/// @brief Method AddObjectMetadata, addr 0x5b61f10, size 0x720, virtual false, abstract: false, final false
static inline void AddObjectMetadata(::System::Type*  type) ;

/// @brief Method AddTypeProperties, addr 0x5b62630, size 0x548, virtual false, abstract: false, final false
static inline void AddTypeProperties(::System::Type*  type) ;

/// @brief Method GetConvOp, addr 0x5b62b78, size 0x7f4, virtual false, abstract: false, final false
static inline ::System::Reflection::MethodInfo* GetConvOp(::System::Type*  t1, ::System::Type*  t2) ;

static inline ::LitJson::JsonMapper* New_ctor() ;

/// @brief Method ReadValue, addr 0x5b645e0, size 0x534, virtual false, abstract: false, final false
static inline ::LitJson::IJsonWrapper* ReadValue(::LitJson::WrapperFactory*  factory, ::LitJson::JsonReader*  reader) ;

/// @brief Method ReadValue, addr 0x5b6336c, size 0xe14, virtual false, abstract: false, final false
static inline ::System::Object* ReadValue(::System::Type*  inst_type, ::LitJson::JsonReader*  reader) ;

/// @brief Method RegisterBaseExporters, addr 0x5b6017c, size 0xcc0, virtual false, abstract: false, final false
static inline void RegisterBaseExporters() ;

/// @brief Method RegisterBaseImporters, addr 0x5b60e3c, size 0xc60, virtual false, abstract: false, final false
static inline void RegisterBaseImporters() ;

/// @brief Method RegisterExporter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RegisterExporter(::LitJson::ExporterFunc_1<T>*  exporter) ;

/// @brief Method RegisterImporter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TJson,typename TValue>
static inline void RegisterImporter(::LitJson::ImporterFunc_2<TJson,TValue>*  importer) ;

/// @brief Method RegisterImporter, addr 0x5b64b14, size 0x240, virtual false, abstract: false, final false
static inline void RegisterImporter(::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>*  table, ::System::Type*  json_type, ::System::Type*  value_type, ::LitJson::ImporterFunc*  importer) ;

/// @brief Method ToJson, addr 0x5b664dc, size 0x17c, virtual false, abstract: false, final false
static inline ::StringW ToJson(::System::Object*  obj) ;

/// @brief Method ToJson, addr 0x5b66744, size 0x6c, virtual false, abstract: false, final false
static inline void ToJson(::System::Object*  obj, ::LitJson::JsonWriter*  writer) ;

/// @brief Method ToObject, addr 0x5b66ae0, size 0x14c, virtual false, abstract: false, final false
static inline ::LitJson::JsonData* ToObject(::StringW  json) ;

/// @brief Method ToObject, addr 0x5b667b0, size 0x14c, virtual false, abstract: false, final false
static inline ::LitJson::JsonData* ToObject(::LitJson::JsonReader*  reader) ;

/// @brief Method ToObject, addr 0x5b66960, size 0x178, virtual false, abstract: false, final false
static inline ::LitJson::JsonData* ToObject(::System::IO::TextReader*  reader) ;

/// @brief Method ToObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T ToObject(::StringW  json) ;

/// @brief Method ToObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T ToObject(::LitJson::JsonReader*  reader) ;

/// @brief Method ToObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T ToObject(::System::IO::TextReader*  reader) ;

/// @brief Method ToWrapper, addr 0x5b66c2c, size 0x8c, virtual false, abstract: false, final false
static inline ::LitJson::IJsonWrapper* ToWrapper(::LitJson::WrapperFactory*  factory, ::StringW  json) ;

/// @brief Method ToWrapper, addr 0x5b668fc, size 0x64, virtual false, abstract: false, final false
static inline ::LitJson::IJsonWrapper* ToWrapper(::LitJson::WrapperFactory*  factory, ::LitJson::JsonReader*  reader) ;

/// @brief Method UnregisterExporters, addr 0x5b66d28, size 0xcc, virtual false, abstract: false, final false
static inline void UnregisterExporters() ;

/// @brief Method UnregisterImporters, addr 0x5b66df4, size 0xcc, virtual false, abstract: false, final false
static inline void UnregisterImporters() ;

/// @brief Method WriteValue, addr 0x5b64d54, size 0xdac, virtual false, abstract: false, final false
static inline void WriteValue(::System::Object*  obj, ::LitJson::JsonWriter*  writer, bool  writer_is_private, int32_t  depth) ;

/// @brief Method .ctor, addr 0x5b66ec0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ArrayMetadata>* getStaticF_array_metadata() ;

static inline ::System::Object* getStaticF_array_metadata_lock() ;

static inline ::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ExporterFunc*>* getStaticF_base_exporters_table() ;

static inline ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>* getStaticF_base_importers_table() ;

static inline ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Reflection::MethodInfo*>*>* getStaticF_conv_ops() ;

static inline ::System::Object* getStaticF_conv_ops_lock() ;

static inline ::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ExporterFunc*>* getStaticF_custom_exporters_table() ;

static inline ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>* getStaticF_custom_importers_table() ;

static inline ::System::IFormatProvider* getStaticF_datetime_format() ;

static inline int32_t getStaticF_max_nesting_depth() ;

static inline ::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ObjectMetadata>* getStaticF_object_metadata() ;

static inline ::System::Object* getStaticF_object_metadata_lock() ;

static inline ::LitJson::JsonWriter* getStaticF_static_writer() ;

static inline ::System::Object* getStaticF_static_writer_lock() ;

static inline ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IList_1<::LitJson::PropertyMetadata>*>* getStaticF_type_properties() ;

static inline ::System::Object* getStaticF_type_properties_lock() ;

static inline void setStaticF_array_metadata(::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ArrayMetadata>*  value) ;

static inline void setStaticF_array_metadata_lock(::System::Object*  value) ;

static inline void setStaticF_base_exporters_table(::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ExporterFunc*>*  value) ;

static inline void setStaticF_base_importers_table(::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>*  value) ;

static inline void setStaticF_conv_ops(::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Reflection::MethodInfo*>*>*  value) ;

static inline void setStaticF_conv_ops_lock(::System::Object*  value) ;

static inline void setStaticF_custom_exporters_table(::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ExporterFunc*>*  value) ;

static inline void setStaticF_custom_importers_table(::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>*  value) ;

static inline void setStaticF_datetime_format(::System::IFormatProvider*  value) ;

static inline void setStaticF_max_nesting_depth(int32_t  value) ;

static inline void setStaticF_object_metadata(::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ObjectMetadata>*  value) ;

static inline void setStaticF_object_metadata_lock(::System::Object*  value) ;

static inline void setStaticF_static_writer(::LitJson::JsonWriter*  value) ;

static inline void setStaticF_static_writer_lock(::System::Object*  value) ;

static inline void setStaticF_type_properties(::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IList_1<::LitJson::PropertyMetadata>*>*  value) ;

static inline void setStaticF_type_properties_lock(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonMapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonMapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonMapper(JsonMapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonMapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonMapper(JsonMapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3833};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::LitJson::JsonMapper) == 0x10, "Size mismatch!");

} // namespace end def LitJson
// [CompilerGenerated]
// Dependencies System.Object
namespace LitJson {
// cpp template
template<typename TJson,typename TValue>
// Is value type: false
// CS Name: LitJson.JsonMapper/<>c__DisplayClass38_0`2<TJson,TValue>
class CORDL_TYPE JsonMapper___c__DisplayClass38_0_2 : public ::System::Object {
public:
// Declarations
/// @brief Field importer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_importer, put=__cordl_internal_set_importer)) ::LitJson::ImporterFunc_2<TJson,TValue>*  importer;

static inline ::LitJson::JsonMapper___c__DisplayClass38_0_2<TJson,TValue>* New_ctor() ;

/// @brief Method <RegisterImporter>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Object* _RegisterImporter_b__0(::System::Object*  input) ;

constexpr ::LitJson::ImporterFunc_2<TJson,TValue>* const& __cordl_internal_get_importer() const;

constexpr ::LitJson::ImporterFunc_2<TJson,TValue>*& __cordl_internal_get_importer() ;

constexpr void __cordl_internal_set_importer(::LitJson::ImporterFunc_2<TJson,TValue>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonMapper___c__DisplayClass38_0_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonMapper___c__DisplayClass38_0_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonMapper___c__DisplayClass38_0_2(JsonMapper___c__DisplayClass38_0_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonMapper___c__DisplayClass38_0_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonMapper___c__DisplayClass38_0_2(JsonMapper___c__DisplayClass38_0_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3832};

/// @brief Field importer, offset: 0x10, size: 0x8, def value: None
 ::LitJson::ImporterFunc_2<TJson,TValue>*  ___importer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LitJson
// [CompilerGenerated]
// Dependencies System.Object
namespace LitJson {
// cpp template
template<typename T>
// Is value type: false
// CS Name: LitJson.JsonMapper/<>c__DisplayClass37_0`1<T>
class CORDL_TYPE JsonMapper___c__DisplayClass37_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field exporter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_exporter, put=__cordl_internal_set_exporter)) ::LitJson::ExporterFunc_1<T>*  exporter;

static inline ::LitJson::JsonMapper___c__DisplayClass37_0_1<T>* New_ctor() ;

/// @brief Method <RegisterExporter>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _RegisterExporter_b__0(::System::Object*  obj, ::LitJson::JsonWriter*  writer) ;

constexpr ::LitJson::ExporterFunc_1<T>* const& __cordl_internal_get_exporter() const;

constexpr ::LitJson::ExporterFunc_1<T>*& __cordl_internal_get_exporter() ;

constexpr void __cordl_internal_set_exporter(::LitJson::ExporterFunc_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonMapper___c__DisplayClass37_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonMapper___c__DisplayClass37_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonMapper___c__DisplayClass37_0_1(JsonMapper___c__DisplayClass37_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonMapper___c__DisplayClass37_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonMapper___c__DisplayClass37_0_1(JsonMapper___c__DisplayClass37_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3831};

/// @brief Field exporter, offset: 0x10, size: 0x8, def value: None
 ::LitJson::ExporterFunc_1<T>*  ___exporter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LitJson
// [CompilerGenerated]
// Dependencies System.Object
namespace LitJson {
// Is value type: false
// CS Name: LitJson.JsonMapper/<>c
class CORDL_TYPE JsonMapper___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::LitJson::JsonMapper___c*  __9;

/// @brief Field <>9__23_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_0, put=setStaticF___9__23_0)) ::LitJson::ExporterFunc*  __9__23_0;

/// @brief Field <>9__23_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_1, put=setStaticF___9__23_1)) ::LitJson::ExporterFunc*  __9__23_1;

/// @brief Field <>9__23_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_2, put=setStaticF___9__23_2)) ::LitJson::ExporterFunc*  __9__23_2;

/// @brief Field <>9__23_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_3, put=setStaticF___9__23_3)) ::LitJson::ExporterFunc*  __9__23_3;

/// @brief Field <>9__23_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_4, put=setStaticF___9__23_4)) ::LitJson::ExporterFunc*  __9__23_4;

/// @brief Field <>9__23_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_5, put=setStaticF___9__23_5)) ::LitJson::ExporterFunc*  __9__23_5;

/// @brief Field <>9__23_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_6, put=setStaticF___9__23_6)) ::LitJson::ExporterFunc*  __9__23_6;

/// @brief Field <>9__23_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_7, put=setStaticF___9__23_7)) ::LitJson::ExporterFunc*  __9__23_7;

/// @brief Field <>9__23_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_8, put=setStaticF___9__23_8)) ::LitJson::ExporterFunc*  __9__23_8;

/// @brief Field <>9__23_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_9, put=setStaticF___9__23_9)) ::LitJson::ExporterFunc*  __9__23_9;

/// @brief Field <>9__24_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_0, put=setStaticF___9__24_0)) ::LitJson::ImporterFunc*  __9__24_0;

/// @brief Field <>9__24_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_1, put=setStaticF___9__24_1)) ::LitJson::ImporterFunc*  __9__24_1;

/// @brief Field <>9__24_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_10, put=setStaticF___9__24_10)) ::LitJson::ImporterFunc*  __9__24_10;

/// @brief Field <>9__24_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_11, put=setStaticF___9__24_11)) ::LitJson::ImporterFunc*  __9__24_11;

/// @brief Field <>9__24_12, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_12, put=setStaticF___9__24_12)) ::LitJson::ImporterFunc*  __9__24_12;

/// @brief Field <>9__24_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_2, put=setStaticF___9__24_2)) ::LitJson::ImporterFunc*  __9__24_2;

/// @brief Field <>9__24_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_3, put=setStaticF___9__24_3)) ::LitJson::ImporterFunc*  __9__24_3;

/// @brief Field <>9__24_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_4, put=setStaticF___9__24_4)) ::LitJson::ImporterFunc*  __9__24_4;

/// @brief Field <>9__24_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_5, put=setStaticF___9__24_5)) ::LitJson::ImporterFunc*  __9__24_5;

/// @brief Field <>9__24_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_6, put=setStaticF___9__24_6)) ::LitJson::ImporterFunc*  __9__24_6;

/// @brief Field <>9__24_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_7, put=setStaticF___9__24_7)) ::LitJson::ImporterFunc*  __9__24_7;

/// @brief Field <>9__24_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_8, put=setStaticF___9__24_8)) ::LitJson::ImporterFunc*  __9__24_8;

/// @brief Field <>9__24_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_9, put=setStaticF___9__24_9)) ::LitJson::ImporterFunc*  __9__24_9;

/// @brief Field <>9__29_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_0, put=setStaticF___9__29_0)) ::LitJson::WrapperFactory*  __9__29_0;

/// @brief Field <>9__30_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__30_0, put=setStaticF___9__30_0)) ::LitJson::WrapperFactory*  __9__30_0;

/// @brief Field <>9__31_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__31_0, put=setStaticF___9__31_0)) ::LitJson::WrapperFactory*  __9__31_0;

static inline ::LitJson::JsonMapper___c* New_ctor() ;

/// @brief Method <RegisterBaseExporters>b__23_0, addr 0x5b66f38, size 0xa8, virtual false, abstract: false, final false
inline void _RegisterBaseExporters_b__23_0(::System::Object*  obj, ::LitJson::JsonWriter*  writer) ;

/// @brief Method <RegisterBaseExporters>b__23_1, addr 0x5b66fe0, size 0xa8, virtual false, abstract: false, final false
inline void _RegisterBaseExporters_b__23_1(::System::Object*  obj, ::LitJson::JsonWriter*  writer) ;

/// @brief Method <RegisterBaseExporters>b__23_2, addr 0x5b67088, size 0xec, virtual false, abstract: false, final false
inline void _RegisterBaseExporters_b__23_2(::System::Object*  obj, ::LitJson::JsonWriter*  writer) ;

/// @brief Method <RegisterBaseExporters>b__23_3, addr 0x5b67174, size 0x80, virtual false, abstract: false, final false
inline void _RegisterBaseExporters_b__23_3(::System::Object*  obj, ::LitJson::JsonWriter*  writer) ;

/// @brief Method <RegisterBaseExporters>b__23_4, addr 0x5b672d0, size 0xa8, virtual false, abstract: false, final false
inline void _RegisterBaseExporters_b__23_4(::System::Object*  obj, ::LitJson::JsonWriter*  writer) ;

/// @brief Method <RegisterBaseExporters>b__23_5, addr 0x5b67378, size 0xa8, virtual false, abstract: false, final false
inline void _RegisterBaseExporters_b__23_5(::System::Object*  obj, ::LitJson::JsonWriter*  writer) ;

/// @brief Method <RegisterBaseExporters>b__23_6, addr 0x5b67420, size 0xa8, virtual false, abstract: false, final false
inline void _RegisterBaseExporters_b__23_6(::System::Object*  obj, ::LitJson::JsonWriter*  writer) ;

/// @brief Method <RegisterBaseExporters>b__23_7, addr 0x5b674c8, size 0xa8, virtual false, abstract: false, final false
inline void _RegisterBaseExporters_b__23_7(::System::Object*  obj, ::LitJson::JsonWriter*  writer) ;

/// @brief Method <RegisterBaseExporters>b__23_8, addr 0x5b67570, size 0x5c, virtual false, abstract: false, final false
inline void _RegisterBaseExporters_b__23_8(::System::Object*  obj, ::LitJson::JsonWriter*  writer) ;

/// @brief Method <RegisterBaseExporters>b__23_9, addr 0x5b675cc, size 0x60, virtual false, abstract: false, final false
inline void _RegisterBaseExporters_b__23_9(::System::Object*  obj, ::LitJson::JsonWriter*  writer) ;

/// @brief Method <RegisterBaseImporters>b__24_0, addr 0x5b6762c, size 0xac, virtual false, abstract: false, final false
inline ::System::Object* _RegisterBaseImporters_b__24_0(::System::Object*  input) ;

/// @brief Method <RegisterBaseImporters>b__24_1, addr 0x5b676d8, size 0xac, virtual false, abstract: false, final false
inline ::System::Object* _RegisterBaseImporters_b__24_1(::System::Object*  input) ;

/// @brief Method <RegisterBaseImporters>b__24_10, addr 0x5b67d3c, size 0xac, virtual false, abstract: false, final false
inline ::System::Object* _RegisterBaseImporters_b__24_10(::System::Object*  input) ;

/// @brief Method <RegisterBaseImporters>b__24_11, addr 0x5b67de8, size 0x9c, virtual false, abstract: false, final false
inline ::System::Object* _RegisterBaseImporters_b__24_11(::System::Object*  input) ;

/// @brief Method <RegisterBaseImporters>b__24_12, addr 0x5b67e84, size 0xf0, virtual false, abstract: false, final false
inline ::System::Object* _RegisterBaseImporters_b__24_12(::System::Object*  input) ;

/// @brief Method <RegisterBaseImporters>b__24_2, addr 0x5b67784, size 0xac, virtual false, abstract: false, final false
inline ::System::Object* _RegisterBaseImporters_b__24_2(::System::Object*  input) ;

/// @brief Method <RegisterBaseImporters>b__24_3, addr 0x5b67830, size 0xac, virtual false, abstract: false, final false
inline ::System::Object* _RegisterBaseImporters_b__24_3(::System::Object*  input) ;

/// @brief Method <RegisterBaseImporters>b__24_4, addr 0x5b678dc, size 0xac, virtual false, abstract: false, final false
inline ::System::Object* _RegisterBaseImporters_b__24_4(::System::Object*  input) ;

/// @brief Method <RegisterBaseImporters>b__24_5, addr 0x5b67988, size 0xac, virtual false, abstract: false, final false
inline ::System::Object* _RegisterBaseImporters_b__24_5(::System::Object*  input) ;

/// @brief Method <RegisterBaseImporters>b__24_6, addr 0x5b67a34, size 0xa8, virtual false, abstract: false, final false
inline ::System::Object* _RegisterBaseImporters_b__24_6(::System::Object*  input) ;

/// @brief Method <RegisterBaseImporters>b__24_7, addr 0x5b67adc, size 0xac, virtual false, abstract: false, final false
inline ::System::Object* _RegisterBaseImporters_b__24_7(::System::Object*  input) ;

/// @brief Method <RegisterBaseImporters>b__24_8, addr 0x5b67b88, size 0xa8, virtual false, abstract: false, final false
inline ::System::Object* _RegisterBaseImporters_b__24_8(::System::Object*  input) ;

/// @brief Method <RegisterBaseImporters>b__24_9, addr 0x5b67c30, size 0x10c, virtual false, abstract: false, final false
inline ::System::Object* _RegisterBaseImporters_b__24_9(::System::Object*  input) ;

/// @brief Method <ToObject>b__29_0, addr 0x5b67f74, size 0x54, virtual false, abstract: false, final false
inline ::LitJson::IJsonWrapper* _ToObject_b__29_0() ;

/// @brief Method <ToObject>b__30_0, addr 0x5b67fc8, size 0x54, virtual false, abstract: false, final false
inline ::LitJson::IJsonWrapper* _ToObject_b__30_0() ;

/// @brief Method <ToObject>b__31_0, addr 0x5b6801c, size 0x54, virtual false, abstract: false, final false
inline ::LitJson::IJsonWrapper* _ToObject_b__31_0() ;

/// @brief Method .ctor, addr 0x5b66f30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::LitJson::JsonMapper___c* getStaticF___9() ;

static inline ::LitJson::ExporterFunc* getStaticF___9__23_0() ;

static inline ::LitJson::ExporterFunc* getStaticF___9__23_1() ;

static inline ::LitJson::ExporterFunc* getStaticF___9__23_2() ;

static inline ::LitJson::ExporterFunc* getStaticF___9__23_3() ;

static inline ::LitJson::ExporterFunc* getStaticF___9__23_4() ;

static inline ::LitJson::ExporterFunc* getStaticF___9__23_5() ;

static inline ::LitJson::ExporterFunc* getStaticF___9__23_6() ;

static inline ::LitJson::ExporterFunc* getStaticF___9__23_7() ;

static inline ::LitJson::ExporterFunc* getStaticF___9__23_8() ;

static inline ::LitJson::ExporterFunc* getStaticF___9__23_9() ;

static inline ::LitJson::ImporterFunc* getStaticF___9__24_0() ;

static inline ::LitJson::ImporterFunc* getStaticF___9__24_1() ;

static inline ::LitJson::ImporterFunc* getStaticF___9__24_10() ;

static inline ::LitJson::ImporterFunc* getStaticF___9__24_11() ;

static inline ::LitJson::ImporterFunc* getStaticF___9__24_12() ;

static inline ::LitJson::ImporterFunc* getStaticF___9__24_2() ;

static inline ::LitJson::ImporterFunc* getStaticF___9__24_3() ;

static inline ::LitJson::ImporterFunc* getStaticF___9__24_4() ;

static inline ::LitJson::ImporterFunc* getStaticF___9__24_5() ;

static inline ::LitJson::ImporterFunc* getStaticF___9__24_6() ;

static inline ::LitJson::ImporterFunc* getStaticF___9__24_7() ;

static inline ::LitJson::ImporterFunc* getStaticF___9__24_8() ;

static inline ::LitJson::ImporterFunc* getStaticF___9__24_9() ;

static inline ::LitJson::WrapperFactory* getStaticF___9__29_0() ;

static inline ::LitJson::WrapperFactory* getStaticF___9__30_0() ;

static inline ::LitJson::WrapperFactory* getStaticF___9__31_0() ;

static inline void setStaticF___9(::LitJson::JsonMapper___c*  value) ;

static inline void setStaticF___9__23_0(::LitJson::ExporterFunc*  value) ;

static inline void setStaticF___9__23_1(::LitJson::ExporterFunc*  value) ;

static inline void setStaticF___9__23_2(::LitJson::ExporterFunc*  value) ;

static inline void setStaticF___9__23_3(::LitJson::ExporterFunc*  value) ;

static inline void setStaticF___9__23_4(::LitJson::ExporterFunc*  value) ;

static inline void setStaticF___9__23_5(::LitJson::ExporterFunc*  value) ;

static inline void setStaticF___9__23_6(::LitJson::ExporterFunc*  value) ;

static inline void setStaticF___9__23_7(::LitJson::ExporterFunc*  value) ;

static inline void setStaticF___9__23_8(::LitJson::ExporterFunc*  value) ;

static inline void setStaticF___9__23_9(::LitJson::ExporterFunc*  value) ;

static inline void setStaticF___9__24_0(::LitJson::ImporterFunc*  value) ;

static inline void setStaticF___9__24_1(::LitJson::ImporterFunc*  value) ;

static inline void setStaticF___9__24_10(::LitJson::ImporterFunc*  value) ;

static inline void setStaticF___9__24_11(::LitJson::ImporterFunc*  value) ;

static inline void setStaticF___9__24_12(::LitJson::ImporterFunc*  value) ;

static inline void setStaticF___9__24_2(::LitJson::ImporterFunc*  value) ;

static inline void setStaticF___9__24_3(::LitJson::ImporterFunc*  value) ;

static inline void setStaticF___9__24_4(::LitJson::ImporterFunc*  value) ;

static inline void setStaticF___9__24_5(::LitJson::ImporterFunc*  value) ;

static inline void setStaticF___9__24_6(::LitJson::ImporterFunc*  value) ;

static inline void setStaticF___9__24_7(::LitJson::ImporterFunc*  value) ;

static inline void setStaticF___9__24_8(::LitJson::ImporterFunc*  value) ;

static inline void setStaticF___9__24_9(::LitJson::ImporterFunc*  value) ;

static inline void setStaticF___9__29_0(::LitJson::WrapperFactory*  value) ;

static inline void setStaticF___9__30_0(::LitJson::WrapperFactory*  value) ;

static inline void setStaticF___9__31_0(::LitJson::WrapperFactory*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonMapper___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonMapper___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonMapper___c(JsonMapper___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonMapper___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonMapper___c(JsonMapper___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3830};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::LitJson::JsonMapper___c) == 0x10, "Size mismatch!");

} // namespace end def LitJson
