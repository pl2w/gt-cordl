#pragma once
// IWYU pragma private; include "Liv/Lck/LckStorageWatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckStorageWatcher)
namespace Liv::Lck {
struct CameraTrackDescriptor;
}
namespace Liv::Lck {
class ILckEventBus;
}
namespace Liv::Lck {
class ILckStorageWatcher;
}
namespace Liv::Lck {
class LckStorageWatcher__Update_d__10;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Liv::Lck {
class LckStorageWatcher;
}
namespace Liv::Lck {
class LckStorageWatcher__Update_d__10;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckStorageWatcher*);
MARK_REF_T(::Liv::Lck::LckStorageWatcher__Update_d__10*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckStorageWatcher*, "Liv.Lck", "LckStorageWatcher");
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckStorageWatcher__Update_d__10*, "Liv.Lck", "LckStorageWatcher/<Update>d__10");
// Dependencies Liv.Lck.CameraTrackDescriptor, System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckStorageWatcher
class CORDL_TYPE LckStorageWatcher : public ::System::Object {
public:
// Declarations
using _Update_d__10 = ::Liv::Lck::LckStorageWatcher__Update_d__10;

/// @brief Field _eventBus, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventBus, put=__cordl_internal_set__eventBus)) ::Liv::Lck::ILckEventBus*  _eventBus;

/// @brief Field _freeSpace, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__freeSpace, put=__cordl_internal_set__freeSpace)) int64_t  _freeSpace;

/// @brief Field _getDurationSeconds, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__getDurationSeconds, put=__cordl_internal_set__getDurationSeconds)) ::System::Func_1<float_t>*  _getDurationSeconds;

/// @brief Field _isRecordingActive, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRecordingActive, put=__cordl_internal_set__isRecordingActive)) bool  _isRecordingActive;

/// @brief Field _recordingDescriptor, offset 0x24, size 0x14 
 __declspec(property(get=__cordl_internal_get__recordingDescriptor, put=__cordl_internal_set__recordingDescriptor)) ::Liv::Lck::CameraTrackDescriptor  _recordingDescriptor;

/// @brief Convert operator to "::Liv::Lck::ILckStorageWatcher"
constexpr operator  ::Liv::Lck::ILckStorageWatcher*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CalculateEstimatedRecordingSize, addr 0x9ce83b8, size 0x74, virtual false, abstract: false, final false
inline int64_t CalculateEstimatedRecordingSize() ;

/// @brief Method CheckStorageSpace, addr 0x9ce8274, size 0x118, virtual false, abstract: false, final false
inline void CheckStorageSpace() ;

/// @brief Method ClearRecordingContext, addr 0x9ce8464, size 0x8, virtual true, abstract: false, final true
inline void ClearRecordingContext() ;

/// @brief Method Dispose, addr 0x9ce8cc0, size 0x64, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetAndroidAvailableStorageSpace, addr 0x9ce846c, size 0x578, virtual false, abstract: false, final false
inline int64_t GetAndroidAvailableStorageSpace() ;

/// @brief Method GetAvailableStorageSpace, addr 0x9ce838c, size 0x4, virtual false, abstract: false, final false
inline int64_t GetAvailableStorageSpace() ;

/// @brief Method GetCurrentStorageThreshold, addr 0x9ce8390, size 0x28, virtual false, abstract: false, final false
inline int64_t GetCurrentStorageThreshold() ;

/// @brief Method GetDiskFreeSpaceEx, addr 0x9ce8198, size 0xb4, virtual false, abstract: false, final false
static inline bool GetDiskFreeSpaceEx(::StringW  lpDirectoryName, ::by_ref<uint64_t>  lpFreeBytesAvailable, ::by_ref<uint64_t>  lpTotalNumberOfBytes, ::by_ref<uint64_t>  lpTotalNumberOfFreeBytes) ;

/// @brief Method GetWindowsAvailableStorageSpace, addr 0x9ce89e4, size 0x2a8, virtual false, abstract: false, final false
inline int64_t GetWindowsAvailableStorageSpace() ;

/// @brief Method HasEnoughFreeStorage, addr 0x9ce8c8c, size 0x34, virtual true, abstract: false, final true
inline bool HasEnoughFreeStorage() ;

/// @brief [Preserve]
static inline ::Liv::Lck::LckStorageWatcher* New_ctor(::Liv::Lck::ILckEventBus*  eventBus) ;

/// @brief Method SetRecordingContext, addr 0x9ce842c, size 0x38, virtual true, abstract: false, final true
inline void SetRecordingContext(::Liv::Lck::CameraTrackDescriptor  descriptor, ::System::Func_1<float_t>*  getDurationSeconds) ;

/// [IteratorStateMachine(typeof(Liv.Lck.LckStorageWatcher::<Update>d__10))]
/// @brief Method Update, addr 0x9ce812c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Update() ;

constexpr ::Liv::Lck::ILckEventBus* const& __cordl_internal_get__eventBus() const;

constexpr ::Liv::Lck::ILckEventBus*& __cordl_internal_get__eventBus() ;

constexpr int64_t const& __cordl_internal_get__freeSpace() const;

constexpr int64_t& __cordl_internal_get__freeSpace() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__getDurationSeconds() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__getDurationSeconds() ;

constexpr bool const& __cordl_internal_get__isRecordingActive() const;

constexpr bool& __cordl_internal_get__isRecordingActive() ;

constexpr ::Liv::Lck::CameraTrackDescriptor const& __cordl_internal_get__recordingDescriptor() const;

constexpr ::Liv::Lck::CameraTrackDescriptor& __cordl_internal_get__recordingDescriptor() ;

constexpr void __cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value) ;

constexpr void __cordl_internal_set__freeSpace(int64_t  value) ;

constexpr void __cordl_internal_set__getDurationSeconds(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set__isRecordingActive(bool  value) ;

constexpr void __cordl_internal_set__recordingDescriptor(::Liv::Lck::CameraTrackDescriptor  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9ce8080, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::ILckEventBus*  eventBus) ;

/// @brief Convert to "::Liv::Lck::ILckStorageWatcher"
constexpr ::Liv::Lck::ILckStorageWatcher* i___Liv__Lck__ILckStorageWatcher() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckStorageWatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckStorageWatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckStorageWatcher(LckStorageWatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckStorageWatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckStorageWatcher(LckStorageWatcher const& ) = delete;

/// @brief Field DefaultStorageThreshold offset 0xffffffff size 0x8
static constexpr int64_t  DefaultStorageThreshold{static_cast<int64_t>(0x1f400000)};

/// @brief Field PollIntervalInSeconds offset 0xffffffff size 0x4
static constexpr float_t  PollIntervalInSeconds{static_cast<float_t>(5.0f)};

/// @brief Field SafetyBufferBytes offset 0xffffffff size 0x8
static constexpr int64_t  SafetyBufferBytes{static_cast<int64_t>(0x3200000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24747};

/// @brief Field _eventBus, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::ILckEventBus*  ____eventBus;

/// @brief Field _freeSpace, offset: 0x18, size: 0x8, def value: None
 int64_t  ____freeSpace;

/// @brief Field _isRecordingActive, offset: 0x20, size: 0x1, def value: None
 bool  ____isRecordingActive;

/// @brief Field _recordingDescriptor, offset: 0x24, size: 0x14, def value: None
 ::Liv::Lck::CameraTrackDescriptor  ____recordingDescriptor;

/// @brief Field _getDurationSeconds, offset: 0x38, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____getDurationSeconds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckStorageWatcher, ____eventBus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckStorageWatcher, ____freeSpace) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckStorageWatcher, ____isRecordingActive) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckStorageWatcher, ____recordingDescriptor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckStorageWatcher, ____getDurationSeconds) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckStorageWatcher) == 0x40, "Size mismatch!");

} // namespace end def Liv::Lck
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckStorageWatcher/<Update>d__10
class CORDL_TYPE LckStorageWatcher__Update_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Liv::Lck::LckStorageWatcher*  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9ce8d28, size 0xac, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::LckStorageWatcher__Update_d__10* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9ce8dd4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9ce8ddc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9ce8e14, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9ce8d24, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Liv::Lck::LckStorageWatcher* const& __cordl_internal_get___4__this() const;

constexpr ::Liv::Lck::LckStorageWatcher*& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Liv::Lck::LckStorageWatcher*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9ce824c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckStorageWatcher__Update_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckStorageWatcher__Update_d__10", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckStorageWatcher__Update_d__10(LckStorageWatcher__Update_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckStorageWatcher__Update_d__10", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckStorageWatcher__Update_d__10(LckStorageWatcher__Update_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24746};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::LckStorageWatcher*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckStorageWatcher__Update_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckStorageWatcher__Update_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckStorageWatcher__Update_d__10, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckStorageWatcher__Update_d__10) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck
