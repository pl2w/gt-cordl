#pragma once
// IWYU pragma private; include "Oculus/Interaction/Context.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__Context_def.hpp"
#include "Oculus/Interaction/zzzz__Context_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Threading/zzzz__Mutex_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Context.ExecuteOnMainThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::Oculus::Interaction::Context::ExecuteOnMainThread)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa48b0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context*>(),
                        {"ExecuteOnMainThread", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Context.get_Global
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Context_Instance* (*)()>(&::Oculus::Interaction::Context::get_Global)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa48b26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context*>(),
                        {"get_Global", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Context.add_WhenDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Context::*)(::System::Action*)>(&::Oculus::Interaction::Context::add_WhenDestroyed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa48b2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context*>(),
                        {"add_WhenDestroyed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Context.remove_WhenDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Context::*)(::System::Action*)>(&::Oculus::Interaction::Context::remove_WhenDestroyed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa48b360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context*>(),
                        {"remove_WhenDestroyed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Context.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Context::*)()>(&::Oculus::Interaction::Context::Awake)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa48b3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Context.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Context::*)()>(&::Oculus::Interaction::Context::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa48b534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Context._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Context::*)()>(&::Oculus::Interaction::Context::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa48b550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Oculus::Interaction::Context::__cordl_internal_get_WhenDestroyed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenDestroyed;
}
constexpr ::System::Action* const& Oculus::Interaction::Context::__cordl_internal_get_WhenDestroyed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenDestroyed;
}
constexpr void Oculus::Interaction::Context::__cordl_internal_set_WhenDestroyed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenDestroyed = value;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::System::Object*>*& Oculus::Interaction::Context::__cordl_internal_get__singletons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____singletons;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::System::Object*>* const& Oculus::Interaction::Context::__cordl_internal_get__singletons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____singletons;
}
constexpr void Oculus::Interaction::Context::__cordl_internal_set__singletons(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____singletons = value;
}
inline void Oculus::Interaction::Context::setStaticF__unityMainThreadSynchronizationContext(::System::Threading::SynchronizationContext*  value)  {
::cordl_internals::setStaticField<::System::Threading::SynchronizationContext*, "_unityMainThreadSynchronizationContext", ::Oculus::Interaction::Context*>(std::forward<::System::Threading::SynchronizationContext*>(value));
}
inline ::System::Threading::SynchronizationContext* Oculus::Interaction::Context::getStaticF__unityMainThreadSynchronizationContext()  {
return ::cordl_internals::getStaticField<::System::Threading::SynchronizationContext*, "_unityMainThreadSynchronizationContext", ::Oculus::Interaction::Context*>();
}
inline void Oculus::Interaction::Context::setStaticF__unityMainThreadWork(::System::Collections::Generic::Queue_1<::System::Action*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::System::Action*>*, "_unityMainThreadWork", ::Oculus::Interaction::Context*>(std::forward<::System::Collections::Generic::Queue_1<::System::Action*>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::System::Action*>* Oculus::Interaction::Context::getStaticF__unityMainThreadWork()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::System::Action*>*, "_unityMainThreadWork", ::Oculus::Interaction::Context*>();
}
inline void Oculus::Interaction::Context::setStaticF__unityMainThreadWorkMutex(::System::Threading::Mutex*  value)  {
::cordl_internals::setStaticField<::System::Threading::Mutex*, "_unityMainThreadWorkMutex", ::Oculus::Interaction::Context*>(std::forward<::System::Threading::Mutex*>(value));
}
inline ::System::Threading::Mutex* Oculus::Interaction::Context::getStaticF__unityMainThreadWorkMutex()  {
return ::cordl_internals::getStaticField<::System::Threading::Mutex*, "_unityMainThreadWorkMutex", ::Oculus::Interaction::Context*>();
}
inline void Oculus::Interaction::Context::setStaticF__Global_k__BackingField(::Oculus::Interaction::Context_Instance*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Context_Instance*, "<Global>k__BackingField", ::Oculus::Interaction::Context*>(std::forward<::Oculus::Interaction::Context_Instance*>(value));
}
inline ::Oculus::Interaction::Context_Instance* Oculus::Interaction::Context::getStaticF__Global_k__BackingField()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Context_Instance*, "<Global>k__BackingField", ::Oculus::Interaction::Context*>();
}
inline void Oculus::Interaction::Context::ExecuteOnMainThread(::System::Action*  work)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context*>(),
                        {"ExecuteOnMainThread", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, work);
}
inline ::Oculus::Interaction::Context_Instance* Oculus::Interaction::Context::get_Global()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context*>(),
                        {"get_Global", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Context_Instance*>(nullptr, ___internal_method);
}
inline void Oculus::Interaction::Context::add_WhenDestroyed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context*>(),
                        {"add_WhenDestroyed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Context::remove_WhenDestroyed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context*>(),
                        {"remove_WhenDestroyed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Context::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T Oculus::Interaction::Context::GetOrCreateSingleton()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Context*>(),
                    {"GetOrCreateSingleton", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline T Oculus::Interaction::Context::GetOrCreateSingleton(::System::Func_1<T>*  factory)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Context*>(),
                    {"GetOrCreateSingleton", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Func_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, factory);
}
inline void Oculus::Interaction::Context::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Context::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Context* Oculus::Interaction::Context::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Context*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Context::Context()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Context___c__DisplayClass4_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Context___c__DisplayClass4_0::*)()>(&::Oculus::Interaction::Context___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48b264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Context___c__DisplayClass4_0._ExecuteOnMainThread_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Context___c__DisplayClass4_0::*)(::System::Object*)>(&::Oculus::Interaction::Context___c__DisplayClass4_0::_ExecuteOnMainThread_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa48b75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context___c__DisplayClass4_0*>(),
                        {"<ExecuteOnMainThread>b__0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Oculus::Interaction::Context___c__DisplayClass4_0::__cordl_internal_get_work()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___work;
}
constexpr ::System::Action* const& Oculus::Interaction::Context___c__DisplayClass4_0::__cordl_internal_get_work() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___work;
}
constexpr void Oculus::Interaction::Context___c__DisplayClass4_0::__cordl_internal_set_work(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___work = value;
}
inline void Oculus::Interaction::Context___c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Context___c__DisplayClass4_0::_ExecuteOnMainThread_b__0(::System::Object*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context___c__DisplayClass4_0*>(),
                        {"<ExecuteOnMainThread>b__0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::Oculus::Interaction::Context___c__DisplayClass4_0* Oculus::Interaction::Context___c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Context___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Context___c__DisplayClass4_0::Context___c__DisplayClass4_0()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Context_Instance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Context_Instance::*)(::StringW)>(&::Oculus::Interaction::Context_Instance::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa48b72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context_Instance*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Context_Instance.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::Context> (::Oculus::Interaction::Context_Instance::*)()>(&::Oculus::Interaction::Context_Instance::GetInstance)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa47320c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context_Instance*>(),
                        {"GetInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Interaction::Context_Instance::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& Oculus::Interaction::Context_Instance::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void Oculus::Interaction::Context_Instance::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr ::UnityW<::Oculus::Interaction::Context>& Oculus::Interaction::Context_Instance::__cordl_internal_get__instance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instance;
}
constexpr ::UnityW<::Oculus::Interaction::Context> const& Oculus::Interaction::Context_Instance::__cordl_internal_get__instance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instance;
}
constexpr void Oculus::Interaction::Context_Instance::__cordl_internal_set__instance(::UnityW<::Oculus::Interaction::Context>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____instance = value;
}
inline void Oculus::Interaction::Context_Instance::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context_Instance*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::UnityW<::Oculus::Interaction::Context> Oculus::Interaction::Context_Instance::GetInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Context_Instance*>(),
                        {"GetInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::Context>>(this, ___internal_method);
}
inline ::Oculus::Interaction::Context_Instance* Oculus::Interaction::Context_Instance::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Context_Instance*>(name));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Context_Instance::Context_Instance()   {
}
