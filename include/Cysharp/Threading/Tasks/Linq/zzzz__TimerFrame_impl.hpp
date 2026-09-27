#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/TimerFrame.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__TimerFrame_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__TimerFrame_def.hpp"
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
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::TimerFrame._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Linq::TimerFrame::*)(int32_t, ::System::Nullable_1<int32_t>, ::Cysharp::Threading::Tasks::PlayerLoopTiming)>(&::Cysharp::Threading::Tasks::Linq::TimerFrame::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xae26a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TimerFrame*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::TimerFrame.GetAsyncEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* (::Cysharp::Threading::Tasks::Linq::TimerFrame::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::TimerFrame::GetAsyncEnumerator)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xae26ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TimerFrame*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& Cysharp::Threading::Tasks::Linq::TimerFrame::__cordl_internal_get_updateTiming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateTiming;
}
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& Cysharp::Threading::Tasks::Linq::TimerFrame::__cordl_internal_get_updateTiming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateTiming;
}
constexpr void Cysharp::Threading::Tasks::Linq::TimerFrame::__cordl_internal_set_updateTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateTiming = value;
}
constexpr int32_t& Cysharp::Threading::Tasks::Linq::TimerFrame::__cordl_internal_get_dueTimeFrameCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dueTimeFrameCount;
}
constexpr int32_t const& Cysharp::Threading::Tasks::Linq::TimerFrame::__cordl_internal_get_dueTimeFrameCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dueTimeFrameCount;
}
constexpr void Cysharp::Threading::Tasks::Linq::TimerFrame::__cordl_internal_set_dueTimeFrameCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dueTimeFrameCount = value;
}
constexpr ::System::Nullable_1<int32_t>& Cysharp::Threading::Tasks::Linq::TimerFrame::__cordl_internal_get_periodFrameCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___periodFrameCount;
}
constexpr ::System::Nullable_1<int32_t> const& Cysharp::Threading::Tasks::Linq::TimerFrame::__cordl_internal_get_periodFrameCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___periodFrameCount;
}
constexpr void Cysharp::Threading::Tasks::Linq::TimerFrame::__cordl_internal_set_periodFrameCount(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___periodFrameCount = value;
}
inline void Cysharp::Threading::Tasks::Linq::TimerFrame::_ctor(int32_t  dueTimeFrameCount, ::System::Nullable_1<int32_t>  periodFrameCount, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TimerFrame*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dueTimeFrameCount, periodFrameCount, updateTiming);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::Linq::TimerFrame::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TimerFrame*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(this, ___internal_method, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::Linq::TimerFrame* Cysharp::Threading::Tasks::Linq::TimerFrame::New_ctor(int32_t  dueTimeFrameCount, ::System::Nullable_1<int32_t>  periodFrameCount, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::TimerFrame*>(dueTimeFrameCount, periodFrameCount, updateTiming));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr  Cysharp::Threading::Tasks::Linq::TimerFrame::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::Linq::TimerFrame::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1___Cysharp__Threading__Tasks__AsyncUnit_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Linq::TimerFrame::TimerFrame()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::*)(int32_t, ::System::Nullable_1<int32_t>, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xae26b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::AsyncUnit (::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::*)()>(&::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae26c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame.MoveNextAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<bool> (::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::*)()>(&::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::MoveNextAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xae26c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame.DisposeAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::*)()>(&::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::DisposeAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xae26d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame*>(),
                        {"DisposeAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::*)()>(&::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::MoveNext)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xae26dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_get_dueTimeFrameCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dueTimeFrameCount;
}
constexpr int32_t const& Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_get_dueTimeFrameCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dueTimeFrameCount;
}
constexpr void Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_set_dueTimeFrameCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dueTimeFrameCount = value;
}
constexpr ::System::Nullable_1<int32_t>& Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_get_periodFrameCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___periodFrameCount;
}
constexpr ::System::Nullable_1<int32_t> const& Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_get_periodFrameCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___periodFrameCount;
}
constexpr void Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_set_periodFrameCount(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___periodFrameCount = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr int32_t& Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_get_initialFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialFrame;
}
constexpr int32_t const& Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_get_initialFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialFrame;
}
constexpr void Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_set_initialFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialFrame = value;
}
constexpr int32_t& Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_get_currentFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFrame;
}
constexpr int32_t const& Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_get_currentFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFrame;
}
constexpr void Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_set_currentFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentFrame = value;
}
constexpr bool& Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_get_dueTimePhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dueTimePhase;
}
constexpr bool const& Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_get_dueTimePhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dueTimePhase;
}
constexpr void Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_set_dueTimePhase(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dueTimePhase = value;
}
constexpr bool& Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr bool const& Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr void Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_set_completed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
constexpr bool& Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_get_disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr bool const& Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_get_disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr void Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::__cordl_internal_set_disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposed = value;
}
inline void Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::_ctor(int32_t  dueTimeFrameCount, ::System::Nullable_1<int32_t>  periodFrameCount, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dueTimeFrameCount, periodFrameCount, updateTiming, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::AsyncUnit Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::AsyncUnit>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame* Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::New_ctor(int32_t  dueTimeFrameCount, ::System::Nullable_1<int32_t>  periodFrameCount, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame*>(dueTimeFrameCount, periodFrameCount, updateTiming, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr  Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1___Cysharp__Threading__Tasks__AsyncUnit_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr  Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame::TimerFrame__TimerFrame()   {
}
