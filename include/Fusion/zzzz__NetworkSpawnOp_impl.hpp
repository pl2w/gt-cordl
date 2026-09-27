#pragma once
// IWYU pragma private; include "Fusion/NetworkSpawnOp.hpp"
#include "Fusion/zzzz__NetworkSpawnStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkSpawnOp_def.hpp"
#include "Fusion/zzzz__NetworkObjectTypeId_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__NetworkSpawnOp_Awaiter_def.hpp"
#include "Fusion/zzzz__NetworkSpawnOp_def.hpp"
#include "Fusion/zzzz__NetworkSpawnStatus_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkSpawnOp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSpawnOp::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkSpawnStatus, ::Fusion::NetworkObject*)>(&::Fusion::NetworkSpawnOp::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fd97a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkSpawnStatus>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSpawnOp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSpawnOp::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkSpawnStatus, ::Fusion::NetworkSpawnOp_AsyncOpData*)>(&::Fusion::NetworkSpawnOp::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fd97d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkSpawnStatus>(), ::i2c::type_of<::Fusion::NetworkSpawnOp_AsyncOpData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSpawnOp.ConsumeSyncSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkObject> (::Fusion::NetworkSpawnOp::*)(::Fusion::NetworkObjectTypeId)>(&::Fusion::NetworkSpawnOp::ConsumeSyncSpawn)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5fd9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {"ConsumeSyncSpawn", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSpawnOp.ConsumeSyncSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSpawnStatus (::Fusion::NetworkSpawnOp::*)(::by_ref<::Fusion::NetworkObject*>)>(&::Fusion::NetworkSpawnOp::ConsumeSyncSpawn)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5fd9984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {"ConsumeSyncSpawn", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSpawnOp.get_Object
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkObject> (::Fusion::NetworkSpawnOp::*)()>(&::Fusion::NetworkSpawnOp::get_Object)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5fd9a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {"get_Object", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSpawnOp.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSpawnStatus (::Fusion::NetworkSpawnOp::*)()>(&::Fusion::NetworkSpawnOp::get_Status)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fd9b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {"get_Status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSpawnOp.get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSpawnOp::*)()>(&::Fusion::NetworkSpawnOp::get_IsSpawned)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5fd9ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {"get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSpawnOp.get_IsQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSpawnOp::*)()>(&::Fusion::NetworkSpawnOp::get_IsQueued)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5fd9c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {"get_IsQueued", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSpawnOp.get_IsFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSpawnOp::*)()>(&::Fusion::NetworkSpawnOp::get_IsFailed)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5fd9ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {"get_IsFailed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSpawnOp.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetworkSpawnOp_Awaiter (::Fusion::NetworkSpawnOp::*)()>(&::Fusion::NetworkSpawnOp::GetAwaiter)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fd9dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkSpawnOp::_ctor(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkSpawnStatus  status, ::Fusion::NetworkObject*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkSpawnStatus>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, runner, status, data);
}
inline void Fusion::NetworkSpawnOp::_ctor(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkSpawnStatus  status, ::Fusion::NetworkSpawnOp_AsyncOpData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkSpawnStatus>(), ::i2c::type_of<::Fusion::NetworkSpawnOp_AsyncOpData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, runner, status, data);
}
inline ::UnityW<::Fusion::NetworkObject> Fusion::NetworkSpawnOp::ConsumeSyncSpawn(::Fusion::NetworkObjectTypeId  typeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {"ConsumeSyncSpawn", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkObject>>(*this, ___internal_method, typeId);
}
inline ::Fusion::NetworkSpawnStatus Fusion::NetworkSpawnOp::ConsumeSyncSpawn(::by_ref<::Fusion::NetworkObject*>  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {"ConsumeSyncSpawn", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSpawnStatus>(*this, ___internal_method, obj);
}
inline ::UnityW<::Fusion::NetworkObject> Fusion::NetworkSpawnOp::get_Object()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {"get_Object", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkObject>>(*this, ___internal_method);
}
inline ::Fusion::NetworkSpawnStatus Fusion::NetworkSpawnOp::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSpawnStatus>(*this, ___internal_method);
}
inline bool Fusion::NetworkSpawnOp::get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {"get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::NetworkSpawnOp::get_IsQueued()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {"get_IsQueued", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::NetworkSpawnOp::get_IsFailed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {"get_IsFailed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::NetworkSpawnOp_Awaiter Fusion::NetworkSpawnOp::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkSpawnOp_Awaiter>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Runner", ty: "::UnityW<::Fusion::NetworkRunner>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_status", ty: "::Fusion::NetworkSpawnStatus", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkSpawnOp::NetworkSpawnOp(::UnityW<::Fusion::NetworkRunner>  Runner, ::Fusion::NetworkSpawnStatus  _status, ::System::Object*  _data) noexcept  {
this->Runner = Runner;
this->_status = _status;
this->_data = _data;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSpawnOp::NetworkSpawnOp()   {
}
//  Writing Method size for method: ::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1::*)()>(&::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fda3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1._OnCompleted_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1::*)()>(&::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1::_OnCompleted_b__0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5fda3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1*>(),
                        {"<OnCompleted>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::SynchronizationContext*& Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1::__cordl_internal_get_capturedContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capturedContext;
}
constexpr ::System::Threading::SynchronizationContext* const& Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1::__cordl_internal_get_capturedContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capturedContext;
}
constexpr void Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1::__cordl_internal_set_capturedContext(::System::Threading::SynchronizationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___capturedContext = value;
}
constexpr ::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0*& Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0* const& Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1::__cordl_internal_set_CS$__8__locals1(::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1::_OnCompleted_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1*>(),
                        {"<OnCompleted>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1* Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1*>());
}
// Ctor Parameters []
constexpr ::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1::Awaiter_NetworkSpawnOp___c__DisplayClass5_1()   {
}
//  Writing Method size for method: ::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0::*)()>(&::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fda3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0._OnCompleted_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0::*)(::System::Object*)>(&::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0::_OnCompleted_b__1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fda3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0*>(),
                        {"<OnCompleted>b__1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0::__cordl_internal_get_continuation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuation;
}
constexpr ::System::Action* const& Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0::__cordl_internal_get_continuation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuation;
}
constexpr void Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0::__cordl_internal_set_continuation(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuation = value;
}
constexpr ::System::Threading::SendOrPostCallback*& Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0::__cordl_internal_get___9__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr ::System::Threading::SendOrPostCallback* const& Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0::__cordl_internal_get___9__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr void Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0::__cordl_internal_set___9__1(::System::Threading::SendOrPostCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__1 = value;
}
inline void Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0::_OnCompleted_b__1(::System::Object*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0*>(),
                        {"<OnCompleted>b__1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0* Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0::Awaiter_NetworkSpawnOp___c__DisplayClass5_0()   {
}
//  Writing Method size for method: ::Fusion::NetworkSpawnOp_AsyncOpData.add_Completed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSpawnOp_AsyncOpData::*)(::System::Action*)>(&::Fusion::NetworkSpawnOp_AsyncOpData::add_Completed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5fd9e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp_AsyncOpData*>(),
                        {"add_Completed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSpawnOp_AsyncOpData.remove_Completed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSpawnOp_AsyncOpData::*)(::System::Action*)>(&::Fusion::NetworkSpawnOp_AsyncOpData::remove_Completed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5fd9ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp_AsyncOpData*>(),
                        {"remove_Completed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSpawnOp_AsyncOpData.Complete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSpawnOp_AsyncOpData::*)(::by_ref<::Fusion::NetworkSpawnOp>)>(&::Fusion::NetworkSpawnOp_AsyncOpData::Complete)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5fd29c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp_AsyncOpData*>(),
                        {"Complete", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkSpawnOp>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSpawnOp_AsyncOpData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSpawnOp_AsyncOpData::*)()>(&::Fusion::NetworkSpawnOp_AsyncOpData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd9f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp_AsyncOpData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkSpawnStatus& Fusion::NetworkSpawnOp_AsyncOpData::__cordl_internal_get_Status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr ::Fusion::NetworkSpawnStatus const& Fusion::NetworkSpawnOp_AsyncOpData::__cordl_internal_get_Status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr void Fusion::NetworkSpawnOp_AsyncOpData::__cordl_internal_set_Status(::Fusion::NetworkSpawnStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Status = value;
}
constexpr ::UnityW<::Fusion::NetworkObject>& Fusion::NetworkSpawnOp_AsyncOpData::__cordl_internal_get_Object()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Object;
}
constexpr ::UnityW<::Fusion::NetworkObject> const& Fusion::NetworkSpawnOp_AsyncOpData::__cordl_internal_get_Object() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Object;
}
constexpr void Fusion::NetworkSpawnOp_AsyncOpData::__cordl_internal_set_Object(::UnityW<::Fusion::NetworkObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Object = value;
}
constexpr ::System::Action*& Fusion::NetworkSpawnOp_AsyncOpData::__cordl_internal_get_Completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Completed;
}
constexpr ::System::Action* const& Fusion::NetworkSpawnOp_AsyncOpData::__cordl_internal_get_Completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Completed;
}
constexpr void Fusion::NetworkSpawnOp_AsyncOpData::__cordl_internal_set_Completed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Completed = value;
}
inline void Fusion::NetworkSpawnOp_AsyncOpData::add_Completed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp_AsyncOpData*>(),
                        {"add_Completed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::NetworkSpawnOp_AsyncOpData::remove_Completed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp_AsyncOpData*>(),
                        {"remove_Completed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::NetworkSpawnOp_AsyncOpData::Complete(/* [IsReadOnly] */ ::by_ref<::Fusion::NetworkSpawnOp>  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp_AsyncOpData*>(),
                        {"Complete", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkSpawnOp>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline void Fusion::NetworkSpawnOp_AsyncOpData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSpawnOp_AsyncOpData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkSpawnOp_AsyncOpData* Fusion::NetworkSpawnOp_AsyncOpData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkSpawnOp_AsyncOpData*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSpawnOp_AsyncOpData::NetworkSpawnOp_AsyncOpData()   {
}
