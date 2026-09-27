#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceUnityMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BacktraceUnityMessage)
namespace Backtrace::Unity::Model {
class BacktraceReport;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace Backtrace::Unity::Model {
class BacktraceUnityMessage;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::BacktraceUnityMessage*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::BacktraceUnityMessage*, "Backtrace.Unity.Model", "BacktraceUnityMessage");
// Dependencies System.Object, UnityEngine.LogType
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.BacktraceUnityMessage
class CORDL_TYPE BacktraceUnityMessage : public ::System::Object {
public:
// Declarations
/// @brief Field Message, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Message, put=__cordl_internal_set_Message)) ::StringW  Message;

/// @brief Field StackTrace, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_StackTrace, put=__cordl_internal_set_StackTrace)) ::StringW  StackTrace;

/// @brief Field Type, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::UnityEngine::LogType  Type;

/// @brief Field _formattedMessage, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__formattedMessage, put=__cordl_internal_set__formattedMessage)) ::StringW  _formattedMessage;

/// @brief Method GetFormattedMessage, addr 0x5f14cac, size 0x370, virtual false, abstract: false, final false
inline ::StringW GetFormattedMessage(bool  backtraceFrame) ;

/// @brief Method GetFormattedStackTrace, addr 0x5f14c14, size 0x98, virtual false, abstract: false, final false
inline ::StringW GetFormattedStackTrace(::StringW  stacktrace) ;

/// @brief Method IsUnhandledException, addr 0x5f1501c, size 0x38, virtual false, abstract: false, final false
inline bool IsUnhandledException() ;

static inline ::Backtrace::Unity::Model::BacktraceUnityMessage* New_ctor(::StringW  message, ::StringW  stacktrace, ::UnityEngine::LogType  type) ;

static inline ::Backtrace::Unity::Model::BacktraceUnityMessage* New_ctor(::Backtrace::Unity::Model::BacktraceReport*  report) ;

/// @brief Method ToString, addr 0x5f15054, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_Message() const;

constexpr ::StringW& __cordl_internal_get_Message() ;

constexpr ::StringW const& __cordl_internal_get_StackTrace() const;

constexpr ::StringW& __cordl_internal_get_StackTrace() ;

constexpr ::UnityEngine::LogType const& __cordl_internal_get_Type() const;

constexpr ::UnityEngine::LogType& __cordl_internal_get_Type() ;

constexpr ::StringW const& __cordl_internal_get__formattedMessage() const;

constexpr ::StringW& __cordl_internal_get__formattedMessage() ;

constexpr void __cordl_internal_set_Message(::StringW  value) ;

constexpr void __cordl_internal_set_StackTrace(::StringW  value) ;

constexpr void __cordl_internal_set_Type(::UnityEngine::LogType  value) ;

constexpr void __cordl_internal_set__formattedMessage(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f01730, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::StringW  stacktrace, ::UnityEngine::LogType  type) ;

/// @brief Method .ctor, addr 0x5f00418, size 0x104, virtual false, abstract: false, final false
inline void _ctor(::Backtrace::Unity::Model::BacktraceReport*  report) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceUnityMessage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceUnityMessage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceUnityMessage(BacktraceUnityMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceUnityMessage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceUnityMessage(BacktraceUnityMessage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27606};

/// @brief Field _formattedMessage, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____formattedMessage;

/// @brief Field Message, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Message;

/// @brief Field StackTrace, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___StackTrace;

/// @brief Field Type, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::LogType  ___Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::BacktraceUnityMessage, ____formattedMessage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceUnityMessage, ___Message) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceUnityMessage, ___StackTrace) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceUnityMessage, ___Type) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::BacktraceUnityMessage) == 0x30, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
