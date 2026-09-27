#pragma once
// IWYU pragma private; include "Fusion/Async/TaskManager.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Async/zzzz__TaskManager_def.hpp"
#include "Fusion/Async/zzzz__TaskManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskFactory_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Fusion::Async::TaskManager.get_TaskFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskFactory* (*)()>(&::Fusion::Async::TaskManager::get_TaskFactory)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f41ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager*>(),
                        {"get_TaskFactory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Async::TaskManager.set_TaskFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::TaskFactory*)>(&::Fusion::Async::TaskManager::set_TaskFactory)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f41b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager*>(),
                        {"set_TaskFactory", {}, {::i2c::type_of<::System::Threading::Tasks::TaskFactory*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Async::TaskManager.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::Async::TaskManager::Setup)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5f41b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Async::TaskManager.Service
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>*, ::System::Threading::CancellationToken, int32_t, ::StringW)>(&::Fusion::Async::TaskManager::Service)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5f41de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager*>(),
                        {"Service", {}, {::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Async::TaskManager.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions)>(&::Fusion::Async::TaskManager::Run)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5f420b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager*>(),
                        {"Run", {}, {::i2c::type_of<::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Async::TaskManager.ContinueWhenAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::ArrayW<::System::Threading::Tasks::Task*>, ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*, ::System::Threading::CancellationToken)>(&::Fusion::Async::TaskManager::ContinueWhenAll)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5f42304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager*>(),
                        {"ContinueWhenAll", {}, {::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>(), ::i2c::type_of<::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Async::TaskManager.Delay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(int32_t, ::System::Threading::CancellationToken)>(&::Fusion::Async::TaskManager::Delay)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5f4257c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager*>(),
                        {"Delay", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Async::TaskManager::setStaticF__TaskFactory_k__BackingField(::System::Threading::Tasks::TaskFactory*  value)  {
::cordl_internals::setStaticField<::System::Threading::Tasks::TaskFactory*, "<TaskFactory>k__BackingField", ::Fusion::Async::TaskManager*>(std::forward<::System::Threading::Tasks::TaskFactory*>(value));
}
inline ::System::Threading::Tasks::TaskFactory* Fusion::Async::TaskManager::getStaticF__TaskFactory_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Threading::Tasks::TaskFactory*, "<TaskFactory>k__BackingField", ::Fusion::Async::TaskManager*>();
}
inline ::System::Threading::Tasks::TaskFactory* Fusion::Async::TaskManager::get_TaskFactory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager*>(),
                        {"get_TaskFactory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskFactory*>(nullptr, ___internal_method);
}
inline void Fusion::Async::TaskManager::set_TaskFactory(::System::Threading::Tasks::TaskFactory*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager*>(),
                        {"set_TaskFactory", {}, {::i2c::type_of<::System::Threading::Tasks::TaskFactory*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Fusion::Async::TaskManager::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Fusion::Async::TaskManager::Service(::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>*  recurringAction, ::System::Threading::CancellationToken  cancellationToken, int32_t  interval, ::StringW  serviceName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager*>(),
                        {"Service", {}, {::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, recurringAction, cancellationToken, interval, serviceName);
}
inline ::System::Threading::Tasks::Task* Fusion::Async::TaskManager::Run(::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*  action, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager*>(),
                        {"Run", {}, {::i2c::type_of<::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, action, cancellationToken, options);
}
inline ::System::Threading::Tasks::Task* Fusion::Async::TaskManager::ContinueWhenAll(::ArrayW<::System::Threading::Tasks::Task*>  precedingTasks, ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*  action, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager*>(),
                        {"ContinueWhenAll", {}, {::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>(), ::i2c::type_of<::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, precedingTasks, action, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Fusion::Async::TaskManager::Delay(int32_t  delay, ::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager*>(),
                        {"Delay", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, delay, token);
}
// Ctor Parameters []
constexpr ::Fusion::Async::TaskManager::TaskManager()   {
}
//  Writing Method size for method: ::Fusion::Async::TaskManager__Delay_d__9._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Async::TaskManager__Delay_d__9::*)()>(&::Fusion::Async::TaskManager__Delay_d__9::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f42698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager__Delay_d__9*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Async::TaskManager__Delay_d__9.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Async::TaskManager__Delay_d__9::*)()>(&::Fusion::Async::TaskManager__Delay_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x5f4393c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager__Delay_d__9*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Async::TaskManager__Delay_d__9.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Async::TaskManager__Delay_d__9::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::Async::TaskManager__Delay_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x5f43d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager__Delay_d__9*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr int32_t& Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_get_delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr int32_t const& Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_get_delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr void Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_set_delay(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay = value;
}
constexpr ::System::Threading::CancellationToken& Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_get_token()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr ::System::Threading::CancellationToken const& Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_get_token() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr void Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_set_token(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___token = value;
}
constexpr float_t& Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_get__endTime_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endTime_5__1;
}
constexpr float_t const& Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_get__endTime_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endTime_5__1;
}
constexpr void Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_set__endTime_5__1(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endTime_5__1 = value;
}
constexpr ::GlobalNamespace::YieldAwaitable_YieldAwaiter& Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::GlobalNamespace::YieldAwaitable_YieldAwaiter const& Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_set___u__1(::GlobalNamespace::YieldAwaitable_YieldAwaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_get___u__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_get___u__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr void Fusion::Async::TaskManager__Delay_d__9::__cordl_internal_set___u__2(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__2 = value;
}
inline void Fusion::Async::TaskManager__Delay_d__9::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager__Delay_d__9*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Async::TaskManager__Delay_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager__Delay_d__9*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Async::TaskManager__Delay_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager__Delay_d__9*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::Async::TaskManager__Delay_d__9* Fusion::Async::TaskManager__Delay_d__9::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Async::TaskManager__Delay_d__9*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::Async::TaskManager__Delay_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::Async::TaskManager__Delay_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Async::TaskManager__Delay_d__9::TaskManager__Delay_d__9()   {
}
//  Writing Method size for method: ::Fusion::Async::TaskManager___c__DisplayClass8_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Async::TaskManager___c__DisplayClass8_0::*)()>(&::Fusion::Async::TaskManager___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f42574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Async::TaskManager___c__DisplayClass8_0._ContinueWhenAll_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Fusion::Async::TaskManager___c__DisplayClass8_0::*)(::ArrayW<::System::Threading::Tasks::Task*>)>(&::Fusion::Async::TaskManager___c__DisplayClass8_0::_ContinueWhenAll_b__0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5f43480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager___c__DisplayClass8_0*>(),
                        {"<ContinueWhenAll>b__0", {}, {::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationToken& Fusion::Async::TaskManager___c__DisplayClass8_0::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Fusion::Async::TaskManager___c__DisplayClass8_0::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Fusion::Async::TaskManager___c__DisplayClass8_0::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*& Fusion::Async::TaskManager___c__DisplayClass8_0::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>* const& Fusion::Async::TaskManager___c__DisplayClass8_0::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr void Fusion::Async::TaskManager___c__DisplayClass8_0::__cordl_internal_set_action(::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
inline void Fusion::Async::TaskManager___c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Fusion::Async::TaskManager___c__DisplayClass8_0::_ContinueWhenAll_b__0(::ArrayW<::System::Threading::Tasks::Task*>  tasks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager___c__DisplayClass8_0*>(),
                        {"<ContinueWhenAll>b__0", {}, {::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, tasks);
}
inline ::Fusion::Async::TaskManager___c__DisplayClass8_0* Fusion::Async::TaskManager___c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Async::TaskManager___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::Async::TaskManager___c__DisplayClass8_0::TaskManager___c__DisplayClass8_0()   {
}
//  Writing Method size for method: ::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::*)()>(&::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f435a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::*)()>(&::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::MoveNext)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5f435b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f43938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::ArrayW<::System::Threading::Tasks::Task*>& Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::__cordl_internal_get_tasks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tasks;
}
constexpr ::ArrayW<::System::Threading::Tasks::Task*> const& Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::__cordl_internal_get_tasks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tasks;
}
constexpr void Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::__cordl_internal_set_tasks(::ArrayW<::System::Threading::Tasks::Task*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tasks = value;
}
constexpr ::Fusion::Async::TaskManager___c__DisplayClass8_0*& Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::Async::TaskManager___c__DisplayClass8_0* const& Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::__cordl_internal_set___4__this(::Fusion::Async::TaskManager___c__DisplayClass8_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Exception*& Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::__cordl_internal_get__e_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____e_5__1;
}
constexpr ::System::Exception* const& Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::__cordl_internal_get__e_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____e_5__1;
}
constexpr void Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::__cordl_internal_set__e_5__1(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____e_5__1 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
inline void Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d* Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d()   {
}
//  Writing Method size for method: ::Fusion::Async::TaskManager___c__DisplayClass7_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Async::TaskManager___c__DisplayClass7_0::*)()>(&::Fusion::Async::TaskManager___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f422fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager___c__DisplayClass7_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Async::TaskManager___c__DisplayClass7_0._Run_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Fusion::Async::TaskManager___c__DisplayClass7_0::*)()>(&::Fusion::Async::TaskManager___c__DisplayClass7_0::_Run_b__0)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5f42fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager___c__DisplayClass7_0*>(),
                        {"<Run>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationToken& Fusion::Async::TaskManager___c__DisplayClass7_0::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Fusion::Async::TaskManager___c__DisplayClass7_0::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Fusion::Async::TaskManager___c__DisplayClass7_0::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*& Fusion::Async::TaskManager___c__DisplayClass7_0::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>* const& Fusion::Async::TaskManager___c__DisplayClass7_0::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr void Fusion::Async::TaskManager___c__DisplayClass7_0::__cordl_internal_set_action(::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
inline void Fusion::Async::TaskManager___c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager___c__DisplayClass7_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Fusion::Async::TaskManager___c__DisplayClass7_0::_Run_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager___c__DisplayClass7_0*>(),
                        {"<Run>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::Fusion::Async::TaskManager___c__DisplayClass7_0* Fusion::Async::TaskManager___c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Async::TaskManager___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::Async::TaskManager___c__DisplayClass7_0::TaskManager___c__DisplayClass7_0()   {
}
//  Writing Method size for method: ::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::*)()>(&::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f430ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::*)()>(&::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::MoveNext)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5f430f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4347c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::Fusion::Async::TaskManager___c__DisplayClass7_0*& Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::Async::TaskManager___c__DisplayClass7_0* const& Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::__cordl_internal_set___4__this(::Fusion::Async::TaskManager___c__DisplayClass7_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Exception*& Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::__cordl_internal_get__e_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____e_5__1;
}
constexpr ::System::Exception* const& Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::__cordl_internal_get__e_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____e_5__1;
}
constexpr void Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::__cordl_internal_set__e_5__1(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____e_5__1 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
inline void Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d* Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d::__c__DisplayClass7_0_TaskManager___Run_b__0_d()   {
}
//  Writing Method size for method: ::Fusion::Async::TaskManager___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Async::TaskManager___c__DisplayClass6_0::*)()>(&::Fusion::Async::TaskManager___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f420b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Async::TaskManager___c__DisplayClass6_0._Service_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Fusion::Async::TaskManager___c__DisplayClass6_0::*)()>(&::Fusion::Async::TaskManager___c__DisplayClass6_0::_Service_b__0)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5f42750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager___c__DisplayClass6_0*>(),
                        {"<Service>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::Async::TaskManager___c__DisplayClass6_0::__cordl_internal_get_serviceName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serviceName;
}
constexpr ::StringW const& Fusion::Async::TaskManager___c__DisplayClass6_0::__cordl_internal_get_serviceName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serviceName;
}
constexpr void Fusion::Async::TaskManager___c__DisplayClass6_0::__cordl_internal_set_serviceName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serviceName = value;
}
constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>*& Fusion::Async::TaskManager___c__DisplayClass6_0::__cordl_internal_get_recurringAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recurringAction;
}
constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>* const& Fusion::Async::TaskManager___c__DisplayClass6_0::__cordl_internal_get_recurringAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recurringAction;
}
constexpr void Fusion::Async::TaskManager___c__DisplayClass6_0::__cordl_internal_set_recurringAction(::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recurringAction = value;
}
constexpr ::System::Threading::CancellationToken& Fusion::Async::TaskManager___c__DisplayClass6_0::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Fusion::Async::TaskManager___c__DisplayClass6_0::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Fusion::Async::TaskManager___c__DisplayClass6_0::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr int32_t& Fusion::Async::TaskManager___c__DisplayClass6_0::__cordl_internal_get_interval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interval;
}
constexpr int32_t const& Fusion::Async::TaskManager___c__DisplayClass6_0::__cordl_internal_get_interval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interval;
}
constexpr void Fusion::Async::TaskManager___c__DisplayClass6_0::__cordl_internal_set_interval(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interval = value;
}
inline void Fusion::Async::TaskManager___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Fusion::Async::TaskManager___c__DisplayClass6_0::_Service_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::TaskManager___c__DisplayClass6_0*>(),
                        {"<Service>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::Fusion::Async::TaskManager___c__DisplayClass6_0* Fusion::Async::TaskManager___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Async::TaskManager___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::Async::TaskManager___c__DisplayClass6_0::TaskManager___c__DisplayClass6_0()   {
}
//  Writing Method size for method: ::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::*)()>(&::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f42864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::*)()>(&::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::MoveNext)> {
  constexpr static std::size_t size = 0x768;
  constexpr static std::size_t addrs = 0x5f4286c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f42fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::Fusion::Async::TaskManager___c__DisplayClass6_0*& Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::Async::TaskManager___c__DisplayClass6_0* const& Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_set___4__this(::Fusion::Async::TaskManager___c__DisplayClass6_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr bool& Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_get___s__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr bool const& Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_get___s__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr void Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_set___s__1(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__1 = value;
}
constexpr ::System::Exception*& Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_get__e_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____e_5__2;
}
constexpr ::System::Exception* const& Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_get__e_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____e_5__2;
}
constexpr void Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_set__e_5__2(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____e_5__2 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_get___u__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_get___u__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr void Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__cordl_internal_set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__2 = value;
}
inline void Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d* Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d::__c__DisplayClass6_0_TaskManager___Service_b__0_d()   {
}
