#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleEventSequencer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleEventSequencer_OnCompleteAction_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleEventSequencer)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class ServerTimeSyncRule;
}
namespace GlobalNamespace {
struct SimpleEventSequencer_OnCompleteAction;
}
namespace GlobalNamespace {
class SimpleEventSequencer_SimpleEventSequencerNode;
}
namespace GlobalNamespace {
struct SimpleEventSequencer__StartSequenceDelayed_d__11;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleEventSequencer;
}
namespace GlobalNamespace {
class SimpleEventSequencer_SimpleEventSequencerNode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SimpleEventSequencer*);
MARK_REF_T(::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleEventSequencer*, "", "SimpleEventSequencer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*, "", "SimpleEventSequencer/SimpleEventSequencerNode");
// Dependencies SimpleEventSequencer::OnCompleteAction, SimpleEventSequencer::SimpleEventSequencerNode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SimpleEventSequencer
class CORDL_TYPE SimpleEventSequencer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OnCompleteAction = ::GlobalNamespace::SimpleEventSequencer_OnCompleteAction;

using SimpleEventSequencerNode = ::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode;

using _StartSequenceDelayed_d__11 = ::GlobalNamespace::SimpleEventSequencer__StartSequenceDelayed_d__11;

/// @brief Field activeNode, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeNode, put=__cordl_internal_set_activeNode)) ::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*  activeNode;

/// @brief Field enabledNodes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_enabledNodes, put=__cordl_internal_set_enabledNodes)) ::System::Collections::Generic::List_1<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>*  enabledNodes;

/// @brief Field idx, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_idx, put=__cordl_internal_set_idx)) int32_t  idx;

/// @brief Field nodes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodes, put=__cordl_internal_set_nodes)) ::ArrayW<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>  nodes;

/// @brief Field onComplete, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_onComplete, put=__cordl_internal_set_onComplete)) ::GlobalNamespace::SimpleEventSequencer_OnCompleteAction  onComplete;

/// @brief Field serverTimeSync, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverTimeSync, put=__cordl_internal_set_serverTimeSync)) ::UnityW<::GlobalNamespace::ServerTimeSyncRule>  serverTimeSync;

/// @brief Field startOnEnable, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_startOnEnable, put=__cordl_internal_set_startOnEnable)) bool  startOnEnable;

/// @brief Field startTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) float_t  startTime;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x5b1f5e0, size 0x118, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearOnCompleteAction, addr 0x5b1fa44, size 0x8, virtual false, abstract: false, final false
inline void ClearOnCompleteAction() ;

/// @brief Method DebugLog, addr 0x5b1fc98, size 0xc4, virtual false, abstract: false, final false
inline void DebugLog(::StringW  text) ;

/// @brief Method IGorillaSliceableSimple.SliceUpdate, addr 0x5b1f738, size 0x160, virtual true, abstract: false, final true
inline void IGorillaSliceableSimple_SliceUpdate() ;

static inline ::GlobalNamespace::SimpleEventSequencer* New_ctor() ;

/// @brief Method OnDisable, addr 0x5b1f72c, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5b1f6f8, size 0x34, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetOnCompleteActionDisable, addr 0x5b1fa2c, size 0xc, virtual false, abstract: false, final false
inline void SetOnCompleteActionDisable() ;

/// @brief Method SetOnCompleteActionRepeat, addr 0x5b1fa38, size 0xc, virtual false, abstract: false, final false
inline void SetOnCompleteActionRepeat() ;

/// @brief Method StartSequence, addr 0x5b1f4c8, size 0x8, virtual false, abstract: false, final false
inline void StartSequence() ;

/// [AsyncStateMachine(typeof(SimpleEventSequencer::<StartSequenceDelayed>d__11))]
/// @brief Method StartSequenceDelayed, addr 0x5b1f4d0, size 0xb8, virtual false, abstract: false, final false
inline void StartSequenceDelayed(float_t  delay) ;

/// @brief Method Temp, addr 0x5b1fbd4, size 0xc4, virtual false, abstract: false, final false
inline void Temp(::StringW  text) ;

/// @brief Method TempAudio, addr 0x5b1fa4c, size 0xc4, virtual false, abstract: false, final false
inline void TempAudio(::StringW  text) ;

/// @brief Method TempVFX, addr 0x5b1fb10, size 0xc4, virtual false, abstract: false, final false
inline void TempVFX(::StringW  text) ;

constexpr ::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode* const& __cordl_internal_get_activeNode() const;

constexpr ::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*& __cordl_internal_get_activeNode() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>* const& __cordl_internal_get_enabledNodes() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>*& __cordl_internal_get_enabledNodes() ;

constexpr int32_t const& __cordl_internal_get_idx() const;

constexpr int32_t& __cordl_internal_get_idx() ;

constexpr ::ArrayW<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*> const& __cordl_internal_get_nodes() const;

constexpr ::ArrayW<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>& __cordl_internal_get_nodes() ;

constexpr ::GlobalNamespace::SimpleEventSequencer_OnCompleteAction const& __cordl_internal_get_onComplete() const;

constexpr ::GlobalNamespace::SimpleEventSequencer_OnCompleteAction& __cordl_internal_get_onComplete() ;

constexpr ::UnityW<::GlobalNamespace::ServerTimeSyncRule> const& __cordl_internal_get_serverTimeSync() const;

constexpr ::UnityW<::GlobalNamespace::ServerTimeSyncRule>& __cordl_internal_get_serverTimeSync() ;

constexpr bool const& __cordl_internal_get_startOnEnable() const;

constexpr bool& __cordl_internal_get_startOnEnable() ;

constexpr float_t const& __cordl_internal_get_startTime() const;

constexpr float_t& __cordl_internal_get_startTime() ;

constexpr void __cordl_internal_set_activeNode(::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*  value) ;

constexpr void __cordl_internal_set_enabledNodes(::System::Collections::Generic::List_1<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>*  value) ;

constexpr void __cordl_internal_set_idx(int32_t  value) ;

constexpr void __cordl_internal_set_nodes(::ArrayW<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>  value) ;

constexpr void __cordl_internal_set_onComplete(::GlobalNamespace::SimpleEventSequencer_OnCompleteAction  value) ;

constexpr void __cordl_internal_set_serverTimeSync(::UnityW<::GlobalNamespace::ServerTimeSyncRule>  value) ;

constexpr void __cordl_internal_set_startOnEnable(bool  value) ;

constexpr void __cordl_internal_set_startTime(float_t  value) ;

/// @brief Method .ctor, addr 0x5b1fd5c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Method onValueChanged, addr 0x5b1f898, size 0x78, virtual false, abstract: false, final false
inline void onValueChanged() ;

/// @brief Method startSequenceFrom, addr 0x5b1f5a8, size 0x2c, virtual false, abstract: false, final false
inline void startSequenceFrom(int32_t  i) ;

/// @brief Method startSequenceImmediate, addr 0x5b1f588, size 0x20, virtual false, abstract: false, final false
inline void startSequenceImmediate() ;

/// @brief Method stop, addr 0x5b1f5d4, size 0xc, virtual false, abstract: false, final false
inline void stop(int32_t  i) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleEventSequencer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleEventSequencer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleEventSequencer(SimpleEventSequencer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleEventSequencer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleEventSequencer(SimpleEventSequencer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3598};

/// [SerializeField]
/// @brief Field nodes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>  ___nodes;

/// [SerializeField]
/// @brief Field startOnEnable, offset: 0x28, size: 0x1, def value: None
 bool  ___startOnEnable;

/// [SerializeField]
/// @brief Field onComplete, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::SimpleEventSequencer_OnCompleteAction  ___onComplete;

/// [SerializeField]
/// @brief Field serverTimeSync, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ServerTimeSyncRule>  ___serverTimeSync;

/// @brief Field startTime, offset: 0x38, size: 0x4, def value: None
 float_t  ___startTime;

/// @brief Field idx, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___idx;

/// @brief Field enabledNodes, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>*  ___enabledNodes;

/// @brief Field activeNode, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*  ___activeNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer, ___nodes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer, ___startOnEnable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer, ___onComplete) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer, ___serverTimeSync) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer, ___startTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer, ___idx) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer, ___enabledNodes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer, ___activeNode) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleEventSequencer) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SimpleEventSequencer/SimpleEventSequencerNode
class CORDL_TYPE SimpleEventSequencer_SimpleEventSequencerNode : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Enabled)) bool  Enabled;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Time)) float_t  Time;

 __declspec(property(put=set_TotalTime)) float_t  TotalTime;

 __declspec(property(get=get_UnityEvent)) ::UnityEngine::Events::UnityEvent*  UnityEvent;

/// @brief Field enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_enabled, put=__cordl_internal_set_enabled)) bool  enabled;

/// @brief Field fancyName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_fancyName, put=__cordl_internal_set_fancyName)) ::StringW  fancyName;

/// @brief Field name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

 __declspec(property(get=get_nameTrim)) ::StringW  nameTrim;

/// @brief Field notes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_notes, put=__cordl_internal_set_notes)) ::StringW  notes;

 __declspec(property(get=get_notesTrim)) ::StringW  notesTrim;

/// @brief Field time, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_time, put=__cordl_internal_set_time)) float_t  time;

/// @brief Field totalTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalTime, put=__cordl_internal_set_totalTime)) float_t  totalTime;

/// @brief Field unityEvent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_unityEvent, put=__cordl_internal_set_unityEvent)) ::UnityEngine::Events::UnityEvent*  unityEvent;

static inline ::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode* New_ctor() ;

constexpr bool const& __cordl_internal_get_enabled() const;

constexpr bool& __cordl_internal_get_enabled() ;

constexpr ::StringW const& __cordl_internal_get_fancyName() const;

constexpr ::StringW& __cordl_internal_get_fancyName() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::StringW const& __cordl_internal_get_notes() const;

constexpr ::StringW& __cordl_internal_get_notes() ;

constexpr float_t const& __cordl_internal_get_time() const;

constexpr float_t& __cordl_internal_get_time() ;

constexpr float_t const& __cordl_internal_get_totalTime() const;

constexpr float_t& __cordl_internal_get_totalTime() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_unityEvent() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_unityEvent() ;

constexpr void __cordl_internal_set_enabled(bool  value) ;

constexpr void __cordl_internal_set_fancyName(::StringW  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_notes(::StringW  value) ;

constexpr void __cordl_internal_set_time(float_t  value) ;

constexpr void __cordl_internal_set_totalTime(float_t  value) ;

constexpr void __cordl_internal_set_unityEvent(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x5b1ff18, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Enabled, addr 0x5b1ff10, size 0x8, virtual false, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Method get_Name, addr 0x5b1ff00, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Time, addr 0x5b1fef0, size 0x8, virtual false, abstract: false, final false
inline float_t get_Time() ;

/// @brief Method get_UnityEvent, addr 0x5b1fef8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_UnityEvent() ;

/// @brief Method get_nameTrim, addr 0x5b1fdf8, size 0x7c, virtual false, abstract: false, final false
inline ::StringW get_nameTrim() ;

/// @brief Method get_notesTrim, addr 0x5b1fe74, size 0x7c, virtual false, abstract: false, final false
inline ::StringW get_notesTrim() ;

/// @brief Method onValueChanged, addr 0x5b1f910, size 0x11c, virtual false, abstract: false, final false
inline void onValueChanged() ;

/// @brief Method set_TotalTime, addr 0x5b1ff08, size 0x8, virtual false, abstract: false, final false
inline void set_TotalTime(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleEventSequencer_SimpleEventSequencerNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleEventSequencer_SimpleEventSequencerNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleEventSequencer_SimpleEventSequencerNode(SimpleEventSequencer_SimpleEventSequencerNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleEventSequencer_SimpleEventSequencerNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleEventSequencer_SimpleEventSequencerNode(SimpleEventSequencer_SimpleEventSequencerNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3595};

/// [Tooltip("Uncheck to skip this node")]
/// [SerializeField]
/// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
 bool  ___enabled;

/// [Tooltip("Seconds after the previous node\'s events are dispatched")]
/// [SerializeField]
/// @brief Field time, offset: 0x14, size: 0x4, def value: None
 float_t  ___time;

/// [Tooltip("This is just for legibilty. Doesn\'t matter what you name it.")]
/// [SerializeField]
/// @brief Field name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___name;

/// [SerializeField]
/// @brief Field unityEvent, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___unityEvent;

/// [SerializeField]
/// [TextArea(5, 10)]
/// @brief Field notes, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___notes;

/// @brief Field fancyName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___fancyName;

/// @brief Field totalTime, offset: 0x38, size: 0x4, def value: None
 float_t  ___totalTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode, ___enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode, ___time) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode, ___unityEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode, ___notes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode, ___fancyName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode, ___totalTime) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
