#pragma once
// IWYU pragma private; include "Fusion/InternalLogStreams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InternalLogStreams)
namespace Fusion {
class DebugLogStream;
}
namespace Fusion {
class LogStream;
}
namespace Fusion {
class TraceLogStream;
}
// Forward declare root types
namespace Fusion {
class InternalLogStreams;
}
// Write type traits
MARK_REF_T(::Fusion::InternalLogStreams*);
DEFINE_IL2CPP_CLASS(::Fusion::InternalLogStreams*, "Fusion", "InternalLogStreams");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.InternalLogStreams
class CORDL_TYPE InternalLogStreams : public ::System::Object {
public:
// Declarations
/// @brief Field LogDebug, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogDebug, put=setStaticF_LogDebug)) ::Fusion::DebugLogStream*  LogDebug;

/// @brief Field LogError, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogError, put=setStaticF_LogError)) ::Fusion::LogStream*  LogError;

/// @brief Field LogException, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogException, put=setStaticF_LogException)) ::Fusion::LogStream*  LogException;

/// @brief Field LogInfo, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogInfo, put=setStaticF_LogInfo)) ::Fusion::LogStream*  LogInfo;

/// @brief Field LogTrace, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogTrace, put=setStaticF_LogTrace)) ::Fusion::TraceLogStream*  LogTrace;

/// @brief Field LogTraceDummyTraffic, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogTraceDummyTraffic, put=setStaticF_LogTraceDummyTraffic)) ::Fusion::TraceLogStream*  LogTraceDummyTraffic;

/// @brief Field LogTraceEncryption, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogTraceEncryption, put=setStaticF_LogTraceEncryption)) ::Fusion::TraceLogStream*  LogTraceEncryption;

/// @brief Field LogTraceHostMigration, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogTraceHostMigration, put=setStaticF_LogTraceHostMigration)) ::Fusion::TraceLogStream*  LogTraceHostMigration;

/// @brief Field LogTraceMemoryTrack, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogTraceMemoryTrack, put=setStaticF_LogTraceMemoryTrack)) ::Fusion::TraceLogStream*  LogTraceMemoryTrack;

/// @brief Field LogTraceNetwork, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogTraceNetwork, put=setStaticF_LogTraceNetwork)) ::Fusion::TraceLogStream*  LogTraceNetwork;

/// @brief Field LogTraceObject, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogTraceObject, put=setStaticF_LogTraceObject)) ::Fusion::TraceLogStream*  LogTraceObject;

/// @brief Field LogTracePrefab, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogTracePrefab, put=setStaticF_LogTracePrefab)) ::Fusion::TraceLogStream*  LogTracePrefab;

/// @brief Field LogTraceRealtime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogTraceRealtime, put=setStaticF_LogTraceRealtime)) ::Fusion::TraceLogStream*  LogTraceRealtime;

/// @brief Field LogTraceSceneInfo, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogTraceSceneInfo, put=setStaticF_LogTraceSceneInfo)) ::Fusion::TraceLogStream*  LogTraceSceneInfo;

/// @brief Field LogTraceSceneManager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogTraceSceneManager, put=setStaticF_LogTraceSceneManager)) ::Fusion::TraceLogStream*  LogTraceSceneManager;

/// @brief Field LogTraceSimulationMessage, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogTraceSimulationMessage, put=setStaticF_LogTraceSimulationMessage)) ::Fusion::TraceLogStream*  LogTraceSimulationMessage;

/// @brief Field LogTraceSnapshots, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogTraceSnapshots, put=setStaticF_LogTraceSnapshots)) ::Fusion::TraceLogStream*  LogTraceSnapshots;

/// @brief Field LogTraceStun, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogTraceStun, put=setStaticF_LogTraceStun)) ::Fusion::TraceLogStream*  LogTraceStun;

/// @brief Field LogTraceTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogTraceTime, put=setStaticF_LogTraceTime)) ::Fusion::TraceLogStream*  LogTraceTime;

/// @brief Field LogWarn, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogWarn, put=setStaticF_LogWarn)) ::Fusion::LogStream*  LogWarn;

static inline ::Fusion::DebugLogStream* getStaticF_LogDebug() ;

static inline ::Fusion::LogStream* getStaticF_LogError() ;

static inline ::Fusion::LogStream* getStaticF_LogException() ;

static inline ::Fusion::LogStream* getStaticF_LogInfo() ;

static inline ::Fusion::TraceLogStream* getStaticF_LogTrace() ;

static inline ::Fusion::TraceLogStream* getStaticF_LogTraceDummyTraffic() ;

static inline ::Fusion::TraceLogStream* getStaticF_LogTraceEncryption() ;

static inline ::Fusion::TraceLogStream* getStaticF_LogTraceHostMigration() ;

static inline ::Fusion::TraceLogStream* getStaticF_LogTraceMemoryTrack() ;

static inline ::Fusion::TraceLogStream* getStaticF_LogTraceNetwork() ;

static inline ::Fusion::TraceLogStream* getStaticF_LogTraceObject() ;

static inline ::Fusion::TraceLogStream* getStaticF_LogTracePrefab() ;

static inline ::Fusion::TraceLogStream* getStaticF_LogTraceRealtime() ;

static inline ::Fusion::TraceLogStream* getStaticF_LogTraceSceneInfo() ;

static inline ::Fusion::TraceLogStream* getStaticF_LogTraceSceneManager() ;

static inline ::Fusion::TraceLogStream* getStaticF_LogTraceSimulationMessage() ;

static inline ::Fusion::TraceLogStream* getStaticF_LogTraceSnapshots() ;

static inline ::Fusion::TraceLogStream* getStaticF_LogTraceStun() ;

static inline ::Fusion::TraceLogStream* getStaticF_LogTraceTime() ;

static inline ::Fusion::LogStream* getStaticF_LogWarn() ;

static inline void setStaticF_LogDebug(::Fusion::DebugLogStream*  value) ;

static inline void setStaticF_LogError(::Fusion::LogStream*  value) ;

static inline void setStaticF_LogException(::Fusion::LogStream*  value) ;

static inline void setStaticF_LogInfo(::Fusion::LogStream*  value) ;

static inline void setStaticF_LogTrace(::Fusion::TraceLogStream*  value) ;

static inline void setStaticF_LogTraceDummyTraffic(::Fusion::TraceLogStream*  value) ;

static inline void setStaticF_LogTraceEncryption(::Fusion::TraceLogStream*  value) ;

static inline void setStaticF_LogTraceHostMigration(::Fusion::TraceLogStream*  value) ;

static inline void setStaticF_LogTraceMemoryTrack(::Fusion::TraceLogStream*  value) ;

static inline void setStaticF_LogTraceNetwork(::Fusion::TraceLogStream*  value) ;

static inline void setStaticF_LogTraceObject(::Fusion::TraceLogStream*  value) ;

static inline void setStaticF_LogTracePrefab(::Fusion::TraceLogStream*  value) ;

static inline void setStaticF_LogTraceRealtime(::Fusion::TraceLogStream*  value) ;

static inline void setStaticF_LogTraceSceneInfo(::Fusion::TraceLogStream*  value) ;

static inline void setStaticF_LogTraceSceneManager(::Fusion::TraceLogStream*  value) ;

static inline void setStaticF_LogTraceSimulationMessage(::Fusion::TraceLogStream*  value) ;

static inline void setStaticF_LogTraceSnapshots(::Fusion::TraceLogStream*  value) ;

static inline void setStaticF_LogTraceStun(::Fusion::TraceLogStream*  value) ;

static inline void setStaticF_LogTraceTime(::Fusion::TraceLogStream*  value) ;

static inline void setStaticF_LogWarn(::Fusion::LogStream*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InternalLogStreams() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InternalLogStreams", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InternalLogStreams(InternalLogStreams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InternalLogStreams", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InternalLogStreams(InternalLogStreams const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32717};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::InternalLogStreams) == 0x10, "Size mismatch!");

} // namespace end def Fusion
