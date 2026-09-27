#pragma once
// IWYU pragma private; include "Viveport/MainThreadDispatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Viveport/zzzz__MainThreadDispatcher_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Viveport/zzzz__MainThreadDispatcher_def.hpp"
//  Writing Method size for method: ::Viveport::MainThreadDispatcher.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::MainThreadDispatcher::*)()>(&::Viveport::MainThreadDispatcher::Awake)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b4b428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::MainThreadDispatcher.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::MainThreadDispatcher::*)()>(&::Viveport::MainThreadDispatcher::Update)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5b4b528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::MainThreadDispatcher.Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Viveport::MainThreadDispatcher> (*)()>(&::Viveport::MainThreadDispatcher::Instance)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5b4b6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                        {"Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::MainThreadDispatcher.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::MainThreadDispatcher::*)()>(&::Viveport::MainThreadDispatcher::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b4b7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::MainThreadDispatcher.Enqueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::MainThreadDispatcher::*)(::System::Collections::IEnumerator*)>(&::Viveport::MainThreadDispatcher::Enqueue)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5b4b81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                        {"Enqueue", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::MainThreadDispatcher.Enqueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::MainThreadDispatcher::*)(::System::Action*)>(&::Viveport::MainThreadDispatcher::Enqueue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b4ba0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                        {"Enqueue", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::MainThreadDispatcher.ActionWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Viveport::MainThreadDispatcher::*)(::System::Action*)>(&::Viveport::MainThreadDispatcher::ActionWrapper)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b4ba28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                        {"ActionWrapper", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::MainThreadDispatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::MainThreadDispatcher::*)()>(&::Viveport::MainThreadDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4babc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Viveport::MainThreadDispatcher::setStaticF_actions(::System::Collections::Generic::Queue_1<::System::Action*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::System::Action*>*, "actions", ::Viveport::MainThreadDispatcher*>(std::forward<::System::Collections::Generic::Queue_1<::System::Action*>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::System::Action*>* Viveport::MainThreadDispatcher::getStaticF_actions()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::System::Action*>*, "actions", ::Viveport::MainThreadDispatcher*>();
}
inline void Viveport::MainThreadDispatcher::setStaticF_instance(::UnityW<::Viveport::MainThreadDispatcher>  value)  {
::cordl_internals::setStaticField<::UnityW<::Viveport::MainThreadDispatcher>, "instance", ::Viveport::MainThreadDispatcher*>(std::forward<::UnityW<::Viveport::MainThreadDispatcher>>(value));
}
inline ::UnityW<::Viveport::MainThreadDispatcher> Viveport::MainThreadDispatcher::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Viveport::MainThreadDispatcher>, "instance", ::Viveport::MainThreadDispatcher*>();
}
inline void Viveport::MainThreadDispatcher::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Viveport::MainThreadDispatcher::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Viveport::MainThreadDispatcher> Viveport::MainThreadDispatcher::Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                        {"Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Viveport::MainThreadDispatcher>>(nullptr, ___internal_method);
}
inline void Viveport::MainThreadDispatcher::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Viveport::MainThreadDispatcher::Enqueue(::System::Collections::IEnumerator*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                        {"Enqueue", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void Viveport::MainThreadDispatcher::Enqueue(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                        {"Enqueue", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
template<typename T1>
inline void Viveport::MainThreadDispatcher::Enqueue(::System::Action_1<T1>*  action, T1  param1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                    {"Enqueue", {::i2c::class_of<T1>()}, {::i2c::type_of<::System::Action_1<T1>*>(), ::i2c::type_of<T1>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, param1);
}
template<typename T1,typename T2>
inline void Viveport::MainThreadDispatcher::Enqueue(::System::Action_2<T1,T2>*  action, T1  param1, T2  param2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                    {"Enqueue", {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}, {::i2c::type_of<::System::Action_2<T1,T2>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, param1, param2);
}
template<typename T1,typename T2,typename T3>
inline void Viveport::MainThreadDispatcher::Enqueue(::System::Action_3<T1,T2,T3>*  action, T1  param1, T2  param2, T3  param3)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                    {"Enqueue", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}, {::i2c::type_of<::System::Action_3<T1,T2,T3>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, param1, param2, param3);
}
template<typename T1,typename T2,typename T3,typename T4>
inline void Viveport::MainThreadDispatcher::Enqueue(::System::Action_4<T1,T2,T3,T4>*  action, T1  param1, T2  param2, T3  param3, T4  param4)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                    {"Enqueue", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>()}, {::i2c::type_of<::System::Action_4<T1,T2,T3,T4>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, param1, param2, param3, param4);
}
inline ::System::Collections::IEnumerator* Viveport::MainThreadDispatcher::ActionWrapper(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                        {"ActionWrapper", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, action);
}
template<typename T1>
inline ::System::Collections::IEnumerator* Viveport::MainThreadDispatcher::ActionWrapper(::System::Action_1<T1>*  action, T1  param1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                    {"ActionWrapper", {::i2c::class_of<T1>()}, {::i2c::type_of<::System::Action_1<T1>*>(), ::i2c::type_of<T1>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, action, param1);
}
template<typename T1,typename T2>
inline ::System::Collections::IEnumerator* Viveport::MainThreadDispatcher::ActionWrapper(::System::Action_2<T1,T2>*  action, T1  param1, T2  param2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                    {"ActionWrapper", {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}, {::i2c::type_of<::System::Action_2<T1,T2>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, action, param1, param2);
}
template<typename T1,typename T2,typename T3>
inline ::System::Collections::IEnumerator* Viveport::MainThreadDispatcher::ActionWrapper(::System::Action_3<T1,T2,T3>*  action, T1  param1, T2  param2, T3  param3)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                    {"ActionWrapper", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}, {::i2c::type_of<::System::Action_3<T1,T2,T3>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, action, param1, param2, param3);
}
template<typename T1,typename T2,typename T3,typename T4>
inline ::System::Collections::IEnumerator* Viveport::MainThreadDispatcher::ActionWrapper(::System::Action_4<T1,T2,T3,T4>*  action, T1  param1, T2  param2, T3  param3, T4  param4)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                    {"ActionWrapper", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>()}, {::i2c::type_of<::System::Action_4<T1,T2,T3,T4>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, action, param1, param2, param3, param4);
}
inline void Viveport::MainThreadDispatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::MainThreadDispatcher* Viveport::MainThreadDispatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::MainThreadDispatcher*>());
}
// Ctor Parameters []
constexpr ::Viveport::MainThreadDispatcher::MainThreadDispatcher()   {
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr int32_t& Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr int32_t const& Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr ::System::Object*& Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr ::System::Object* const& Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr ::System::Action_4<T1,T2,T3,T4>*& Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr ::System::Action_4<T1,T2,T3,T4>* const& Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_set_action(::System::Action_4<T1,T2,T3,T4>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr T1& Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_get_param1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param1;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr T1 const& Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_get_param1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param1;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_set_param1(T1  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___param1 = value;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr T2& Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_get_param2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param2;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr T2 const& Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_get_param2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param2;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_set_param2(T2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___param2 = value;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr T3& Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_get_param3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param3;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr T3 const& Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_get_param3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param3;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_set_param3(T3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___param3 = value;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr T4& Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_get_param4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param4;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr T4 const& Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_get_param4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param4;
}
template<typename T1,typename T2,typename T3,typename T4>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::__cordl_internal_set_param4(T4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___param4 = value;
}
template<typename T1,typename T2,typename T3,typename T4>
inline void Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T1,typename T2,typename T3,typename T4>
inline void Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2,typename T3,typename T4>
inline bool Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T1,typename T2,typename T3,typename T4>
inline ::System::Object* Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T1,typename T2,typename T3,typename T4>
inline void Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2,typename T3,typename T4>
inline ::System::Object* Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename T1,typename T2,typename T3,typename T4>
inline ::Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>* Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template<typename T1,typename T2,typename T3,typename T4>
constexpr  Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template<typename T1,typename T2,typename T3,typename T4>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T1,typename T2,typename T3,typename T4>
constexpr  Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T1,typename T2,typename T3,typename T4>
constexpr ::System::Collections::IEnumerator* Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T1,typename T2,typename T3,typename T4>
constexpr  Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T1,typename T2,typename T3,typename T4>
constexpr ::System::IDisposable* Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T1,typename T2,typename T3,typename T4>
constexpr ::Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>::MainThreadDispatcher__ActionWrapper_d__16_4()   {
}
template<typename T1,typename T2,typename T3>
constexpr int32_t& Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T1,typename T2,typename T3>
constexpr int32_t const& Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T1,typename T2,typename T3>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T1,typename T2,typename T3>
constexpr ::System::Object*& Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T1,typename T2,typename T3>
constexpr ::System::Object* const& Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T1,typename T2,typename T3>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T1,typename T2,typename T3>
constexpr ::System::Action_3<T1,T2,T3>*& Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
template<typename T1,typename T2,typename T3>
constexpr ::System::Action_3<T1,T2,T3>* const& Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
template<typename T1,typename T2,typename T3>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::__cordl_internal_set_action(::System::Action_3<T1,T2,T3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
template<typename T1,typename T2,typename T3>
constexpr T1& Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::__cordl_internal_get_param1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param1;
}
template<typename T1,typename T2,typename T3>
constexpr T1 const& Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::__cordl_internal_get_param1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param1;
}
template<typename T1,typename T2,typename T3>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::__cordl_internal_set_param1(T1  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___param1 = value;
}
template<typename T1,typename T2,typename T3>
constexpr T2& Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::__cordl_internal_get_param2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param2;
}
template<typename T1,typename T2,typename T3>
constexpr T2 const& Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::__cordl_internal_get_param2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param2;
}
template<typename T1,typename T2,typename T3>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::__cordl_internal_set_param2(T2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___param2 = value;
}
template<typename T1,typename T2,typename T3>
constexpr T3& Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::__cordl_internal_get_param3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param3;
}
template<typename T1,typename T2,typename T3>
constexpr T3 const& Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::__cordl_internal_get_param3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param3;
}
template<typename T1,typename T2,typename T3>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::__cordl_internal_set_param3(T3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___param3 = value;
}
template<typename T1,typename T2,typename T3>
inline void Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T1,typename T2,typename T3>
inline void Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2,typename T3>
inline bool Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T1,typename T2,typename T3>
inline ::System::Object* Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T1,typename T2,typename T3>
inline void Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2,typename T3>
inline ::System::Object* Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename T1,typename T2,typename T3>
inline ::Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>* Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template<typename T1,typename T2,typename T3>
constexpr  Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template<typename T1,typename T2,typename T3>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T1,typename T2,typename T3>
constexpr  Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T1,typename T2,typename T3>
constexpr ::System::Collections::IEnumerator* Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T1,typename T2,typename T3>
constexpr  Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T1,typename T2,typename T3>
constexpr ::System::IDisposable* Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T1,typename T2,typename T3>
constexpr ::Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>::MainThreadDispatcher__ActionWrapper_d__15_3()   {
}
template<typename T1,typename T2>
constexpr int32_t& Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T1,typename T2>
constexpr int32_t const& Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T1,typename T2>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T1,typename T2>
constexpr ::System::Object*& Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T1,typename T2>
constexpr ::System::Object* const& Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T1,typename T2>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T1,typename T2>
constexpr ::System::Action_2<T1,T2>*& Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
template<typename T1,typename T2>
constexpr ::System::Action_2<T1,T2>* const& Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
template<typename T1,typename T2>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::__cordl_internal_set_action(::System::Action_2<T1,T2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
template<typename T1,typename T2>
constexpr T1& Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::__cordl_internal_get_param1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param1;
}
template<typename T1,typename T2>
constexpr T1 const& Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::__cordl_internal_get_param1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param1;
}
template<typename T1,typename T2>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::__cordl_internal_set_param1(T1  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___param1 = value;
}
template<typename T1,typename T2>
constexpr T2& Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::__cordl_internal_get_param2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param2;
}
template<typename T1,typename T2>
constexpr T2 const& Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::__cordl_internal_get_param2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param2;
}
template<typename T1,typename T2>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::__cordl_internal_set_param2(T2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___param2 = value;
}
template<typename T1,typename T2>
inline void Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T1,typename T2>
inline void Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2>
inline bool Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T1,typename T2>
inline ::System::Object* Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T1,typename T2>
inline void Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2>
inline ::System::Object* Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename T1,typename T2>
inline ::Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>* Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template<typename T1,typename T2>
constexpr  Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template<typename T1,typename T2>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T1,typename T2>
constexpr  Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T1,typename T2>
constexpr ::System::Collections::IEnumerator* Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T1,typename T2>
constexpr  Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T1,typename T2>
constexpr ::System::IDisposable* Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T1,typename T2>
constexpr ::Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>::MainThreadDispatcher__ActionWrapper_d__14_2()   {
}
template<typename T1>
constexpr int32_t& Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T1>
constexpr int32_t const& Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T1>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T1>
constexpr ::System::Object*& Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T1>
constexpr ::System::Object* const& Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T1>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T1>
constexpr ::System::Action_1<T1>*& Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
template<typename T1>
constexpr ::System::Action_1<T1>* const& Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
template<typename T1>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::__cordl_internal_set_action(::System::Action_1<T1>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
template<typename T1>
constexpr T1& Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::__cordl_internal_get_param1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param1;
}
template<typename T1>
constexpr T1 const& Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::__cordl_internal_get_param1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param1;
}
template<typename T1>
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::__cordl_internal_set_param1(T1  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___param1 = value;
}
template<typename T1>
inline void Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T1>
inline void Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1>
inline bool Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T1>
inline ::System::Object* Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T1>
inline void Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1>
inline ::System::Object* Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename T1>
inline ::Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>* Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template<typename T1>
constexpr  Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template<typename T1>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T1>
constexpr  Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T1>
constexpr ::System::Collections::IEnumerator* Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T1>
constexpr  Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T1>
constexpr ::System::IDisposable* Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T1>
constexpr ::Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>::MainThreadDispatcher__ActionWrapper_d__13_1()   {
}
//  Writing Method size for method: ::Viveport::MainThreadDispatcher__ActionWrapper_d__12._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::MainThreadDispatcher__ActionWrapper_d__12::*)(int32_t)>(&::Viveport::MainThreadDispatcher__ActionWrapper_d__12::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b4ba94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__12*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::MainThreadDispatcher__ActionWrapper_d__12.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::MainThreadDispatcher__ActionWrapper_d__12::*)()>(&::Viveport::MainThreadDispatcher__ActionWrapper_d__12::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4bb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__12*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::MainThreadDispatcher__ActionWrapper_d__12.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Viveport::MainThreadDispatcher__ActionWrapper_d__12::*)()>(&::Viveport::MainThreadDispatcher__ActionWrapper_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b4bb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__12*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::MainThreadDispatcher__ActionWrapper_d__12.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Viveport::MainThreadDispatcher__ActionWrapper_d__12::*)()>(&::Viveport::MainThreadDispatcher__ActionWrapper_d__12::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4bc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__12*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::MainThreadDispatcher__ActionWrapper_d__12.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::MainThreadDispatcher__ActionWrapper_d__12::*)()>(&::Viveport::MainThreadDispatcher__ActionWrapper_d__12::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b4bc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__12*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::MainThreadDispatcher__ActionWrapper_d__12.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Viveport::MainThreadDispatcher__ActionWrapper_d__12::*)()>(&::Viveport::MainThreadDispatcher__ActionWrapper_d__12::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4bc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__12*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Viveport::MainThreadDispatcher__ActionWrapper_d__12::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Viveport::MainThreadDispatcher__ActionWrapper_d__12::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__12::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Viveport::MainThreadDispatcher__ActionWrapper_d__12::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Viveport::MainThreadDispatcher__ActionWrapper_d__12::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__12::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::System::Action*& Viveport::MainThreadDispatcher__ActionWrapper_d__12::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr ::System::Action* const& Viveport::MainThreadDispatcher__ActionWrapper_d__12::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr void Viveport::MainThreadDispatcher__ActionWrapper_d__12::__cordl_internal_set_action(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
inline void Viveport::MainThreadDispatcher__ActionWrapper_d__12::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__12*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Viveport::MainThreadDispatcher__ActionWrapper_d__12::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__12*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Viveport::MainThreadDispatcher__ActionWrapper_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__12*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Viveport::MainThreadDispatcher__ActionWrapper_d__12::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__12*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Viveport::MainThreadDispatcher__ActionWrapper_d__12::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__12*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Viveport::MainThreadDispatcher__ActionWrapper_d__12::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher__ActionWrapper_d__12*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Viveport::MainThreadDispatcher__ActionWrapper_d__12* Viveport::MainThreadDispatcher__ActionWrapper_d__12::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::MainThreadDispatcher__ActionWrapper_d__12*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Viveport::MainThreadDispatcher__ActionWrapper_d__12::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Viveport::MainThreadDispatcher__ActionWrapper_d__12::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Viveport::MainThreadDispatcher__ActionWrapper_d__12::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Viveport::MainThreadDispatcher__ActionWrapper_d__12::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Viveport::MainThreadDispatcher__ActionWrapper_d__12::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Viveport::MainThreadDispatcher__ActionWrapper_d__12::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Viveport::MainThreadDispatcher__ActionWrapper_d__12::MainThreadDispatcher__ActionWrapper_d__12()   {
}
//  Writing Method size for method: ::Viveport::MainThreadDispatcher___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::MainThreadDispatcher___c__DisplayClass6_0::*)()>(&::Viveport::MainThreadDispatcher___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4ba04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::MainThreadDispatcher___c__DisplayClass6_0._Enqueue_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::MainThreadDispatcher___c__DisplayClass6_0::*)()>(&::Viveport::MainThreadDispatcher___c__DisplayClass6_0::_Enqueue_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b4bb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher___c__DisplayClass6_0*>(),
                        {"<Enqueue>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Viveport::MainThreadDispatcher>& Viveport::MainThreadDispatcher___c__DisplayClass6_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Viveport::MainThreadDispatcher> const& Viveport::MainThreadDispatcher___c__DisplayClass6_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Viveport::MainThreadDispatcher___c__DisplayClass6_0::__cordl_internal_set___4__this(::UnityW<::Viveport::MainThreadDispatcher>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::IEnumerator*& Viveport::MainThreadDispatcher___c__DisplayClass6_0::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr ::System::Collections::IEnumerator* const& Viveport::MainThreadDispatcher___c__DisplayClass6_0::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr void Viveport::MainThreadDispatcher___c__DisplayClass6_0::__cordl_internal_set_action(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
inline void Viveport::MainThreadDispatcher___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Viveport::MainThreadDispatcher___c__DisplayClass6_0::_Enqueue_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::MainThreadDispatcher___c__DisplayClass6_0*>(),
                        {"<Enqueue>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::MainThreadDispatcher___c__DisplayClass6_0* Viveport::MainThreadDispatcher___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::MainThreadDispatcher___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Viveport::MainThreadDispatcher___c__DisplayClass6_0::MainThreadDispatcher___c__DisplayClass6_0()   {
}
