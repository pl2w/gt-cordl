#pragma once
// IWYU pragma private; include "GlobalNamespace/GTFileLog.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTFileLog)
namespace GlobalNamespace {
class FLogInstance_GTFileLog___c;
}
namespace GlobalNamespace {
class GTFileLog_FLogInstance;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::IO {
class StreamWriter;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace GlobalNamespace {
class FLogInstance_GTFileLog___c;
}
namespace GlobalNamespace {
class GTFileLog;
}
namespace GlobalNamespace {
class GTFileLog_FLogInstance;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FLogInstance_GTFileLog___c*);
MARK_REF_T(::GlobalNamespace::GTFileLog*);
MARK_REF_T(::GlobalNamespace::GTFileLog_FLogInstance*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FLogInstance_GTFileLog___c*, "", "GTFileLog/FLogInstance/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTFileLog*, "", "GTFileLog");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTFileLog_FLogInstance*, "", "GTFileLog/FLogInstance");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTFileLog
class CORDL_TYPE GTFileLog : public ::System::Object {
public:
// Declarations
using FLogInstance = ::GlobalNamespace::GTFileLog_FLogInstance;

/// @brief Field _default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__default, put=setStaticF__default)) ::GlobalNamespace::GTFileLog_FLogInstance*  _default;

/// @brief Field _inCallback, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__inCallback, put=setStaticF__inCallback)) bool  _inCallback;

/// @brief Field _instances, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instances, put=setStaticF__instances)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GTFileLog_FLogInstance*>*  _instances;

/// @brief Field _registryLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__registryLock, put=setStaticF__registryLock)) ::System::Object*  _registryLock;

/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method CLog, addr 0x5670aac, size 0x398, virtual false, abstract: false, final false
static inline void CLog(::StringW  msg) ;

/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method CLogError, addr 0x56712a4, size 0x398, virtual false, abstract: false, final false
static inline void CLogError(::StringW  msg) ;

/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method CLogWarning, addr 0x5670f0c, size 0x398, virtual false, abstract: false, final false
static inline void CLogWarning(::StringW  msg) ;

/// @brief Method ExtractFirstExternalCaller, addr 0x5671cc4, size 0x150, virtual false, abstract: false, final false
static inline ::StringW ExtractFirstExternalCaller(::StringW  stackTrace) ;

/// @brief Method GetLog, addr 0x566fcc0, size 0x1dc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GTFileLog_FLogInstance* GetLog(::StringW  name) ;

/// @brief Method GetTimestamp, addr 0x5671b40, size 0x184, virtual false, abstract: false, final false
static inline ::StringW GetTimestamp() ;

/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Log, addr 0x566fe9c, size 0xb4, virtual false, abstract: false, final false
static inline void Log(::StringW  msg) ;

/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogError, addr 0x5670498, size 0xb4, virtual false, abstract: false, final false
static inline void LogError(::StringW  msg) ;

/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogErrorNoTrace, addr 0x5670a34, size 0x78, virtual false, abstract: false, final false
static inline void LogErrorNoTrace(::StringW  msg) ;

/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogNoTrace, addr 0x567054c, size 0x78, virtual false, abstract: false, final false
static inline void LogNoTrace(::StringW  msg) ;

/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogWarning, addr 0x56703e4, size 0xb4, virtual false, abstract: false, final false
static inline void LogWarning(::StringW  msg) ;

/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogWarningNoTrace, addr 0x56709bc, size 0x78, virtual false, abstract: false, final false
static inline void LogWarningNoTrace(::StringW  msg) ;

/// @brief Method OnUnityLogMessage, addr 0x5671998, size 0x1a8, virtual false, abstract: false, final false
static inline void OnUnityLogMessage(::StringW  condition, ::StringW  stackTrace, ::UnityEngine::LogType  type) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
/// @brief Method Reset, addr 0x567163c, size 0x29c, virtual false, abstract: false, final false
static inline void Reset() ;

static inline ::GlobalNamespace::GTFileLog_FLogInstance* getStaticF__default() ;

static inline bool getStaticF__inCallback() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GTFileLog_FLogInstance*>* getStaticF__instances() ;

static inline ::System::Object* getStaticF__registryLock() ;

/// @brief Method get_Default, addr 0x566fa68, size 0x1d0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GTFileLog_FLogInstance* get_Default() ;

static inline void setStaticF__default(::GlobalNamespace::GTFileLog_FLogInstance*  value) ;

static inline void setStaticF__inCallback(bool  value) ;

static inline void setStaticF__instances(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GTFileLog_FLogInstance*>*  value) ;

static inline void setStaticF__registryLock(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTFileLog() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTFileLog", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTFileLog(GTFileLog && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTFileLog", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTFileLog(GTFileLog const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{816};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GTFileLog) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTFileLog/FLogInstance
class CORDL_TYPE GTFileLog_FLogInstance : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::FLogInstance_GTFileLog___c;

 __declspec(property(get=get_IsActive)) bool  IsActive;

/// @brief Field _failed, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__failed, put=__cordl_internal_set__failed)) bool  _failed;

/// @brief Field _lock, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lock, put=__cordl_internal_set__lock)) ::System::Object*  _lock;

/// @brief Field _prefix, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__prefix, put=__cordl_internal_set__prefix)) ::StringW  _prefix;

/// @brief Field _writer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__writer, put=__cordl_internal_set__writer)) ::System::IO::StreamWriter*  _writer;

/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method CLog, addr 0x5672188, size 0xd8, virtual false, abstract: false, final false
inline void CLog(::StringW  msg) ;

/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method CLogError, addr 0x5672338, size 0xd8, virtual false, abstract: false, final false
inline void CLogError(::StringW  msg) ;

/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method CLogWarning, addr 0x5672260, size 0xd8, virtual false, abstract: false, final false
inline void CLogWarning(::StringW  msg) ;

/// @brief Method Close, addr 0x56718d8, size 0xc0, virtual false, abstract: false, final false
inline void Close() ;

/// @brief Method CloseWriter, addr 0x5672cb8, size 0xb8, virtual false, abstract: false, final false
inline void CloseWriter() ;

/// @brief Method EnsureWriter, addr 0x5672410, size 0x8a8, virtual false, abstract: false, final false
inline void EnsureWriter(::StringW  callerTrace) ;

/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Log, addr 0x5671ee8, size 0x88, virtual false, abstract: false, final false
inline void Log(::StringW  msg) ;

/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogError, addr 0x5671ff8, size 0x88, virtual false, abstract: false, final false
inline void LogError(::StringW  msg) ;

/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogErrorNoTrace, addr 0x5672130, size 0x58, virtual false, abstract: false, final false
inline void LogErrorNoTrace(::StringW  msg) ;

/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogNoTrace, addr 0x5672080, size 0x58, virtual false, abstract: false, final false
inline void LogNoTrace(::StringW  msg) ;

/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogWarning, addr 0x5671f70, size 0x88, virtual false, abstract: false, final false
inline void LogWarning(::StringW  msg) ;

/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogWarningNoTrace, addr 0x56720d8, size 0x58, virtual false, abstract: false, final false
inline void LogWarningNoTrace(::StringW  msg) ;

static inline ::GlobalNamespace::GTFileLog_FLogInstance* New_ctor(::StringW  prefix) ;

/// @brief Method PruneOldFlogFiles, addr 0x5672d70, size 0x298, virtual false, abstract: false, final false
static inline void PruneOldFlogFiles(::StringW  dir) ;

/// @brief Method WriteEntry, addr 0x566ff50, size 0x494, virtual false, abstract: false, final false
inline void WriteEntry(::StringW  level, ::StringW  msg, ::StringW  trace) ;

/// @brief Method WriteEntryNoTrace, addr 0x56705c4, size 0x3f8, virtual false, abstract: false, final false
inline void WriteEntryNoTrace(::StringW  level, ::StringW  msg) ;

constexpr bool const& __cordl_internal_get__failed() const;

constexpr bool& __cordl_internal_get__failed() ;

constexpr ::System::Object* const& __cordl_internal_get__lock() const;

constexpr ::System::Object*& __cordl_internal_get__lock() ;

constexpr ::StringW const& __cordl_internal_get__prefix() const;

constexpr ::StringW& __cordl_internal_get__prefix() ;

constexpr ::System::IO::StreamWriter* const& __cordl_internal_get__writer() const;

constexpr ::System::IO::StreamWriter*& __cordl_internal_get__writer() ;

constexpr void __cordl_internal_set__failed(bool  value) ;

constexpr void __cordl_internal_set__lock(::System::Object*  value) ;

constexpr void __cordl_internal_set__prefix(::StringW  value) ;

constexpr void __cordl_internal_set__writer(::System::IO::StreamWriter*  value) ;

/// @brief Method .ctor, addr 0x566fc38, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::StringW  prefix) ;

/// @brief Method get_IsActive, addr 0x5670e44, size 0xc8, virtual false, abstract: false, final false
inline bool get_IsActive() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTFileLog_FLogInstance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTFileLog_FLogInstance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTFileLog_FLogInstance(GTFileLog_FLogInstance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTFileLog_FLogInstance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTFileLog_FLogInstance(GTFileLog_FLogInstance const& ) = delete;

/// @brief Field FilePrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  FilePrefix{u"flog_"};

/// @brief Field MaxFlogFiles offset 0xffffffff size 0x4
static constexpr int32_t  MaxFlogFiles{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{815};

/// @brief Field _writer, offset: 0x10, size: 0x8, def value: None
 ::System::IO::StreamWriter*  ____writer;

/// @brief Field _failed, offset: 0x18, size: 0x1, def value: None
 bool  ____failed;

/// @brief Field _lock, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ____lock;

/// @brief Field _prefix, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____prefix;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTFileLog_FLogInstance, ____writer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTFileLog_FLogInstance, ____failed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTFileLog_FLogInstance, ____lock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTFileLog_FLogInstance, ____prefix) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTFileLog_FLogInstance) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTFileLog/FLogInstance/<>c
class CORDL_TYPE FLogInstance_GTFileLog___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::FLogInstance_GTFileLog___c*  __9;

/// @brief Field <>9__21_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_0, put=setStaticF___9__21_0)) ::System::Comparison_1<::StringW>*  __9__21_0;

static inline ::GlobalNamespace::FLogInstance_GTFileLog___c* New_ctor() ;

/// @brief Method <PruneOldFlogFiles>b__21_0, addr 0x5673078, size 0x94, virtual false, abstract: false, final false
inline int32_t _PruneOldFlogFiles_b__21_0(::StringW  a, ::StringW  b) ;

/// @brief Method .ctor, addr 0x5673070, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::FLogInstance_GTFileLog___c* getStaticF___9() ;

static inline ::System::Comparison_1<::StringW>* getStaticF___9__21_0() ;

static inline void setStaticF___9(::GlobalNamespace::FLogInstance_GTFileLog___c*  value) ;

static inline void setStaticF___9__21_0(::System::Comparison_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FLogInstance_GTFileLog___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FLogInstance_GTFileLog___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FLogInstance_GTFileLog___c(FLogInstance_GTFileLog___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FLogInstance_GTFileLog___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FLogInstance_GTFileLog___c(FLogInstance_GTFileLog___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{814};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FLogInstance_GTFileLog___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
