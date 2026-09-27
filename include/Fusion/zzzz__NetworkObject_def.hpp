#pragma once
// IWYU pragma private; include "Fusion/NetworkObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Behaviour_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__NetworkObjectFlags_def.hpp"
#include "Fusion/zzzz__NetworkObjectRuntimeFlags_def.hpp"
#include "Fusion/zzzz__NetworkObjectTypeId_def.hpp"
#include "Fusion/zzzz__NetworkObject_ObjectInterestModes_def.hpp"
#include "Fusion/zzzz__RenderSource_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObject)
namespace Fusion {
struct NetworkId;
}
namespace Fusion {
struct NetworkObjectHeaderPtr;
}
namespace Fusion {
struct NetworkObjectHeader;
}
namespace Fusion {
class NetworkObjectMeta;
}
namespace Fusion {
class NetworkObject_PriorityLevelDelegate;
}
namespace Fusion {
class NetworkObject_ReplicateToDelegate;
}
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
struct PriorityLevel;
}
namespace Fusion {
struct RenderSource;
}
namespace Fusion {
struct RenderTimeframe;
}
namespace Fusion {
class Simulation;
}
namespace Fusion {
struct Tick;
}
namespace GlobalNamespace {
struct NetworkObject_ObjectInterestModes;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
class NetworkObject_PriorityLevelDelegate;
}
namespace Fusion {
class NetworkObject_ReplicateToDelegate;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObject*);
MARK_REF_T(::Fusion::NetworkObject_PriorityLevelDelegate*);
MARK_REF_T(::Fusion::NetworkObject_ReplicateToDelegate*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObject*, "Fusion", "NetworkObject");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObject_PriorityLevelDelegate*, "Fusion", "NetworkObject/PriorityLevelDelegate");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObject_ReplicateToDelegate*, "Fusion", "NetworkObject/ReplicateToDelegate");
// [AddComponentMenu("Fusion/Network Object")]
// [DisallowMultipleComponent]
// [HelpURL("https://doc.photonengine.com/fusion/current/manual/network-object")]
// [ScriptHelp(Url = "https://doc.photonengine.com/fusion/current/manual/network-object", BackColor = (Fusion.ScriptHeaderBackColor)5)]
// Dependencies Fusion.Behaviour, Fusion.NetworkBehaviour, Fusion.NetworkObject::ObjectInterestModes, Fusion.NetworkObjectFlags, Fusion.NetworkObjectRuntimeFlags, Fusion.NetworkObjectTypeId, Fusion.RenderSource
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObject
class CORDL_TYPE NetworkObject : public ::Fusion::Behaviour {
public:
// Declarations
using PriorityLevelDelegate = ::Fusion::NetworkObject_PriorityLevelDelegate;

using ReplicateToDelegate = ::Fusion::NetworkObject_ReplicateToDelegate;

using ObjectInterestModes = ::GlobalNamespace::NetworkObject_ObjectInterestModes;

 __declspec(property(get=get_BehaviourChangedTickArray)) ::System::ReadOnlySpan_1<int32_t>  BehaviourChangedTickArray;

 __declspec(property(get=get_Data)) ::System::Span_1<int32_t>  Data;

/// @brief Field Flags, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Flags, put=__cordl_internal_set_Flags)) ::Fusion::NetworkObjectFlags  Flags;

/// @brief Field ForceRemoteRenderTimeframe, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_ForceRemoteRenderTimeframe, put=__cordl_internal_set_ForceRemoteRenderTimeframe)) bool  ForceRemoteRenderTimeframe;

 __declspec(property(get=get_HasInputAuthority)) bool  HasInputAuthority;

 __declspec(property(get=get_HasStateAuthority)) bool  HasStateAuthority;

 __declspec(property(get=get_Header)) ::Fusion::NetworkObjectHeader  Header;

 __declspec(property(get=get_Id)) ::Fusion::NetworkId  Id;

 __declspec(property(get=get_InputAuthority)) ::Fusion::PlayerRef  InputAuthority;

 __declspec(property(get=get_IsInSimulation)) bool  IsInSimulation;

 __declspec(property(get=get_IsNested)) bool  IsNested;

 __declspec(property(get=get_IsProxy)) bool  IsProxy;

/// @brief Field IsResume, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsResume, put=__cordl_internal_set_IsResume)) bool  IsResume;

 __declspec(property(get=get_IsSpawnable, put=set_IsSpawnable)) bool  IsSpawnable;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_LastReceiveTick)) ::Fusion::Tick  LastReceiveTick;

/// @brief Field Meta, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Meta, put=__cordl_internal_set_Meta)) ::Fusion::NetworkObjectMeta*  Meta;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field NestedObjects, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_NestedObjects, put=__cordl_internal_set_NestedObjects)) ::ArrayW<::UnityW<::Fusion::NetworkObject>>  NestedObjects;

 __declspec(property(get=get_NestingRoot)) ::UnityW<::Fusion::NetworkObject>  NestingRoot;

/// @brief Field NetworkTypeId, offset 0x64, size 0x8 
 __declspec(property(get=__cordl_internal_get_NetworkTypeId, put=__cordl_internal_set_NetworkTypeId)) ::Fusion::NetworkObjectTypeId  NetworkTypeId;

/// @brief Field NetworkedBehaviours, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_NetworkedBehaviours, put=__cordl_internal_set_NetworkedBehaviours)) ::ArrayW<::UnityW<::Fusion::NetworkBehaviour>>  NetworkedBehaviours;

/// @brief Field ObjectInterest, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_ObjectInterest, put=__cordl_internal_set_ObjectInterest)) ::GlobalNamespace::NetworkObject_ObjectInterestModes  ObjectInterest;

/// @brief Field PriorityCallback, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_PriorityCallback, put=__cordl_internal_set_PriorityCallback)) ::Fusion::NetworkObject_PriorityLevelDelegate*  PriorityCallback;

/// @brief Field Ptr, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Ptr, put=__cordl_internal_set_Ptr)) int32_t*  Ptr;

 __declspec(property(get=get_RenderSource, put=set_RenderSource)) ::Fusion::RenderSource  RenderSource;

 __declspec(property(get=get_RenderTime)) float_t  RenderTime;

 __declspec(property(get=get_RenderTimeframe)) ::Fusion::RenderTimeframe  RenderTimeframe;

/// @brief Field ReplicateTo, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_ReplicateTo, put=__cordl_internal_set_ReplicateTo)) ::Fusion::NetworkObject_ReplicateToDelegate*  ReplicateTo;

 __declspec(property(get=get_Runner)) ::UnityW<::Fusion::NetworkRunner>  Runner;

/// @brief Field RuntimeFlags, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_RuntimeFlags, put=__cordl_internal_set_RuntimeFlags)) ::Fusion::NetworkObjectRuntimeFlags  RuntimeFlags;

 __declspec(property(get=get_Simulation)) ::Fusion::Simulation*  Simulation;

/// @brief Field SortKey, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_SortKey, put=__cordl_internal_set_SortKey)) uint32_t  SortKey;

 __declspec(property(get=get_StateAuthority)) ::Fusion::PlayerRef  StateAuthority;

/// @brief Field _renderSource, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__renderSource, put=__cordl_internal_set__renderSource)) ::Fusion::RenderSource  _renderSource;

/// @brief Field _runner, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__runner, put=__cordl_internal_set__runner)) ::UnityW<::Fusion::NetworkRunner>  _runner;

/// @brief Method AssignInputAuthority, addr 0x5fa9538, size 0x25c, virtual false, abstract: false, final false
inline void AssignInputAuthority(::Fusion::PlayerRef  player) ;

/// @brief Method Awake, addr 0x5fa8c10, size 0x188, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CopyStateFrom, addr 0x5fa99f0, size 0x2a0, virtual false, abstract: false, final false
inline void CopyStateFrom(::Fusion::NetworkObject*  source) ;

/// @brief Method CopyStateFrom, addr 0x5fa9c90, size 0x13c, virtual false, abstract: false, final false
inline void CopyStateFrom(::Fusion::NetworkObjectHeaderPtr  source) ;

/// @brief Method DebugAwake, addr 0x5fa8d98, size 0x10c, virtual false, abstract: false, final false
inline void DebugAwake() ;

/// @brief Method DebugOnDestroy, addr 0x5fa909c, size 0x148, virtual false, abstract: false, final false
inline void DebugOnDestroy(bool  wasActive) ;

/// @brief Method Defaults, addr 0x5fa9354, size 0x34, virtual false, abstract: false, final false
inline void Defaults() ;

/// @brief Method GetDumpString, addr 0x5faa000, size 0x1c0, virtual true, abstract: false, final false
inline void GetDumpString(::System::Text::StringBuilder*  builder) ;

/// @brief Method GetLocalAuthorityMask, addr 0x5fa9510, size 0x28, virtual false, abstract: false, final false
inline int32_t GetLocalAuthorityMask() ;

/// @brief Method GetWordCount, addr 0x5fa9388, size 0x188, virtual false, abstract: false, final false
static inline int32_t GetWordCount(::Fusion::NetworkObject*  obj) ;

/// @brief Method MakeOwned, addr 0x5fa9f3c, size 0xb8, virtual false, abstract: false, final false
inline void MakeOwned(::Fusion::NetworkRunner*  runner) ;

/// @brief Method MakeUnowned, addr 0x5fa9ff4, size 0xc, virtual false, abstract: false, final false
inline void MakeUnowned() ;

/// [NetworkDeserializeMethod]
/// @brief Method NetworkUnwrap, addr 0x5fa9e74, size 0xc8, virtual false, abstract: false, final false
static inline void NetworkUnwrap(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkId  wrapper, ::by_ref<::Fusion::NetworkObject*>  result) ;

/// [NetworkSerializeMethod]
/// @brief Method NetworkWrap, addr 0x5fa9e50, size 0x24, virtual false, abstract: false, final false
static inline ::Fusion::NetworkId NetworkWrap(::Fusion::NetworkObject*  obj) ;

/// [Obsolete("Use NetworkWrap(NetworkObject) instead")]
/// @brief Method NetworkWrap, addr 0x5fa9e2c, size 0x24, virtual false, abstract: false, final false
static inline ::Fusion::NetworkId NetworkWrap(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj) ;

static inline ::Fusion::NetworkObject* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5fa8ea4, size 0x1c, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDestroyInternal, addr 0x5fa8ec0, size 0x1dc, virtual false, abstract: false, final false
inline void OnDestroyInternal() ;

/// @brief Method OnDestroyNeverActive, addr 0x5fa91e4, size 0x13c, virtual false, abstract: false, final false
inline void OnDestroyNeverActive() ;

/// @brief Method PrepareBehaviourOrder, addr 0x5fa89dc, size 0x234, virtual false, abstract: false, final false
inline void PrepareBehaviourOrder() ;

/// @brief Method ReleaseStateAuthority, addr 0x5fa987c, size 0xe8, virtual false, abstract: false, final false
inline void ReleaseStateAuthority() ;

/// @brief Method RemoveInputAuthority, addr 0x5fa9964, size 0x8, virtual false, abstract: false, final false
inline void RemoveInputAuthority() ;

/// @brief Method RequestStateAuthority, addr 0x5fa9794, size 0xe8, virtual false, abstract: false, final false
inline void RequestStateAuthority() ;

/// @brief Method ResetNetworkState, addr 0x5fa9320, size 0x34, virtual false, abstract: false, final false
inline void ResetNetworkState() ;

/// @brief Method SetPlayerAlwaysInterested, addr 0x5fa9988, size 0x68, virtual false, abstract: false, final false
inline void SetPlayerAlwaysInterested(::Fusion::PlayerRef  player, bool  alwaysInterested) ;

constexpr ::Fusion::NetworkObjectFlags const& __cordl_internal_get_Flags() const;

constexpr ::Fusion::NetworkObjectFlags& __cordl_internal_get_Flags() ;

constexpr bool const& __cordl_internal_get_ForceRemoteRenderTimeframe() const;

constexpr bool& __cordl_internal_get_ForceRemoteRenderTimeframe() ;

constexpr bool const& __cordl_internal_get_IsResume() const;

constexpr bool& __cordl_internal_get_IsResume() ;

constexpr ::Fusion::NetworkObjectMeta* const& __cordl_internal_get_Meta() const;

constexpr ::Fusion::NetworkObjectMeta*& __cordl_internal_get_Meta() ;

constexpr ::ArrayW<::UnityW<::Fusion::NetworkObject>> const& __cordl_internal_get_NestedObjects() const;

constexpr ::ArrayW<::UnityW<::Fusion::NetworkObject>>& __cordl_internal_get_NestedObjects() ;

constexpr ::Fusion::NetworkObjectTypeId const& __cordl_internal_get_NetworkTypeId() const;

constexpr ::Fusion::NetworkObjectTypeId& __cordl_internal_get_NetworkTypeId() ;

constexpr ::ArrayW<::UnityW<::Fusion::NetworkBehaviour>> const& __cordl_internal_get_NetworkedBehaviours() const;

constexpr ::ArrayW<::UnityW<::Fusion::NetworkBehaviour>>& __cordl_internal_get_NetworkedBehaviours() ;

constexpr ::GlobalNamespace::NetworkObject_ObjectInterestModes const& __cordl_internal_get_ObjectInterest() const;

constexpr ::GlobalNamespace::NetworkObject_ObjectInterestModes& __cordl_internal_get_ObjectInterest() ;

constexpr ::Fusion::NetworkObject_PriorityLevelDelegate* const& __cordl_internal_get_PriorityCallback() const;

constexpr ::Fusion::NetworkObject_PriorityLevelDelegate*& __cordl_internal_get_PriorityCallback() ;

constexpr int32_t* const& __cordl_internal_get_Ptr() const;

constexpr int32_t*& __cordl_internal_get_Ptr() ;

constexpr ::Fusion::NetworkObject_ReplicateToDelegate* const& __cordl_internal_get_ReplicateTo() const;

constexpr ::Fusion::NetworkObject_ReplicateToDelegate*& __cordl_internal_get_ReplicateTo() ;

constexpr ::Fusion::NetworkObjectRuntimeFlags const& __cordl_internal_get_RuntimeFlags() const;

constexpr ::Fusion::NetworkObjectRuntimeFlags& __cordl_internal_get_RuntimeFlags() ;

constexpr uint32_t const& __cordl_internal_get_SortKey() const;

constexpr uint32_t& __cordl_internal_get_SortKey() ;

constexpr ::Fusion::RenderSource const& __cordl_internal_get__renderSource() const;

constexpr ::Fusion::RenderSource& __cordl_internal_get__renderSource() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get__runner() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get__runner() ;

constexpr void __cordl_internal_set_Flags(::Fusion::NetworkObjectFlags  value) ;

constexpr void __cordl_internal_set_ForceRemoteRenderTimeframe(bool  value) ;

constexpr void __cordl_internal_set_IsResume(bool  value) ;

constexpr void __cordl_internal_set_Meta(::Fusion::NetworkObjectMeta*  value) ;

constexpr void __cordl_internal_set_NestedObjects(::ArrayW<::UnityW<::Fusion::NetworkObject>>  value) ;

constexpr void __cordl_internal_set_NetworkTypeId(::Fusion::NetworkObjectTypeId  value) ;

constexpr void __cordl_internal_set_NetworkedBehaviours(::ArrayW<::UnityW<::Fusion::NetworkBehaviour>>  value) ;

constexpr void __cordl_internal_set_ObjectInterest(::GlobalNamespace::NetworkObject_ObjectInterestModes  value) ;

constexpr void __cordl_internal_set_PriorityCallback(::Fusion::NetworkObject_PriorityLevelDelegate*  value) ;

constexpr void __cordl_internal_set_Ptr(int32_t*  value) ;

constexpr void __cordl_internal_set_ReplicateTo(::Fusion::NetworkObject_ReplicateToDelegate*  value) ;

constexpr void __cordl_internal_set_RuntimeFlags(::Fusion::NetworkObjectRuntimeFlags  value) ;

constexpr void __cordl_internal_set_SortKey(uint32_t  value) ;

constexpr void __cordl_internal_set__renderSource(::Fusion::RenderSource  value) ;

constexpr void __cordl_internal_set__runner(::UnityW<::Fusion::NetworkRunner>  value) ;

/// @brief Method .ctor, addr 0x5faa1c0, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BehaviourChangedTickArray, addr 0x5fa833c, size 0x110, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<int32_t> get_BehaviourChangedTickArray() ;

/// @brief Method get_Data, addr 0x5fa82c8, size 0x74, virtual false, abstract: false, final false
inline ::System::Span_1<int32_t> get_Data() ;

/// @brief Method get_HasInputAuthority, addr 0x5fa844c, size 0xcc, virtual false, abstract: false, final false
inline bool get_HasInputAuthority() ;

/// @brief Method get_HasStateAuthority, addr 0x5fa8518, size 0x84, virtual false, abstract: false, final false
inline bool get_HasStateAuthority() ;

/// @brief Method get_Header, addr 0x5fa82c0, size 0x8, virtual false, abstract: false, final false
inline ::by_ref<::Fusion::NetworkObjectHeader> get_Header() ;

/// @brief Method get_Id, addr 0x5fa807c, size 0x18, virtual false, abstract: false, final false
inline ::Fusion::NetworkId get_Id() ;

/// @brief Method get_InputAuthority, addr 0x5fa88e0, size 0x64, virtual false, abstract: false, final false
inline ::Fusion::PlayerRef get_InputAuthority() ;

/// @brief Method get_IsInSimulation, addr 0x5fa82b4, size 0xc, virtual false, abstract: false, final false
inline bool get_IsInSimulation() ;

/// @brief Method get_IsNested, addr 0x5fa86e0, size 0xc, virtual false, abstract: false, final false
inline bool get_IsNested() ;

/// @brief Method get_IsProxy, addr 0x5fa859c, size 0x144, virtual false, abstract: false, final false
inline bool get_IsProxy() ;

/// @brief Method get_IsSpawnable, addr 0x5fa89c8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsSpawnable() ;

/// @brief Method get_IsValid, addr 0x5fa822c, size 0x88, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_LastReceiveTick, addr 0x5fa809c, size 0x20, virtual false, abstract: false, final false
inline ::Fusion::Tick get_LastReceiveTick() ;

/// @brief Method get_Name, addr 0x5fa80bc, size 0xf4, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NestingRoot, addr 0x5fa86ec, size 0x9c, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkObject> get_NestingRoot() ;

/// @brief Method get_RenderSource, addr 0x5fa8828, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::RenderSource get_RenderSource() ;

/// @brief Method get_RenderTime, addr 0x5fa8838, size 0xa8, virtual false, abstract: false, final false
inline float_t get_RenderTime() ;

/// @brief Method get_RenderTimeframe, addr 0x5fa8788, size 0xa0, virtual false, abstract: false, final false
inline ::Fusion::RenderTimeframe get_RenderTimeframe() ;

/// @brief Method get_Runner, addr 0x5fa8094, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkRunner> get_Runner() ;

/// @brief Method get_Simulation, addr 0x5fa81b0, size 0x7c, virtual false, abstract: false, final false
inline ::Fusion::Simulation* get_Simulation() ;

/// @brief Method get_StateAuthority, addr 0x5fa8944, size 0x84, virtual false, abstract: false, final false
inline ::Fusion::PlayerRef get_StateAuthority() ;

/// @brief Method op_Implicit, addr 0x5fa996c, size 0x1c, virtual false, abstract: false, final false
static inline ::Fusion::NetworkId op_Implicit___Fusion__NetworkId(::Fusion::NetworkObject*  obj) ;

/// @brief Method set_IsSpawnable, addr 0x5fa89d8, size 0x4, virtual false, abstract: false, final false
inline void set_IsSpawnable(bool  value) ;

/// @brief Method set_RenderSource, addr 0x5fa8830, size 0x8, virtual false, abstract: false, final false
inline void set_RenderSource(::Fusion::RenderSource  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObject(NetworkObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObject(NetworkObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19121};

/// @brief Field Ptr, offset: 0x20, size: 0x8, def value: None
 int32_t*  ___Ptr;

/// @brief Field IsResume, offset: 0x28, size: 0x1, def value: None
 bool  ___IsResume;

/// @brief Field _runner, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  ____runner;

/// @brief Field Meta, offset: 0x38, size: 0x8, def value: None
 ::Fusion::NetworkObjectMeta*  ___Meta;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field SortKey, offset: 0x40, size: 0x4, def value: None
 uint32_t  ___SortKey;

/// [Obsolete("not used anymore, use interest management instead")]
/// @brief Field ReplicateTo, offset: 0x48, size: 0x8, def value: None
 ::Fusion::NetworkObject_ReplicateToDelegate*  ___ReplicateTo;

/// @brief Field PriorityCallback, offset: 0x50, size: 0x8, def value: None
 ::Fusion::NetworkObject_PriorityLevelDelegate*  ___PriorityCallback;

/// [InlineHelp]
/// [SerializeField]
/// [FormerlySerializedAs("AoiMode")]
/// @brief Field ObjectInterest, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::NetworkObject_ObjectInterestModes  ___ObjectInterest;

/// [InlineHelp]
/// @brief Field Flags, offset: 0x5c, size: 0x4, def value: None
 ::Fusion::NetworkObjectFlags  ___Flags;

/// @brief Field RuntimeFlags, offset: 0x60, size: 0x4, def value: None
 ::Fusion::NetworkObjectRuntimeFlags  ___RuntimeFlags;

/// @brief Field NetworkTypeId, offset: 0x64, size: 0x8, def value: None
 ::Fusion::NetworkObjectTypeId  ___NetworkTypeId;

/// [InlineHelp]
/// @brief Field NestedObjects, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Fusion::NetworkObject>>  ___NestedObjects;

/// [InlineHelp]
/// @brief Field NetworkedBehaviours, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Fusion::NetworkBehaviour>>  ___NetworkedBehaviours;

/// @brief Field _renderSource, offset: 0x80, size: 0x4, def value: None
 ::Fusion::RenderSource  ____renderSource;

/// @brief Field ForceRemoteRenderTimeframe, offset: 0x84, size: 0x1, def value: None
 bool  ___ForceRemoteRenderTimeframe;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObject, ___Ptr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObject, ___IsResume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObject, ____runner) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObject, ___Meta) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObject, ___SortKey) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObject, ___ReplicateTo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObject, ___PriorityCallback) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObject, ___ObjectInterest) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObject, ___Flags) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObject, ___RuntimeFlags) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObject, ___NetworkTypeId) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObject, ___NestedObjects) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObject, ___NetworkedBehaviours) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObject, ____renderSource) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObject, ___ForceRemoteRenderTimeframe) == 0x84, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObject) == 0x88, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.MulticastDelegate
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObject/PriorityLevelDelegate
class CORDL_TYPE NetworkObject_PriorityLevelDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5faa4dc, size 0x94, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Fusion::NetworkObject*  networkObject, ::Fusion::PlayerRef  player, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5faa570, size 0x28, virtual true, abstract: false, final false
inline ::Fusion::PriorityLevel EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5faa4c4, size 0x18, virtual true, abstract: false, final false
inline ::Fusion::PriorityLevel Invoke(::Fusion::NetworkObject*  networkObject, ::Fusion::PlayerRef  player) ;

static inline ::Fusion::NetworkObject_PriorityLevelDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5faa3b8, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObject_PriorityLevelDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObject_PriorityLevelDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObject_PriorityLevelDelegate(NetworkObject_PriorityLevelDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObject_PriorityLevelDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObject_PriorityLevelDelegate(NetworkObject_PriorityLevelDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19119};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkObject_PriorityLevelDelegate) == 0x80, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.MulticastDelegate
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObject/ReplicateToDelegate
class CORDL_TYPE NetworkObject_ReplicateToDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5faa2fc, size 0x94, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Fusion::NetworkObject*  networkObject, ::Fusion::PlayerRef  player, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5faa390, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5faa2e4, size 0x18, virtual true, abstract: false, final false
inline bool Invoke(::Fusion::NetworkObject*  networkObject, ::Fusion::PlayerRef  player) ;

static inline ::Fusion::NetworkObject_ReplicateToDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5faa1d8, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObject_ReplicateToDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObject_ReplicateToDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObject_ReplicateToDelegate(NetworkObject_ReplicateToDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObject_ReplicateToDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObject_ReplicateToDelegate(NetworkObject_ReplicateToDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19118};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkObject_ReplicateToDelegate) == 0x80, "Size mismatch!");

} // namespace end def Fusion
