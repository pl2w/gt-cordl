#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/EveryUpdate.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__EveryUpdate_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__EveryUpdate_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPlayerLoopItem_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::EveryUpdate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Linq::EveryUpdate::*)(::Cysharp::Threading::Tasks::PlayerLoopTiming)>(&::Cysharp::Threading::Tasks::Linq::EveryUpdate::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xae261ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::EveryUpdate.GetAsyncEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* (::Cysharp::Threading::Tasks::Linq::EveryUpdate::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::EveryUpdate::GetAsyncEnumerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xae26214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryUpdate*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& Cysharp::Threading::Tasks::Linq::EveryUpdate::__cordl_internal_get_updateTiming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateTiming;
}
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& Cysharp::Threading::Tasks::Linq::EveryUpdate::__cordl_internal_get_updateTiming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateTiming;
}
constexpr void Cysharp::Threading::Tasks::Linq::EveryUpdate::__cordl_internal_set_updateTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateTiming = value;
}
inline void Cysharp::Threading::Tasks::Linq::EveryUpdate::_ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateTiming);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::Linq::EveryUpdate::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryUpdate*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(this, ___internal_method, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::Linq::EveryUpdate* Cysharp::Threading::Tasks::Linq::EveryUpdate::New_ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::EveryUpdate*>(updateTiming));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr  Cysharp::Threading::Tasks::Linq::EveryUpdate::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::Linq::EveryUpdate::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1___Cysharp__Threading__Tasks__AsyncUnit_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Linq::EveryUpdate::EveryUpdate()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xae26280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::AsyncUnit (::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::*)()>(&::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae2630c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate.MoveNextAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<bool> (::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::*)()>(&::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::MoveNextAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xae26314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate.DisposeAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::*)()>(&::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::DisposeAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xae26414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate*>(),
                        {"DisposeAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::*)()>(&::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::MoveNext)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xae26430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::__cordl_internal_get_updateTiming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateTiming;
}
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::__cordl_internal_get_updateTiming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateTiming;
}
constexpr void Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::__cordl_internal_set_updateTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateTiming = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr bool& Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::__cordl_internal_get_disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr bool const& Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::__cordl_internal_get_disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr void Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::__cordl_internal_set_disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposed = value;
}
inline void Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::_ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateTiming, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::AsyncUnit Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::AsyncUnit>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate* Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::New_ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate*>(updateTiming, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr  Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1___Cysharp__Threading__Tasks__AsyncUnit_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr  Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate::EveryUpdate__EveryUpdate()   {
}
