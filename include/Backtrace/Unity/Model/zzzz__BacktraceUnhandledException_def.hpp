#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceUnhandledException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceUnhandledException)
namespace Backtrace::Unity::Model {
class BacktraceStackFrame;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace Backtrace::Unity::Model {
class BacktraceUnhandledException;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::BacktraceUnhandledException*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::BacktraceUnhandledException*, "Backtrace.Unity.Model", "BacktraceUnhandledException");
// Dependencies System.Exception, UnityEngine.LogType
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.BacktraceUnhandledException
class CORDL_TYPE BacktraceUnhandledException : public ::System::Exception {
public:
// Declarations
 __declspec(property(get=get_Classifier, put=set_Classifier)) ::StringW  Classifier;

 __declspec(property(get=get_Header)) bool  Header;

 __declspec(property(get=get_Message)) ::StringW  Message;

 __declspec(property(get=get_NativeStackTrace, put=set_NativeStackTrace)) bool  NativeStackTrace;

/// @brief Field StackFrames, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_StackFrames, put=__cordl_internal_set_StackFrames)) ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  StackFrames;

 __declspec(property(get=get_StackTrace)) ::StringW  StackTrace;

 __declspec(property(get=get_Type, put=set_Type)) ::UnityEngine::LogType  Type;

/// @brief Field <Classifier>k__BackingField, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__Classifier_k__BackingField, put=__cordl_internal_set__Classifier_k__BackingField)) ::StringW  _Classifier_k__BackingField;

/// @brief Field <NativeStackTrace>k__BackingField, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__NativeStackTrace_k__BackingField, put=__cordl_internal_set__NativeStackTrace_k__BackingField)) bool  _NativeStackTrace_k__BackingField;

/// @brief Field <Type>k__BackingField, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__Type_k__BackingField, put=__cordl_internal_set__Type_k__BackingField)) ::UnityEngine::LogType  _Type_k__BackingField;

/// @brief Field _header, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__header, put=__cordl_internal_set__header)) bool  _header;

/// @brief Field _javaExtensions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__javaExtensions, put=setStaticF__javaExtensions)) ::ArrayW<::StringW>  _javaExtensions;

/// @brief Field _message, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__message, put=__cordl_internal_set__message)) ::StringW  _message;

/// @brief Field _stacktrace, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__stacktrace, put=__cordl_internal_set__stacktrace)) ::StringW  _stacktrace;

/// @brief Method ConvertFrame, addr 0x5f13d78, size 0x254, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::BacktraceStackFrame* ConvertFrame(::StringW  frameString, int32_t  methodNameEndIndex) ;

/// @brief Method ConvertStackFrames, addr 0x5f1387c, size 0x324, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>* ConvertStackFrames(::System::Collections::Generic::IEnumerable_1<::StringW>*  frames) ;

/// @brief Method GetStackTraceErrorMessage, addr 0x5f137c0, size 0xbc, virtual false, abstract: false, final false
inline ::StringW GetStackTraceErrorMessage(::StringW  beginningOfTheFrame) ;

static inline ::Backtrace::Unity::Model::BacktraceUnhandledException* New_ctor(::StringW  message, ::StringW  stacktrace) ;

/// @brief Method SetAndroidStackTraceInformation, addr 0x5f14984, size 0x178, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::BacktraceStackFrame* SetAndroidStackTraceInformation(::StringW  frameString, int32_t  parameterStart, int32_t  parameterEnd) ;

/// @brief Method SetDefaultStackTraceInformation, addr 0x5f145e0, size 0x3a4, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::BacktraceStackFrame* SetDefaultStackTraceInformation(::StringW  frameString, int32_t  methodNameEndIndex) ;

/// @brief Method SetJITStackTraceInformation, addr 0x5f14310, size 0x2d0, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::BacktraceStackFrame* SetJITStackTraceInformation(::StringW  frameString) ;

/// @brief Method SetNativeStackTraceInformation, addr 0x5f13fcc, size 0x344, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::BacktraceStackFrame* SetNativeStackTraceInformation(::StringW  frameString) ;

/// @brief Method TrySetClassifier, addr 0x5f13ba0, size 0x1d8, virtual false, abstract: false, final false
inline void TrySetClassifier() ;

constexpr ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>* const& __cordl_internal_get_StackFrames() const;

constexpr ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*& __cordl_internal_get_StackFrames() ;

constexpr ::StringW const& __cordl_internal_get__Classifier_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Classifier_k__BackingField() ;

constexpr bool const& __cordl_internal_get__NativeStackTrace_k__BackingField() const;

constexpr bool& __cordl_internal_get__NativeStackTrace_k__BackingField() ;

constexpr ::UnityEngine::LogType const& __cordl_internal_get__Type_k__BackingField() const;

constexpr ::UnityEngine::LogType& __cordl_internal_get__Type_k__BackingField() ;

constexpr bool const& __cordl_internal_get__header() const;

constexpr bool& __cordl_internal_get__header() ;

constexpr ::StringW const& __cordl_internal_get__message() const;

constexpr ::StringW& __cordl_internal_get__message() ;

constexpr ::StringW const& __cordl_internal_get__stacktrace() const;

constexpr ::StringW& __cordl_internal_get__stacktrace() ;

constexpr void __cordl_internal_set_StackFrames(::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  value) ;

constexpr void __cordl_internal_set__Classifier_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__NativeStackTrace_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Type_k__BackingField(::UnityEngine::LogType  value) ;

constexpr void __cordl_internal_set__header(bool  value) ;

constexpr void __cordl_internal_set__message(::StringW  value) ;

constexpr void __cordl_internal_set__stacktrace(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f00b30, size 0x1e8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::StringW  stacktrace) ;

static inline ::ArrayW<::StringW> getStaticF__javaExtensions() ;

/// [CompilerGenerated]
/// @brief Method get_Classifier, addr 0x5f13788, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Classifier() ;

/// @brief Method get_Header, addr 0x5f13778, size 0x8, virtual false, abstract: false, final false
inline bool get_Header() ;

/// @brief Method get_Message, addr 0x5f13780, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Message() ;

/// [CompilerGenerated]
/// @brief Method get_NativeStackTrace, addr 0x5f137b0, size 0x8, virtual false, abstract: false, final false
inline bool get_NativeStackTrace() ;

/// @brief Method get_StackTrace, addr 0x5f13798, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_StackTrace() ;

/// [CompilerGenerated]
/// @brief Method get_Type, addr 0x5f137a0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LogType get_Type() ;

static inline void setStaticF__javaExtensions(::ArrayW<::StringW>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Classifier, addr 0x5f13790, size 0x8, virtual false, abstract: false, final false
inline void set_Classifier(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_NativeStackTrace, addr 0x5f137b8, size 0x8, virtual false, abstract: false, final false
inline void set_NativeStackTrace(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Type, addr 0x5f137a8, size 0x8, virtual false, abstract: false, final false
inline void set_Type(::UnityEngine::LogType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceUnhandledException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceUnhandledException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceUnhandledException(BacktraceUnhandledException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceUnhandledException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceUnhandledException(BacktraceUnhandledException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27605};

/// @brief Field _header, offset: 0x8c, size: 0x1, def value: None
 bool  ____header;

/// @brief Field _message, offset: 0x90, size: 0x8, def value: None
 ::StringW  ____message;

/// [CompilerGenerated]
/// @brief Field <Classifier>k__BackingField, offset: 0x98, size: 0x8, def value: None
 ::StringW  ____Classifier_k__BackingField;

/// @brief Field _stacktrace, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ____stacktrace;

/// [CompilerGenerated]
/// @brief Field <Type>k__BackingField, offset: 0xa8, size: 0x4, def value: None
 ::UnityEngine::LogType  ____Type_k__BackingField;

/// @brief Field StackFrames, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  ___StackFrames;

/// [CompilerGenerated]
/// @brief Field <NativeStackTrace>k__BackingField, offset: 0xb8, size: 0x1, def value: None
 bool  ____NativeStackTrace_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::BacktraceUnhandledException, ____header) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceUnhandledException, ____message) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceUnhandledException, ____Classifier_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceUnhandledException, ____stacktrace) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceUnhandledException, ____Type_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceUnhandledException, ___StackFrames) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceUnhandledException, ____NativeStackTrace_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::BacktraceUnhandledException) == 0xc0, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
