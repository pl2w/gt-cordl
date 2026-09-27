#pragma once
// IWYU pragma private; include "GlobalNamespace/PersistLog.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PersistLog)
namespace GlobalNamespace {
struct PersistLog__OnEnable_d__4;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO {
class StreamWriter;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace GlobalNamespace {
class PersistLog;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PersistLog*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PersistLog*, "", "PersistLog");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PersistLog
class CORDL_TYPE PersistLog : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _OnEnable_d__4 = ::GlobalNamespace::PersistLog__OnEnable_d__4;

/// @brief Field dup, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_dup, put=__cordl_internal_set_dup)) bool  dup;

/// @brief Field earlyQ, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_earlyQ, put=__cordl_internal_set_earlyQ)) ::System::Collections::Generic::List_1<::System::ValueTuple_3<double_t,::StringW,::StringW>>*  earlyQ;

/// @brief Field plog, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_plog, put=__cordl_internal_set_plog)) ::StringW  plog;

/// @brief Field sr, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sr, put=setStaticF_sr)) ::System::IO::StreamWriter*  sr;

/// [HideInCallstack]
/// @brief Method Log, addr 0x570b82c, size 0xc, virtual false, abstract: false, final false
static inline void Log(::StringW  msg) ;

/// [HideInCallstack]
/// @brief Method Log, addr 0x570fb5c, size 0x1d0, virtual false, abstract: false, final false
static inline void Log(::UnityEngine::LogType  type, ::StringW  msg) ;

/// @brief Method LogMessageEnqueue, addr 0x570f81c, size 0x13c, virtual false, abstract: false, final false
inline void LogMessageEnqueue(::StringW  msg, ::StringW  strace, ::UnityEngine::LogType  type) ;

/// @brief Method LogMessageReceived, addr 0x570f958, size 0x204, virtual false, abstract: false, final false
inline void LogMessageReceived(::StringW  msg, ::StringW  strace, ::UnityEngine::LogType  type) ;

static inline ::GlobalNamespace::PersistLog* New_ctor() ;

/// @brief Method OnDestroy, addr 0x570f6d4, size 0x148, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x570f6d0, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// [AsyncStateMachine(typeof(PersistLog::<OnEnable>d__4))]
/// @brief Method OnEnable, addr 0x570f628, size 0xa8, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr bool const& __cordl_internal_get_dup() const;

constexpr bool& __cordl_internal_get_dup() ;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<double_t,::StringW,::StringW>>* const& __cordl_internal_get_earlyQ() const;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<double_t,::StringW,::StringW>>*& __cordl_internal_get_earlyQ() ;

constexpr ::StringW const& __cordl_internal_get_plog() const;

constexpr ::StringW& __cordl_internal_get_plog() ;

constexpr void __cordl_internal_set_dup(bool  value) ;

constexpr void __cordl_internal_set_earlyQ(::System::Collections::Generic::List_1<::System::ValueTuple_3<double_t,::StringW,::StringW>>*  value) ;

constexpr void __cordl_internal_set_plog(::StringW  value) ;

/// @brief Method .ctor, addr 0x570fd2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::IO::StreamWriter* getStaticF_sr() ;

static inline void setStaticF_sr(::System::IO::StreamWriter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PersistLog() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PersistLog", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PersistLog(PersistLog && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PersistLog", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PersistLog(PersistLog const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1173};

/// @brief Field plog, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___plog;

/// @brief Field dup, offset: 0x28, size: 0x1, def value: None
 bool  ___dup;

/// [TupleElementNames(new[] { "time", "msg", "strace" })]
/// @brief Field earlyQ, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ValueTuple_3<double_t,::StringW,::StringW>>*  ___earlyQ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PersistLog, ___plog) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PersistLog, ___dup) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PersistLog, ___earlyQ) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PersistLog) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
