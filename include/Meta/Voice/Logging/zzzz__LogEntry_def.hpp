#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/LogEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Logging/zzzz__CorrelationID_def.hpp"
#include "Meta/Voice/Logging/zzzz__ErrorCode_def.hpp"
#include "Meta/Voice/Logging/zzzz__VLoggerVerbosity_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogEntry)
namespace Meta::Voice::Logging {
struct CorrelationID;
}
namespace Meta::Voice::Logging {
struct ErrorCode;
}
namespace Meta::Voice::Logging {
class LoggingContext;
}
namespace Meta::Voice::Logging {
struct VLoggerVerbosity;
}
namespace System {
struct DateTime;
}
namespace System {
class Exception;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Voice::Logging {
struct LogEntry;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::Logging::LogEntry);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::LogEntry, "Meta.Voice.Logging", "LogEntry");
// Dependencies Meta.Voice.Logging.CorrelationID, Meta.Voice.Logging.ErrorCode, Meta.Voice.Logging.VLoggerVerbosity, System.DateTime, System.Nullable`1<T>, System.Object
namespace Meta::Voice::Logging {
// Is value type: true
// CS Name: Meta.Voice.Logging.LogEntry
struct CORDL_TYPE LogEntry {
public:
// Declarations
 __declspec(property(get=get_Category)) ::StringW  Category;

 __declspec(property(get=get_Context)) ::Meta::Voice::Logging::LoggingContext*  Context;

 __declspec(property(get=get_CorrelationID)) ::Meta::Voice::Logging::CorrelationID  CorrelationID;

 __declspec(property(get=get_ErrorCode)) ::System::Nullable_1<::Meta::Voice::Logging::ErrorCode>  ErrorCode;

 __declspec(property(get=get_Exception)) ::System::Exception*  Exception;

 __declspec(property(get=get_Message, put=set_Message)) ::StringW  Message;

 __declspec(property(get=get_Parameters)) ::ArrayW<::System::Object*>  Parameters;

 __declspec(property(get=get_Prefix, put=set_Prefix)) ::StringW  Prefix;

 __declspec(property(get=get_TimeStamp)) ::System::DateTime  TimeStamp;

 __declspec(property(get=get_Verbosity)) ::Meta::Voice::Logging::VLoggerVerbosity  Verbosity;

/// @brief Convert operator to "::System::IComparable_1<::Meta::Voice::Logging::LogEntry>"
constexpr operator  ::System::IComparable_1<::Meta::Voice::Logging::LogEntry>*() ;

/// @brief Method CompareTo, addr 0x9e372dc, size 0x78, virtual true, abstract: false, final true
inline int32_t CompareTo(::Meta::Voice::Logging::LogEntry  other) ;

/// @brief Method ToString, addr 0x9e37238, size 0xa4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x9e36e24, size 0x164, virtual false, abstract: false, final false
inline void _ctor(::StringW  category, ::Meta::Voice::Logging::VLoggerVerbosity  verbosity, ::Meta::Voice::Logging::CorrelationID  correlationId, ::Meta::Voice::Logging::LoggingContext*  context, ::StringW  prefix, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method .ctor, addr 0x9e370e0, size 0x158, virtual false, abstract: false, final false
inline void _ctor(::StringW  category, ::Meta::Voice::Logging::VLoggerVerbosity  verbosity, ::Meta::Voice::Logging::CorrelationID  correlationId, ::Meta::Voice::Logging::ErrorCode  errorCode, ::Meta::Voice::Logging::LoggingContext*  context, ::StringW  prefix, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method .ctor, addr 0x9e36f88, size 0x158, virtual false, abstract: false, final false
inline void _ctor(::StringW  category, ::Meta::Voice::Logging::VLoggerVerbosity  verbosity, ::Meta::Voice::Logging::CorrelationID  correlationId, ::Meta::Voice::Logging::ErrorCode  errorCode, ::System::Exception*  exception, ::Meta::Voice::Logging::LoggingContext*  context, ::StringW  prefix, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Category, addr 0x9e36dc0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Category() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Context, addr 0x9e36e1c, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::Logging::LoggingContext* get_Context() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CorrelationID, addr 0x9e36df8, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::Logging::CorrelationID get_CorrelationID() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_ErrorCode, addr 0x9e36e10, size 0xc, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Meta::Voice::Logging::ErrorCode> get_ErrorCode() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Exception, addr 0x9e36e08, size 0x8, virtual false, abstract: false, final false
inline ::System::Exception* get_Exception() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Message, addr 0x9e36de0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Message() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Parameters, addr 0x9e36df0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::System::Object*> get_Parameters() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Prefix, addr 0x9e36dd0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Prefix() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_TimeStamp, addr 0x9e36dc8, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_TimeStamp() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Verbosity, addr 0x9e36e00, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::Logging::VLoggerVerbosity get_Verbosity() ;

/// @brief Convert to "::System::IComparable_1<::Meta::Voice::Logging::LogEntry>"
constexpr ::System::IComparable_1<::Meta::Voice::Logging::LogEntry>* i___System__IComparable_1___Meta__Voice__Logging__LogEntry_() ;

/// [CompilerGenerated]
/// @brief Method set_Message, addr 0x9e36de8, size 0x8, virtual false, abstract: false, final false
inline void set_Message(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Prefix, addr 0x9e36dd8, size 0x8, virtual false, abstract: false, final false
inline void set_Prefix(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LogEntry() ;

// Ctor Parameters [CppParam { name: "_Category_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_TimeStamp_k__BackingField", ty: "::System::DateTime", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Prefix_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Message_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Parameters_k__BackingField", ty: "::ArrayW<::System::Object*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CorrelationID_k__BackingField", ty: "::Meta::Voice::Logging::CorrelationID", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Verbosity_k__BackingField", ty: "::Meta::Voice::Logging::VLoggerVerbosity", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Exception_k__BackingField", ty: "::System::Exception*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ErrorCode_k__BackingField", ty: "::System::Nullable_1<::Meta::Voice::Logging::ErrorCode>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Context_k__BackingField", ty: "::Meta::Voice::Logging::LoggingContext*", modifiers: "", def_value: None, comment: None }]
constexpr LogEntry(::StringW  _Category_k__BackingField, ::System::DateTime  _TimeStamp_k__BackingField, ::StringW  _Prefix_k__BackingField, ::StringW  _Message_k__BackingField, ::ArrayW<::System::Object*>  _Parameters_k__BackingField, ::Meta::Voice::Logging::CorrelationID  _CorrelationID_k__BackingField, ::Meta::Voice::Logging::VLoggerVerbosity  _Verbosity_k__BackingField, ::System::Exception*  _Exception_k__BackingField, ::System::Nullable_1<::Meta::Voice::Logging::ErrorCode>  _ErrorCode_k__BackingField, ::Meta::Voice::Logging::LoggingContext*  _Context_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30956};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// [CompilerGenerated]
/// @brief Field <Category>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::StringW  _Category_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TimeStamp>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::DateTime  _TimeStamp_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Prefix>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  _Prefix_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Message>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  _Message_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Parameters>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  _Parameters_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CorrelationID>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Meta::Voice::Logging::CorrelationID  _CorrelationID_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Verbosity>k__BackingField, offset: 0x30, size: 0x4, def value: None
 ::Meta::Voice::Logging::VLoggerVerbosity  _Verbosity_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Exception>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::System::Exception*  _Exception_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ErrorCode>k__BackingField, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<::Meta::Voice::Logging::ErrorCode>  _ErrorCode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Context>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::Meta::Voice::Logging::LoggingContext*  _Context_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Logging::LogEntry, _Category_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LogEntry, _TimeStamp_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LogEntry, _Prefix_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LogEntry, _Message_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LogEntry, _Parameters_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LogEntry, _CorrelationID_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LogEntry, _Verbosity_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LogEntry, _Exception_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LogEntry, _ErrorCode_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LogEntry, _Context_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Logging::LogEntry) == 0x58, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
