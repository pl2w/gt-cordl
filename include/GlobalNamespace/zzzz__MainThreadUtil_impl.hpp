#pragma once
// IWYU pragma private; include "GlobalNamespace/MainThreadUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MainThreadUtil_def.hpp"
#include "GlobalNamespace/zzzz__MainThreadUtil_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainThreadUtil.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MainThreadUtil> (*)()>(&::GlobalNamespace::MainThreadUtil::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f34104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainThreadUtil.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MainThreadUtil*)>(&::GlobalNamespace::MainThreadUtil::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f3414c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::MainThreadUtil*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainThreadUtil.get_synchronizationContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SynchronizationContext* (*)()>(&::GlobalNamespace::MainThreadUtil::get_synchronizationContext)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f341a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil*>(),
                        {"get_synchronizationContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainThreadUtil.set_synchronizationContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::SynchronizationContext*)>(&::GlobalNamespace::MainThreadUtil::set_synchronizationContext)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f341ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil*>(),
                        {"set_synchronizationContext", {}, {::i2c::type_of<::System::Threading::SynchronizationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainThreadUtil.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::MainThreadUtil::Setup)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5f3423c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainThreadUtil.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IEnumerator*)>(&::GlobalNamespace::MainThreadUtil::Run)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5f34350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil*>(),
                        {"Run", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainThreadUtil.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainThreadUtil::*)()>(&::GlobalNamespace::MainThreadUtil::Awake)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f3445c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainThreadUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainThreadUtil::*)()>(&::GlobalNamespace::MainThreadUtil::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f344e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainThreadUtil::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::MainThreadUtil>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::MainThreadUtil>, "<Instance>k__BackingField", ::GlobalNamespace::MainThreadUtil*>(std::forward<::UnityW<::GlobalNamespace::MainThreadUtil>>(value));
}
inline ::UnityW<::GlobalNamespace::MainThreadUtil> GlobalNamespace::MainThreadUtil::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::MainThreadUtil>, "<Instance>k__BackingField", ::GlobalNamespace::MainThreadUtil*>();
}
inline void GlobalNamespace::MainThreadUtil::setStaticF__synchronizationContext_k__BackingField(::System::Threading::SynchronizationContext*  value)  {
::cordl_internals::setStaticField<::System::Threading::SynchronizationContext*, "<synchronizationContext>k__BackingField", ::GlobalNamespace::MainThreadUtil*>(std::forward<::System::Threading::SynchronizationContext*>(value));
}
inline ::System::Threading::SynchronizationContext* GlobalNamespace::MainThreadUtil::getStaticF__synchronizationContext_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Threading::SynchronizationContext*, "<synchronizationContext>k__BackingField", ::GlobalNamespace::MainThreadUtil*>();
}
inline ::UnityW<::GlobalNamespace::MainThreadUtil> GlobalNamespace::MainThreadUtil::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MainThreadUtil>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MainThreadUtil::set_Instance(::GlobalNamespace::MainThreadUtil*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::MainThreadUtil*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Threading::SynchronizationContext* GlobalNamespace::MainThreadUtil::get_synchronizationContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil*>(),
                        {"get_synchronizationContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MainThreadUtil::set_synchronizationContext(::System::Threading::SynchronizationContext*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil*>(),
                        {"set_synchronizationContext", {}, {::i2c::type_of<::System::Threading::SynchronizationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::MainThreadUtil::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MainThreadUtil::Run(::System::Collections::IEnumerator*  waitForUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil*>(),
                        {"Run", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, waitForUpdate);
}
inline void GlobalNamespace::MainThreadUtil::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainThreadUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainThreadUtil* GlobalNamespace::MainThreadUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainThreadUtil*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainThreadUtil::MainThreadUtil()   {
}
//  Writing Method size for method: ::GlobalNamespace::MainThreadUtil___c__DisplayClass9_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainThreadUtil___c__DisplayClass9_0::*)()>(&::GlobalNamespace::MainThreadUtil___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f34454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainThreadUtil___c__DisplayClass9_0._Run_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainThreadUtil___c__DisplayClass9_0::*)(::System::Object*)>(&::GlobalNamespace::MainThreadUtil___c__DisplayClass9_0::_Run_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f344f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil___c__DisplayClass9_0*>(),
                        {"<Run>b__0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IEnumerator*& GlobalNamespace::MainThreadUtil___c__DisplayClass9_0::__cordl_internal_get_waitForUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitForUpdate;
}
constexpr ::System::Collections::IEnumerator* const& GlobalNamespace::MainThreadUtil___c__DisplayClass9_0::__cordl_internal_get_waitForUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitForUpdate;
}
constexpr void GlobalNamespace::MainThreadUtil___c__DisplayClass9_0::__cordl_internal_set_waitForUpdate(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitForUpdate = value;
}
inline void GlobalNamespace::MainThreadUtil___c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainThreadUtil___c__DisplayClass9_0::_Run_b__0(::System::Object*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainThreadUtil___c__DisplayClass9_0*>(),
                        {"<Run>b__0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::GlobalNamespace::MainThreadUtil___c__DisplayClass9_0* GlobalNamespace::MainThreadUtil___c__DisplayClass9_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainThreadUtil___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainThreadUtil___c__DisplayClass9_0::MainThreadUtil___c__DisplayClass9_0()   {
}
