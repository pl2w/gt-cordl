#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Waiter/EndOfFrameWaiter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/Waiter/zzzz__EndOfFrameWaiter_def.hpp"
#include "Backtrace/Unity/Model/Waiter/zzzz__IWaiter_def.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Waiter::EndOfFrameWaiter.Wait
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::YieldInstruction* (::Backtrace::Unity::Model::Waiter::EndOfFrameWaiter::*)()>(&::Backtrace::Unity::Model::Waiter::EndOfFrameWaiter::Wait)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f15e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Waiter::EndOfFrameWaiter*>(),
                        {"Wait", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Waiter::EndOfFrameWaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Waiter::EndOfFrameWaiter::*)()>(&::Backtrace::Unity::Model::Waiter::EndOfFrameWaiter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f15ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Waiter::EndOfFrameWaiter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::YieldInstruction* Backtrace::Unity::Model::Waiter::EndOfFrameWaiter::Wait()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Waiter::EndOfFrameWaiter*>(),
                        {"Wait", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::YieldInstruction*>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Waiter::EndOfFrameWaiter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Waiter::EndOfFrameWaiter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Waiter::EndOfFrameWaiter* Backtrace::Unity::Model::Waiter::EndOfFrameWaiter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Waiter::EndOfFrameWaiter*>());
}
/// @brief Convert operator to "::Backtrace::Unity::Model::Waiter::IWaiter"
constexpr  Backtrace::Unity::Model::Waiter::EndOfFrameWaiter::operator ::Backtrace::Unity::Model::Waiter::IWaiter*() noexcept {
return static_cast<::Backtrace::Unity::Model::Waiter::IWaiter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Model::Waiter::IWaiter"
constexpr ::Backtrace::Unity::Model::Waiter::IWaiter* Backtrace::Unity::Model::Waiter::EndOfFrameWaiter::i___Backtrace__Unity__Model__Waiter__IWaiter() noexcept {
return static_cast<::Backtrace::Unity::Model::Waiter::IWaiter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Waiter::EndOfFrameWaiter::EndOfFrameWaiter()   {
}
