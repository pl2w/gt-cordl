#pragma once
// IWYU pragma private; include "Fusion/NetworkSpawnOp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkSpawnStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkSpawnOp)
namespace Fusion {
struct NetworkObjectTypeId;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
class NetworkSpawnOp_AsyncOpData;
}
namespace Fusion {
struct NetworkSpawnStatus;
}
namespace GlobalNamespace {
struct NetworkSpawnOp_Awaiter;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
class Awaiter_NetworkSpawnOp___c__DisplayClass5_0;
}
namespace Fusion {
class Awaiter_NetworkSpawnOp___c__DisplayClass5_1;
}
namespace Fusion {
class NetworkSpawnOp_AsyncOpData;
}
namespace Fusion {
struct NetworkSpawnOp;
}
// Write type traits
MARK_REF_T(::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0*);
MARK_REF_T(::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1*);
MARK_REF_T(::Fusion::NetworkSpawnOp_AsyncOpData*);
MARK_VAL_T(::Fusion::NetworkSpawnOp);
DEFINE_IL2CPP_CLASS(::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0*, "Fusion", "NetworkSpawnOp/Awaiter/<>c__DisplayClass5_0");
DEFINE_IL2CPP_CLASS(::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1*, "Fusion", "NetworkSpawnOp/Awaiter/<>c__DisplayClass5_1");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSpawnOp_AsyncOpData*, "Fusion", "NetworkSpawnOp/AsyncOpData");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSpawnOp, "Fusion", "NetworkSpawnOp");
// [IsReadOnly]
// Dependencies Fusion.NetworkSpawnStatus
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkSpawnOp
struct CORDL_TYPE NetworkSpawnOp {
public:
// Declarations
using AsyncOpData = ::Fusion::NetworkSpawnOp_AsyncOpData;

using Awaiter = ::GlobalNamespace::NetworkSpawnOp_Awaiter;

 __declspec(property(get=get_IsFailed)) bool  IsFailed;

 __declspec(property(get=get_IsQueued)) bool  IsQueued;

 __declspec(property(get=get_IsSpawned)) bool  IsSpawned;

 __declspec(property(get=get_Object)) ::UnityW<::Fusion::NetworkObject>  Object;

 __declspec(property(get=get_Status)) ::Fusion::NetworkSpawnStatus  Status;

/// @brief Method ConsumeSyncSpawn, addr 0x5fd9984, size 0xc4, virtual false, abstract: false, final false
inline ::Fusion::NetworkSpawnStatus ConsumeSyncSpawn(::by_ref<::Fusion::NetworkObject*>  obj) ;

/// @brief Method ConsumeSyncSpawn, addr 0x5fd9810, size 0xf4, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkObject> ConsumeSyncSpawn(::Fusion::NetworkObjectTypeId  typeId) ;

/// @brief Method GetAwaiter, addr 0x5fd9dd0, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetworkSpawnOp_Awaiter GetAwaiter() ;

/// @brief Method .ctor, addr 0x5fd97a0, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkSpawnStatus  status, ::Fusion::NetworkObject*  data) ;

/// @brief Method .ctor, addr 0x5fd97d8, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkSpawnStatus  status, ::Fusion::NetworkSpawnOp_AsyncOpData*  data) ;

/// @brief Method get_IsFailed, addr 0x5fd9ce4, size 0xec, virtual false, abstract: false, final false
inline bool get_IsFailed() ;

/// @brief Method get_IsQueued, addr 0x5fd9c44, size 0xa0, virtual false, abstract: false, final false
inline bool get_IsQueued() ;

/// @brief Method get_IsSpawned, addr 0x5fd9ba8, size 0x9c, virtual false, abstract: false, final false
inline bool get_IsSpawned() ;

/// @brief Method get_Object, addr 0x5fd9a48, size 0xd0, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkObject> get_Object() ;

/// @brief Method get_Status, addr 0x5fd9b18, size 0x90, virtual false, abstract: false, final false
inline ::Fusion::NetworkSpawnStatus get_Status() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSpawnOp() ;

// Ctor Parameters [CppParam { name: "Runner", ty: "::UnityW<::Fusion::NetworkRunner>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_status", ty: "::Fusion::NetworkSpawnStatus", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSpawnOp(::UnityW<::Fusion::NetworkRunner>  Runner, ::Fusion::NetworkSpawnStatus  _status, ::System::Object*  _data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19258};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Runner, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  Runner;

/// @brief Field _status, offset: 0x8, size: 0x4, def value: None
 ::Fusion::NetworkSpawnStatus  _status;

/// @brief Field _data, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  _data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSpawnOp, Runner) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSpawnOp, _status) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSpawnOp, _data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSpawnOp) == 0x18, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkSpawnOp/Awaiter/<>c__DisplayClass5_1
class CORDL_TYPE Awaiter_NetworkSpawnOp___c__DisplayClass5_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0*  CS$__8__locals1;

/// @brief Field capturedContext, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_capturedContext, put=__cordl_internal_set_capturedContext)) ::System::Threading::SynchronizationContext*  capturedContext;

static inline ::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1* New_ctor() ;

/// @brief Method <OnCompleted>b__0, addr 0x5fda3f4, size 0xe0, virtual false, abstract: false, final false
inline void _OnCompleted_b__0() ;

constexpr ::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::System::Threading::SynchronizationContext* const& __cordl_internal_get_capturedContext() const;

constexpr ::System::Threading::SynchronizationContext*& __cordl_internal_get_capturedContext() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0*  value) ;

constexpr void __cordl_internal_set_capturedContext(::System::Threading::SynchronizationContext*  value) ;

/// @brief Method .ctor, addr 0x5fda3cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Awaiter_NetworkSpawnOp___c__DisplayClass5_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Awaiter_NetworkSpawnOp___c__DisplayClass5_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Awaiter_NetworkSpawnOp___c__DisplayClass5_1(Awaiter_NetworkSpawnOp___c__DisplayClass5_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Awaiter_NetworkSpawnOp___c__DisplayClass5_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Awaiter_NetworkSpawnOp___c__DisplayClass5_1(Awaiter_NetworkSpawnOp___c__DisplayClass5_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19256};

/// @brief Field capturedContext, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::SynchronizationContext*  ___capturedContext;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1, ___capturedContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1) == 0x20, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkSpawnOp/Awaiter/<>c__DisplayClass5_0
class CORDL_TYPE Awaiter_NetworkSpawnOp___c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::System::Threading::SendOrPostCallback*  __9__1;

/// @brief Field continuation, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuation, put=__cordl_internal_set_continuation)) ::System::Action*  continuation;

static inline ::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0* New_ctor() ;

/// @brief Method <OnCompleted>b__1, addr 0x5fda3d4, size 0x20, virtual false, abstract: false, final false
inline void _OnCompleted_b__1(::System::Object*  _) ;

constexpr ::System::Threading::SendOrPostCallback* const& __cordl_internal_get___9__1() const;

constexpr ::System::Threading::SendOrPostCallback*& __cordl_internal_get___9__1() ;

constexpr ::System::Action* const& __cordl_internal_get_continuation() const;

constexpr ::System::Action*& __cordl_internal_get_continuation() ;

constexpr void __cordl_internal_set___9__1(::System::Threading::SendOrPostCallback*  value) ;

constexpr void __cordl_internal_set_continuation(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x5fda3c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Awaiter_NetworkSpawnOp___c__DisplayClass5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Awaiter_NetworkSpawnOp___c__DisplayClass5_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Awaiter_NetworkSpawnOp___c__DisplayClass5_0(Awaiter_NetworkSpawnOp___c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Awaiter_NetworkSpawnOp___c__DisplayClass5_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Awaiter_NetworkSpawnOp___c__DisplayClass5_0(Awaiter_NetworkSpawnOp___c__DisplayClass5_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19255};

/// @brief Field continuation, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___continuation;

/// @brief Field <>9__1, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::SendOrPostCallback*  _____9__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0, ___continuation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0, _____9__1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0) == 0x20, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.NetworkSpawnStatus, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkSpawnOp/AsyncOpData
class CORDL_TYPE NetworkSpawnOp_AsyncOpData : public ::System::Object {
public:
// Declarations
/// @brief Field Completed, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Completed, put=__cordl_internal_set_Completed)) ::System::Action*  Completed;

/// @brief Field Object, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Object, put=__cordl_internal_set_Object)) ::UnityW<::Fusion::NetworkObject>  Object;

/// @brief Field Status, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Status, put=__cordl_internal_set_Status)) ::Fusion::NetworkSpawnStatus  Status;

/// @brief Method Complete, addr 0x5fd29c0, size 0x230, virtual false, abstract: false, final false
inline void Complete(/* [IsReadOnly] */ ::by_ref<::Fusion::NetworkSpawnOp>  op) ;

static inline ::Fusion::NetworkSpawnOp_AsyncOpData* New_ctor() ;

constexpr ::System::Action* const& __cordl_internal_get_Completed() const;

constexpr ::System::Action*& __cordl_internal_get_Completed() ;

constexpr ::UnityW<::Fusion::NetworkObject> const& __cordl_internal_get_Object() const;

constexpr ::UnityW<::Fusion::NetworkObject>& __cordl_internal_get_Object() ;

constexpr ::Fusion::NetworkSpawnStatus const& __cordl_internal_get_Status() const;

constexpr ::Fusion::NetworkSpawnStatus& __cordl_internal_get_Status() ;

constexpr void __cordl_internal_set_Completed(::System::Action*  value) ;

constexpr void __cordl_internal_set_Object(::UnityW<::Fusion::NetworkObject>  value) ;

constexpr void __cordl_internal_set_Status(::Fusion::NetworkSpawnStatus  value) ;

/// @brief Method .ctor, addr 0x5fd9f40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_Completed, addr 0x5fd9e08, size 0x9c, virtual false, abstract: false, final false
inline void add_Completed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_Completed, addr 0x5fd9ea4, size 0x9c, virtual false, abstract: false, final false
inline void remove_Completed(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSpawnOp_AsyncOpData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSpawnOp_AsyncOpData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSpawnOp_AsyncOpData(NetworkSpawnOp_AsyncOpData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSpawnOp_AsyncOpData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSpawnOp_AsyncOpData(NetworkSpawnOp_AsyncOpData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19254};

/// @brief Field Status, offset: 0x10, size: 0x4, def value: None
 ::Fusion::NetworkSpawnStatus  ___Status;

/// @brief Field Object, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkObject>  ___Object;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field Completed, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___Completed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSpawnOp_AsyncOpData, ___Status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSpawnOp_AsyncOpData, ___Object) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSpawnOp_AsyncOpData, ___Completed) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSpawnOp_AsyncOpData) == 0x28, "Size mismatch!");

} // namespace end def Fusion
