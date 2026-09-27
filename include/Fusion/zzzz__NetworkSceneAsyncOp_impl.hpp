#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneAsyncOp.hpp"
#include "Fusion/zzzz__NetworkSceneAsyncOp_Awaiter_impl.hpp"
#include "Fusion/zzzz__SceneRef_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkSceneAsyncOp_def.hpp"
#include "Fusion/zzzz__IAsyncOperation_def.hpp"
#include "Fusion/zzzz__ICoroutine_def.hpp"
#include "Fusion/zzzz__NetworkSceneAsyncOp_Awaiter_def.hpp"
#include "Fusion/zzzz__NetworkSceneAsyncOp_def.hpp"
#include "Fusion/zzzz__SceneRef_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::*)()>(&::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::*)()>(&::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x5fddff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fde420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_get___t__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_get___t__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____t__builder;
}
constexpr void Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____t__builder = value;
}
constexpr ::Fusion::SceneRef& Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_get_sceneRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneRef;
}
constexpr ::Fusion::SceneRef const& Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_get_sceneRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneRef;
}
constexpr void Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_set_sceneRef(::Fusion::SceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneRef = value;
}
constexpr ::System::Threading::Tasks::Task*& Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_get_blockingTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockingTask;
}
constexpr ::System::Threading::Tasks::Task* const& Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_get_blockingTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockingTask;
}
constexpr void Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_set_blockingTask(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockingTask = value;
}
constexpr ::System::Func_2<::Fusion::SceneRef,::Fusion::NetworkSceneAsyncOp>*& Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_get_op()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___op;
}
constexpr ::System::Func_2<::Fusion::SceneRef,::Fusion::NetworkSceneAsyncOp>* const& Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_get_op() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___op;
}
constexpr void Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_set_op(::System::Func_2<::Fusion::SceneRef,::Fusion::NetworkSceneAsyncOp>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___op = value;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_get___u__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_get___u__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__1;
}
constexpr void Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__1 = value;
}
constexpr ::GlobalNamespace::NetworkSceneAsyncOp_Awaiter& Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_get___u__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr ::GlobalNamespace::NetworkSceneAsyncOp_Awaiter const& Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_get___u__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____u__2;
}
constexpr void Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::__cordl_internal_set___u__2(::GlobalNamespace::NetworkSceneAsyncOp_Awaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____u__2 = value;
}
inline void Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
inline ::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17* Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17()   {
}
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::*)()>(&::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fddc14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0._AddOnCompleted_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::*)(::UnityEngine::AsyncOperation*)>(&::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::_AddOnCompleted_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fddf78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0*>(),
                        {"<AddOnCompleted>b__0", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0._AddOnCompleted_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::*)(::Fusion::IAsyncOperation*)>(&::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::_AddOnCompleted_b__1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fddfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0*>(),
                        {"<AddOnCompleted>b__1", {}, {::i2c::type_of<::Fusion::IAsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0._AddOnCompleted_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::*)(::System::Threading::Tasks::Task*)>(&::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::_AddOnCompleted_b__2)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fddfc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0*>(),
                        {"<AddOnCompleted>b__2", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Fusion::NetworkSceneAsyncOp>*& Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr ::System::Action_1<::Fusion::NetworkSceneAsyncOp>* const& Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr void Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::__cordl_internal_set_action(::System::Action_1<::Fusion::NetworkSceneAsyncOp>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
constexpr ::Fusion::NetworkSceneAsyncOp& Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::__cordl_internal_get_captured()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___captured;
}
constexpr ::Fusion::NetworkSceneAsyncOp const& Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::__cordl_internal_get_captured() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___captured;
}
constexpr void Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::__cordl_internal_set_captured(::Fusion::NetworkSceneAsyncOp  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___captured = value;
}
inline void Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::_AddOnCompleted_b__0(::UnityEngine::AsyncOperation*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0*>(),
                        {"<AddOnCompleted>b__0", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::_AddOnCompleted_b__1(::Fusion::IAsyncOperation*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0*>(),
                        {"<AddOnCompleted>b__1", {}, {::i2c::type_of<::Fusion::IAsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::_AddOnCompleted_b__2(::System::Threading::Tasks::Task*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0*>(),
                        {"<AddOnCompleted>b__2", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0* Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0::NetworkSceneAsyncOp___c__DisplayClass18_0()   {
}
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneAsyncOp::*)(::Fusion::SceneRef, ::System::Object*)>(&::Fusion::NetworkSceneAsyncOp::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fdcfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneAsyncOp::*)(::Fusion::SceneRef)>(&::Fusion::NetworkSceneAsyncOp::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fdd040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneAsyncOp::*)()>(&::Fusion::NetworkSceneAsyncOp::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fdd050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp.get_IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneAsyncOp::*)()>(&::Fusion::NetworkSceneAsyncOp::get_IsDone)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5fdd060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"get_IsDone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::Fusion::NetworkSceneAsyncOp::*)()>(&::Fusion::NetworkSceneAsyncOp::get_Error)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5fdd214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp.ThrowIfError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneAsyncOp::*)()>(&::Fusion::NetworkSceneAsyncOp::ThrowIfError)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5fdd36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"ThrowIfError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp.FromAsyncOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (*)(::Fusion::SceneRef, ::UnityEngine::AsyncOperation*)>(&::Fusion::NetworkSceneAsyncOp::FromAsyncOperation)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fdd58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"FromAsyncOperation", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp.FromCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (*)(::Fusion::SceneRef, ::Fusion::ICoroutine*)>(&::Fusion::NetworkSceneAsyncOp::FromCoroutine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fdd608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"FromCoroutine", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::Fusion::ICoroutine*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp.FromTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (*)(::Fusion::SceneRef, ::System::Threading::Tasks::Task*)>(&::Fusion::NetworkSceneAsyncOp::FromTask)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fdd684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"FromTask", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp.FromError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (*)(::Fusion::SceneRef, ::System::Exception*)>(&::Fusion::NetworkSceneAsyncOp::FromError)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fdd700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"FromError", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp.FromCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (*)(::Fusion::SceneRef)>(&::Fusion::NetworkSceneAsyncOp::FromCompleted)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fdd788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"FromCompleted", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp.FromDeferred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (*)(::Fusion::SceneRef, ::System::Threading::Tasks::Task*, ::System::Func_2<::Fusion::SceneRef,::Fusion::NetworkSceneAsyncOp>*)>(&::Fusion::NetworkSceneAsyncOp::FromDeferred)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fdd7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"FromDeferred", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Func_2<::Fusion::SceneRef,::Fusion::NetworkSceneAsyncOp>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp.CreateDeferredOpTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::Fusion::SceneRef, ::System::Threading::Tasks::Task*, ::System::Func_2<::Fusion::SceneRef,::Fusion::NetworkSceneAsyncOp>*)>(&::Fusion::NetworkSceneAsyncOp::CreateDeferredOpTask)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5fdd7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"CreateDeferredOpTask", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Func_2<::Fusion::SceneRef,::Fusion::NetworkSceneAsyncOp>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp.AddOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneAsyncOp::*)(::System::Action_1<::Fusion::NetworkSceneAsyncOp>*)>(&::Fusion::NetworkSceneAsyncOp::AddOnCompleted)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x5fdd918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"AddOnCompleted", {}, {::i2c::type_of<::System::Action_1<::Fusion::NetworkSceneAsyncOp>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetworkSceneAsyncOp_Awaiter (::Fusion::NetworkSceneAsyncOp::*)()>(&::Fusion::NetworkSceneAsyncOp::GetAwaiter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fddc1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp.System_Collections_IEnumerator_MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneAsyncOp::*)()>(&::Fusion::NetworkSceneAsyncOp::System_Collections_IEnumerator_MoveNext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fddc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"System.Collections.IEnumerator.MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneAsyncOp::*)()>(&::Fusion::NetworkSceneAsyncOp::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fddc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneAsyncOp.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::NetworkSceneAsyncOp::*)()>(&::Fusion::NetworkSceneAsyncOp::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fddc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkSceneAsyncOp::_ctor(::Fusion::SceneRef  sceneRef, ::System::Object*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sceneRef, data);
}
inline void Fusion::NetworkSceneAsyncOp::_ctor(::Fusion::SceneRef  sceneRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sceneRef);
}
inline bool Fusion::NetworkSceneAsyncOp::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::NetworkSceneAsyncOp::get_IsDone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"get_IsDone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Exception* Fusion::NetworkSceneAsyncOp::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(*this, ___internal_method);
}
inline void Fusion::NetworkSceneAsyncOp::ThrowIfError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"ThrowIfError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkSceneAsyncOp::FromAsyncOperation(::Fusion::SceneRef  sceneRef, ::UnityEngine::AsyncOperation*  asyncOp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"FromAsyncOperation", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(nullptr, ___internal_method, sceneRef, asyncOp);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkSceneAsyncOp::FromCoroutine(::Fusion::SceneRef  sceneRef, ::Fusion::ICoroutine*  coroutine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"FromCoroutine", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::Fusion::ICoroutine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(nullptr, ___internal_method, sceneRef, coroutine);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkSceneAsyncOp::FromTask(::Fusion::SceneRef  sceneRef, ::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"FromTask", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(nullptr, ___internal_method, sceneRef, task);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkSceneAsyncOp::FromError(::Fusion::SceneRef  sceneRef, ::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"FromError", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(nullptr, ___internal_method, sceneRef, error);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkSceneAsyncOp::FromCompleted(::Fusion::SceneRef  sceneRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"FromCompleted", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(nullptr, ___internal_method, sceneRef);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkSceneAsyncOp::FromDeferred(::Fusion::SceneRef  sceneRef, ::System::Threading::Tasks::Task*  blockingTask, ::System::Func_2<::Fusion::SceneRef,::Fusion::NetworkSceneAsyncOp>*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"FromDeferred", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Func_2<::Fusion::SceneRef,::Fusion::NetworkSceneAsyncOp>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(nullptr, ___internal_method, sceneRef, blockingTask, op);
}
inline ::System::Threading::Tasks::Task* Fusion::NetworkSceneAsyncOp::CreateDeferredOpTask(::Fusion::SceneRef  sceneRef, ::System::Threading::Tasks::Task*  blockingTask, ::System::Func_2<::Fusion::SceneRef,::Fusion::NetworkSceneAsyncOp>*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"CreateDeferredOpTask", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Func_2<::Fusion::SceneRef,::Fusion::NetworkSceneAsyncOp>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, sceneRef, blockingTask, op);
}
inline void Fusion::NetworkSceneAsyncOp::AddOnCompleted(::System::Action_1<::Fusion::NetworkSceneAsyncOp>*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"AddOnCompleted", {}, {::i2c::type_of<::System::Action_1<::Fusion::NetworkSceneAsyncOp>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, action);
}
inline ::GlobalNamespace::NetworkSceneAsyncOp_Awaiter Fusion::NetworkSceneAsyncOp::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkSceneAsyncOp_Awaiter>(*this, ___internal_method);
}
inline bool Fusion::NetworkSceneAsyncOp::System_Collections_IEnumerator_MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"System.Collections.IEnumerator.MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Fusion::NetworkSceneAsyncOp::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::System::Object* Fusion::NetworkSceneAsyncOp::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneAsyncOp>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::NetworkSceneAsyncOp::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::NetworkSceneAsyncOp::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "SceneRef", ty: "::Fusion::SceneRef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkSceneAsyncOp::NetworkSceneAsyncOp(::Fusion::SceneRef  SceneRef, ::System::Object*  _data) noexcept  {
this->SceneRef = SceneRef;
this->_data = _data;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSceneAsyncOp::NetworkSceneAsyncOp()   {
}
//  Writing Method size for method: ::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1::*)()>(&::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdde70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1._OnCompleted_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1::*)(::Fusion::NetworkSceneAsyncOp)>(&::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1::_OnCompleted_b__0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5fdde98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1*>(),
                        {"<OnCompleted>b__0", {}, {::i2c::type_of<::Fusion::NetworkSceneAsyncOp>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::SynchronizationContext*& Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1::__cordl_internal_get_capturedContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capturedContext;
}
constexpr ::System::Threading::SynchronizationContext* const& Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1::__cordl_internal_get_capturedContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capturedContext;
}
constexpr void Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1::__cordl_internal_set_capturedContext(::System::Threading::SynchronizationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___capturedContext = value;
}
constexpr ::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0*& Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0* const& Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1::__cordl_internal_set_CS$__8__locals1(::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1::_OnCompleted_b__0(::Fusion::NetworkSceneAsyncOp  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1*>(),
                        {"<OnCompleted>b__0", {}, {::i2c::type_of<::Fusion::NetworkSceneAsyncOp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1* Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1*>());
}
// Ctor Parameters []
constexpr ::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1()   {
}
//  Writing Method size for method: ::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0::*)()>(&::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdde68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0._OnCompleted_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0::*)(::System::Object*)>(&::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0::_OnCompleted_b__1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fdde78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0*>(),
                        {"<OnCompleted>b__1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0::__cordl_internal_get_continuation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuation;
}
constexpr ::System::Action* const& Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0::__cordl_internal_get_continuation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuation;
}
constexpr void Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0::__cordl_internal_set_continuation(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuation = value;
}
constexpr ::System::Threading::SendOrPostCallback*& Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0::__cordl_internal_get___9__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr ::System::Threading::SendOrPostCallback* const& Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0::__cordl_internal_get___9__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr void Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0::__cordl_internal_set___9__1(::System::Threading::SendOrPostCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__1 = value;
}
inline void Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0::_OnCompleted_b__1(::System::Object*  __)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0*>(),
                        {"<OnCompleted>b__1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __);
}
inline ::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0* Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0()   {
}
