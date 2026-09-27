#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/CancellationTokenDisposable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__CancellationTokenDisposable_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable.get_Token
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable::*)()>(&::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable::get_Token)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae1f7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable*>(),
                        {"get_Token", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable::*)()>(&::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xae1f7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable::*)()>(&::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xae1f834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationTokenSource*& Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable::__cordl_internal_get_cts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cts;
}
constexpr ::System::Threading::CancellationTokenSource* const& Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable::__cordl_internal_get_cts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cts;
}
constexpr void Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable::__cordl_internal_set_cts(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cts = value;
}
inline ::System::Threading::CancellationToken Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable::get_Token()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable*>(),
                        {"get_Token", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable* Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable::CancellationTokenDisposable()   {
}
