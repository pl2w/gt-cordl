#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Waiter/BatchModeWaiter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/Waiter/zzzz__BatchModeWaiter_def.hpp"
#include "Backtrace/Unity/Model/Waiter/zzzz__IWaiter_def.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Waiter::BatchModeWaiter.Wait
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::YieldInstruction* (::Backtrace::Unity::Model::Waiter::BatchModeWaiter::*)()>(&::Backtrace::Unity::Model::Waiter::BatchModeWaiter::Wait)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f15e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Waiter::BatchModeWaiter*>(),
                        {"Wait", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Waiter::BatchModeWaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Waiter::BatchModeWaiter::*)()>(&::Backtrace::Unity::Model::Waiter::BatchModeWaiter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f15dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Waiter::BatchModeWaiter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::YieldInstruction* Backtrace::Unity::Model::Waiter::BatchModeWaiter::Wait()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Waiter::BatchModeWaiter*>(),
                        {"Wait", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::YieldInstruction*>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Waiter::BatchModeWaiter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Waiter::BatchModeWaiter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Waiter::BatchModeWaiter* Backtrace::Unity::Model::Waiter::BatchModeWaiter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Waiter::BatchModeWaiter*>());
}
/// @brief Convert operator to "::Backtrace::Unity::Model::Waiter::IWaiter"
constexpr  Backtrace::Unity::Model::Waiter::BatchModeWaiter::operator ::Backtrace::Unity::Model::Waiter::IWaiter*() noexcept {
return static_cast<::Backtrace::Unity::Model::Waiter::IWaiter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Model::Waiter::IWaiter"
constexpr ::Backtrace::Unity::Model::Waiter::IWaiter* Backtrace::Unity::Model::Waiter::BatchModeWaiter::i___Backtrace__Unity__Model__Waiter__IWaiter() noexcept {
return static_cast<::Backtrace::Unity::Model::Waiter::IWaiter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Waiter::BatchModeWaiter::BatchModeWaiter()   {
}
