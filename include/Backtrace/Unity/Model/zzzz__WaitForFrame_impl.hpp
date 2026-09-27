#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/WaitForFrame.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/zzzz__WaitForFrame_def.hpp"
#include "Backtrace/Unity/Model/Waiter/zzzz__IWaiter_def.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::WaitForFrame.Wait
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::YieldInstruction* (*)()>(&::Backtrace::Unity::Model::WaitForFrame::Wait)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f15c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::WaitForFrame*>(),
                        {"Wait", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::WaitForFrame.CreateWaiterStrategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Waiter::IWaiter* (*)()>(&::Backtrace::Unity::Model::WaitForFrame::CreateWaiterStrategy)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f15d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::WaitForFrame*>(),
                        {"CreateWaiterStrategy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::WaitForFrame._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::WaitForFrame::*)()>(&::Backtrace::Unity::Model::WaitForFrame::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f15de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::WaitForFrame*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Backtrace::Unity::Model::WaitForFrame::setStaticF__waiter(::Backtrace::Unity::Model::Waiter::IWaiter*  value)  {
::cordl_internals::setStaticField<::Backtrace::Unity::Model::Waiter::IWaiter*, "_waiter", ::Backtrace::Unity::Model::WaitForFrame*>(std::forward<::Backtrace::Unity::Model::Waiter::IWaiter*>(value));
}
inline ::Backtrace::Unity::Model::Waiter::IWaiter* Backtrace::Unity::Model::WaitForFrame::getStaticF__waiter()  {
return ::cordl_internals::getStaticField<::Backtrace::Unity::Model::Waiter::IWaiter*, "_waiter", ::Backtrace::Unity::Model::WaitForFrame*>();
}
inline ::UnityEngine::YieldInstruction* Backtrace::Unity::Model::WaitForFrame::Wait()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::WaitForFrame*>(),
                        {"Wait", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::YieldInstruction*>(nullptr, ___internal_method);
}
inline ::Backtrace::Unity::Model::Waiter::IWaiter* Backtrace::Unity::Model::WaitForFrame::CreateWaiterStrategy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::WaitForFrame*>(),
                        {"CreateWaiterStrategy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Waiter::IWaiter*>(nullptr, ___internal_method);
}
inline void Backtrace::Unity::Model::WaitForFrame::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::WaitForFrame*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::WaitForFrame* Backtrace::Unity::Model::WaitForFrame::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::WaitForFrame*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::WaitForFrame::WaitForFrame()   {
}
