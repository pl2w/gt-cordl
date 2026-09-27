#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/TimerFrame.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimerFrame)
namespace Cysharp::Threading::Tasks::Linq {
class TimerFrame__TimerFrame;
}
namespace Cysharp::Threading::Tasks {
struct AsyncUnit;
}
namespace Cysharp::Threading::Tasks {
class IPlayerLoopItem;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskAsyncDisposable;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerator_1;
}
namespace Cysharp::Threading::Tasks {
struct PlayerLoopTiming;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
class TimerFrame;
}
namespace Cysharp::Threading::Tasks::Linq {
class TimerFrame__TimerFrame;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::TimerFrame*);
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::TimerFrame*, "Cysharp.Threading.Tasks.Linq", "TimerFrame");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame*, "Cysharp.Threading.Tasks.Linq", "TimerFrame/_TimerFrame");
// Dependencies Cysharp.Threading.Tasks.PlayerLoopTiming, System.Nullable`1<T>, System.Object
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.TimerFrame
class CORDL_TYPE TimerFrame : public ::System::Object {
public:
// Declarations
using _TimerFrame = ::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame;

/// @brief Field dueTimeFrameCount, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_dueTimeFrameCount, put=__cordl_internal_set_dueTimeFrameCount)) int32_t  dueTimeFrameCount;

/// @brief Field periodFrameCount, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_periodFrameCount, put=__cordl_internal_set_periodFrameCount)) ::System::Nullable_1<int32_t>  periodFrameCount;

/// @brief Field updateTiming, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateTiming, put=__cordl_internal_set_updateTiming)) ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0xae26ab8, size 0x78, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::TimerFrame* New_ctor(int32_t  dueTimeFrameCount, ::System::Nullable_1<int32_t>  periodFrameCount, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming) ;

constexpr int32_t const& __cordl_internal_get_dueTimeFrameCount() const;

constexpr int32_t& __cordl_internal_get_dueTimeFrameCount() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_periodFrameCount() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_periodFrameCount() ;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& __cordl_internal_get_updateTiming() const;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& __cordl_internal_get_updateTiming() ;

constexpr void __cordl_internal_set_dueTimeFrameCount(int32_t  value) ;

constexpr void __cordl_internal_set_periodFrameCount(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_updateTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming  value) ;

/// @brief Method .ctor, addr 0xae26a7c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(int32_t  dueTimeFrameCount, ::System::Nullable_1<int32_t>  periodFrameCount, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1___Cysharp__Threading__Tasks__AsyncUnit_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimerFrame() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimerFrame", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimerFrame(TimerFrame && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimerFrame", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimerFrame(TimerFrame const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20893};

/// @brief Field updateTiming, offset: 0x10, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTiming  ___updateTiming;

/// @brief Field dueTimeFrameCount, offset: 0x14, size: 0x4, def value: None
 int32_t  ___dueTimeFrameCount;

/// @brief Field periodFrameCount, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___periodFrameCount;

/// @brief Size padding 0x20 - 0x28 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::TimerFrame, ___updateTiming) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::TimerFrame, ___dueTimeFrameCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::TimerFrame, ___periodFrameCount) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::TimerFrame) == 0x20, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, System.Nullable`1<T>, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame
class CORDL_TYPE TimerFrame__TimerFrame : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
 __declspec(property(get=get_Current)) ::Cysharp::Threading::Tasks::AsyncUnit  Current;

/// @brief Field cancellationToken, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field completed, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) bool  completed;

/// @brief Field currentFrame, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentFrame, put=__cordl_internal_set_currentFrame)) int32_t  currentFrame;

/// @brief Field disposed, offset 0x62, size 0x1 
 __declspec(property(get=__cordl_internal_get_disposed, put=__cordl_internal_set_disposed)) bool  disposed;

/// @brief Field dueTimeFrameCount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_dueTimeFrameCount, put=__cordl_internal_set_dueTimeFrameCount)) int32_t  dueTimeFrameCount;

/// @brief Field dueTimePhase, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_dueTimePhase, put=__cordl_internal_set_dueTimePhase)) bool  dueTimePhase;

/// @brief Field initialFrame, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialFrame, put=__cordl_internal_set_initialFrame)) int32_t  initialFrame;

/// @brief Field periodFrameCount, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_periodFrameCount, put=__cordl_internal_set_periodFrameCount)) ::System::Nullable_1<int32_t>  periodFrameCount;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*() noexcept;

/// @brief Method DisposeAsync, addr 0xae26d90, size 0x1c, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNext, addr 0xae26dac, size 0x150, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method MoveNextAsync, addr 0xae26c84, size 0x10c, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame* New_ctor(int32_t  dueTimeFrameCount, ::System::Nullable_1<int32_t>  periodFrameCount, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr bool const& __cordl_internal_get_completed() const;

constexpr bool& __cordl_internal_get_completed() ;

constexpr int32_t const& __cordl_internal_get_currentFrame() const;

constexpr int32_t& __cordl_internal_get_currentFrame() ;

constexpr bool const& __cordl_internal_get_disposed() const;

constexpr bool& __cordl_internal_get_disposed() ;

constexpr int32_t const& __cordl_internal_get_dueTimeFrameCount() const;

constexpr int32_t& __cordl_internal_get_dueTimeFrameCount() ;

constexpr bool const& __cordl_internal_get_dueTimePhase() const;

constexpr bool& __cordl_internal_get_dueTimePhase() ;

constexpr int32_t const& __cordl_internal_get_initialFrame() const;

constexpr int32_t& __cordl_internal_get_initialFrame() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_periodFrameCount() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_periodFrameCount() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_completed(bool  value) ;

constexpr void __cordl_internal_set_currentFrame(int32_t  value) ;

constexpr void __cordl_internal_set_disposed(bool  value) ;

constexpr void __cordl_internal_set_dueTimeFrameCount(int32_t  value) ;

constexpr void __cordl_internal_set_dueTimePhase(bool  value) ;

constexpr void __cordl_internal_set_initialFrame(int32_t  value) ;

constexpr void __cordl_internal_set_periodFrameCount(::System::Nullable_1<int32_t>  value) ;

/// @brief Method .ctor, addr 0xae26b30, size 0x14c, virtual false, abstract: false, final false
inline void _ctor(int32_t  dueTimeFrameCount, ::System::Nullable_1<int32_t>  periodFrameCount, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method get_Current, addr 0xae26c7c, size 0x8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::AsyncUnit get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1___Cysharp__Threading__Tasks__AsyncUnit_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimerFrame__TimerFrame() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimerFrame__TimerFrame", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimerFrame__TimerFrame(TimerFrame__TimerFrame && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimerFrame__TimerFrame", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimerFrame__TimerFrame(TimerFrame__TimerFrame const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20892};

/// @brief Field dueTimeFrameCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ___dueTimeFrameCount;

/// @brief Field periodFrameCount, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___periodFrameCount;

/// @brief Field cancellationToken, offset: 0x50, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field initialFrame, offset: 0x58, size: 0x4, def value: None
 int32_t  ___initialFrame;

/// @brief Field currentFrame, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___currentFrame;

/// @brief Field dueTimePhase, offset: 0x60, size: 0x1, def value: None
 bool  ___dueTimePhase;

/// @brief Size padding 0x60 - 0x68 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

/// @brief Field completed, offset: 0x61, size: 0x1, def value: None
 bool  ___completed;

/// @brief Field disposed, offset: 0x62, size: 0x1, def value: None
 bool  ___disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame, ___dueTimeFrameCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame, ___periodFrameCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame, ___cancellationToken) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame, ___initialFrame) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame, ___currentFrame) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame, ___dueTimePhase) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame, ___completed) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame, ___disposed) == 0x62, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame) == 0x60, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
