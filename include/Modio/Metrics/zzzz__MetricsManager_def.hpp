#pragma once
// IWYU pragma private; include "Modio/Metrics/MetricsManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MetricsManager)
namespace GlobalNamespace {
struct MetricsManager__EndSession_d__11;
}
namespace GlobalNamespace {
struct MetricsManager__Heartbeat_d__10;
}
namespace GlobalNamespace {
struct MetricsManager__StartSession_d__6;
}
namespace GlobalNamespace {
struct MetricsManager__StartSession_d__7;
}
namespace GlobalNamespace {
struct MetricsManager__StartSession_d__8;
}
namespace GlobalNamespace {
struct MetricsManager__StartSession_d__9;
}
namespace Modio::Metrics {
class MetricsManager___c;
}
namespace Modio::Metrics {
class MetricsSession;
}
namespace Modio::Metrics {
class MetricsSettings;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Modio::Metrics {
class MetricsManager;
}
namespace Modio::Metrics {
class MetricsManager___c;
}
// Write type traits
MARK_REF_T(::Modio::Metrics::MetricsManager*);
MARK_REF_T(::Modio::Metrics::MetricsManager___c*);
DEFINE_IL2CPP_CLASS(::Modio::Metrics::MetricsManager*, "Modio.Metrics", "MetricsManager");
DEFINE_IL2CPP_CLASS(::Modio::Metrics::MetricsManager___c*, "Modio.Metrics", "MetricsManager/<>c");
// Dependencies System.Object
namespace Modio::Metrics {
// Is value type: false
// CS Name: Modio.Metrics.MetricsManager
class CORDL_TYPE MetricsManager : public ::System::Object {
public:
// Declarations
using _EndSession_d__11 = ::GlobalNamespace::MetricsManager__EndSession_d__11;

using _Heartbeat_d__10 = ::GlobalNamespace::MetricsManager__Heartbeat_d__10;

using _StartSession_d__6 = ::GlobalNamespace::MetricsManager__StartSession_d__6;

using _StartSession_d__7 = ::GlobalNamespace::MetricsManager__StartSession_d__7;

using _StartSession_d__8 = ::GlobalNamespace::MetricsManager__StartSession_d__8;

using _StartSession_d__9 = ::GlobalNamespace::MetricsManager__StartSession_d__9;

using __c = ::Modio::Metrics::MetricsManager___c;

 __declspec(property(get=get_Secret)) ::StringW  Secret;

/// @brief Field _sessions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__sessions, put=__cordl_internal_set__sessions)) ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Metrics::MetricsSession*>*  _sessions;

/// @brief Field _settings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::Modio::Metrics::MetricsSettings*  _settings;

/// @brief Method EndAllSessions, addr 0xa03d910, size 0x3b4, virtual false, abstract: false, final false
inline void EndAllSessions() ;

/// [AsyncStateMachine(typeof(Modio.Metrics.MetricsManager::<EndSession>d__11))]
/// @brief Method EndSession, addr 0xa03d7f0, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* EndSession(::StringW  id) ;

/// [AsyncStateMachine(typeof(Modio.Metrics.MetricsManager::<Heartbeat>d__10))]
/// @brief Method Heartbeat, addr 0xa03d6f8, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* Heartbeat(::StringW  id) ;

static inline ::Modio::Metrics::MetricsManager* New_ctor() ;

/// [AsyncStateMachine(typeof(Modio.Metrics.MetricsManager::<StartSession>d__7))]
/// @brief Method StartSession, addr 0xa03d380, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* StartSession(::StringW  id) ;

/// [AsyncStateMachine(typeof(Modio.Metrics.MetricsManager::<StartSession>d__9))]
/// @brief Method StartSession, addr 0xa03d5bc, size 0x13c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* StartSession(::StringW  id, ::ArrayW<int64_t>  mods) ;

/// [AsyncStateMachine(typeof(Modio.Metrics.MetricsManager::<StartSession>d__6))]
/// @brief Method StartSession, addr 0xa03d274, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW,::Modio::Error*>>* StartSession() ;

/// [AsyncStateMachine(typeof(Modio.Metrics.MetricsManager::<StartSession>d__8))]
/// @brief Method StartSession, addr 0xa03d4a0, size 0x11c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW,::Modio::Error*>>* StartSession(::ArrayW<int64_t>  mods) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Metrics::MetricsSession*>* const& __cordl_internal_get__sessions() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Metrics::MetricsSession*>*& __cordl_internal_get__sessions() ;

constexpr ::Modio::Metrics::MetricsSettings* const& __cordl_internal_get__settings() const;

constexpr ::Modio::Metrics::MetricsSettings*& __cordl_internal_get__settings() ;

constexpr void __cordl_internal_set__sessions(::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Metrics::MetricsSession*>*  value) ;

constexpr void __cordl_internal_set__settings(::Modio::Metrics::MetricsSettings*  value) ;

/// @brief Method .ctor, addr 0xa03d0b4, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Secret, addr 0xa03d08c, size 0x28, virtual false, abstract: false, final false
inline ::StringW get_Secret() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetricsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetricsManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetricsManager(MetricsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetricsManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetricsManager(MetricsManager const& ) = delete;

/// @brief Field HEARTBEAT_INTERVAL offset 0xffffffff size 0x4
static constexpr int32_t  HEARTBEAT_INTERVAL{static_cast<int32_t>(0x96)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17631};

/// @brief Field _sessions, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Metrics::MetricsSession*>*  ____sessions;

/// @brief Field _settings, offset: 0x18, size: 0x8, def value: None
 ::Modio::Metrics::MetricsSettings*  ____settings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Metrics::MetricsManager, ____sessions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Metrics::MetricsManager, ____settings) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Metrics::MetricsManager) == 0x20, "Size mismatch!");

} // namespace end def Modio::Metrics
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Metrics {
// Is value type: false
// CS Name: Modio.Metrics.MetricsManager/<>c
class CORDL_TYPE MetricsManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Metrics::MetricsManager___c*  __9;

/// @brief Field <>9__12_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_0, put=setStaticF___9__12_0)) ::System::Func_2<::Modio::Metrics::MetricsSession*,bool>*  __9__12_0;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Func_2<::Modio::Mods::Mod*,bool>*  __9__7_0;

/// @brief Field <>9__7_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_1, put=setStaticF___9__7_1)) ::System::Func_2<::Modio::Mods::Mod*,int64_t>*  __9__7_1;

static inline ::Modio::Metrics::MetricsManager___c* New_ctor() ;

/// @brief Method <EndAllSessions>b__12_0, addr 0xa03dd74, size 0x14, virtual false, abstract: false, final false
inline bool _EndAllSessions_b__12_0(::Modio::Metrics::MetricsSession*  session) ;

/// @brief Method <StartSession>b__7_0, addr 0xa03dd34, size 0x2c, virtual false, abstract: false, final false
inline bool _StartSession_b__7_0(::Modio::Mods::Mod*  mod) ;

/// @brief Method <StartSession>b__7_1, addr 0xa03dd60, size 0x14, virtual false, abstract: false, final false
inline int64_t _StartSession_b__7_1(::Modio::Mods::Mod*  mod) ;

/// @brief Method .ctor, addr 0xa03dd2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Metrics::MetricsManager___c* getStaticF___9() ;

static inline ::System::Func_2<::Modio::Metrics::MetricsSession*,bool>* getStaticF___9__12_0() ;

static inline ::System::Func_2<::Modio::Mods::Mod*,bool>* getStaticF___9__7_0() ;

static inline ::System::Func_2<::Modio::Mods::Mod*,int64_t>* getStaticF___9__7_1() ;

static inline void setStaticF___9(::Modio::Metrics::MetricsManager___c*  value) ;

static inline void setStaticF___9__12_0(::System::Func_2<::Modio::Metrics::MetricsSession*,bool>*  value) ;

static inline void setStaticF___9__7_0(::System::Func_2<::Modio::Mods::Mod*,bool>*  value) ;

static inline void setStaticF___9__7_1(::System::Func_2<::Modio::Mods::Mod*,int64_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetricsManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetricsManager___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetricsManager___c(MetricsManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetricsManager___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetricsManager___c(MetricsManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17624};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Metrics::MetricsManager___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::Metrics
