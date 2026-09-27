#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceReport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceReport)
namespace Backtrace::Unity::Model {
class BacktraceData;
}
namespace Backtrace::Unity::Model {
class BacktraceSourceCode;
}
namespace Backtrace::Unity::Model {
class BacktraceStackFrame;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Backtrace::Unity::Model {
class BacktraceReport;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::BacktraceReport*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::BacktraceReport*, "Backtrace.Unity.Model", "BacktraceReport");
// Dependencies System.Guid, System.Object
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.BacktraceReport
class CORDL_TYPE BacktraceReport : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AttachmentPaths, put=set_AttachmentPaths)) ::System::Collections::Generic::List_1<::StringW>*  AttachmentPaths;

 __declspec(property(get=get_Attributes, put=set_Attributes)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  Attributes;

/// @brief Field Classifier, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Classifier, put=__cordl_internal_set_Classifier)) ::StringW  Classifier;

 __declspec(property(get=get_DiagnosticStack, put=set_DiagnosticStack)) ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  DiagnosticStack;

 __declspec(property(get=get_Exception, put=set_Exception)) ::System::Exception*  Exception;

/// @brief Field ExceptionTypeReport, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_ExceptionTypeReport, put=__cordl_internal_set_ExceptionTypeReport)) bool  ExceptionTypeReport;

 __declspec(property(get=get_Factor, put=set_Factor)) ::StringW  Factor;

 __declspec(property(get=get_Fingerprint, put=set_Fingerprint)) ::StringW  Fingerprint;

 __declspec(property(get=get_Message, put=set_Message)) ::StringW  Message;

/// @brief Field SourceCode, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_SourceCode, put=__cordl_internal_set_SourceCode)) ::Backtrace::Unity::Model::BacktraceSourceCode*  SourceCode;

 __declspec(property(get=get_Symbolication, put=set_Symbolication)) ::StringW  Symbolication;

/// @brief Field Timestamp, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Timestamp, put=__cordl_internal_set_Timestamp)) int64_t  Timestamp;

/// @brief Field Uuid, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_Uuid, put=__cordl_internal_set_Uuid)) ::System::Guid  Uuid;

/// @brief Field <AttachmentPaths>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__AttachmentPaths_k__BackingField, put=__cordl_internal_set__AttachmentPaths_k__BackingField)) ::System::Collections::Generic::List_1<::StringW>*  _AttachmentPaths_k__BackingField;

/// @brief Field <Attributes>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Attributes_k__BackingField, put=__cordl_internal_set__Attributes_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _Attributes_k__BackingField;

/// @brief Field <DiagnosticStack>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__DiagnosticStack_k__BackingField, put=__cordl_internal_set__DiagnosticStack_k__BackingField)) ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  _DiagnosticStack_k__BackingField;

/// @brief Field <Exception>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Exception_k__BackingField, put=__cordl_internal_set__Exception_k__BackingField)) ::System::Exception*  _Exception_k__BackingField;

/// @brief Field <Factor>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Factor_k__BackingField, put=__cordl_internal_set__Factor_k__BackingField)) ::StringW  _Factor_k__BackingField;

/// @brief Field <Fingerprint>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Fingerprint_k__BackingField, put=__cordl_internal_set__Fingerprint_k__BackingField)) ::StringW  _Fingerprint_k__BackingField;

/// @brief Field <Message>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Message_k__BackingField, put=__cordl_internal_set__Message_k__BackingField)) ::StringW  _Message_k__BackingField;

/// @brief Field <Symbolication>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Symbolication_k__BackingField, put=__cordl_internal_set__Symbolication_k__BackingField)) ::StringW  _Symbolication_k__BackingField;

/// @brief Method AssignSourceCodeToReport, addr 0x5f0051c, size 0x1cc, virtual false, abstract: false, final false
inline void AssignSourceCodeToReport(::StringW  text) ;

/// @brief Method CreateInnerReport, addr 0x5f01c0c, size 0x108, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::BacktraceReport* CreateInnerReport() ;

static inline ::Backtrace::Unity::Model::BacktraceReport* New_ctor(::System::Exception*  exception, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::System::Collections::Generic::List_1<::StringW>*  attachmentPaths) ;

static inline ::Backtrace::Unity::Model::BacktraceReport* New_ctor(::StringW  message, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::System::Collections::Generic::List_1<::StringW>*  attachmentPaths) ;

/// @brief Method SetClassifierInfo, addr 0x5f12204, size 0x22c, virtual false, abstract: false, final false
inline void SetClassifierInfo() ;

/// @brief Method SetDefaultAttributes, addr 0x5f12120, size 0xe4, virtual false, abstract: false, final false
inline void SetDefaultAttributes() ;

/// @brief Method SetReportFingerprint, addr 0x5f006e8, size 0x178, virtual false, abstract: false, final false
inline void SetReportFingerprint(bool  generateFingerprint) ;

/// @brief Method SetStacktraceInformation, addr 0x5f120b4, size 0x6c, virtual false, abstract: false, final false
inline void SetStacktraceInformation() ;

/// @brief Method ToBacktraceData, addr 0x5f00860, size 0x70, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::BacktraceData* ToBacktraceData(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  clientAttributes, int32_t  gameObjectDepth) ;

/// @brief Method UseSymbolication, addr 0x5f00d18, size 0x8, virtual false, abstract: false, final false
inline void UseSymbolication(::StringW  symbolication) ;

constexpr ::StringW const& __cordl_internal_get_Classifier() const;

constexpr ::StringW& __cordl_internal_get_Classifier() ;

constexpr bool const& __cordl_internal_get_ExceptionTypeReport() const;

constexpr bool& __cordl_internal_get_ExceptionTypeReport() ;

constexpr ::Backtrace::Unity::Model::BacktraceSourceCode* const& __cordl_internal_get_SourceCode() const;

constexpr ::Backtrace::Unity::Model::BacktraceSourceCode*& __cordl_internal_get_SourceCode() ;

constexpr int64_t const& __cordl_internal_get_Timestamp() const;

constexpr int64_t& __cordl_internal_get_Timestamp() ;

constexpr ::System::Guid const& __cordl_internal_get_Uuid() const;

constexpr ::System::Guid& __cordl_internal_get_Uuid() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__AttachmentPaths_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__AttachmentPaths_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__Attributes_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__Attributes_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>* const& __cordl_internal_get__DiagnosticStack_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*& __cordl_internal_get__DiagnosticStack_k__BackingField() ;

constexpr ::System::Exception* const& __cordl_internal_get__Exception_k__BackingField() const;

constexpr ::System::Exception*& __cordl_internal_get__Exception_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Factor_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Factor_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Fingerprint_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Fingerprint_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Message_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Message_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Symbolication_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Symbolication_k__BackingField() ;

constexpr void __cordl_internal_set_Classifier(::StringW  value) ;

constexpr void __cordl_internal_set_ExceptionTypeReport(bool  value) ;

constexpr void __cordl_internal_set_SourceCode(::Backtrace::Unity::Model::BacktraceSourceCode*  value) ;

constexpr void __cordl_internal_set_Timestamp(int64_t  value) ;

constexpr void __cordl_internal_set_Uuid(::System::Guid  value) ;

constexpr void __cordl_internal_set__AttachmentPaths_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__Attributes_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__DiagnosticStack_k__BackingField(::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  value) ;

constexpr void __cordl_internal_set__Exception_k__BackingField(::System::Exception*  value) ;

constexpr void __cordl_internal_set__Factor_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Fingerprint_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Message_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Symbolication_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5effda0, size 0x180, virtual false, abstract: false, final false
inline void _ctor(::System::Exception*  exception, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::System::Collections::Generic::List_1<::StringW>*  attachmentPaths) ;

/// @brief Method .ctor, addr 0x5eff978, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::System::Collections::Generic::List_1<::StringW>*  attachmentPaths) ;

/// [CompilerGenerated]
/// @brief Method get_AttachmentPaths, addr 0x5f12084, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_AttachmentPaths() ;

/// [CompilerGenerated]
/// @brief Method get_Attributes, addr 0x5f12054, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_Attributes() ;

/// [CompilerGenerated]
/// @brief Method get_DiagnosticStack, addr 0x5f12094, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>* get_DiagnosticStack() ;

/// [CompilerGenerated]
/// @brief Method get_Exception, addr 0x5f12074, size 0x8, virtual false, abstract: false, final false
inline ::System::Exception* get_Exception() ;

/// [CompilerGenerated]
/// @brief Method get_Factor, addr 0x5f12044, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Factor() ;

/// [CompilerGenerated]
/// @brief Method get_Fingerprint, addr 0x5f12034, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Fingerprint() ;

/// [CompilerGenerated]
/// @brief Method get_Message, addr 0x5f12064, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Message() ;

/// [CompilerGenerated]
/// @brief Method get_Symbolication, addr 0x5f120a4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Symbolication() ;

/// [CompilerGenerated]
/// @brief Method set_AttachmentPaths, addr 0x5f1208c, size 0x8, virtual false, abstract: false, final false
inline void set_AttachmentPaths(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Attributes, addr 0x5f1205c, size 0x8, virtual false, abstract: false, final false
inline void set_Attributes(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_DiagnosticStack, addr 0x5f1209c, size 0x8, virtual false, abstract: false, final false
inline void set_DiagnosticStack(::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Exception, addr 0x5f1207c, size 0x8, virtual false, abstract: false, final false
inline void set_Exception(::System::Exception*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Factor, addr 0x5f1204c, size 0x8, virtual false, abstract: false, final false
inline void set_Factor(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Fingerprint, addr 0x5f1203c, size 0x8, virtual false, abstract: false, final false
inline void set_Fingerprint(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Message, addr 0x5f1206c, size 0x8, virtual false, abstract: false, final false
inline void set_Message(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Symbolication, addr 0x5f120ac, size 0x8, virtual false, abstract: false, final false
inline void set_Symbolication(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceReport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceReport", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceReport(BacktraceReport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceReport", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceReport(BacktraceReport const& ) = delete;

/// @brief Field ErrorTypeAttributeName offset 0xffffffff size 0x8
static constexpr ::ConstString  ErrorTypeAttributeName{u"error.type"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27598};

/// [CompilerGenerated]
/// @brief Field <Fingerprint>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Fingerprint_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Factor>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Factor_k__BackingField;

/// @brief Field Uuid, offset: 0x20, size: 0x10, def value: None
 ::System::Guid  ___Uuid;

/// @brief Field Timestamp, offset: 0x30, size: 0x8, def value: None
 int64_t  ___Timestamp;

/// @brief Field ExceptionTypeReport, offset: 0x38, size: 0x1, def value: None
 bool  ___ExceptionTypeReport;

/// @brief Field Classifier, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___Classifier;

/// [CompilerGenerated]
/// @brief Field <Attributes>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____Attributes_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Message>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____Message_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Exception>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::System::Exception*  ____Exception_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AttachmentPaths>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____AttachmentPaths_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DiagnosticStack>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  ____DiagnosticStack_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Symbolication>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::StringW  ____Symbolication_k__BackingField;

/// @brief Field SourceCode, offset: 0x78, size: 0x8, def value: None
 ::Backtrace::Unity::Model::BacktraceSourceCode*  ___SourceCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::BacktraceReport, ____Fingerprint_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceReport, ____Factor_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceReport, ___Uuid) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceReport, ___Timestamp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceReport, ___ExceptionTypeReport) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceReport, ___Classifier) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceReport, ____Attributes_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceReport, ____Message_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceReport, ____Exception_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceReport, ____AttachmentPaths_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceReport, ____DiagnosticStack_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceReport, ____Symbolication_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceReport, ___SourceCode) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::BacktraceReport) == 0x80, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
