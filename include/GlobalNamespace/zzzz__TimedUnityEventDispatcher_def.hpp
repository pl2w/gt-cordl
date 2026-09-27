#pragma once
// IWYU pragma private; include "GlobalNamespace/TimedUnityEventDispatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TimedUnityEventDispatcher_ReadyState_def.hpp"
#include "GlobalNamespace/zzzz__TimedUnityEventDispatcher_TimedUnityEventDispatcherMode_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TimedUnityEventDispatcher)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
struct TimedUnityEventDispatcher_ReadyState;
}
namespace GlobalNamespace {
struct TimedUnityEventDispatcher_TimedUnityEventDispatcherMode;
}
namespace GlobalNamespace {
class TimedUnityEventDispatcher_TimedUnityEventDispatcherNode;
}
namespace GlobalNamespace {
struct TimedUnityEventDispatcher__Initialize_d__10;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
struct TimeSpan;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class TimedUnityEventDispatcher;
}
namespace GlobalNamespace {
class TimedUnityEventDispatcher_TimedUnityEventDispatcherNode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TimedUnityEventDispatcher*);
MARK_REF_T(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimedUnityEventDispatcher*, "", "TimedUnityEventDispatcher");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*, "", "TimedUnityEventDispatcher/TimedUnityEventDispatcherNode");
// Dependencies TimedUnityEventDispatcher::ReadyState, TimedUnityEventDispatcher::TimedUnityEventDispatcherMode, TimedUnityEventDispatcher::TimedUnityEventDispatcherNode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TimedUnityEventDispatcher
class CORDL_TYPE TimedUnityEventDispatcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ReadyState = ::GlobalNamespace::TimedUnityEventDispatcher_ReadyState;

using TimedUnityEventDispatcherMode = ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherMode;

using TimedUnityEventDispatcherNode = ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode;

using _Initialize_d__10 = ::GlobalNamespace::TimedUnityEventDispatcher__Initialize_d__10;

/// @brief Field activeNodeIndex, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_activeNodeIndex, put=__cordl_internal_set_activeNodeIndex)) int32_t  activeNodeIndex;

/// @brief Field dateTime, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dateTime, put=__cordl_internal_set_dateTime)) ::StringW  dateTime;

/// @brief Field mode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherMode  mode;

/// @brief Field nodeList, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeList, put=__cordl_internal_set_nodeList)) ::System::Collections::Generic::List_1<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>*  nodeList;

/// @brief Field nodes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodes, put=__cordl_internal_set_nodes)) ::ArrayW<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>  nodes;

/// @brief Field readyState, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_readyState, put=__cordl_internal_set_readyState)) ::GlobalNamespace::TimedUnityEventDispatcher_ReadyState  readyState;

/// @brief Field titleDataKey, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleDataKey, put=__cordl_internal_set_titleDataKey)) ::StringW  titleDataKey;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method IGorillaSliceableSimple.SliceUpdate, addr 0x5b35220, size 0x3c4, virtual true, abstract: false, final true
inline void IGorillaSliceableSimple_SliceUpdate() ;

/// [AsyncStateMachine(typeof(TimedUnityEventDispatcher::<Initialize>d__10))]
/// @brief Method Initialize, addr 0x5b34ce8, size 0xa8, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::TimedUnityEventDispatcher* New_ctor() ;

/// @brief Method OnDisable, addr 0x5b35214, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5b351f4, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method StartNow, addr 0x5b35090, size 0x4c, virtual false, abstract: false, final false
inline void StartNow(float_t  delay) ;

constexpr int32_t const& __cordl_internal_get_activeNodeIndex() const;

constexpr int32_t& __cordl_internal_get_activeNodeIndex() ;

constexpr ::StringW const& __cordl_internal_get_dateTime() const;

constexpr ::StringW& __cordl_internal_get_dateTime() ;

constexpr ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherMode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherMode& __cordl_internal_get_mode() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>* const& __cordl_internal_get_nodeList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>*& __cordl_internal_get_nodeList() ;

constexpr ::ArrayW<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*> const& __cordl_internal_get_nodes() const;

constexpr ::ArrayW<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>& __cordl_internal_get_nodes() ;

constexpr ::GlobalNamespace::TimedUnityEventDispatcher_ReadyState const& __cordl_internal_get_readyState() const;

constexpr ::GlobalNamespace::TimedUnityEventDispatcher_ReadyState& __cordl_internal_get_readyState() ;

constexpr ::StringW const& __cordl_internal_get_titleDataKey() const;

constexpr ::StringW& __cordl_internal_get_titleDataKey() ;

constexpr void __cordl_internal_set_activeNodeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_dateTime(::StringW  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherMode  value) ;

constexpr void __cordl_internal_set_nodeList(::System::Collections::Generic::List_1<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>*  value) ;

constexpr void __cordl_internal_set_nodes(::ArrayW<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>  value) ;

constexpr void __cordl_internal_set_readyState(::GlobalNamespace::TimedUnityEventDispatcher_ReadyState  value) ;

constexpr void __cordl_internal_set_titleDataKey(::StringW  value) ;

/// @brief Method .ctor, addr 0x5b35710, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Method onDateRetrieved, addr 0x5b34d90, size 0x188, virtual false, abstract: false, final false
inline void onDateRetrieved(::StringW  s) ;

/// @brief Method onTDError, addr 0x5b35158, size 0x9c, virtual false, abstract: false, final false
inline void onTDError(::PlayFab::PlayFabError*  error) ;

/// @brief Method setStartDate, addr 0x5b34f18, size 0x178, virtual false, abstract: false, final false
inline void setStartDate(::System::DateTime  d) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimedUnityEventDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimedUnityEventDispatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimedUnityEventDispatcher(TimedUnityEventDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimedUnityEventDispatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimedUnityEventDispatcher(TimedUnityEventDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3677};

/// [SerializeField]
/// @brief Field mode, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherMode  ___mode;

/// [SerializeField]
/// @brief Field dateTime, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___dateTime;

/// [SerializeField]
/// @brief Field titleDataKey, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___titleDataKey;

/// [SerializeField]
/// @brief Field nodes, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>  ___nodes;

/// @brief Field readyState, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::TimedUnityEventDispatcher_ReadyState  ___readyState;

/// @brief Field nodeList, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>*  ___nodeList;

/// @brief Field activeNodeIndex, offset: 0x50, size: 0x4, def value: None
 int32_t  ___activeNodeIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimedUnityEventDispatcher, ___mode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimedUnityEventDispatcher, ___dateTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimedUnityEventDispatcher, ___titleDataKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimedUnityEventDispatcher, ___nodes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimedUnityEventDispatcher, ___readyState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimedUnityEventDispatcher, ___nodeList) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimedUnityEventDispatcher, ___activeNodeIndex) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimedUnityEventDispatcher) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.DateTime, System.Object, System.TimeSpan
namespace GlobalNamespace {
// Is value type: false
// CS Name: TimedUnityEventDispatcher/TimedUnityEventDispatcherNode
class CORDL_TYPE TimedUnityEventDispatcher_TimedUnityEventDispatcherNode : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ActivationDelay, put=set_ActivationDelay)) ::System::TimeSpan  ActivationDelay;

 __declspec(property(get=get_ActivationTime, put=set_ActivationTime)) ::System::DateTime  ActivationTime;

 __declspec(property(get=get_SubphaseOrder)) int32_t  SubphaseOrder;

/// @brief Field <ActivationDelay>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__ActivationDelay_k__BackingField, put=__cordl_internal_set__ActivationDelay_k__BackingField)) ::System::TimeSpan  _ActivationDelay_k__BackingField;

/// @brief Field <ActivationTime>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ActivationTime_k__BackingField, put=__cordl_internal_set__ActivationTime_k__BackingField)) ::System::DateTime  _ActivationTime_k__BackingField;

/// @brief Field afterEvent, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_afterEvent, put=__cordl_internal_set_afterEvent)) bool  afterEvent;

/// @brief Field hrs, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_hrs, put=__cordl_internal_set_hrs)) int32_t  hrs;

/// @brief Field min, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_min, put=__cordl_internal_set_min)) int32_t  min;

/// @brief Field payload, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_payload, put=__cordl_internal_set_payload)) ::UnityEngine::Events::UnityEvent*  payload;

/// @brief Field persistantPayload, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_persistantPayload, put=__cordl_internal_set_persistantPayload)) ::UnityEngine::Events::UnityEvent_1<float_t>*  persistantPayload;

/// @brief Field sec, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_sec, put=__cordl_internal_set_sec)) int32_t  sec;

/// @brief Field subphase, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_subphase, put=__cordl_internal_set_subphase)) int32_t  subphase;

/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>"
constexpr operator  ::System::IComparable_1<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>*() noexcept;

/// @brief Method Activate, addr 0x5b35708, size 0x8, virtual false, abstract: false, final false
inline void Activate() ;

/// @brief Method Activate, addr 0x5b35808, size 0x88, virtual false, abstract: false, final false
inline void Activate(float_t  late) ;

/// @brief Method Activate, addr 0x5b355e4, size 0xb8, virtual false, abstract: false, final false
inline void Activate(::System::DateTime  now) ;

/// @brief Method ActivatePersistent, addr 0x5b3569c, size 0x6c, virtual false, abstract: false, final false
inline void ActivatePersistent(float_t  late) ;

/// @brief Method Initialize, addr 0x5b357c0, size 0x48, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method Initialize, addr 0x5b350dc, size 0x7c, virtual false, abstract: false, final false
inline void Initialize(::System::DateTime  refTime) ;

static inline ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode* New_ctor() ;

/// @brief Method System.IComparable<TimedUnityEventDispatcher.TimedUnityEventDispatcherNode>.CompareTo, addr 0x5b35890, size 0x74, virtual true, abstract: false, final true
inline int32_t System_IComparable_TimedUnityEventDispatcher_TimedUnityEventDispatcherNode__CompareTo(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*  other) ;

constexpr ::System::TimeSpan const& __cordl_internal_get__ActivationDelay_k__BackingField() const;

constexpr ::System::TimeSpan& __cordl_internal_get__ActivationDelay_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__ActivationTime_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__ActivationTime_k__BackingField() ;

constexpr bool const& __cordl_internal_get_afterEvent() const;

constexpr bool& __cordl_internal_get_afterEvent() ;

constexpr int32_t const& __cordl_internal_get_hrs() const;

constexpr int32_t& __cordl_internal_get_hrs() ;

constexpr int32_t const& __cordl_internal_get_min() const;

constexpr int32_t& __cordl_internal_get_min() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_payload() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_payload() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get_persistantPayload() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get_persistantPayload() ;

constexpr int32_t const& __cordl_internal_get_sec() const;

constexpr int32_t& __cordl_internal_get_sec() ;

constexpr int32_t const& __cordl_internal_get_subphase() const;

constexpr int32_t& __cordl_internal_get_subphase() ;

constexpr void __cordl_internal_set__ActivationDelay_k__BackingField(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set__ActivationTime_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set_afterEvent(bool  value) ;

constexpr void __cordl_internal_set_hrs(int32_t  value) ;

constexpr void __cordl_internal_set_min(int32_t  value) ;

constexpr void __cordl_internal_set_payload(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_persistantPayload(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set_sec(int32_t  value) ;

constexpr void __cordl_internal_set_subphase(int32_t  value) ;

/// @brief Method .ctor, addr 0x5b35904, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_ActivationDelay, addr 0x5b357b0, size 0x8, virtual false, abstract: false, final false
inline ::System::TimeSpan get_ActivationDelay() ;

/// [CompilerGenerated]
/// @brief Method get_ActivationTime, addr 0x5b357a0, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_ActivationTime() ;

/// @brief Method get_SubphaseOrder, addr 0x5b35798, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SubphaseOrder() ;

/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>"
constexpr ::System::IComparable_1<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>* i___System__IComparable_1___GlobalNamespace__TimedUnityEventDispatcher_TimedUnityEventDispatcherNode__() noexcept;

/// [CompilerGenerated]
/// @brief Method set_ActivationDelay, addr 0x5b357b8, size 0x8, virtual false, abstract: false, final false
inline void set_ActivationDelay(::System::TimeSpan  value) ;

/// [CompilerGenerated]
/// @brief Method set_ActivationTime, addr 0x5b357a8, size 0x8, virtual false, abstract: false, final false
inline void set_ActivationTime(::System::DateTime  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimedUnityEventDispatcher_TimedUnityEventDispatcherNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimedUnityEventDispatcher_TimedUnityEventDispatcherNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimedUnityEventDispatcher_TimedUnityEventDispatcherNode(TimedUnityEventDispatcher_TimedUnityEventDispatcherNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimedUnityEventDispatcher_TimedUnityEventDispatcherNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimedUnityEventDispatcher_TimedUnityEventDispatcherNode(TimedUnityEventDispatcher_TimedUnityEventDispatcherNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3675};

/// [SerializeField]
/// @brief Field subphase, offset: 0x10, size: 0x4, def value: None
 int32_t  ___subphase;

/// [SerializeField]
/// @brief Field afterEvent, offset: 0x14, size: 0x1, def value: None
 bool  ___afterEvent;

/// [SerializeField]
/// @brief Field hrs, offset: 0x18, size: 0x4, def value: None
 int32_t  ___hrs;

/// [SerializeField]
/// @brief Field min, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___min;

/// [SerializeField]
/// @brief Field sec, offset: 0x20, size: 0x4, def value: None
 int32_t  ___sec;

/// [SerializeField]
/// @brief Field payload, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___payload;

/// [SerializeField]
/// @brief Field persistantPayload, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ___persistantPayload;

/// [CompilerGenerated]
/// @brief Field <ActivationTime>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::System::DateTime  ____ActivationTime_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ActivationDelay>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::System::TimeSpan  ____ActivationDelay_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode, ___subphase) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode, ___afterEvent) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode, ___hrs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode, ___min) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode, ___sec) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode, ___payload) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode, ___persistantPayload) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode, ____ActivationTime_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode, ____ActivationDelay_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
