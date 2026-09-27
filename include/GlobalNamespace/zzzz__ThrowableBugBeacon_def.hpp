#pragma once
// IWYU pragma private; include "GlobalNamespace/ThrowableBugBeacon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ThrowableBug_BugName_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ThrowableBugBeacon)
namespace GlobalNamespace {
class ThrowableBugBeacon_ThrowableBugBeaconEvent;
}
namespace GlobalNamespace {
class ThrowableBugBeacon_ThrowableBugBeaconFloatEvent;
}
namespace GlobalNamespace {
struct ThrowableBug_BugName;
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
// Forward declare root types
namespace GlobalNamespace {
class ThrowableBugBeacon;
}
namespace GlobalNamespace {
class ThrowableBugBeacon_ThrowableBugBeaconEvent;
}
namespace GlobalNamespace {
class ThrowableBugBeacon_ThrowableBugBeaconFloatEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ThrowableBugBeacon*);
MARK_REF_T(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*);
MARK_REF_T(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconFloatEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ThrowableBugBeacon*, "", "ThrowableBugBeacon");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*, "", "ThrowableBugBeacon/ThrowableBugBeaconEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconFloatEvent*, "", "ThrowableBugBeacon/ThrowableBugBeaconFloatEvent");
// Dependencies ThrowableBug::BugName, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ThrowableBugBeacon
class CORDL_TYPE ThrowableBugBeacon : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ThrowableBugBeaconEvent = ::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent;

using ThrowableBugBeaconFloatEvent = ::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconFloatEvent;

 __declspec(property(get=get_BugName)) ::GlobalNamespace::ThrowableBug_BugName  BugName;

/// @brief Field OnCall, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCall, put=setStaticF_OnCall)) ::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*  OnCall;

/// @brief Field OnChangeSpeedMultiplier, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnChangeSpeedMultiplier, put=setStaticF_OnChangeSpeedMultiplier)) ::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconFloatEvent*  OnChangeSpeedMultiplier;

/// @brief Field OnDismiss, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDismiss, put=setStaticF_OnDismiss)) ::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*  OnDismiss;

/// @brief Field OnLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLock, put=setStaticF_OnLock)) ::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*  OnLock;

/// @brief Field OnUnlock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnUnlock, put=setStaticF_OnUnlock)) ::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*  OnUnlock;

 __declspec(property(get=get_Range)) float_t  Range;

/// @brief Field bugName, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_bugName, put=__cordl_internal_set_bugName)) ::GlobalNamespace::ThrowableBug_BugName  bugName;

/// @brief Field range, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_range, put=__cordl_internal_set_range)) float_t  range;

/// @brief Method Call, addr 0x5b33b8c, size 0x6c, virtual false, abstract: false, final false
inline void Call() ;

/// @brief Method ChangeSpeedMultiplier, addr 0x5b33d3c, size 0x80, virtual false, abstract: false, final false
inline void ChangeSpeedMultiplier(float_t  f) ;

/// @brief Method Dismiss, addr 0x5b33bf8, size 0x6c, virtual false, abstract: false, final false
inline void Dismiss() ;

/// @brief Method Lock, addr 0x5b33c64, size 0x6c, virtual false, abstract: false, final false
inline void Lock() ;

static inline ::GlobalNamespace::ThrowableBugBeacon* New_ctor() ;

/// @brief Method OnDisable, addr 0x5b33dbc, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Unlock, addr 0x5b33cd0, size 0x6c, virtual false, abstract: false, final false
inline void Unlock() ;

constexpr ::GlobalNamespace::ThrowableBug_BugName const& __cordl_internal_get_bugName() const;

constexpr ::GlobalNamespace::ThrowableBug_BugName& __cordl_internal_get_bugName() ;

constexpr float_t const& __cordl_internal_get_range() const;

constexpr float_t& __cordl_internal_get_range() ;

constexpr void __cordl_internal_set_bugName(::GlobalNamespace::ThrowableBug_BugName  value) ;

constexpr void __cordl_internal_set_range(float_t  value) ;

/// @brief Method .ctor, addr 0x5b33e28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnCall, addr 0x5b313dc, size 0xb8, virtual false, abstract: false, final false
static inline void add_OnCall(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnChangeSpeedMultiplier, addr 0x5b317d4, size 0xbc, virtual false, abstract: false, final false
static inline void add_OnChangeSpeedMultiplier(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconFloatEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnDismiss, addr 0x5b31494, size 0xbc, virtual false, abstract: false, final false
static inline void add_OnDismiss(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnLock, addr 0x5b31550, size 0xbc, virtual false, abstract: false, final false
static inline void add_OnLock(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnUnlock, addr 0x5b3160c, size 0xbc, virtual false, abstract: false, final false
static inline void add_OnUnlock(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*  value) ;

static inline ::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* getStaticF_OnCall() ;

static inline ::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconFloatEvent* getStaticF_OnChangeSpeedMultiplier() ;

static inline ::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* getStaticF_OnDismiss() ;

static inline ::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* getStaticF_OnLock() ;

static inline ::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* getStaticF_OnUnlock() ;

/// @brief Method get_BugName, addr 0x5b33b7c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ThrowableBug_BugName get_BugName() ;

/// @brief Method get_Range, addr 0x5b33b84, size 0x8, virtual false, abstract: false, final false
inline float_t get_Range() ;

/// [CompilerGenerated]
/// @brief Method remove_OnCall, addr 0x5b31a54, size 0xb8, virtual false, abstract: false, final false
static inline void remove_OnCall(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnChangeSpeedMultiplier, addr 0x5b31d40, size 0xbc, virtual false, abstract: false, final false
static inline void remove_OnChangeSpeedMultiplier(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconFloatEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnDismiss, addr 0x5b31b0c, size 0xbc, virtual false, abstract: false, final false
static inline void remove_OnDismiss(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnLock, addr 0x5b31bc8, size 0xbc, virtual false, abstract: false, final false
static inline void remove_OnLock(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnUnlock, addr 0x5b31c84, size 0xbc, virtual false, abstract: false, final false
static inline void remove_OnUnlock(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*  value) ;

static inline void setStaticF_OnCall(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*  value) ;

static inline void setStaticF_OnChangeSpeedMultiplier(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconFloatEvent*  value) ;

static inline void setStaticF_OnDismiss(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*  value) ;

static inline void setStaticF_OnLock(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*  value) ;

static inline void setStaticF_OnUnlock(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThrowableBugBeacon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrowableBugBeacon", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowableBugBeacon(ThrowableBugBeacon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowableBugBeacon", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowableBugBeacon(ThrowableBugBeacon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3665};

/// [SerializeField]
/// @brief Field range, offset: 0x20, size: 0x4, def value: None
 float_t  ___range;

/// [SerializeField]
/// @brief Field bugName, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::ThrowableBug_BugName  ___bugName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ThrowableBugBeacon, ___range) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBugBeacon, ___bugName) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ThrowableBugBeacon) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: ThrowableBugBeacon/ThrowableBugBeaconFloatEvent
class CORDL_TYPE ThrowableBugBeacon_ThrowableBugBeaconFloatEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b33e84, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::ThrowableBugBeacon*  tbb, float_t  f, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b33ee4, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b33e70, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::ThrowableBugBeacon*  tbb, float_t  f) ;

static inline ::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconFloatEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b316c8, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThrowableBugBeacon_ThrowableBugBeaconFloatEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrowableBugBeacon_ThrowableBugBeaconFloatEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowableBugBeacon_ThrowableBugBeaconFloatEvent(ThrowableBugBeacon_ThrowableBugBeaconFloatEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowableBugBeacon_ThrowableBugBeaconFloatEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowableBugBeacon_ThrowableBugBeaconFloatEvent(ThrowableBugBeacon_ThrowableBugBeaconFloatEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3664};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconFloatEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: ThrowableBugBeacon/ThrowableBugBeaconEvent
class CORDL_TYPE ThrowableBugBeacon_ThrowableBugBeaconEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b33e44, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::ThrowableBugBeacon*  tbb, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b33e64, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b33e30, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::ThrowableBugBeacon*  tbb) ;

static inline ::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b312d4, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThrowableBugBeacon_ThrowableBugBeaconEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrowableBugBeacon_ThrowableBugBeaconEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowableBugBeacon_ThrowableBugBeaconEvent(ThrowableBugBeacon_ThrowableBugBeaconEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowableBugBeacon_ThrowableBugBeaconEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowableBugBeacon_ThrowableBugBeaconEvent(ThrowableBugBeacon_ThrowableBugBeaconEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3663};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
