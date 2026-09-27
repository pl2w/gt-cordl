#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceData)
namespace Backtrace::Unity::Model::JsonData {
class Annotations;
}
namespace Backtrace::Unity::Model::JsonData {
class BacktraceAttributes;
}
namespace Backtrace::Unity::Model::JsonData {
class ThreadData;
}
namespace Backtrace::Unity::Model::JsonData {
class ThreadInformation;
}
namespace Backtrace::Unity::Model {
class BacktraceReport;
}
namespace Backtrace::Unity::Model {
class BacktraceSourceCode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Backtrace::Unity::Model {
class BacktraceData;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::BacktraceData*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::BacktraceData*, "Backtrace.Unity.Model", "BacktraceData");
// Dependencies System.Guid, System.Object
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.BacktraceData
class CORDL_TYPE BacktraceData : public ::System::Object {
public:
// Declarations
/// @brief Field Annotation, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_Annotation, put=__cordl_internal_set_Annotation)) ::Backtrace::Unity::Model::JsonData::Annotations*  Annotation;

/// @brief Field Attachments, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_Attachments, put=__cordl_internal_set_Attachments)) ::System::Collections::Generic::ICollection_1<::StringW>*  Attachments;

/// @brief Field Attributes, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_Attributes, put=__cordl_internal_set_Attributes)) ::Backtrace::Unity::Model::JsonData::BacktraceAttributes*  Attributes;

/// @brief Field Classifier, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Classifier, put=__cordl_internal_set_Classifier)) ::ArrayW<::StringW>  Classifier;

/// @brief Field Deduplication, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_Deduplication, put=__cordl_internal_set_Deduplication)) int32_t  Deduplication;

/// @brief Field LangVersion, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_LangVersion, put=__cordl_internal_set_LangVersion)) ::StringW  LangVersion;

/// @brief Field MainThread, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_MainThread, put=__cordl_internal_set_MainThread)) ::StringW  MainThread;

 __declspec(property(get=get_Report, put=set_Report)) ::Backtrace::Unity::Model::BacktraceReport*  Report;

/// @brief Field SourceCode, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_SourceCode, put=__cordl_internal_set_SourceCode)) ::Backtrace::Unity::Model::BacktraceSourceCode*  SourceCode;

/// @brief Field Symbolication, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Symbolication, put=__cordl_internal_set_Symbolication)) ::StringW  Symbolication;

/// @brief Field ThreadData, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_ThreadData, put=__cordl_internal_set_ThreadData)) ::Backtrace::Unity::Model::JsonData::ThreadData*  ThreadData;

/// @brief Field ThreadInformations, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ThreadInformations, put=__cordl_internal_set_ThreadInformations)) ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::ThreadInformation*>*  ThreadInformations;

 __declspec(property(get=get_Timestamp, put=set_Timestamp)) int64_t  Timestamp;

 __declspec(property(get=get_Uuid, put=set_Uuid)) ::System::Guid  Uuid;

 __declspec(property(get=get_UuidString)) ::StringW  UuidString;

/// @brief Field <Report>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Report_k__BackingField, put=__cordl_internal_set__Report_k__BackingField)) ::Backtrace::Unity::Model::BacktraceReport*  _Report_k__BackingField;

/// @brief Field <Timestamp>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Timestamp_k__BackingField, put=__cordl_internal_set__Timestamp_k__BackingField)) int64_t  _Timestamp_k__BackingField;

/// @brief Field <Uuid>k__BackingField, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__Uuid_k__BackingField, put=__cordl_internal_set__Uuid_k__BackingField)) ::System::Guid  _Uuid_k__BackingField;

/// @brief Field _uuidString, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__uuidString, put=__cordl_internal_set__uuidString)) ::StringW  _uuidString;

static inline ::Backtrace::Unity::Model::BacktraceData* New_ctor(::Backtrace::Unity::Model::BacktraceReport*  report, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  clientAttributes, int32_t  gameObjectDepth) ;

/// @brief Method SetAttributes, addr 0x5f10ae4, size 0xdc, virtual false, abstract: false, final false
inline void SetAttributes(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  clientAttributes, int32_t  gameObjectDepth) ;

/// @brief Method SetThreadInformations, addr 0x5f10bc0, size 0x140, virtual false, abstract: false, final false
inline void SetThreadInformations() ;

/// @brief Method ToJson, addr 0x5f02788, size 0x374, virtual false, abstract: false, final false
inline ::StringW ToJson() ;

constexpr ::Backtrace::Unity::Model::JsonData::Annotations* const& __cordl_internal_get_Annotation() const;

constexpr ::Backtrace::Unity::Model::JsonData::Annotations*& __cordl_internal_get_Annotation() ;

constexpr ::System::Collections::Generic::ICollection_1<::StringW>* const& __cordl_internal_get_Attachments() const;

constexpr ::System::Collections::Generic::ICollection_1<::StringW>*& __cordl_internal_get_Attachments() ;

constexpr ::Backtrace::Unity::Model::JsonData::BacktraceAttributes* const& __cordl_internal_get_Attributes() const;

constexpr ::Backtrace::Unity::Model::JsonData::BacktraceAttributes*& __cordl_internal_get_Attributes() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_Classifier() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_Classifier() ;

constexpr int32_t const& __cordl_internal_get_Deduplication() const;

constexpr int32_t& __cordl_internal_get_Deduplication() ;

constexpr ::StringW const& __cordl_internal_get_LangVersion() const;

constexpr ::StringW& __cordl_internal_get_LangVersion() ;

constexpr ::StringW const& __cordl_internal_get_MainThread() const;

constexpr ::StringW& __cordl_internal_get_MainThread() ;

constexpr ::Backtrace::Unity::Model::BacktraceSourceCode* const& __cordl_internal_get_SourceCode() const;

constexpr ::Backtrace::Unity::Model::BacktraceSourceCode*& __cordl_internal_get_SourceCode() ;

constexpr ::StringW const& __cordl_internal_get_Symbolication() const;

constexpr ::StringW& __cordl_internal_get_Symbolication() ;

constexpr ::Backtrace::Unity::Model::JsonData::ThreadData* const& __cordl_internal_get_ThreadData() const;

constexpr ::Backtrace::Unity::Model::JsonData::ThreadData*& __cordl_internal_get_ThreadData() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::ThreadInformation*>* const& __cordl_internal_get_ThreadInformations() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::ThreadInformation*>*& __cordl_internal_get_ThreadInformations() ;

constexpr ::Backtrace::Unity::Model::BacktraceReport* const& __cordl_internal_get__Report_k__BackingField() const;

constexpr ::Backtrace::Unity::Model::BacktraceReport*& __cordl_internal_get__Report_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__Timestamp_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__Timestamp_k__BackingField() ;

constexpr ::System::Guid const& __cordl_internal_get__Uuid_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__Uuid_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__uuidString() const;

constexpr ::StringW& __cordl_internal_get__uuidString() ;

constexpr void __cordl_internal_set_Annotation(::Backtrace::Unity::Model::JsonData::Annotations*  value) ;

constexpr void __cordl_internal_set_Attachments(::System::Collections::Generic::ICollection_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_Attributes(::Backtrace::Unity::Model::JsonData::BacktraceAttributes*  value) ;

constexpr void __cordl_internal_set_Classifier(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_Deduplication(int32_t  value) ;

constexpr void __cordl_internal_set_LangVersion(::StringW  value) ;

constexpr void __cordl_internal_set_MainThread(::StringW  value) ;

constexpr void __cordl_internal_set_SourceCode(::Backtrace::Unity::Model::BacktraceSourceCode*  value) ;

constexpr void __cordl_internal_set_Symbolication(::StringW  value) ;

constexpr void __cordl_internal_set_ThreadData(::Backtrace::Unity::Model::JsonData::ThreadData*  value) ;

constexpr void __cordl_internal_set_ThreadInformations(::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::ThreadInformation*>*  value) ;

constexpr void __cordl_internal_set__Report_k__BackingField(::Backtrace::Unity::Model::BacktraceReport*  value) ;

constexpr void __cordl_internal_set__Timestamp_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__Uuid_k__BackingField(::System::Guid  value) ;

constexpr void __cordl_internal_set__uuidString(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f10930, size 0x1b4, virtual false, abstract: false, final false
inline void _ctor(::Backtrace::Unity::Model::BacktraceReport*  report, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  clientAttributes, int32_t  gameObjectDepth) ;

/// [CompilerGenerated]
/// @brief Method get_Report, addr 0x5f10920, size 0x8, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::BacktraceReport* get_Report() ;

/// [CompilerGenerated]
/// @brief Method get_Timestamp, addr 0x5f10910, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Timestamp() ;

/// [CompilerGenerated]
/// @brief Method get_Uuid, addr 0x5f108fc, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_Uuid() ;

/// @brief Method get_UuidString, addr 0x5f0b4a0, size 0x60, virtual false, abstract: false, final false
inline ::StringW get_UuidString() ;

/// [CompilerGenerated]
/// @brief Method set_Report, addr 0x5f10928, size 0x8, virtual false, abstract: false, final false
inline void set_Report(::Backtrace::Unity::Model::BacktraceReport*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Timestamp, addr 0x5f10918, size 0x8, virtual false, abstract: false, final false
inline void set_Timestamp(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Uuid, addr 0x5f10908, size 0x8, virtual false, abstract: false, final false
inline void set_Uuid(::System::Guid  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceData(BacktraceData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceData(BacktraceData const& ) = delete;

/// @brief Field Agent offset 0xffffffff size 0x8
static constexpr ::ConstString  Agent{u"backtrace-unity"};

/// @brief Field AgentVersion offset 0xffffffff size 0x8
static constexpr ::ConstString  AgentVersion{u"3.9.1"};

/// @brief Field Lang offset 0xffffffff size 0x8
static constexpr ::ConstString  Lang{u"csharp"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27592};

/// [CompilerGenerated]
/// @brief Field <Uuid>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ____Uuid_k__BackingField;

/// @brief Field _uuidString, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____uuidString;

/// [CompilerGenerated]
/// @brief Field <Timestamp>k__BackingField, offset: 0x28, size: 0x8, def value: None
 int64_t  ____Timestamp_k__BackingField;

/// @brief Field LangVersion, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___LangVersion;

/// @brief Field ThreadInformations, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::ThreadInformation*>*  ___ThreadInformations;

/// @brief Field MainThread, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___MainThread;

/// @brief Field Classifier, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___Classifier;

/// @brief Field Symbolication, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___Symbolication;

/// @brief Field SourceCode, offset: 0x58, size: 0x8, def value: None
 ::Backtrace::Unity::Model::BacktraceSourceCode*  ___SourceCode;

/// @brief Field Attachments, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::ICollection_1<::StringW>*  ___Attachments;

/// [CompilerGenerated]
/// @brief Field <Report>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::Backtrace::Unity::Model::BacktraceReport*  ____Report_k__BackingField;

/// @brief Field Attributes, offset: 0x70, size: 0x8, def value: None
 ::Backtrace::Unity::Model::JsonData::BacktraceAttributes*  ___Attributes;

/// @brief Field Annotation, offset: 0x78, size: 0x8, def value: None
 ::Backtrace::Unity::Model::JsonData::Annotations*  ___Annotation;

/// @brief Field ThreadData, offset: 0x80, size: 0x8, def value: None
 ::Backtrace::Unity::Model::JsonData::ThreadData*  ___ThreadData;

/// @brief Field Deduplication, offset: 0x88, size: 0x4, def value: None
 int32_t  ___Deduplication;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::BacktraceData, ____Uuid_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceData, ____uuidString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceData, ____Timestamp_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceData, ___LangVersion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceData, ___ThreadInformations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceData, ___MainThread) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceData, ___Classifier) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceData, ___Symbolication) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceData, ___SourceCode) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceData, ___Attachments) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceData, ____Report_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceData, ___Attributes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceData, ___Annotation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceData, ___ThreadData) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceData, ___Deduplication) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::BacktraceData) == 0x90, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
