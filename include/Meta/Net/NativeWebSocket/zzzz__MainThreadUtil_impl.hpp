#pragma once
// IWYU pragma private; include "Meta/Net/NativeWebSocket/MainThreadUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__MainThreadUtil_def.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__MainThreadUtil_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::MainThreadUtil.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::Net::NativeWebSocket::MainThreadUtil> (*)()>(&::Meta::Net::NativeWebSocket::MainThreadUtil::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e04414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::MainThreadUtil.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::Net::NativeWebSocket::MainThreadUtil*)>(&::Meta::Net::NativeWebSocket::MainThreadUtil::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e0445c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil*>(),
                        {"set_Instance", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::MainThreadUtil*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::MainThreadUtil.get_synchronizationContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SynchronizationContext* (*)()>(&::Meta::Net::NativeWebSocket::MainThreadUtil::get_synchronizationContext)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e044b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil*>(),
                        {"get_synchronizationContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::MainThreadUtil.set_synchronizationContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::SynchronizationContext*)>(&::Meta::Net::NativeWebSocket::MainThreadUtil::set_synchronizationContext)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9e044fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil*>(),
                        {"set_synchronizationContext", {}, {::i2c::type_of<::System::Threading::SynchronizationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::MainThreadUtil.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::MainThreadUtil::*)()>(&::Meta::Net::NativeWebSocket::MainThreadUtil::Awake)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9e0454c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::MainThreadUtil.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::Net::NativeWebSocket::MainThreadUtil::Setup)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9e045d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::MainThreadUtil.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IEnumerator*)>(&::Meta::Net::NativeWebSocket::MainThreadUtil::Run)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x9e046ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil*>(),
                        {"Run", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::MainThreadUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::MainThreadUtil::*)()>(&::Meta::Net::NativeWebSocket::MainThreadUtil::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e048c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::Net::NativeWebSocket::MainThreadUtil::setStaticF__Instance_k__BackingField(::UnityW<::Meta::Net::NativeWebSocket::MainThreadUtil>  value)  {
::cordl_internals::setStaticField<::UnityW<::Meta::Net::NativeWebSocket::MainThreadUtil>, "<Instance>k__BackingField", ::Meta::Net::NativeWebSocket::MainThreadUtil*>(std::forward<::UnityW<::Meta::Net::NativeWebSocket::MainThreadUtil>>(value));
}
inline ::UnityW<::Meta::Net::NativeWebSocket::MainThreadUtil> Meta::Net::NativeWebSocket::MainThreadUtil::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::Meta::Net::NativeWebSocket::MainThreadUtil>, "<Instance>k__BackingField", ::Meta::Net::NativeWebSocket::MainThreadUtil*>();
}
inline void Meta::Net::NativeWebSocket::MainThreadUtil::setStaticF__synchronizationContext_k__BackingField(::System::Threading::SynchronizationContext*  value)  {
::cordl_internals::setStaticField<::System::Threading::SynchronizationContext*, "<synchronizationContext>k__BackingField", ::Meta::Net::NativeWebSocket::MainThreadUtil*>(std::forward<::System::Threading::SynchronizationContext*>(value));
}
inline ::System::Threading::SynchronizationContext* Meta::Net::NativeWebSocket::MainThreadUtil::getStaticF__synchronizationContext_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Threading::SynchronizationContext*, "<synchronizationContext>k__BackingField", ::Meta::Net::NativeWebSocket::MainThreadUtil*>();
}
inline ::UnityW<::Meta::Net::NativeWebSocket::MainThreadUtil> Meta::Net::NativeWebSocket::MainThreadUtil::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::Net::NativeWebSocket::MainThreadUtil>>(nullptr, ___internal_method);
}
inline void Meta::Net::NativeWebSocket::MainThreadUtil::set_Instance(::Meta::Net::NativeWebSocket::MainThreadUtil*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil*>(),
                        {"set_Instance", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::MainThreadUtil*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Threading::SynchronizationContext* Meta::Net::NativeWebSocket::MainThreadUtil::get_synchronizationContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil*>(),
                        {"get_synchronizationContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*>(nullptr, ___internal_method);
}
inline void Meta::Net::NativeWebSocket::MainThreadUtil::set_synchronizationContext(::System::Threading::SynchronizationContext*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil*>(),
                        {"set_synchronizationContext", {}, {::i2c::type_of<::System::Threading::SynchronizationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::Net::NativeWebSocket::MainThreadUtil::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Net::NativeWebSocket::MainThreadUtil::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Meta::Net::NativeWebSocket::MainThreadUtil::Run(::System::Collections::IEnumerator*  waitForUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil*>(),
                        {"Run", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, waitForUpdate);
}
inline void Meta::Net::NativeWebSocket::MainThreadUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Net::NativeWebSocket::MainThreadUtil* Meta::Net::NativeWebSocket::MainThreadUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Net::NativeWebSocket::MainThreadUtil*>());
}
// Ctor Parameters []
constexpr ::Meta::Net::NativeWebSocket::MainThreadUtil::MainThreadUtil()   {
}
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0::*)()>(&::Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e048bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0._Run_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0::*)(::System::Object*)>(&::Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0::_Run_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9e048cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0*>(),
                        {"<Run>b__0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IEnumerator*& Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0::__cordl_internal_get_waitForUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitForUpdate;
}
constexpr ::System::Collections::IEnumerator* const& Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0::__cordl_internal_get_waitForUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitForUpdate;
}
constexpr void Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0::__cordl_internal_set_waitForUpdate(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitForUpdate = value;
}
inline void Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0::_Run_b__0(::System::Object*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0*>(),
                        {"<Run>b__0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0* Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0::MainThreadUtil___c__DisplayClass10_0()   {
}
