#pragma once
// IWYU pragma private; include "UnityEngine/Debug.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Debug)
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ILogger;
}
namespace UnityEngine {
struct LogOption;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Debug;
}
// Write type traits
MARK_REF_T(::UnityEngine::Debug*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Debug*, "UnityEngine", "Debug");
// [NativeHeader("Runtime/Export/Debug/Debug.bindings.h")]
// [NativeHeader("Runtime/Diagnostics/IntegrityCheck.h")]
// [NativeHeader("Runtime/Diagnostics/Validation.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Debug
class CORDL_TYPE Debug : public ::System::Object {
public:
// Declarations
/// @brief Field s_DefaultLogger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DefaultLogger, put=setStaticF_s_DefaultLogger)) ::UnityEngine::ILogger*  s_DefaultLogger;

/// @brief Field s_Logger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Logger, put=setStaticF_s_Logger)) ::UnityEngine::ILogger*  s_Logger;

/// [Conditional("UNITY_ASSERTIONS")]
/// @brief Method AssertFormat, addr 0xb571420, size 0x130, virtual false, abstract: false, final false
static inline void AssertFormat(bool  condition, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// [FreeFunction("PauseEditor")]
/// @brief Method Break, addr 0xb5700a0, size 0x28, virtual false, abstract: false, final false
static inline void Break() ;

/// [RequiredByNativeCode]
/// @brief Method CallOverridenDebugHandler, addr 0xb571798, size 0x330, virtual false, abstract: false, final false
static inline bool CallOverridenDebugHandler(::System::Exception*  exception, ::UnityEngine::Object*  obj) ;

/// [ExcludeFromDocs]
/// @brief Method DrawLine, addr 0xb56fcb4, size 0xb0, virtual false, abstract: false, final false
static inline void DrawLine(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end) ;

/// [ExcludeFromDocs]
/// @brief Method DrawLine, addr 0xb56fbd4, size 0xe0, virtual false, abstract: false, final false
static inline void DrawLine(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color) ;

/// [ExcludeFromDocs]
/// @brief Method DrawLine, addr 0xb56fa20, size 0x100, virtual false, abstract: false, final false
static inline void DrawLine(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color, float_t  duration) ;

/// [FreeFunction("DebugDrawLine", IsThreadSafe = true)]
/// @brief Method DrawLine, addr 0xb56fb20, size 0xb4, virtual false, abstract: false, final false
static inline void DrawLine(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, /* [DefaultValue("Color.white")] */ ::UnityEngine::Color  color, /* [DefaultValue("0.0f")] */ float_t  duration, /* [DefaultValue("true")] */ bool  depthTest) ;

/// @brief Method DrawLine_Injected, addr 0xb56fd64, size 0x6c, virtual false, abstract: false, final false
static inline void DrawLine_Injected(::by_ref<::UnityEngine::Vector3>  start, ::by_ref<::UnityEngine::Vector3>  end, /* [DefaultValue("Color.white")] */ ::by_ref<::UnityEngine::Color>  color, /* [DefaultValue("0.0f")] */ float_t  duration, /* [DefaultValue("true")] */ bool  depthTest) ;

/// [ExcludeFromDocs]
/// @brief Method DrawRay, addr 0xb56ffc0, size 0xe0, virtual false, abstract: false, final false
static inline void DrawRay(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  dir, ::UnityEngine::Color  color) ;

/// [ExcludeFromDocs]
/// @brief Method DrawRay, addr 0xb56fdd0, size 0x100, virtual false, abstract: false, final false
static inline void DrawRay(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  dir, ::UnityEngine::Color  color, float_t  duration) ;

/// @brief Method DrawRay, addr 0xb56fed0, size 0xf0, virtual false, abstract: false, final false
static inline void DrawRay(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  dir, /* [DefaultValue("Color.white")] */ ::UnityEngine::Color  color, /* [DefaultValue("0.0f")] */ float_t  duration, /* [DefaultValue("true")] */ bool  depthTest) ;

/// [ThreadSafe]
/// @brief Method ExtractStackTraceNoAlloc, addr 0xb5700c8, size 0x1b0, virtual false, abstract: false, final false
static inline int32_t ExtractStackTraceNoAlloc(uint8_t*  buffer, int32_t  bufferMax, ::StringW  projectFolder) ;

/// @brief Method ExtractStackTraceNoAlloc_Injected, addr 0xb570278, size 0x54, virtual false, abstract: false, final false
static inline int32_t ExtractStackTraceNoAlloc_Injected(uint8_t*  buffer, int32_t  bufferMax, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  projectFolder) ;

/// [RequiredByNativeCode]
/// @brief Method IsLoggingEnabled, addr 0xb571ac8, size 0x224, virtual false, abstract: false, final false
static inline bool IsLoggingEnabled() ;

/// @brief Method Log, addr 0xb5702cc, size 0x108, virtual false, abstract: false, final false
static inline void Log(::System::Object*  message) ;

/// @brief Method Log, addr 0xb5703d4, size 0x118, virtual false, abstract: false, final false
static inline void Log(::System::Object*  message, ::UnityEngine::Object*  context) ;

/// [Conditional("UNITY_ASSERTIONS")]
/// @brief Method LogAssertion, addr 0xb571550, size 0x108, virtual false, abstract: false, final false
static inline void LogAssertion(::System::Object*  message) ;

/// [Conditional("UNITY_ASSERTIONS")]
/// @brief Method LogAssertionFormat, addr 0xb571658, size 0x118, virtual false, abstract: false, final false
static inline void LogAssertionFormat(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogError, addr 0xb570a34, size 0x108, virtual false, abstract: false, final false
static inline void LogError(::System::Object*  message) ;

/// @brief Method LogError, addr 0xb570b3c, size 0x118, virtual false, abstract: false, final false
static inline void LogError(::System::Object*  message, ::UnityEngine::Object*  context) ;

/// @brief Method LogErrorFormat, addr 0xb570d6c, size 0x11c, virtual false, abstract: false, final false
static inline void LogErrorFormat(::UnityEngine::Object*  context, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogErrorFormat, addr 0xb570c54, size 0x118, virtual false, abstract: false, final false
static inline void LogErrorFormat(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogException, addr 0xb567314, size 0x108, virtual false, abstract: false, final false
static inline void LogException(::System::Exception*  exception) ;

/// @brief Method LogException, addr 0xb560780, size 0x114, virtual false, abstract: false, final false
static inline void LogException(::System::Exception*  exception, ::UnityEngine::Object*  context) ;

/// @brief Method LogFormat, addr 0xb570604, size 0x11c, virtual false, abstract: false, final false
static inline void LogFormat(::UnityEngine::Object*  context, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogFormat, addr 0xb5704ec, size 0x118, virtual false, abstract: false, final false
static inline void LogFormat(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogFormat, addr 0xb570720, size 0x314, virtual false, abstract: false, final false
static inline void LogFormat(::UnityEngine::LogType  logType, ::UnityEngine::LogOption  logOptions, ::UnityEngine::Object*  context, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogWarning, addr 0xb56d588, size 0x108, virtual false, abstract: false, final false
static inline void LogWarning(::System::Object*  message) ;

/// @brief Method LogWarning, addr 0xb570e88, size 0x118, virtual false, abstract: false, final false
static inline void LogWarning(::System::Object*  message, ::UnityEngine::Object*  context) ;

/// @brief Method LogWarningFormat, addr 0xb5710b8, size 0x11c, virtual false, abstract: false, final false
static inline void LogWarningFormat(::UnityEngine::Object*  context, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogWarningFormat, addr 0xb570fa0, size 0x118, virtual false, abstract: false, final false
static inline void LogWarningFormat(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// [Conditional("UNITY_ASSERTIONS")]
/// @brief Method Assert, addr 0xb5711d4, size 0x130, virtual false, abstract: false, final false
static inline void _cordl_Assert(bool  condition) ;

/// [Conditional("UNITY_ASSERTIONS")]
/// @brief Method Assert, addr 0xb571304, size 0x11c, virtual false, abstract: false, final false
static inline void _cordl_Assert(bool  condition, ::StringW  message) ;

static inline ::UnityEngine::ILogger* getStaticF_s_DefaultLogger() ;

static inline ::UnityEngine::ILogger* getStaticF_s_Logger() ;

/// @brief Method get_isDebugBuild, addr 0xb571770, size 0x28, virtual false, abstract: false, final false
static inline bool get_isDebugBuild() ;

/// @brief Method get_unityLogger, addr 0xb56f9c8, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::ILogger* get_unityLogger() ;

static inline void setStaticF_s_DefaultLogger(::UnityEngine::ILogger*  value) ;

static inline void setStaticF_s_Logger(::UnityEngine::ILogger*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Debug() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Debug(Debug && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Debug(Debug const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14825};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Debug) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
