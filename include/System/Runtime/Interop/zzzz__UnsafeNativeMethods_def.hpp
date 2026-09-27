#pragma once
// IWYU pragma private; include "System/Runtime/Interop/UnsafeNativeMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeNativeMethods)
namespace GlobalNamespace {
struct UnsafeNativeMethods_EventData;
}
namespace System::Runtime::Diagnostics {
struct EventDescriptor;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System::Runtime::InteropServices {
class SafeHandle;
}
namespace System::Runtime::Interop {
class SafeEventLogWriteHandle;
}
namespace System::Runtime::Interop {
class UnsafeNativeMethods_EtwEnableCallback;
}
namespace System {
struct Guid;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Interop {
class UnsafeNativeMethods;
}
namespace System::Runtime::Interop {
class UnsafeNativeMethods_EtwEnableCallback;
}
// Write type traits
MARK_REF_T(::System::Runtime::Interop::UnsafeNativeMethods*);
MARK_REF_T(::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Interop::UnsafeNativeMethods*, "System.Runtime.Interop", "UnsafeNativeMethods");
DEFINE_IL2CPP_CLASS(::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*, "System.Runtime.Interop", "UnsafeNativeMethods/EtwEnableCallback");
// Dependencies System.Object
namespace System::Runtime::Interop {
// Is value type: false
// CS Name: System.Runtime.Interop.UnsafeNativeMethods
class CORDL_TYPE UnsafeNativeMethods : public ::System::Object {
public:
// Declarations
using EventData = ::GlobalNamespace::UnsafeNativeMethods_EventData;

using EtwEnableCallback = ::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback;

/// @brief Method EventActivityIdControl, addr 0xaa93d30, size 0x84, virtual false, abstract: false, final false
static inline uint32_t EventActivityIdControl(::ByRefConst<int32_t>  ControlCode, ::by_ref<::System::Guid>  ActivityId) ;

/// @brief Method EventEnabled, addr 0xaa93c04, size 0x8c, virtual false, abstract: false, final false
static inline bool EventEnabled(::ByRefConst<int64_t>  registrationHandle, ::by_ref<::System::Runtime::Diagnostics::EventDescriptor>  eventDescriptor) ;

/// @brief Method EventRegister, addr 0xaa93adc, size 0xa8, virtual false, abstract: false, final false
static inline uint32_t EventRegister(::by_ref<::System::Guid>  providerId, ::ByRefConst<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>  enableCallback, ::ByRefConst<void*>  callbackContext, ::by_ref<int64_t>  registrationHandle) ;

/// @brief Method EventUnregister, addr 0xaa93b84, size 0x80, virtual false, abstract: false, final false
static inline uint32_t EventUnregister(::ByRefConst<int64_t>  registrationHandle) ;

/// @brief Method EventWrite, addr 0xaa93c90, size 0xa0, virtual false, abstract: false, final false
static inline uint32_t EventWrite(::ByRefConst<int64_t>  registrationHandle, ::by_ref<::System::Runtime::Diagnostics::EventDescriptor>  eventDescriptor, ::ByRefConst<uint32_t>  userDataCount, ::ByRefConst<::GlobalNamespace::UnsafeNativeMethods_EventData*>  userData) ;

/// @brief Method RegisterEventSource, addr 0xaa93960, size 0xec, virtual false, abstract: false, final false
static inline ::System::Runtime::Interop::SafeEventLogWriteHandle* RegisterEventSource(::StringW  uncServerName, ::StringW  sourceName) ;

/// @brief Method ReportEvent, addr 0xaa93db4, size 0x13c, virtual false, abstract: false, final false
static inline bool ReportEvent(::System::Runtime::InteropServices::SafeHandle*  hEventLog, uint16_t  type, uint16_t  category, uint32_t  eventID, ::ArrayW<uint8_t>  userSID, uint16_t  numStrings, uint32_t  dataLen, ::System::Runtime::InteropServices::HandleRef  strings, ::ArrayW<uint8_t>  rawData) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnsafeNativeMethods() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnsafeNativeMethods", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnsafeNativeMethods(UnsafeNativeMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeNativeMethods", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnsafeNativeMethods(UnsafeNativeMethods const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31358};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Interop::UnsafeNativeMethods) == 0x10, "Size mismatch!");

} // namespace end def System::Runtime::Interop
// Dependencies System.MulticastDelegate
namespace System::Runtime::Interop {
// Is value type: false
// CS Name: System.Runtime.Interop.UnsafeNativeMethods/EtwEnableCallback
class CORDL_TYPE UnsafeNativeMethods_EtwEnableCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xaa93fa4, size 0x18, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::System::Guid>  sourceId, ::ByRefConst<int32_t>  isEnabled, ::ByRefConst<uint8_t>  level, ::ByRefConst<int64_t>  matchAnyKeywords, ::ByRefConst<int64_t>  matchAllKeywords, ::ByRefConst<void*>  filterData, ::ByRefConst<void*>  callbackContext) ;

static inline ::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xaa93ef0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnsafeNativeMethods_EtwEnableCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnsafeNativeMethods_EtwEnableCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnsafeNativeMethods_EtwEnableCallback(UnsafeNativeMethods_EtwEnableCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeNativeMethods_EtwEnableCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnsafeNativeMethods_EtwEnableCallback(UnsafeNativeMethods_EtwEnableCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31357};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback) == 0x80, "Size mismatch!");

} // namespace end def System::Runtime::Interop
