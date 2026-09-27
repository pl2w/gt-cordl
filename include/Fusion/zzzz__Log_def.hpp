#pragma once
// IWYU pragma private; include "Fusion/Log.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__LogSettings_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Log)
namespace Fusion {
class ILogSource;
}
namespace Fusion {
struct LogFlags;
}
namespace Fusion {
struct LogLevel;
}
namespace Fusion {
struct LogSettings;
}
namespace Fusion {
class LogStream;
}
namespace Fusion {
class Log_CreateLogStreamDelegate;
}
namespace Fusion {
struct TraceChannels;
}
namespace GlobalNamespace {
struct Log_Factory;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
class Log;
}
namespace Fusion {
class Log_CreateLogStreamDelegate;
}
// Write type traits
MARK_REF_T(::Fusion::Log*);
MARK_REF_T(::Fusion::Log_CreateLogStreamDelegate*);
DEFINE_IL2CPP_CLASS(::Fusion::Log*, "Fusion", "Log");
DEFINE_IL2CPP_CLASS(::Fusion::Log_CreateLogStreamDelegate*, "Fusion", "Log/CreateLogStreamDelegate");
// Dependencies Fusion.LogSettings, System.IDisposable, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Log
class CORDL_TYPE Log : public ::System::Object {
public:
// Declarations
using CreateLogStreamDelegate = ::Fusion::Log_CreateLogStreamDelegate;

using Factory = ::GlobalNamespace::Log_Factory;

/// @brief Field <IsInitialized>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__IsInitialized_k__BackingField, put=setStaticF__IsInitialized_k__BackingField)) bool  _IsInitialized_k__BackingField;

/// @brief Field <Settings>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Settings_k__BackingField, put=setStaticF__Settings_k__BackingField)) ::Fusion::LogSettings  _Settings_k__BackingField;

/// @brief Method DisposeAndNullify, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IDisposable*> && ::cordl_internals::reference_type_constraint<T>)
static inline void DisposeAndNullify(::by_ref<T>  obj) ;

/// [Conditional("FUSION_LOGLEVEL_TRACE")]
/// [Conditional("FUSION_LOGLEVEL_DEBUG")]
/// [Conditional("FUSION_LOGLEVEL_INFO")]
/// [Conditional("FUSION_LOGLEVEL_WARN")]
/// [Conditional("FUSION_LOGLEVEL_ERROR")]
/// @brief Method Error, addr 0x5f4500c, size 0x7c, virtual false, abstract: false, final false
static inline void Error(::Fusion::ILogSource*  logSource, ::StringW  message) ;

/// [Conditional("FUSION_LOGLEVEL_TRACE")]
/// [Conditional("FUSION_LOGLEVEL_DEBUG")]
/// [Conditional("FUSION_LOGLEVEL_INFO")]
/// [Conditional("FUSION_LOGLEVEL_WARN")]
/// [Conditional("FUSION_LOGLEVEL_ERROR")]
/// @brief Method Error, addr 0x5f44fa4, size 0x68, virtual false, abstract: false, final false
static inline void Error(::StringW  message) ;

/// @brief Method InitInternal, addr 0x5f448e8, size 0x12c, virtual false, abstract: false, final false
static inline void InitInternal(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Log_Factory>  factory) ;

/// @brief Method InitPartial, addr 0x5f44a14, size 0x1a4, virtual false, abstract: false, final false
static inline void InitPartial(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Log_Factory>  factory) ;

/// @brief Method Initialize, addr 0x5f448b4, size 0x24, virtual false, abstract: false, final false
static inline void Initialize(::Fusion::LogLevel  logLevel, ::Fusion::Log_CreateLogStreamDelegate*  streamFactory, ::Fusion::TraceChannels  traceChannels) ;

/// [Conditional("FUSION_LOGLEVEL_TRACE")]
/// [Conditional("FUSION_LOGLEVEL_DEBUG")]
/// [Conditional("FUSION_LOGLEVEL_INFO")]
/// [Conditional("FUSION_LOGLEVEL_WARN")]
/// @brief Method Warn, addr 0x5f44f28, size 0x7c, virtual false, abstract: false, final false
static inline void Warn(::Fusion::ILogSource*  logSource, ::StringW  message) ;

/// [Conditional("FUSION_LOGLEVEL_TRACE")]
/// [Conditional("FUSION_LOGLEVEL_DEBUG")]
/// [Conditional("FUSION_LOGLEVEL_INFO")]
/// [Conditional("FUSION_LOGLEVEL_WARN")]
/// @brief Method Warn, addr 0x5f44ec0, size 0x68, virtual false, abstract: false, final false
static inline void Warn(::StringW  message) ;

static inline bool getStaticF__IsInitialized_k__BackingField() ;

static inline ::Fusion::LogSettings getStaticF__Settings_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_IsInitialized, addr 0x5f44788, size 0x48, virtual false, abstract: false, final false
static inline bool get_IsInitialized() ;

/// [CompilerGenerated]
/// @brief Method get_Settings, addr 0x5f44820, size 0x48, virtual false, abstract: false, final false
static inline ::Fusion::LogSettings get_Settings() ;

static inline void setStaticF__IsInitialized_k__BackingField(bool  value) ;

static inline void setStaticF__Settings_k__BackingField(::Fusion::LogSettings  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsInitialized, addr 0x5f447d0, size 0x50, virtual false, abstract: false, final false
static inline void set_IsInitialized(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Settings, addr 0x5f44868, size 0x4c, virtual false, abstract: false, final false
static inline void set_Settings(::Fusion::LogSettings  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Log() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Log(Log && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Log(Log const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32720};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Log) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.MulticastDelegate
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Log/CreateLogStreamDelegate
class CORDL_TYPE Log_CreateLogStreamDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x5f45128, size 0x14, virtual true, abstract: false, final false
inline ::Fusion::LogStream* Invoke(::Fusion::LogLevel  level, ::Fusion::LogFlags  flags, ::Fusion::TraceChannels  channel) ;

static inline ::Fusion::Log_CreateLogStreamDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5f45088, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Log_CreateLogStreamDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Log_CreateLogStreamDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Log_CreateLogStreamDelegate(Log_CreateLogStreamDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Log_CreateLogStreamDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Log_CreateLogStreamDelegate(Log_CreateLogStreamDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32718};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Log_CreateLogStreamDelegate) == 0x80, "Size mismatch!");

} // namespace end def Fusion
