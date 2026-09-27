#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceStackTrace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(BacktraceStackTrace)
namespace Backtrace::Unity::Model {
class BacktraceStackFrame;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Diagnostics {
class StackFrame;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Backtrace::Unity::Model {
class BacktraceStackTrace;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::BacktraceStackTrace*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::BacktraceStackTrace*, "Backtrace.Unity.Model", "BacktraceStackTrace");
// Dependencies System.Object
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.BacktraceStackTrace
class CORDL_TYPE BacktraceStackTrace : public ::System::Object {
public:
// Declarations
/// @brief Field StackFrames, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_StackFrames, put=__cordl_internal_set_StackFrames)) ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  StackFrames;

/// @brief Field _exception, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__exception, put=__cordl_internal_set__exception)) ::System::Exception*  _exception;

/// @brief Method Initialize, addr 0x5f13530, size 0x144, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::Backtrace::Unity::Model::BacktraceStackTrace* New_ctor(::System::Exception*  exception) ;

/// @brief Method SetStacktraceInformation, addr 0x5f13674, size 0x104, virtual false, abstract: false, final false
inline void SetStacktraceInformation(::ArrayW<::System::Diagnostics::StackFrame*>  frames, bool  generatedByException) ;

constexpr ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>* const& __cordl_internal_get_StackFrames() const;

constexpr ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*& __cordl_internal_get_StackFrames() ;

constexpr ::System::Exception* const& __cordl_internal_get__exception() const;

constexpr ::System::Exception*& __cordl_internal_get__exception() ;

constexpr void __cordl_internal_set_StackFrames(::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  value) ;

constexpr void __cordl_internal_set__exception(::System::Exception*  value) ;

/// @brief Method .ctor, addr 0x5f124b4, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::System::Exception*  exception) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceStackTrace() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceStackTrace", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceStackTrace(BacktraceStackTrace && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceStackTrace", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceStackTrace(BacktraceStackTrace const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27604};

/// @brief Field StackFrames, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  ___StackFrames;

/// @brief Field _exception, offset: 0x18, size: 0x8, def value: None
 ::System::Exception*  ____exception;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::BacktraceStackTrace, ___StackFrames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceStackTrace, ____exception) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::BacktraceStackTrace) == 0x20, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
