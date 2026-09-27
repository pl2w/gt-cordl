#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Timer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Timer)
namespace Cysharp::Threading::Tasks::Linq {
class Timer__Timer;
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
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
class Timer;
}
namespace Cysharp::Threading::Tasks::Linq {
class Timer__Timer;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::Timer*);
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::Timer__Timer*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::Timer*, "Cysharp.Threading.Tasks.Linq", "Timer");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::Timer__Timer*, "Cysharp.Threading.Tasks.Linq", "Timer/_Timer");
// Dependencies Cysharp.Threading.Tasks.PlayerLoopTiming, System.Nullable`1<T>, System.Object, System.TimeSpan
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Timer
class CORDL_TYPE Timer : public ::System::Object {
public:
// Declarations
using _Timer = ::Cysharp::Threading::Tasks::Linq::Timer__Timer;

/// @brief Field dueTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_dueTime, put=__cordl_internal_set_dueTime)) ::System::TimeSpan  dueTime;

/// @brief Field ignoreTimeScale, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreTimeScale, put=__cordl_internal_set_ignoreTimeScale)) bool  ignoreTimeScale;

/// @brief Field period, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_period, put=__cordl_internal_set_period)) ::System::Nullable_1<::System::TimeSpan>  period;

/// @brief Field updateTiming, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateTiming, put=__cordl_internal_set_updateTiming)) ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0xae2651c, size 0x90, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::Timer* New_ctor(::System::TimeSpan  dueTime, ::System::Nullable_1<::System::TimeSpan>  period, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming, bool  ignoreTimeScale) ;

constexpr ::System::TimeSpan const& __cordl_internal_get_dueTime() const;

constexpr ::System::TimeSpan& __cordl_internal_get_dueTime() ;

constexpr bool const& __cordl_internal_get_ignoreTimeScale() const;

constexpr bool& __cordl_internal_get_ignoreTimeScale() ;

constexpr ::System::Nullable_1<::System::TimeSpan> const& __cordl_internal_get_period() const;

constexpr ::System::Nullable_1<::System::TimeSpan>& __cordl_internal_get_period() ;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& __cordl_internal_get_updateTiming() const;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& __cordl_internal_get_updateTiming() ;

constexpr void __cordl_internal_set_dueTime(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set_ignoreTimeScale(bool  value) ;

constexpr void __cordl_internal_set_period(::System::Nullable_1<::System::TimeSpan>  value) ;

constexpr void __cordl_internal_set_updateTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming  value) ;

/// @brief Method .ctor, addr 0xae264c8, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::TimeSpan  dueTime, ::System::Nullable_1<::System::TimeSpan>  period, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming, bool  ignoreTimeScale) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1___Cysharp__Threading__Tasks__AsyncUnit_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Timer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Timer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Timer(Timer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Timer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Timer(Timer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20891};

/// @brief Field updateTiming, offset: 0x10, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTiming  ___updateTiming;

/// @brief Field dueTime, offset: 0x18, size: 0x8, def value: None
 ::System::TimeSpan  ___dueTime;

/// @brief Field period, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::System::TimeSpan>  ___period;

/// @brief Field ignoreTimeScale, offset: 0x30, size: 0x1, def value: None
 bool  ___ignoreTimeScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Timer, ___updateTiming) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Timer, ___dueTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Timer, ___period) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Timer, ___ignoreTimeScale) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::Timer) == 0x38, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, Cysharp.Threading.Tasks.PlayerLoopTiming, System.Nullable`1<T>, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Timer/_Timer
class CORDL_TYPE Timer__Timer : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
 __declspec(property(get=get_Current)) ::Cysharp::Threading::Tasks::AsyncUnit  Current;

/// @brief Field cancellationToken, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field completed, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) bool  completed;

/// @brief Field disposed, offset 0x6a, size 0x1 
 __declspec(property(get=__cordl_internal_get_disposed, put=__cordl_internal_set_disposed)) bool  disposed;

/// @brief Field dueTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_dueTime, put=__cordl_internal_set_dueTime)) float_t  dueTime;

/// @brief Field dueTimePhase, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_dueTimePhase, put=__cordl_internal_set_dueTimePhase)) bool  dueTimePhase;

/// @brief Field elapsed, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_elapsed, put=__cordl_internal_set_elapsed)) float_t  elapsed;

/// @brief Field ignoreTimeScale, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreTimeScale, put=__cordl_internal_set_ignoreTimeScale)) bool  ignoreTimeScale;

/// @brief Field initialFrame, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialFrame, put=__cordl_internal_set_initialFrame)) int32_t  initialFrame;

/// @brief Field period, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_period, put=__cordl_internal_set_period)) ::System::Nullable_1<float_t>  period;

/// @brief Field updateTiming, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateTiming, put=__cordl_internal_set_updateTiming)) ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*() noexcept;

/// @brief Method DisposeAsync, addr 0xae268e4, size 0x1c, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNext, addr 0xae26900, size 0x17c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method MoveNextAsync, addr 0xae267d8, size 0x10c, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::Timer__Timer* New_ctor(::System::TimeSpan  dueTime, ::System::Nullable_1<::System::TimeSpan>  period, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming, bool  ignoreTimeScale, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr bool const& __cordl_internal_get_completed() const;

constexpr bool& __cordl_internal_get_completed() ;

constexpr bool const& __cordl_internal_get_disposed() const;

constexpr bool& __cordl_internal_get_disposed() ;

constexpr float_t const& __cordl_internal_get_dueTime() const;

constexpr float_t& __cordl_internal_get_dueTime() ;

constexpr bool const& __cordl_internal_get_dueTimePhase() const;

constexpr bool& __cordl_internal_get_dueTimePhase() ;

constexpr float_t const& __cordl_internal_get_elapsed() const;

constexpr float_t& __cordl_internal_get_elapsed() ;

constexpr bool const& __cordl_internal_get_ignoreTimeScale() const;

constexpr bool& __cordl_internal_get_ignoreTimeScale() ;

constexpr int32_t const& __cordl_internal_get_initialFrame() const;

constexpr int32_t& __cordl_internal_get_initialFrame() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get_period() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get_period() ;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& __cordl_internal_get_updateTiming() const;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& __cordl_internal_get_updateTiming() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_completed(bool  value) ;

constexpr void __cordl_internal_set_disposed(bool  value) ;

constexpr void __cordl_internal_set_dueTime(float_t  value) ;

constexpr void __cordl_internal_set_dueTimePhase(bool  value) ;

constexpr void __cordl_internal_set_elapsed(float_t  value) ;

constexpr void __cordl_internal_set_ignoreTimeScale(bool  value) ;

constexpr void __cordl_internal_set_initialFrame(int32_t  value) ;

constexpr void __cordl_internal_set_period(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set_updateTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming  value) ;

/// @brief Method .ctor, addr 0xae265ac, size 0x224, virtual false, abstract: false, final false
inline void _ctor(::System::TimeSpan  dueTime, ::System::Nullable_1<::System::TimeSpan>  period, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming, bool  ignoreTimeScale, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method get_Current, addr 0xae267d0, size 0x8, virtual true, abstract: false, final true
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
constexpr Timer__Timer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Timer__Timer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Timer__Timer(Timer__Timer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Timer__Timer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Timer__Timer(Timer__Timer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20890};

/// @brief Field dueTime, offset: 0x38, size: 0x4, def value: None
 float_t  ___dueTime;

/// @brief Field period, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<float_t>  ___period;

/// @brief Field updateTiming, offset: 0x50, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTiming  ___updateTiming;

/// @brief Field ignoreTimeScale, offset: 0x54, size: 0x1, def value: None
 bool  ___ignoreTimeScale;

/// @brief Field cancellationToken, offset: 0x58, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field initialFrame, offset: 0x60, size: 0x4, def value: None
 int32_t  ___initialFrame;

/// @brief Field elapsed, offset: 0x64, size: 0x4, def value: None
 float_t  ___elapsed;

/// @brief Field dueTimePhase, offset: 0x68, size: 0x1, def value: None
 bool  ___dueTimePhase;

/// @brief Size padding 0x68 - 0x70 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

/// @brief Field completed, offset: 0x69, size: 0x1, def value: None
 bool  ___completed;

/// @brief Field disposed, offset: 0x6a, size: 0x1, def value: None
 bool  ___disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Timer__Timer, ___dueTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Timer__Timer, ___period) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Timer__Timer, ___updateTiming) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Timer__Timer, ___ignoreTimeScale) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Timer__Timer, ___cancellationToken) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Timer__Timer, ___initialFrame) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Timer__Timer, ___elapsed) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Timer__Timer, ___dueTimePhase) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Timer__Timer, ___completed) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::Timer__Timer, ___disposed) == 0x6a, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::Timer__Timer) == 0x68, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
