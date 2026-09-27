#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Timer.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Timer_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Timer_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPlayerLoopItem_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::Timer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Linq::Timer::*)(::System::TimeSpan, ::System::Nullable_1<::System::TimeSpan>, ::Cysharp::Threading::Tasks::PlayerLoopTiming, bool)>(&::Cysharp::Threading::Tasks::Linq::Timer::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xae264c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Timer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Nullable_1<::System::TimeSpan>>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::Timer.GetAsyncEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* (::Cysharp::Threading::Tasks::Linq::Timer::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::Timer::GetAsyncEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae2651c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Timer*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& Cysharp::Threading::Tasks::Linq::Timer::__cordl_internal_get_updateTiming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateTiming;
}
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& Cysharp::Threading::Tasks::Linq::Timer::__cordl_internal_get_updateTiming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateTiming;
}
constexpr void Cysharp::Threading::Tasks::Linq::Timer::__cordl_internal_set_updateTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateTiming = value;
}
constexpr ::System::TimeSpan& Cysharp::Threading::Tasks::Linq::Timer::__cordl_internal_get_dueTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dueTime;
}
constexpr ::System::TimeSpan const& Cysharp::Threading::Tasks::Linq::Timer::__cordl_internal_get_dueTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dueTime;
}
constexpr void Cysharp::Threading::Tasks::Linq::Timer::__cordl_internal_set_dueTime(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dueTime = value;
}
constexpr ::System::Nullable_1<::System::TimeSpan>& Cysharp::Threading::Tasks::Linq::Timer::__cordl_internal_get_period()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___period;
}
constexpr ::System::Nullable_1<::System::TimeSpan> const& Cysharp::Threading::Tasks::Linq::Timer::__cordl_internal_get_period() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___period;
}
constexpr void Cysharp::Threading::Tasks::Linq::Timer::__cordl_internal_set_period(::System::Nullable_1<::System::TimeSpan>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___period = value;
}
constexpr bool& Cysharp::Threading::Tasks::Linq::Timer::__cordl_internal_get_ignoreTimeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreTimeScale;
}
constexpr bool const& Cysharp::Threading::Tasks::Linq::Timer::__cordl_internal_get_ignoreTimeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreTimeScale;
}
constexpr void Cysharp::Threading::Tasks::Linq::Timer::__cordl_internal_set_ignoreTimeScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreTimeScale = value;
}
inline void Cysharp::Threading::Tasks::Linq::Timer::_ctor(::System::TimeSpan  dueTime, ::System::Nullable_1<::System::TimeSpan>  period, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming, bool  ignoreTimeScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Timer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Nullable_1<::System::TimeSpan>>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dueTime, period, updateTiming, ignoreTimeScale);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::Linq::Timer::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Timer*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(this, ___internal_method, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::Linq::Timer* Cysharp::Threading::Tasks::Linq::Timer::New_ctor(::System::TimeSpan  dueTime, ::System::Nullable_1<::System::TimeSpan>  period, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming, bool  ignoreTimeScale)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Timer*>(dueTime, period, updateTiming, ignoreTimeScale));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr  Cysharp::Threading::Tasks::Linq::Timer::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::Linq::Timer::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1___Cysharp__Threading__Tasks__AsyncUnit_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Linq::Timer::Timer()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::Timer__Timer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Linq::Timer__Timer::*)(::System::TimeSpan, ::System::Nullable_1<::System::TimeSpan>, ::Cysharp::Threading::Tasks::PlayerLoopTiming, bool, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::Timer__Timer::_ctor)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xae265ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Timer__Timer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Nullable_1<::System::TimeSpan>>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::Timer__Timer.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::AsyncUnit (::Cysharp::Threading::Tasks::Linq::Timer__Timer::*)()>(&::Cysharp::Threading::Tasks::Linq::Timer__Timer::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae267d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Timer__Timer*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::Timer__Timer.MoveNextAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<bool> (::Cysharp::Threading::Tasks::Linq::Timer__Timer::*)()>(&::Cysharp::Threading::Tasks::Linq::Timer__Timer::MoveNextAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xae267d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Timer__Timer*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::Timer__Timer.DisposeAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::Linq::Timer__Timer::*)()>(&::Cysharp::Threading::Tasks::Linq::Timer__Timer::DisposeAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xae268e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Timer__Timer*>(),
                        {"DisposeAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::Timer__Timer.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::Linq::Timer__Timer::*)()>(&::Cysharp::Threading::Tasks::Linq::Timer__Timer::MoveNext)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xae26900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Timer__Timer*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_dueTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dueTime;
}
constexpr float_t const& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_dueTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dueTime;
}
constexpr void Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_set_dueTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dueTime = value;
}
constexpr ::System::Nullable_1<float_t>& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_period()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___period;
}
constexpr ::System::Nullable_1<float_t> const& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_period() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___period;
}
constexpr void Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_set_period(::System::Nullable_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___period = value;
}
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_updateTiming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateTiming;
}
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_updateTiming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateTiming;
}
constexpr void Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_set_updateTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateTiming = value;
}
constexpr bool& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_ignoreTimeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreTimeScale;
}
constexpr bool const& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_ignoreTimeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreTimeScale;
}
constexpr void Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_set_ignoreTimeScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreTimeScale = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr int32_t& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_initialFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialFrame;
}
constexpr int32_t const& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_initialFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialFrame;
}
constexpr void Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_set_initialFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialFrame = value;
}
constexpr float_t& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_elapsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elapsed;
}
constexpr float_t const& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_elapsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elapsed;
}
constexpr void Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_set_elapsed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elapsed = value;
}
constexpr bool& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_dueTimePhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dueTimePhase;
}
constexpr bool const& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_dueTimePhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dueTimePhase;
}
constexpr void Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_set_dueTimePhase(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dueTimePhase = value;
}
constexpr bool& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr bool const& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr void Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_set_completed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
constexpr bool& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr bool const& Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_get_disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr void Cysharp::Threading::Tasks::Linq::Timer__Timer::__cordl_internal_set_disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposed = value;
}
inline void Cysharp::Threading::Tasks::Linq::Timer__Timer::_ctor(::System::TimeSpan  dueTime, ::System::Nullable_1<::System::TimeSpan>  period, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming, bool  ignoreTimeScale, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Timer__Timer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Nullable_1<::System::TimeSpan>>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dueTime, period, updateTiming, ignoreTimeScale, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::AsyncUnit Cysharp::Threading::Tasks::Linq::Timer__Timer::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Timer__Timer*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::AsyncUnit>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::Timer__Timer::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Timer__Timer*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::Timer__Timer::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Timer__Timer*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::Linq::Timer__Timer::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Timer__Timer*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Linq::Timer__Timer* Cysharp::Threading::Tasks::Linq::Timer__Timer::New_ctor(::System::TimeSpan  dueTime, ::System::Nullable_1<::System::TimeSpan>  period, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming, bool  ignoreTimeScale, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Timer__Timer*>(dueTime, period, updateTiming, ignoreTimeScale, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr  Cysharp::Threading::Tasks::Linq::Timer__Timer::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::Linq::Timer__Timer::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1___Cysharp__Threading__Tasks__AsyncUnit_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr  Cysharp::Threading::Tasks::Linq::Timer__Timer::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::Timer__Timer::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::Linq::Timer__Timer::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::Linq::Timer__Timer::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Linq::Timer__Timer::Timer__Timer()   {
}
