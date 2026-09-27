#pragma once
// IWYU pragma private; include "Pathfinding/ThreadControlQueue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadControlQueue)
namespace Pathfinding {
class Path;
}
namespace Pathfinding {
class ThreadControlQueue_QueueTerminationException;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Pathfinding {
class ThreadControlQueue;
}
namespace Pathfinding {
class ThreadControlQueue_QueueTerminationException;
}
// Write type traits
MARK_REF_T(::Pathfinding::ThreadControlQueue*);
MARK_REF_T(::Pathfinding::ThreadControlQueue_QueueTerminationException*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ThreadControlQueue*, "Pathfinding", "ThreadControlQueue");
DEFINE_IL2CPP_CLASS(::Pathfinding::ThreadControlQueue_QueueTerminationException*, "Pathfinding", "ThreadControlQueue/QueueTerminationException");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.ThreadControlQueue
class CORDL_TYPE ThreadControlQueue : public ::System::Object {
public:
// Declarations
using QueueTerminationException = ::Pathfinding::ThreadControlQueue_QueueTerminationException;

 __declspec(property(get=get_AllReceiversBlocked)) bool  AllReceiversBlocked;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_IsTerminating)) bool  IsTerminating;

/// @brief Field block, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_block, put=__cordl_internal_set_block)) ::System::Threading::ManualResetEvent*  block;

/// @brief Field blocked, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_blocked, put=__cordl_internal_set_blocked)) bool  blocked;

/// @brief Field blockedReceivers, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_blockedReceivers, put=__cordl_internal_set_blockedReceivers)) int32_t  blockedReceivers;

/// @brief Field head, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_head, put=__cordl_internal_set_head)) ::Pathfinding::Path*  head;

/// @brief Field lockObj, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lockObj, put=__cordl_internal_set_lockObj)) ::System::Object*  lockObj;

/// @brief Field numReceivers, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_numReceivers, put=__cordl_internal_set_numReceivers)) int32_t  numReceivers;

/// @brief Field starving, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_starving, put=__cordl_internal_set_starving)) bool  starving;

/// @brief Field tail, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tail, put=__cordl_internal_set_tail)) ::Pathfinding::Path*  tail;

/// @brief Field terminate, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_terminate, put=__cordl_internal_set_terminate)) bool  terminate;

/// @brief Method Block, addr 0x5e63f24, size 0xd4, virtual false, abstract: false, final false
inline void Block() ;

/// @brief Method Lock, addr 0x5e66d18, size 0xc, virtual false, abstract: false, final false
inline void Lock() ;

static inline ::Pathfinding::ThreadControlQueue* New_ctor(int32_t  numReceivers) ;

/// @brief Method Pop, addr 0x5e6577c, size 0x34c, virtual false, abstract: false, final false
inline ::Pathfinding::Path* Pop() ;

/// @brief Method PopNoBlock, addr 0x5e64620, size 0x2fc, virtual false, abstract: false, final false
inline ::Pathfinding::Path* PopNoBlock(bool  blockedBefore) ;

/// @brief Method Push, addr 0x5e66ea0, size 0x15c, virtual false, abstract: false, final false
inline void Push(::Pathfinding::Path*  path) ;

/// @brief Method PushFront, addr 0x5e66d30, size 0x170, virtual false, abstract: false, final false
inline void PushFront(::Pathfinding::Path*  path) ;

/// @brief Method ReceiverTerminated, addr 0x5e65c6c, size 0x30, virtual false, abstract: false, final false
inline void ReceiverTerminated() ;

/// @brief Method Starving, addr 0x5e66ffc, size 0x24, virtual false, abstract: false, final false
inline void Starving() ;

/// @brief Method TerminateReceivers, addr 0x5e6454c, size 0xd4, virtual false, abstract: false, final false
inline void TerminateReceivers() ;

/// @brief Method Unblock, addr 0x5e64410, size 0xd0, virtual false, abstract: false, final false
inline void Unblock() ;

/// @brief Method Unlock, addr 0x5e66d24, size 0xc, virtual false, abstract: false, final false
inline void Unlock() ;

constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get_block() const;

constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_block() ;

constexpr bool const& __cordl_internal_get_blocked() const;

constexpr bool& __cordl_internal_get_blocked() ;

constexpr int32_t const& __cordl_internal_get_blockedReceivers() const;

constexpr int32_t& __cordl_internal_get_blockedReceivers() ;

constexpr ::Pathfinding::Path* const& __cordl_internal_get_head() const;

constexpr ::Pathfinding::Path*& __cordl_internal_get_head() ;

constexpr ::System::Object* const& __cordl_internal_get_lockObj() const;

constexpr ::System::Object*& __cordl_internal_get_lockObj() ;

constexpr int32_t const& __cordl_internal_get_numReceivers() const;

constexpr int32_t& __cordl_internal_get_numReceivers() ;

constexpr bool const& __cordl_internal_get_starving() const;

constexpr bool& __cordl_internal_get_starving() ;

constexpr ::Pathfinding::Path* const& __cordl_internal_get_tail() const;

constexpr ::Pathfinding::Path*& __cordl_internal_get_tail() ;

constexpr bool const& __cordl_internal_get_terminate() const;

constexpr bool& __cordl_internal_get_terminate() ;

constexpr void __cordl_internal_set_block(::System::Threading::ManualResetEvent*  value) ;

constexpr void __cordl_internal_set_blocked(bool  value) ;

constexpr void __cordl_internal_set_blockedReceivers(int32_t  value) ;

constexpr void __cordl_internal_set_head(::Pathfinding::Path*  value) ;

constexpr void __cordl_internal_set_lockObj(::System::Object*  value) ;

constexpr void __cordl_internal_set_numReceivers(int32_t  value) ;

constexpr void __cordl_internal_set_starving(bool  value) ;

constexpr void __cordl_internal_set_tail(::Pathfinding::Path*  value) ;

constexpr void __cordl_internal_set_terminate(bool  value) ;

/// @brief Method .ctor, addr 0x5e63bf0, size 0xbc, virtual false, abstract: false, final false
inline void _ctor(int32_t  numReceivers) ;

/// @brief Method get_AllReceiversBlocked, addr 0x5e6423c, size 0xe4, virtual false, abstract: false, final false
inline bool get_AllReceiversBlocked() ;

/// @brief Method get_IsEmpty, addr 0x5e66d00, size 0x10, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_IsTerminating, addr 0x5e66d10, size 0x8, virtual false, abstract: false, final false
inline bool get_IsTerminating() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadControlQueue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadControlQueue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadControlQueue(ThreadControlQueue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadControlQueue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadControlQueue(ThreadControlQueue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21266};

/// @brief Field head, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::Path*  ___head;

/// @brief Field tail, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::Path*  ___tail;

/// @brief Field lockObj, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___lockObj;

/// @brief Field numReceivers, offset: 0x28, size: 0x4, def value: None
 int32_t  ___numReceivers;

/// @brief Field blocked, offset: 0x2c, size: 0x1, def value: None
 bool  ___blocked;

/// @brief Field blockedReceivers, offset: 0x30, size: 0x4, def value: None
 int32_t  ___blockedReceivers;

/// @brief Field starving, offset: 0x34, size: 0x1, def value: None
 bool  ___starving;

/// @brief Field terminate, offset: 0x35, size: 0x1, def value: None
 bool  ___terminate;

/// @brief Field block, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::ManualResetEvent*  ___block;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ThreadControlQueue, ___head) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ThreadControlQueue, ___tail) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ThreadControlQueue, ___lockObj) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ThreadControlQueue, ___numReceivers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ThreadControlQueue, ___blocked) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ThreadControlQueue, ___blockedReceivers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ThreadControlQueue, ___starving) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ThreadControlQueue, ___terminate) == 0x35, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ThreadControlQueue, ___block) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ThreadControlQueue) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding
// Dependencies System.Exception
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.ThreadControlQueue/QueueTerminationException
class CORDL_TYPE ThreadControlQueue_QueueTerminationException : public ::System::Exception {
public:
// Declarations
static inline ::Pathfinding::ThreadControlQueue_QueueTerminationException* New_ctor() ;

/// @brief Method .ctor, addr 0x5e67020, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadControlQueue_QueueTerminationException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadControlQueue_QueueTerminationException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadControlQueue_QueueTerminationException(ThreadControlQueue_QueueTerminationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadControlQueue_QueueTerminationException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadControlQueue_QueueTerminationException(ThreadControlQueue_QueueTerminationException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21265};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::ThreadControlQueue_QueueTerminationException) == 0x90, "Size mismatch!");

} // namespace end def Pathfinding
