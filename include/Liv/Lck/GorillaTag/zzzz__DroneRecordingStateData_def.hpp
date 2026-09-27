#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneRecordingStateData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/GorillaTag/zzzz__RecordingState_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DroneRecordingStateData)
namespace Liv::Lck::GorillaTag {
class DroneRecordingStateData_OnDroneRecordingState;
}
namespace Liv::Lck::GorillaTag {
struct RecordingState;
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
struct TimeSpan;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class DroneRecordingStateData;
}
namespace Liv::Lck::GorillaTag {
class DroneRecordingStateData_OnDroneRecordingState;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::DroneRecordingStateData*);
MARK_REF_T(::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneRecordingStateData*, "Liv.Lck.GorillaTag", "DroneRecordingStateData");
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*, "Liv.Lck.GorillaTag", "DroneRecordingStateData/OnDroneRecordingState");
// Dependencies Liv.Lck.GorillaTag.RecordingState, System.Object, System.TimeSpan
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneRecordingStateData
class CORDL_TYPE DroneRecordingStateData : public ::System::Object {
public:
// Declarations
using OnDroneRecordingState = ::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState;

 __declspec(property(get=get_FormattedDuration)) ::StringW  FormattedDuration;

/// @brief Field OnDroneRecordingStateChanged, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDroneRecordingStateChanged, put=__cordl_internal_set_OnDroneRecordingStateChanged)) ::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*  OnDroneRecordingStateChanged;

 __declspec(property(get=get_Span, put=set_Span)) ::System::TimeSpan  Span;

 __declspec(property(get=get_State, put=set_State)) ::Liv::Lck::GorillaTag::RecordingState  State;

/// @brief Field _recordingState, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__recordingState, put=__cordl_internal_set__recordingState)) ::Liv::Lck::GorillaTag::RecordingState  _recordingState;

/// @brief Field _span, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__span, put=__cordl_internal_set__span)) ::System::TimeSpan  _span;

static inline ::Liv::Lck::GorillaTag::DroneRecordingStateData* New_ctor() ;

constexpr ::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState* const& __cordl_internal_get_OnDroneRecordingStateChanged() const;

constexpr ::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*& __cordl_internal_get_OnDroneRecordingStateChanged() ;

constexpr ::Liv::Lck::GorillaTag::RecordingState const& __cordl_internal_get__recordingState() const;

constexpr ::Liv::Lck::GorillaTag::RecordingState& __cordl_internal_get__recordingState() ;

constexpr ::System::TimeSpan const& __cordl_internal_get__span() const;

constexpr ::System::TimeSpan& __cordl_internal_get__span() ;

constexpr void __cordl_internal_set_OnDroneRecordingStateChanged(::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*  value) ;

constexpr void __cordl_internal_set__recordingState(::Liv::Lck::GorillaTag::RecordingState  value) ;

constexpr void __cordl_internal_set__span(::System::TimeSpan  value) ;

/// @brief Method .ctor, addr 0x9d1defc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnDroneRecordingStateChanged, addr 0x9d19bb0, size 0x9c, virtual false, abstract: false, final false
inline void add_OnDroneRecordingStateChanged(::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*  value) ;

/// @brief Method get_FormattedDuration, addr 0x9d1f5fc, size 0x218, virtual false, abstract: false, final false
inline ::StringW get_FormattedDuration() ;

/// @brief Method get_Span, addr 0x9d206f8, size 0x8, virtual false, abstract: false, final false
inline ::System::TimeSpan get_Span() ;

/// @brief Method get_State, addr 0x9d206f0, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::GorillaTag::RecordingState get_State() ;

/// [CompilerGenerated]
/// @brief Method remove_OnDroneRecordingStateChanged, addr 0x9d1bd48, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnDroneRecordingStateChanged(::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*  value) ;

/// @brief Method set_Span, addr 0x9d20700, size 0x8, virtual false, abstract: false, final false
inline void set_Span(::System::TimeSpan  value) ;

/// @brief Method set_State, addr 0x9d1cd8c, size 0x20, virtual false, abstract: false, final false
inline void set_State(::Liv::Lck::GorillaTag::RecordingState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneRecordingStateData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneRecordingStateData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneRecordingStateData(DroneRecordingStateData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneRecordingStateData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneRecordingStateData(DroneRecordingStateData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29615};

/// [CompilerGenerated]
/// @brief Field OnDroneRecordingStateChanged, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*  ___OnDroneRecordingStateChanged;

/// @brief Field _span, offset: 0x18, size: 0x8, def value: None
 ::System::TimeSpan  ____span;

/// @brief Field _recordingState, offset: 0x20, size: 0x4, def value: None
 ::Liv::Lck::GorillaTag::RecordingState  ____recordingState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::DroneRecordingStateData, ___OnDroneRecordingStateChanged) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneRecordingStateData, ____span) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneRecordingStateData, ____recordingState) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::DroneRecordingStateData) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
// Dependencies System.MulticastDelegate
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneRecordingStateData/OnDroneRecordingState
class CORDL_TYPE DroneRecordingStateData_OnDroneRecordingState : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d2071c, size 0x84, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Liv::Lck::GorillaTag::RecordingState  state, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d207a0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d20708, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Liv::Lck::GorillaTag::RecordingState  state) ;

static inline ::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d19b10, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneRecordingStateData_OnDroneRecordingState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneRecordingStateData_OnDroneRecordingState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneRecordingStateData_OnDroneRecordingState(DroneRecordingStateData_OnDroneRecordingState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneRecordingStateData_OnDroneRecordingState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneRecordingStateData_OnDroneRecordingState(DroneRecordingStateData_OnDroneRecordingState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29614};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
