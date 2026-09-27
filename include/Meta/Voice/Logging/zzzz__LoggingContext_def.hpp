#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/LoggingContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoggingContext)
namespace Meta::Voice::Logging {
class LoggingContext___c;
}
namespace System::Diagnostics {
class StackFrame;
}
namespace System::Diagnostics {
class StackTrace;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Meta::Voice::Logging {
class LoggingContext;
}
namespace Meta::Voice::Logging {
class LoggingContext___c;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Logging::LoggingContext*);
MARK_REF_T(::Meta::Voice::Logging::LoggingContext___c*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::LoggingContext*, "Meta.Voice.Logging", "LoggingContext");
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::LoggingContext___c*, "Meta.Voice.Logging", "LoggingContext/<>c");
// Dependencies System.Object
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.LoggingContext
class CORDL_TYPE LoggingContext : public ::System::Object {
public:
// Declarations
using __c = ::Meta::Voice::Logging::LoggingContext___c;

/// @brief Field _callSiteMemberName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__callSiteMemberName, put=__cordl_internal_set__callSiteMemberName)) ::StringW  _callSiteMemberName;

/// @brief Field _callSiteSourceFilePath, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__callSiteSourceFilePath, put=__cordl_internal_set__callSiteSourceFilePath)) ::StringW  _callSiteSourceFilePath;

/// @brief Field _callSiteSourceLineNumber, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__callSiteSourceLineNumber, put=__cordl_internal_set__callSiteSourceLineNumber)) int32_t  _callSiteSourceLineNumber;

/// @brief Field _stackTrace, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__stackTrace, put=__cordl_internal_set__stackTrace)) ::System::Diagnostics::StackTrace*  _stackTrace;

/// @brief Field _workingDirectory, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__workingDirectory, put=__cordl_internal_set__workingDirectory)) ::StringW  _workingDirectory;

/// @brief Method AppendFullStack, addr 0x9e37ebc, size 0x47c, virtual false, abstract: false, final false
inline void AppendFullStack(::System::Text::StringBuilder*  sb, bool  colorLogs, ::ArrayW<::System::Diagnostics::StackFrame*>  frames) ;

/// @brief Method AppendRelevantContext, addr 0x9e3852c, size 0x60, virtual false, abstract: false, final false
inline void AppendRelevantContext(::System::Text::StringBuilder*  sb, bool  colorLogs) ;

/// @brief Method AppendSingleFrame, addr 0x9e37d68, size 0x154, virtual false, abstract: false, final false
inline void AppendSingleFrame(::System::Text::StringBuilder*  sb, bool  colorLogs) ;

/// @brief Method GetCallSite, addr 0x9e3858c, size 0x1d4, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::StringW,int32_t> GetCallSite() ;

/// @brief Method IsLoggingClass, addr 0x9e38338, size 0x128, virtual false, abstract: false, final false
static inline bool IsLoggingClass(::System::Type*  type) ;

/// @brief Method IsSystemClass, addr 0x9e38460, size 0xcc, virtual false, abstract: false, final false
static inline bool IsSystemClass(::System::Type*  type) ;

static inline ::Meta::Voice::Logging::LoggingContext* New_ctor(/* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  sourceLineNumber) ;

static inline ::Meta::Voice::Logging::LoggingContext* New_ctor(::System::Diagnostics::StackTrace*  stackTrace) ;

/// @brief Method ToString, addr 0x9e37d50, size 0x18, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__callSiteMemberName() const;

constexpr ::StringW& __cordl_internal_get__callSiteMemberName() ;

constexpr ::StringW const& __cordl_internal_get__callSiteSourceFilePath() const;

constexpr ::StringW& __cordl_internal_get__callSiteSourceFilePath() ;

constexpr int32_t const& __cordl_internal_get__callSiteSourceLineNumber() const;

constexpr int32_t& __cordl_internal_get__callSiteSourceLineNumber() ;

constexpr ::System::Diagnostics::StackTrace* const& __cordl_internal_get__stackTrace() const;

constexpr ::System::Diagnostics::StackTrace*& __cordl_internal_get__stackTrace() ;

constexpr ::StringW const& __cordl_internal_get__workingDirectory() const;

constexpr ::StringW& __cordl_internal_get__workingDirectory() ;

constexpr void __cordl_internal_set__callSiteMemberName(::StringW  value) ;

constexpr void __cordl_internal_set__callSiteSourceFilePath(::StringW  value) ;

constexpr void __cordl_internal_set__callSiteSourceLineNumber(int32_t  value) ;

constexpr void __cordl_internal_set__stackTrace(::System::Diagnostics::StackTrace*  value) ;

constexpr void __cordl_internal_set__workingDirectory(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e37ccc, size 0x84, virtual false, abstract: false, final false
inline void _ctor(/* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  sourceLineNumber) ;

/// @brief Method .ctor, addr 0x9e37c74, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::Diagnostics::StackTrace*  stackTrace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoggingContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoggingContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoggingContext(LoggingContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoggingContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoggingContext(LoggingContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30962};

/// @brief Field _stackTrace, offset: 0x10, size: 0x8, def value: None
 ::System::Diagnostics::StackTrace*  ____stackTrace;

/// @brief Field _callSiteMemberName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____callSiteMemberName;

/// @brief Field _callSiteSourceFilePath, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____callSiteSourceFilePath;

/// @brief Field _callSiteSourceLineNumber, offset: 0x28, size: 0x4, def value: None
 int32_t  ____callSiteSourceLineNumber;

/// @brief Field _workingDirectory, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____workingDirectory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Logging::LoggingContext, ____stackTrace) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LoggingContext, ____callSiteMemberName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LoggingContext, ____callSiteSourceFilePath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LoggingContext, ____callSiteSourceLineNumber) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LoggingContext, ____workingDirectory) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Logging::LoggingContext) == 0x38, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.LoggingContext/<>c
class CORDL_TYPE LoggingContext___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Meta::Voice::Logging::LoggingContext___c*  __9;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Func_2<::System::Reflection::ParameterInfo*,::StringW>*  __9__9_0;

static inline ::Meta::Voice::Logging::LoggingContext___c* New_ctor() ;

/// @brief Method <AppendFullStack>b__9_0, addr 0x9e387d0, size 0x74, virtual false, abstract: false, final false
inline ::StringW _AppendFullStack_b__9_0(::System::Reflection::ParameterInfo*  p) ;

/// @brief Method .ctor, addr 0x9e387c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Meta::Voice::Logging::LoggingContext___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Reflection::ParameterInfo*,::StringW>* getStaticF___9__9_0() ;

static inline void setStaticF___9(::Meta::Voice::Logging::LoggingContext___c*  value) ;

static inline void setStaticF___9__9_0(::System::Func_2<::System::Reflection::ParameterInfo*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoggingContext___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoggingContext___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoggingContext___c(LoggingContext___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoggingContext___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoggingContext___c(LoggingContext___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30961};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::Logging::LoggingContext___c) == 0x10, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
