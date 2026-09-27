#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSignalListener.hpp"
#include "GlobalNamespace/zzzz__GTSignalID_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GTSignalListener_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTSignalListener.get_rigActorID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GTSignalListener::*)()>(&::GlobalNamespace::GTSignalListener::get_rigActorID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x594a7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalListener*>(),
                        {"get_rigActorID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalListener.set_rigActorID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSignalListener::*)(int32_t)>(&::GlobalNamespace::GTSignalListener::set_rigActorID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x594a7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalListener*>(),
                        {"set_rigActorID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalListener.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSignalListener::*)()>(&::GlobalNamespace::GTSignalListener::Awake)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x594a7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalListener*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalListener.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSignalListener::*)()>(&::GlobalNamespace::GTSignalListener::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x594a7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalListener*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalListener.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSignalListener::*)()>(&::GlobalNamespace::GTSignalListener::OnDisable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x594ab98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalListener*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalListener.RefreshActorID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSignalListener::*)()>(&::GlobalNamespace::GTSignalListener::RefreshActorID)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x594a830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalListener*>(),
                        {"RefreshActorID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalListener.IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GTSignalListener::*)()>(&::GlobalNamespace::GTSignalListener::IsReady)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x594ad44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTSignalListener*>(),
                    {::i2c::class_of<::GlobalNamespace::GTSignalListener*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalListener.OnListenerAwake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSignalListener::*)()>(&::GlobalNamespace::GTSignalListener::OnListenerAwake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x594ad70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTSignalListener*>(),
                    {::i2c::class_of<::GlobalNamespace::GTSignalListener*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalListener.OnListenerEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSignalListener::*)()>(&::GlobalNamespace::GTSignalListener::OnListenerEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x594ad74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTSignalListener*>(),
                    {::i2c::class_of<::GlobalNamespace::GTSignalListener*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalListener.OnListenerDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSignalListener::*)()>(&::GlobalNamespace::GTSignalListener::OnListenerDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x594ad78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTSignalListener*>(),
                    {::i2c::class_of<::GlobalNamespace::GTSignalListener*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalListener.HandleSignalReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSignalListener::*)(int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GTSignalListener::HandleSignalReceived)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x594ad7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTSignalListener*>(),
                    {::i2c::class_of<::GlobalNamespace::GTSignalListener*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalListener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSignalListener::*)()>(&::GlobalNamespace::GTSignalListener::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x594ad80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalListener*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GTSignalID& GlobalNamespace::GTSignalListener::__cordl_internal_get_signal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___signal;
}
constexpr ::GlobalNamespace::GTSignalID const& GlobalNamespace::GTSignalListener::__cordl_internal_get_signal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___signal;
}
constexpr void GlobalNamespace::GTSignalListener::__cordl_internal_set_signal(::GlobalNamespace::GTSignalID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___signal = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GTSignalListener::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GTSignalListener::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GlobalNamespace::GTSignalListener::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr int32_t& GlobalNamespace::GTSignalListener::__cordl_internal_get__rigActorID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigActorID_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::GTSignalListener::__cordl_internal_get__rigActorID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigActorID_k__BackingField;
}
constexpr void GlobalNamespace::GTSignalListener::__cordl_internal_set__rigActorID_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigActorID_k__BackingField = value;
}
constexpr bool& GlobalNamespace::GTSignalListener::__cordl_internal_get_deafen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deafen;
}
constexpr bool const& GlobalNamespace::GTSignalListener::__cordl_internal_get_deafen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deafen;
}
constexpr void GlobalNamespace::GTSignalListener::__cordl_internal_set_deafen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deafen = value;
}
constexpr bool& GlobalNamespace::GTSignalListener::__cordl_internal_get_listenToSelfOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenToSelfOnly;
}
constexpr bool const& GlobalNamespace::GTSignalListener::__cordl_internal_get_listenToSelfOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenToSelfOnly;
}
constexpr void GlobalNamespace::GTSignalListener::__cordl_internal_set_listenToSelfOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listenToSelfOnly = value;
}
constexpr bool& GlobalNamespace::GTSignalListener::__cordl_internal_get_ignoreSelf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreSelf;
}
constexpr bool const& GlobalNamespace::GTSignalListener::__cordl_internal_get_ignoreSelf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreSelf;
}
constexpr void GlobalNamespace::GTSignalListener::__cordl_internal_set_ignoreSelf(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreSelf = value;
}
constexpr bool& GlobalNamespace::GTSignalListener::__cordl_internal_get_callUnityEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callUnityEvent;
}
constexpr bool const& GlobalNamespace::GTSignalListener::__cordl_internal_get_callUnityEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callUnityEvent;
}
constexpr void GlobalNamespace::GTSignalListener::__cordl_internal_set_callUnityEvent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callUnityEvent = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GTSignalListener::__cordl_internal_get__callLimits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callLimits;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GTSignalListener::__cordl_internal_get__callLimits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callLimits;
}
constexpr void GlobalNamespace::GTSignalListener::__cordl_internal_set__callLimits(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callLimits = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::GTSignalListener::__cordl_internal_get_onSignalReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSignalReceived;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::GTSignalListener::__cordl_internal_get_onSignalReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSignalReceived;
}
constexpr void GlobalNamespace::GTSignalListener::__cordl_internal_set_onSignalReceived(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSignalReceived = value;
}
inline int32_t GlobalNamespace::GTSignalListener::get_rigActorID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalListener*>(),
                        {"get_rigActorID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GTSignalListener::set_rigActorID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalListener*>(),
                        {"set_rigActorID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GTSignalListener::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalListener*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTSignalListener::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalListener*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTSignalListener::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalListener*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTSignalListener::RefreshActorID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalListener*>(),
                        {"RefreshActorID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GTSignalListener::IsReady()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GTSignalListener*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GTSignalListener::OnListenerAwake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GTSignalListener*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTSignalListener::OnListenerEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GTSignalListener*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTSignalListener::OnListenerDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GTSignalListener*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTSignalListener::HandleSignalReceived(int32_t  sender, ::ArrayW<::System::Object*>  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GTSignalListener*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, args);
}
inline void GlobalNamespace::GTSignalListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalListener*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GTSignalListener* GlobalNamespace::GTSignalListener::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTSignalListener*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTSignalListener::GTSignalListener()   {
}
