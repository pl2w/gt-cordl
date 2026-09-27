#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateHistory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputStateHistory)
namespace GlobalNamespace {
struct InputStateHistory_Enumerator;
}
namespace GlobalNamespace {
struct InputStateHistory_RecordHeader;
}
namespace GlobalNamespace {
struct InputStateHistory_Record;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputStateHistory;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::LowLevel::InputStateHistory*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::LowLevel::InputStateHistory*, "UnityEngine.InputSystem.LowLevel", "InputStateHistory");
// [DefaultMember("Item")]
// Dependencies System.Nullable`1<T>, System.Object, Unity.Collections.NativeArray`1<T>, UnityEngine.InputSystem.InputControl, UnityEngine.InputSystem.LowLevel.InputUpdateType
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory
class CORDL_TYPE InputStateHistory : public ::System::Object {
public:
// Declarations
using Enumerator = ::GlobalNamespace::InputStateHistory_Enumerator;

using Record = ::GlobalNamespace::InputStateHistory_Record;

using RecordHeader = ::GlobalNamespace::InputStateHistory_RecordHeader;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::InputStateHistory_Record  Item[];

/// @brief Field <onRecordAdded>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__onRecordAdded_k__BackingField, put=__cordl_internal_set__onRecordAdded_k__BackingField)) ::System::Action_1<::GlobalNamespace::InputStateHistory_Record>*  _onRecordAdded_k__BackingField;

/// @brief Field <onShouldRecordStateChange>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__onShouldRecordStateChange_k__BackingField, put=__cordl_internal_set__onShouldRecordStateChange_k__BackingField)) ::System::Func_4<::UnityEngine::InputSystem::InputControl*,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*  _onShouldRecordStateChange_k__BackingField;

 __declspec(property(get=get_bytesPerRecord)) int32_t  bytesPerRecord;

 __declspec(property(get=get_controls)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>  controls;

 __declspec(property(get=get_extraMemoryPerRecord, put=set_extraMemoryPerRecord)) int32_t  extraMemoryPerRecord;

 __declspec(property(get=get_historyDepth, put=set_historyDepth)) int32_t  historyDepth;

/// @brief Field m_AddNewControls, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AddNewControls, put=__cordl_internal_set_m_AddNewControls)) bool  m_AddNewControls;

/// @brief Field m_ControlCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ControlCount, put=__cordl_internal_set_m_ControlCount)) int32_t  m_ControlCount;

/// @brief Field m_Controls, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Controls, put=__cordl_internal_set_m_Controls)) ::ArrayW<::UnityEngine::InputSystem::InputControl*>  m_Controls;

/// @brief Field m_CurrentVersion, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentVersion, put=__cordl_internal_set_m_CurrentVersion)) uint32_t  m_CurrentVersion;

/// @brief Field m_ExtraMemoryPerRecord, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ExtraMemoryPerRecord, put=__cordl_internal_set_m_ExtraMemoryPerRecord)) int32_t  m_ExtraMemoryPerRecord;

/// @brief Field m_HeadIndex, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HeadIndex, put=__cordl_internal_set_m_HeadIndex)) int32_t  m_HeadIndex;

/// @brief Field m_HistoryDepth, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HistoryDepth, put=__cordl_internal_set_m_HistoryDepth)) int32_t  m_HistoryDepth;

/// @brief Field m_RecordBuffer, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_RecordBuffer, put=__cordl_internal_set_m_RecordBuffer)) ::Unity::Collections::NativeArray_1<uint8_t>  m_RecordBuffer;

/// @brief Field m_RecordCount, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RecordCount, put=__cordl_internal_set_m_RecordCount)) int32_t  m_RecordCount;

/// @brief Field m_StateSizeInBytes, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_StateSizeInBytes, put=__cordl_internal_set_m_StateSizeInBytes)) int32_t  m_StateSizeInBytes;

/// @brief Field m_UpdateMask, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_UpdateMask, put=__cordl_internal_set_m_UpdateMask)) ::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>  m_UpdateMask;

 __declspec(property(get=get_onRecordAdded, put=set_onRecordAdded)) ::System::Action_1<::GlobalNamespace::InputStateHistory_Record>*  onRecordAdded;

 __declspec(property(get=get_onShouldRecordStateChange, put=set_onShouldRecordStateChange)) ::System::Func_4<::UnityEngine::InputSystem::InputControl*,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*  onShouldRecordStateChange;

 __declspec(property(get=get_updateMask, put=set_updateMask)) ::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateMask;

 __declspec(property(get=get_version)) uint32_t  version;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_Record>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_Record>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*() noexcept;

/// @brief Method AddRecord, addr 0xaffc354, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputStateHistory_Record AddRecord(::GlobalNamespace::InputStateHistory_Record  record) ;

/// @brief Method Allocate, addr 0xaffcce4, size 0x28c, virtual false, abstract: false, final false
inline void Allocate() ;

/// @brief Method AllocateRecord, addr 0xaffc3b4, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputStateHistory_RecordHeader* AllocateRecord(::by_ref<int32_t>  index) ;

/// @brief Method Clear, addr 0xaffc340, size 0x14, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Destroy, addr 0xaffcc80, size 0x64, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method Dispose, addr 0xaffc2d8, size 0x68, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0xaffc254, size 0x84, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetEnumerator, addr 0xaffcbe8, size 0x74, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputStateHistory_Record>* GetEnumerator() ;

/// @brief Method GetRecord, addr 0xaffb8d8, size 0xd8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputStateHistory_RecordHeader* GetRecord(int32_t  index) ;

/// @brief Method GetRecordUnchecked, addr 0xaffcfe0, size 0xb0, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputStateHistory_RecordHeader* GetRecordUnchecked(int32_t  index) ;

static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* New_ctor(::UnityEngine::InputSystem::InputControl*  control) ;

static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*  controls) ;

static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* New_ctor(int32_t  maxStateSizeInBytes) ;

static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* New_ctor(::StringW  path) ;

/// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline TValue ReadValue(::GlobalNamespace::InputStateHistory_RecordHeader*  data) ;

/// @brief Method ReadValueAsObject, addr 0xaffd090, size 0xf8, virtual false, abstract: false, final false
inline ::System::Object* ReadValueAsObject(::GlobalNamespace::InputStateHistory_RecordHeader*  data) ;

/// @brief Method RecordIndexToUserIndex, addr 0xaffcfc4, size 0x1c, virtual false, abstract: false, final false
inline int32_t RecordIndexToUserIndex(int32_t  index) ;

/// @brief Method RecordStateChange, addr 0xaffc764, size 0x1b8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputStateHistory_Record RecordStateChange(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// @brief Method RecordStateChange, addr 0xaffc91c, size 0x2bc, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputStateHistory_Record RecordStateChange(::UnityEngine::InputSystem::InputControl*  control, void*  statePtr, double_t  time) ;

/// @brief Method StartRecording, addr 0xaffc4c0, size 0x154, virtual false, abstract: false, final false
inline void StartRecording() ;

/// @brief Method StopRecording, addr 0xaffc614, size 0x150, virtual false, abstract: false, final false
inline void StopRecording() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xaffcc7c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged, addr 0xaffd188, size 0xd8, virtual true, abstract: false, final true
inline void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl*  control, double_t  time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, int64_t  monitorIndex) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired, addr 0xaffd260, size 0x4, virtual true, abstract: false, final true
inline void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(::UnityEngine::InputSystem::InputControl*  control, double_t  time, int64_t  monitorIndex, int32_t  timerIndex) ;

/// @brief Method UserIndexToRecordIndex, addr 0xaffb8c0, size 0x18, virtual false, abstract: false, final false
inline int32_t UserIndexToRecordIndex(int32_t  index) ;

constexpr ::System::Action_1<::GlobalNamespace::InputStateHistory_Record>* const& __cordl_internal_get__onRecordAdded_k__BackingField() const;

constexpr ::System::Action_1<::GlobalNamespace::InputStateHistory_Record>*& __cordl_internal_get__onRecordAdded_k__BackingField() ;

constexpr ::System::Func_4<::UnityEngine::InputSystem::InputControl*,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>* const& __cordl_internal_get__onShouldRecordStateChange_k__BackingField() const;

constexpr ::System::Func_4<::UnityEngine::InputSystem::InputControl*,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*& __cordl_internal_get__onShouldRecordStateChange_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_AddNewControls() const;

constexpr bool& __cordl_internal_get_m_AddNewControls() ;

constexpr int32_t const& __cordl_internal_get_m_ControlCount() const;

constexpr int32_t& __cordl_internal_get_m_ControlCount() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*> const& __cordl_internal_get_m_Controls() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*>& __cordl_internal_get_m_Controls() ;

constexpr uint32_t const& __cordl_internal_get_m_CurrentVersion() const;

constexpr uint32_t& __cordl_internal_get_m_CurrentVersion() ;

constexpr int32_t const& __cordl_internal_get_m_ExtraMemoryPerRecord() const;

constexpr int32_t& __cordl_internal_get_m_ExtraMemoryPerRecord() ;

constexpr int32_t const& __cordl_internal_get_m_HeadIndex() const;

constexpr int32_t& __cordl_internal_get_m_HeadIndex() ;

constexpr int32_t const& __cordl_internal_get_m_HistoryDepth() const;

constexpr int32_t& __cordl_internal_get_m_HistoryDepth() ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_m_RecordBuffer() const;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_m_RecordBuffer() ;

constexpr int32_t const& __cordl_internal_get_m_RecordCount() const;

constexpr int32_t& __cordl_internal_get_m_RecordCount() ;

constexpr int32_t const& __cordl_internal_get_m_StateSizeInBytes() const;

constexpr int32_t& __cordl_internal_get_m_StateSizeInBytes() ;

constexpr ::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType> const& __cordl_internal_get_m_UpdateMask() const;

constexpr ::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>& __cordl_internal_get_m_UpdateMask() ;

constexpr void __cordl_internal_set__onRecordAdded_k__BackingField(::System::Action_1<::GlobalNamespace::InputStateHistory_Record>*  value) ;

constexpr void __cordl_internal_set__onShouldRecordStateChange_k__BackingField(::System::Func_4<::UnityEngine::InputSystem::InputControl*,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*  value) ;

constexpr void __cordl_internal_set_m_AddNewControls(bool  value) ;

constexpr void __cordl_internal_set_m_ControlCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_Controls(::ArrayW<::UnityEngine::InputSystem::InputControl*>  value) ;

constexpr void __cordl_internal_set_m_CurrentVersion(uint32_t  value) ;

constexpr void __cordl_internal_set_m_ExtraMemoryPerRecord(int32_t  value) ;

constexpr void __cordl_internal_set_m_HeadIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_HistoryDepth(int32_t  value) ;

constexpr void __cordl_internal_set_m_RecordBuffer(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

constexpr void __cordl_internal_set_m_RecordCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_StateSizeInBytes(int32_t  value) ;

constexpr void __cordl_internal_set_m_UpdateMask(::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>  value) ;

/// @brief Method .ctor, addr 0xaffc0b4, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method .ctor, addr 0xaffc1c4, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*  controls) ;

/// @brief Method .ctor, addr 0xaffbeb0, size 0xac, virtual false, abstract: false, final false
inline void _ctor(int32_t  maxStateSizeInBytes) ;

/// @brief Method .ctor, addr 0xaffbf5c, size 0x158, virtual false, abstract: false, final false
inline void _ctor(::StringW  path) ;

/// @brief Method get_Count, addr 0xaffb43c, size 0x8, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0xaffb7b4, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputStateHistory_Record get_Item(int32_t  index) ;

/// @brief Method get_bytesPerRecord, addr 0xaffcf70, size 0x54, virtual false, abstract: false, final false
inline int32_t get_bytesPerRecord() ;

/// @brief Method get_controls, addr 0xaffb74c, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> get_controls() ;

/// @brief Method get_extraMemoryPerRecord, addr 0xaffb51c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_extraMemoryPerRecord() ;

/// @brief Method get_historyDepth, addr 0xaffb44c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_historyDepth() ;

/// [CompilerGenerated]
/// @brief Method get_onRecordAdded, addr 0xaffbe90, size 0x8, virtual false, abstract: false, final false
inline ::System::Action_1<::GlobalNamespace::InputStateHistory_Record>* get_onRecordAdded() ;

/// [CompilerGenerated]
/// @brief Method get_onShouldRecordStateChange, addr 0xaffbea0, size 0x8, virtual false, abstract: false, final false
inline ::System::Func_4<::UnityEngine::InputSystem::InputControl*,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>* get_onShouldRecordStateChange() ;

/// @brief Method get_updateMask, addr 0xaffb5ec, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType get_updateMask() ;

/// @brief Method get_version, addr 0xaffb444, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_version() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_Record>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_Record>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__InputStateHistory_Record_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* i___UnityEngine__InputSystem__LowLevel__IInputStateChangeMonitor() noexcept;

/// @brief Method set_Item, addr 0xaffb9f0, size 0x134, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, ::GlobalNamespace::InputStateHistory_Record  value) ;

/// @brief Method set_extraMemoryPerRecord, addr 0xaffb524, size 0xc8, virtual false, abstract: false, final false
inline void set_extraMemoryPerRecord(int32_t  value) ;

/// @brief Method set_historyDepth, addr 0xaffb454, size 0xc8, virtual false, abstract: false, final false
inline void set_historyDepth(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_onRecordAdded, addr 0xaffbe98, size 0x8, virtual false, abstract: false, final false
inline void set_onRecordAdded(::System::Action_1<::GlobalNamespace::InputStateHistory_Record>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_onShouldRecordStateChange, addr 0xaffbea8, size 0x8, virtual false, abstract: false, final false
inline void set_onShouldRecordStateChange(::System::Func_4<::UnityEngine::InputSystem::InputControl*,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*  value) ;

/// @brief Method set_updateMask, addr 0xaffb684, size 0xc8, virtual false, abstract: false, final false
inline void set_updateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputStateHistory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputStateHistory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputStateHistory(InputStateHistory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputStateHistory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputStateHistory(InputStateHistory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13798};

/// @brief Field kDefaultHistorySize offset 0xffffffff size 0x4
static constexpr int32_t  kDefaultHistorySize{static_cast<int32_t>(0x80)};

/// [CompilerGenerated]
/// @brief Field <onRecordAdded>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::InputStateHistory_Record>*  ____onRecordAdded_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <onShouldRecordStateChange>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Func_4<::UnityEngine::InputSystem::InputControl*,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*  ____onShouldRecordStateChange_k__BackingField;

/// @brief Field m_Controls, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputControl*>  ___m_Controls;

/// @brief Field m_ControlCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ___m_ControlCount;

/// @brief Field m_RecordBuffer, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  ___m_RecordBuffer;

/// @brief Field m_StateSizeInBytes, offset: 0x40, size: 0x4, def value: None
 int32_t  ___m_StateSizeInBytes;

/// @brief Field m_RecordCount, offset: 0x44, size: 0x4, def value: None
 int32_t  ___m_RecordCount;

/// @brief Field m_HistoryDepth, offset: 0x48, size: 0x4, def value: None
 int32_t  ___m_HistoryDepth;

/// @brief Field m_ExtraMemoryPerRecord, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___m_ExtraMemoryPerRecord;

/// @brief Field m_HeadIndex, offset: 0x50, size: 0x4, def value: None
 int32_t  ___m_HeadIndex;

/// @brief Field m_CurrentVersion, offset: 0x54, size: 0x4, def value: None
 uint32_t  ___m_CurrentVersion;

/// @brief Field m_UpdateMask, offset: 0x58, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>  ___m_UpdateMask;

/// @brief Field m_AddNewControls, offset: 0x68, size: 0x1, def value: None
 bool  ___m_AddNewControls;

/// @brief Size padding 0x68 - 0x70 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ____onRecordAdded_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ____onShouldRecordStateChange_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_Controls) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_ControlCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_RecordBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_StateSizeInBytes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_RecordCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_HistoryDepth) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_ExtraMemoryPerRecord) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_HeadIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_CurrentVersion) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_UpdateMask) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_AddNewControls) == 0x68, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputStateHistory) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
