#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Waiter/IWaiter.hpp"
#include "Backtrace/Unity/Model/Waiter/zzzz__IWaiter_def.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Waiter::IWaiter.Wait
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::YieldInstruction* (::Backtrace::Unity::Model::Waiter::IWaiter::*)()>(&::Backtrace::Unity::Model::Waiter::IWaiter::Wait)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::Waiter::IWaiter*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::Waiter::IWaiter*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::YieldInstruction* Backtrace::Unity::Model::Waiter::IWaiter::Wait()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::Waiter::IWaiter*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::YieldInstruction*>(this, ___internal_method);
}
