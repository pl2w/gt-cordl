#pragma once
// IWYU pragma private; include "Fusion/SimulationBehaviour.hpp"
#include "Fusion/zzzz__Behaviour_impl.hpp"
#include "Fusion/zzzz__SimulationBehaviourRuntimeFlags_impl.hpp"
#include "Fusion/zzzz__SimulationBehaviour_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::Fusion::SimulationBehaviour.get_CanReceiveRenderCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationBehaviour::*)()>(&::Fusion::SimulationBehaviour::get_CanReceiveRenderCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f8670c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"get_CanReceiveRenderCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviour.get_CanReceiveSimulationCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationBehaviour::*)()>(&::Fusion::SimulationBehaviour::get_CanReceiveSimulationCallback)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f8671c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"get_CanReceiveSimulationCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviour.get_Runner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkRunner> (::Fusion::SimulationBehaviour::*)()>(&::Fusion::SimulationBehaviour::get_Runner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"get_Runner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviour.get_Object
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkObject> (::Fusion::SimulationBehaviour::*)()>(&::Fusion::SimulationBehaviour::get_Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8673c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"get_Object", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviour.FixedUpdateNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviour::*)()>(&::Fusion::SimulationBehaviour::FixedUpdateNetwork)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f86744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                    {::i2c::class_of<::Fusion::SimulationBehaviour*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviour.PreRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviour::*)()>(&::Fusion::SimulationBehaviour::PreRender)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f86748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                    {::i2c::class_of<::Fusion::SimulationBehaviour*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviour.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviour::*)()>(&::Fusion::SimulationBehaviour::Render)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f8674c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                    {::i2c::class_of<::Fusion::SimulationBehaviour*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviour.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviour::*)()>(&::Fusion::SimulationBehaviour::OnDestroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f86750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviour.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviour::*)()>(&::Fusion::SimulationBehaviour::OnEnable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f8681c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviour.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviour::*)()>(&::Fusion::SimulationBehaviour::OnDisable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f868e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviour.MakeOwned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviour::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*)>(&::Fusion::SimulationBehaviour::MakeOwned)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f869b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"MakeOwned", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviour.MakeUnowned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviour::*)()>(&::Fusion::SimulationBehaviour::MakeUnowned)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f869e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"MakeUnowned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviour.DebugNotifySpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviour::*)()>(&::Fusion::SimulationBehaviour::DebugNotifySpawned)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f86a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"DebugNotifySpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviour.DebugNotifyDespawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviour::*)()>(&::Fusion::SimulationBehaviour::DebugNotifyDespawned)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f86a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"DebugNotifyDespawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviour.GetDumpString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviour::*)(::System::Text::StringBuilder*)>(&::Fusion::SimulationBehaviour::GetDumpString)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5f86b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                    {::i2c::class_of<::Fusion::SimulationBehaviour*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviour::*)()>(&::Fusion::SimulationBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f80a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Fusion::SimulationBehaviour>& Fusion::SimulationBehaviour::__cordl_internal_get_Prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prev;
}
constexpr ::UnityW<::Fusion::SimulationBehaviour> const& Fusion::SimulationBehaviour::__cordl_internal_get_Prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prev;
}
constexpr void Fusion::SimulationBehaviour::__cordl_internal_set_Prev(::UnityW<::Fusion::SimulationBehaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Prev = value;
}
constexpr ::UnityW<::Fusion::SimulationBehaviour>& Fusion::SimulationBehaviour::__cordl_internal_get_Next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr ::UnityW<::Fusion::SimulationBehaviour> const& Fusion::SimulationBehaviour::__cordl_internal_get_Next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr void Fusion::SimulationBehaviour::__cordl_internal_set_Next(::UnityW<::Fusion::SimulationBehaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Next = value;
}
constexpr ::Fusion::SimulationBehaviourRuntimeFlags& Fusion::SimulationBehaviour::__cordl_internal_get_Flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Flags;
}
constexpr ::Fusion::SimulationBehaviourRuntimeFlags const& Fusion::SimulationBehaviour::__cordl_internal_get_Flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Flags;
}
constexpr void Fusion::SimulationBehaviour::__cordl_internal_set_Flags(::Fusion::SimulationBehaviourRuntimeFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Flags = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::SimulationBehaviour::__cordl_internal_get__runner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runner;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::SimulationBehaviour::__cordl_internal_get__runner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runner;
}
constexpr void Fusion::SimulationBehaviour::__cordl_internal_set__runner(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runner = value;
}
constexpr ::UnityW<::Fusion::NetworkObject>& Fusion::SimulationBehaviour::__cordl_internal_get__object()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____object;
}
constexpr ::UnityW<::Fusion::NetworkObject> const& Fusion::SimulationBehaviour::__cordl_internal_get__object() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____object;
}
constexpr void Fusion::SimulationBehaviour::__cordl_internal_set__object(::UnityW<::Fusion::NetworkObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____object = value;
}
inline bool Fusion::SimulationBehaviour::get_CanReceiveRenderCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"get_CanReceiveRenderCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::SimulationBehaviour::get_CanReceiveSimulationCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"get_CanReceiveSimulationCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::Fusion::NetworkRunner> Fusion::SimulationBehaviour::get_Runner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"get_Runner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkRunner>>(this, ___internal_method);
}
inline ::UnityW<::Fusion::NetworkObject> Fusion::SimulationBehaviour::get_Object()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"get_Object", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkObject>>(this, ___internal_method);
}
inline void Fusion::SimulationBehaviour::FixedUpdateNetwork()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::SimulationBehaviour*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::SimulationBehaviour::PreRender()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::SimulationBehaviour*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::SimulationBehaviour::Render()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::SimulationBehaviour*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::SimulationBehaviour::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::SimulationBehaviour::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::SimulationBehaviour::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::SimulationBehaviour::MakeOwned(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"MakeOwned", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj);
}
inline void Fusion::SimulationBehaviour::MakeUnowned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"MakeUnowned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::SimulationBehaviour::DebugNotifySpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"DebugNotifySpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::SimulationBehaviour::DebugNotifyDespawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {"DebugNotifyDespawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::SimulationBehaviour::GetDumpString(::System::Text::StringBuilder*  builder)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::SimulationBehaviour*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder);
}
inline void Fusion::SimulationBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::SimulationBehaviour* Fusion::SimulationBehaviour::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::SimulationBehaviour*>());
}
// Ctor Parameters []
constexpr ::Fusion::SimulationBehaviour::SimulationBehaviour()   {
}
