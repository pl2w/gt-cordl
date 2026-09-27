#pragma once
// IWYU pragma private; include "System/Threading/ReaderWriterLockSlim.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReaderWriterLockSlim)
namespace GlobalNamespace {
struct ReaderWriterLockSlim_TimeoutTracker;
}
namespace System::Threading {
class EventWaitHandle;
}
namespace System::Threading {
struct LockRecursionPolicy;
}
namespace System::Threading {
class ReaderWriterCount;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Threading {
class ReaderWriterLockSlim;
}
// Write type traits
MARK_REF_T(::System::Threading::ReaderWriterLockSlim*);
DEFINE_IL2CPP_CLASS(::System::Threading::ReaderWriterLockSlim*, "System.Threading", "ReaderWriterLockSlim");
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.ReaderWriterLockSlim
class CORDL_TYPE ReaderWriterLockSlim : public ::System::Object {
public:
// Declarations
using TimeoutTracker = ::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker;

 __declspec(property(get=get_IsReadLockHeld)) bool  IsReadLockHeld;

 __declspec(property(get=get_IsUpgradeableReadLockHeld)) bool  IsUpgradeableReadLockHeld;

 __declspec(property(get=get_IsWriteLockHeld)) bool  IsWriteLockHeld;

 __declspec(property(get=get_RecursiveReadCount)) int32_t  RecursiveReadCount;

 __declspec(property(get=get_RecursiveUpgradeCount)) int32_t  RecursiveUpgradeCount;

 __declspec(property(get=get_RecursiveWriteCount)) int32_t  RecursiveWriteCount;

 __declspec(property(get=get_WaitingReadCount)) int32_t  WaitingReadCount;

 __declspec(property(get=get_WaitingUpgradeCount)) int32_t  WaitingUpgradeCount;

 __declspec(property(get=get_WaitingWriteCount)) int32_t  WaitingWriteCount;

/// @brief Field fDisposed, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_fDisposed, put=__cordl_internal_set_fDisposed)) bool  fDisposed;

/// @brief Field fIsReentrant, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_fIsReentrant, put=__cordl_internal_set_fIsReentrant)) bool  fIsReentrant;

/// @brief Field fNoWaiters, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_fNoWaiters, put=__cordl_internal_set_fNoWaiters)) bool  fNoWaiters;

/// @brief Field fUpgradeThreadHoldingRead, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_fUpgradeThreadHoldingRead, put=__cordl_internal_set_fUpgradeThreadHoldingRead)) bool  fUpgradeThreadHoldingRead;

/// @brief Field lockID, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_lockID, put=__cordl_internal_set_lockID)) int64_t  lockID;

/// @brief Field myLock, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_myLock, put=__cordl_internal_set_myLock)) int32_t  myLock;

/// @brief Field numReadWaiters, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_numReadWaiters, put=__cordl_internal_set_numReadWaiters)) uint32_t  numReadWaiters;

/// @brief Field numUpgradeWaiters, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_numUpgradeWaiters, put=__cordl_internal_set_numUpgradeWaiters)) uint32_t  numUpgradeWaiters;

/// @brief Field numWriteUpgradeWaiters, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_numWriteUpgradeWaiters, put=__cordl_internal_set_numWriteUpgradeWaiters)) uint32_t  numWriteUpgradeWaiters;

/// @brief Field numWriteWaiters, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_numWriteWaiters, put=__cordl_internal_set_numWriteWaiters)) uint32_t  numWriteWaiters;

/// @brief Field owners, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_owners, put=__cordl_internal_set_owners)) uint32_t  owners;

/// @brief Field readEvent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_readEvent, put=__cordl_internal_set_readEvent)) ::System::Threading::EventWaitHandle*  readEvent;

/// @brief Field s_nextLockID, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_nextLockID, put=setStaticF_s_nextLockID)) int64_t  s_nextLockID;

/// @brief Field t_rwc, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_t_rwc, put=setStaticF_t_rwc)) ::System::Threading::ReaderWriterCount*  t_rwc;

/// @brief Field upgradeEvent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgradeEvent, put=__cordl_internal_set_upgradeEvent)) ::System::Threading::EventWaitHandle*  upgradeEvent;

/// @brief Field upgradeLockOwnerId, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_upgradeLockOwnerId, put=__cordl_internal_set_upgradeLockOwnerId)) int32_t  upgradeLockOwnerId;

/// @brief Field waitUpgradeEvent, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_waitUpgradeEvent, put=__cordl_internal_set_waitUpgradeEvent)) ::System::Threading::EventWaitHandle*  waitUpgradeEvent;

/// @brief Field writeEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_writeEvent, put=__cordl_internal_set_writeEvent)) ::System::Threading::EventWaitHandle*  writeEvent;

/// @brief Field writeLockOwnerId, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_writeLockOwnerId, put=__cordl_internal_set_writeLockOwnerId)) int32_t  writeLockOwnerId;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ClearUpgraderWaiting, addr 0xa8cbc58, size 0x10, virtual false, abstract: false, final false
inline void ClearUpgraderWaiting() ;

/// @brief Method ClearWriterAcquired, addr 0xa8cb934, size 0x10, virtual false, abstract: false, final false
inline void ClearWriterAcquired() ;

/// @brief Method ClearWritersWaiting, addr 0xa8cbc48, size 0x10, virtual false, abstract: false, final false
inline void ClearWritersWaiting() ;

/// @brief Method Dispose, addr 0xa8cbd70, size 0x8, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xa8cbd78, size 0x180, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EnterMyLock, addr 0xa8cbc68, size 0x34, virtual false, abstract: false, final false
inline void EnterMyLock() ;

/// @brief Method EnterMyLockSpin, addr 0xa8cbc9c, size 0xd4, virtual false, abstract: false, final false
inline void EnterMyLockSpin() ;

/// @brief Method EnterReadLock, addr 0xa8ca7c0, size 0x8, virtual false, abstract: false, final false
inline void EnterReadLock() ;

/// @brief Method EnterUpgradeableReadLock, addr 0xa8cb2d4, size 0x8, virtual false, abstract: false, final false
inline void EnterUpgradeableReadLock() ;

/// @brief Method EnterWriteLock, addr 0xa8caec0, size 0x8, virtual false, abstract: false, final false
inline void EnterWriteLock() ;

/// @brief Method ExitAndWakeUpAppropriateReadWaiters, addr 0xa8cbbb4, size 0x94, virtual false, abstract: false, final false
inline void ExitAndWakeUpAppropriateReadWaiters() ;

/// @brief Method ExitAndWakeUpAppropriateWaiters, addr 0xa8cb7d4, size 0x2c, virtual false, abstract: false, final false
inline void ExitAndWakeUpAppropriateWaiters() ;

/// @brief Method ExitAndWakeUpAppropriateWaitersPreferringWriters, addr 0xa8cbb30, size 0x84, virtual false, abstract: false, final false
inline void ExitAndWakeUpAppropriateWaitersPreferringWriters() ;

/// @brief Method ExitMyLock, addr 0xa8cabd0, size 0x18, virtual false, abstract: false, final false
inline void ExitMyLock() ;

/// @brief Method ExitReadLock, addr 0xa8cb670, size 0x164, virtual false, abstract: false, final false
inline void ExitReadLock() ;

/// @brief Method ExitUpgradeableReadLock, addr 0xa8cb944, size 0x184, virtual false, abstract: false, final false
inline void ExitUpgradeableReadLock() ;

/// @brief Method ExitWriteLock, addr 0xa8cb800, size 0x134, virtual false, abstract: false, final false
inline void ExitWriteLock() ;

/// @brief Method GetNumReaders, addr 0xa8cb2c8, size 0xc, virtual false, abstract: false, final false
inline uint32_t GetNumReaders() ;

/// @brief Method GetThreadRWCount, addr 0xa8ca690, size 0x130, virtual false, abstract: false, final false
inline ::System::Threading::ReaderWriterCount* GetThreadRWCount(bool  dontAllocate) ;

/// @brief Method InitializeThreadCounts, addr 0xa8ca59c, size 0xc, virtual false, abstract: false, final false
inline void InitializeThreadCounts() ;

/// @brief Method IsRWEntryEmpty, addr 0xa8ca634, size 0x3c, virtual false, abstract: false, final false
static inline bool IsRWEntryEmpty(::System::Threading::ReaderWriterCount*  rwc) ;

/// @brief Method IsRwHashEntryChanged, addr 0xa8ca670, size 0x20, virtual false, abstract: false, final false
inline bool IsRwHashEntryChanged(::System::Threading::ReaderWriterCount*  lrwc) ;

/// @brief Method IsWriterAcquired, addr 0xa8cb2a8, size 0x10, virtual false, abstract: false, final false
inline bool IsWriterAcquired() ;

/// @brief Method LazyCreateEvent, addr 0xa8cac98, size 0x104, virtual false, abstract: false, final false
inline void LazyCreateEvent(::by_ref<::System::Threading::EventWaitHandle*>  waitEvent, bool  makeAutoResetEvent) ;

static inline ::System::Threading::ReaderWriterLockSlim* New_ctor() ;

static inline ::System::Threading::ReaderWriterLockSlim* New_ctor(::System::Threading::LockRecursionPolicy  recursionPolicy) ;

/// @brief Method SetUpgraderWaiting, addr 0xa8cbad8, size 0x10, virtual false, abstract: false, final false
inline void SetUpgraderWaiting() ;

/// @brief Method SetWriterAcquired, addr 0xa8cb2b8, size 0x10, virtual false, abstract: false, final false
inline void SetWriterAcquired() ;

/// @brief Method SetWritersWaiting, addr 0xa8cbac8, size 0x10, virtual false, abstract: false, final false
inline void SetWritersWaiting() ;

/// @brief Method SpinWait, addr 0xa8cac00, size 0x98, virtual false, abstract: false, final false
static inline void SpinWait(int32_t  SpinCount) ;

/// @brief Method TryEnterReadLock, addr 0xa8ca7c8, size 0x2c, virtual false, abstract: false, final false
inline bool TryEnterReadLock(int32_t  millisecondsTimeout) ;

/// @brief Method TryEnterReadLock, addr 0xa8ca878, size 0x4, virtual false, abstract: false, final false
inline bool TryEnterReadLock(::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker  timeout) ;

/// @brief Method TryEnterReadLockCore, addr 0xa8ca87c, size 0x354, virtual false, abstract: false, final false
inline bool TryEnterReadLockCore(::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker  timeout) ;

/// @brief Method TryEnterUpgradeableReadLock, addr 0xa8cb2dc, size 0x2c, virtual false, abstract: false, final false
inline bool TryEnterUpgradeableReadLock(int32_t  millisecondsTimeout) ;

/// @brief Method TryEnterUpgradeableReadLock, addr 0xa8cb308, size 0x4, virtual false, abstract: false, final false
inline bool TryEnterUpgradeableReadLock(::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker  timeout) ;

/// @brief Method TryEnterUpgradeableReadLockCore, addr 0xa8cb30c, size 0x364, virtual false, abstract: false, final false
inline bool TryEnterUpgradeableReadLockCore(::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker  timeout) ;

/// @brief Method TryEnterWriteLock, addr 0xa8caec8, size 0x2c, virtual false, abstract: false, final false
inline bool TryEnterWriteLock(int32_t  millisecondsTimeout) ;

/// @brief Method TryEnterWriteLock, addr 0xa8caef4, size 0x4, virtual false, abstract: false, final false
inline bool TryEnterWriteLock(::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker  timeout) ;

/// @brief Method TryEnterWriteLockCore, addr 0xa8caef8, size 0x3b0, virtual false, abstract: false, final false
inline bool TryEnterWriteLockCore(::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker  timeout) ;

/// @brief Method WaitOnEvent, addr 0xa8cad9c, size 0x124, virtual false, abstract: false, final false
inline bool WaitOnEvent(::System::Threading::EventWaitHandle*  waitEvent, ::by_ref<uint32_t>  numWaiters, ::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker  timeout, bool  isWriteWaiter) ;

constexpr bool const& __cordl_internal_get_fDisposed() const;

constexpr bool& __cordl_internal_get_fDisposed() ;

constexpr bool const& __cordl_internal_get_fIsReentrant() const;

constexpr bool& __cordl_internal_get_fIsReentrant() ;

constexpr bool const& __cordl_internal_get_fNoWaiters() const;

constexpr bool& __cordl_internal_get_fNoWaiters() ;

constexpr bool const& __cordl_internal_get_fUpgradeThreadHoldingRead() const;

constexpr bool& __cordl_internal_get_fUpgradeThreadHoldingRead() ;

constexpr int64_t const& __cordl_internal_get_lockID() const;

constexpr int64_t& __cordl_internal_get_lockID() ;

constexpr int32_t const& __cordl_internal_get_myLock() const;

constexpr int32_t& __cordl_internal_get_myLock() ;

constexpr uint32_t const& __cordl_internal_get_numReadWaiters() const;

constexpr uint32_t& __cordl_internal_get_numReadWaiters() ;

constexpr uint32_t const& __cordl_internal_get_numUpgradeWaiters() const;

constexpr uint32_t& __cordl_internal_get_numUpgradeWaiters() ;

constexpr uint32_t const& __cordl_internal_get_numWriteUpgradeWaiters() const;

constexpr uint32_t& __cordl_internal_get_numWriteUpgradeWaiters() ;

constexpr uint32_t const& __cordl_internal_get_numWriteWaiters() const;

constexpr uint32_t& __cordl_internal_get_numWriteWaiters() ;

constexpr uint32_t const& __cordl_internal_get_owners() const;

constexpr uint32_t& __cordl_internal_get_owners() ;

constexpr ::System::Threading::EventWaitHandle* const& __cordl_internal_get_readEvent() const;

constexpr ::System::Threading::EventWaitHandle*& __cordl_internal_get_readEvent() ;

constexpr ::System::Threading::EventWaitHandle* const& __cordl_internal_get_upgradeEvent() const;

constexpr ::System::Threading::EventWaitHandle*& __cordl_internal_get_upgradeEvent() ;

constexpr int32_t const& __cordl_internal_get_upgradeLockOwnerId() const;

constexpr int32_t& __cordl_internal_get_upgradeLockOwnerId() ;

constexpr ::System::Threading::EventWaitHandle* const& __cordl_internal_get_waitUpgradeEvent() const;

constexpr ::System::Threading::EventWaitHandle*& __cordl_internal_get_waitUpgradeEvent() ;

constexpr ::System::Threading::EventWaitHandle* const& __cordl_internal_get_writeEvent() const;

constexpr ::System::Threading::EventWaitHandle*& __cordl_internal_get_writeEvent() ;

constexpr int32_t const& __cordl_internal_get_writeLockOwnerId() const;

constexpr int32_t& __cordl_internal_get_writeLockOwnerId() ;

constexpr void __cordl_internal_set_fDisposed(bool  value) ;

constexpr void __cordl_internal_set_fIsReentrant(bool  value) ;

constexpr void __cordl_internal_set_fNoWaiters(bool  value) ;

constexpr void __cordl_internal_set_fUpgradeThreadHoldingRead(bool  value) ;

constexpr void __cordl_internal_set_lockID(int64_t  value) ;

constexpr void __cordl_internal_set_myLock(int32_t  value) ;

constexpr void __cordl_internal_set_numReadWaiters(uint32_t  value) ;

constexpr void __cordl_internal_set_numUpgradeWaiters(uint32_t  value) ;

constexpr void __cordl_internal_set_numWriteUpgradeWaiters(uint32_t  value) ;

constexpr void __cordl_internal_set_numWriteWaiters(uint32_t  value) ;

constexpr void __cordl_internal_set_owners(uint32_t  value) ;

constexpr void __cordl_internal_set_readEvent(::System::Threading::EventWaitHandle*  value) ;

constexpr void __cordl_internal_set_upgradeEvent(::System::Threading::EventWaitHandle*  value) ;

constexpr void __cordl_internal_set_upgradeLockOwnerId(int32_t  value) ;

constexpr void __cordl_internal_set_waitUpgradeEvent(::System::Threading::EventWaitHandle*  value) ;

constexpr void __cordl_internal_set_writeEvent(::System::Threading::EventWaitHandle*  value) ;

constexpr void __cordl_internal_set_writeLockOwnerId(int32_t  value) ;

/// @brief Method .ctor, addr 0xa8ca5a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa8ca5b0, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::LockRecursionPolicy  recursionPolicy) ;

static inline int64_t getStaticF_s_nextLockID() ;

static inline ::System::Threading::ReaderWriterCount* getStaticF_t_rwc() ;

/// @brief Method get_IsReadLockHeld, addr 0xa8cbef8, size 0x18, virtual false, abstract: false, final false
inline bool get_IsReadLockHeld() ;

/// @brief Method get_IsUpgradeableReadLockHeld, addr 0xa8cbf10, size 0x18, virtual false, abstract: false, final false
inline bool get_IsUpgradeableReadLockHeld() ;

/// @brief Method get_IsWriteLockHeld, addr 0xa8cbf28, size 0x18, virtual false, abstract: false, final false
inline bool get_IsWriteLockHeld() ;

/// @brief Method get_RecursiveReadCount, addr 0xa8cbf40, size 0x80, virtual false, abstract: false, final false
inline int32_t get_RecursiveReadCount() ;

/// @brief Method get_RecursiveUpgradeCount, addr 0xa8cbfc0, size 0xb0, virtual false, abstract: false, final false
inline int32_t get_RecursiveUpgradeCount() ;

/// @brief Method get_RecursiveWriteCount, addr 0xa8cc070, size 0xb0, virtual false, abstract: false, final false
inline int32_t get_RecursiveWriteCount() ;

/// @brief Method get_WaitingReadCount, addr 0xa8cc120, size 0x8, virtual false, abstract: false, final false
inline int32_t get_WaitingReadCount() ;

/// @brief Method get_WaitingUpgradeCount, addr 0xa8cc128, size 0x8, virtual false, abstract: false, final false
inline int32_t get_WaitingUpgradeCount() ;

/// @brief Method get_WaitingWriteCount, addr 0xa8cc130, size 0x138, virtual false, abstract: false, final false
inline int32_t get_WaitingWriteCount() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_s_nextLockID(int64_t  value) ;

static inline void setStaticF_t_rwc(::System::Threading::ReaderWriterCount*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReaderWriterLockSlim() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReaderWriterLockSlim", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReaderWriterLockSlim(ReaderWriterLockSlim && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReaderWriterLockSlim", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReaderWriterLockSlim(ReaderWriterLockSlim const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24170};

/// @brief Field fIsReentrant, offset: 0x10, size: 0x1, def value: None
 bool  ___fIsReentrant;

/// @brief Field myLock, offset: 0x14, size: 0x4, def value: None
 int32_t  ___myLock;

/// @brief Field numWriteWaiters, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___numWriteWaiters;

/// @brief Field numReadWaiters, offset: 0x1c, size: 0x4, def value: None
 uint32_t  ___numReadWaiters;

/// @brief Field numWriteUpgradeWaiters, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___numWriteUpgradeWaiters;

/// @brief Field numUpgradeWaiters, offset: 0x24, size: 0x4, def value: None
 uint32_t  ___numUpgradeWaiters;

/// @brief Field fNoWaiters, offset: 0x28, size: 0x1, def value: None
 bool  ___fNoWaiters;

/// @brief Field upgradeLockOwnerId, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___upgradeLockOwnerId;

/// @brief Field writeLockOwnerId, offset: 0x30, size: 0x4, def value: None
 int32_t  ___writeLockOwnerId;

/// @brief Field writeEvent, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::EventWaitHandle*  ___writeEvent;

/// @brief Field readEvent, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::EventWaitHandle*  ___readEvent;

/// @brief Field upgradeEvent, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::EventWaitHandle*  ___upgradeEvent;

/// @brief Field waitUpgradeEvent, offset: 0x50, size: 0x8, def value: None
 ::System::Threading::EventWaitHandle*  ___waitUpgradeEvent;

/// @brief Field lockID, offset: 0x58, size: 0x8, def value: None
 int64_t  ___lockID;

/// @brief Field fUpgradeThreadHoldingRead, offset: 0x60, size: 0x1, def value: None
 bool  ___fUpgradeThreadHoldingRead;

/// @brief Field owners, offset: 0x64, size: 0x4, def value: None
 uint32_t  ___owners;

/// @brief Field fDisposed, offset: 0x68, size: 0x1, def value: None
 bool  ___fDisposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___fIsReentrant) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___myLock) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___numWriteWaiters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___numReadWaiters) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___numWriteUpgradeWaiters) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___numUpgradeWaiters) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___fNoWaiters) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___upgradeLockOwnerId) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___writeLockOwnerId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___writeEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___readEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___upgradeEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___waitUpgradeEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___lockID) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___fUpgradeThreadHoldingRead) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___owners) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___fDisposed) == 0x68, "Offset mismatch!");

static_assert(sizeof(::System::Threading::ReaderWriterLockSlim) == 0x70, "Size mismatch!");

} // namespace end def System::Threading
