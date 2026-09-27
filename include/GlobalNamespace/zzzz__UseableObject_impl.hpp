#pragma once
// IWYU pragma private; include "GlobalNamespace/UseableObject.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "GlobalNamespace/zzzz__UseableObject_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__UseableObjectEvents_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UseableObject.get_isMidUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UseableObject::*)()>(&::GlobalNamespace::UseableObject::get_isMidUse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57954e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                        {"get_isMidUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UseableObject.get_useTimeElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::UseableObject::*)()>(&::GlobalNamespace::UseableObject::get_useTimeElapsed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57954e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                        {"get_useTimeElapsed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UseableObject.get_justUsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UseableObject::*)()>(&::GlobalNamespace::UseableObject::get_justUsed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57954f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                        {"get_justUsed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UseableObject.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UseableObject::*)()>(&::GlobalNamespace::UseableObject::Awake)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5795508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::UseableObject*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UseableObject.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UseableObject::*)()>(&::GlobalNamespace::UseableObject::OnEnable)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x57955a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::UseableObject*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UseableObject.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UseableObject::*)()>(&::GlobalNamespace::UseableObject::OnDisable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5795940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::UseableObject*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UseableObject.OnObjectActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UseableObject::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::UseableObject::OnObjectActivated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57959a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                        {"OnObjectActivated", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UseableObject.OnObjectDeactivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UseableObject::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::UseableObject::OnObjectDeactivated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57959ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                        {"OnObjectDeactivated", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UseableObject.TriggeredLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UseableObject::*)()>(&::GlobalNamespace::UseableObject::TriggeredLateUpdate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x57959b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::UseableObject*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UseableObject.OnActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UseableObject::*)()>(&::GlobalNamespace::UseableObject::OnActivate)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x57959ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::UseableObject*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UseableObject.OnDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UseableObject::*)()>(&::GlobalNamespace::UseableObject::OnDeactivate)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5795af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::UseableObject*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UseableObject.CanActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UseableObject::*)()>(&::GlobalNamespace::UseableObject::CanActivate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5795bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::UseableObject*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UseableObject.CanDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UseableObject::*)()>(&::GlobalNamespace::UseableObject::CanDeactivate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5795c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::UseableObject*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UseableObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UseableObject::*)()>(&::GlobalNamespace::UseableObject::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5795c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::UseableObject::__cordl_internal_get_disableActivation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableActivation;
}
constexpr bool const& GlobalNamespace::UseableObject::__cordl_internal_get_disableActivation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableActivation;
}
constexpr void GlobalNamespace::UseableObject::__cordl_internal_set_disableActivation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableActivation = value;
}
constexpr bool& GlobalNamespace::UseableObject::__cordl_internal_get_disableDeactivation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableDeactivation;
}
constexpr bool const& GlobalNamespace::UseableObject::__cordl_internal_get_disableDeactivation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableDeactivation;
}
constexpr void GlobalNamespace::UseableObject::__cordl_internal_set_disableDeactivation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableDeactivation = value;
}
constexpr ::UnityW<::GlobalNamespace::UseableObjectEvents>& GlobalNamespace::UseableObject::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::UseableObjectEvents> const& GlobalNamespace::UseableObject::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GlobalNamespace::UseableObject::__cordl_internal_set__events(::UnityW<::GlobalNamespace::UseableObjectEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr bool& GlobalNamespace::UseableObject::__cordl_internal_get__raiseActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raiseActivate;
}
constexpr bool const& GlobalNamespace::UseableObject::__cordl_internal_get__raiseActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raiseActivate;
}
constexpr void GlobalNamespace::UseableObject::__cordl_internal_set__raiseActivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raiseActivate = value;
}
constexpr bool& GlobalNamespace::UseableObject::__cordl_internal_get__raiseDeactivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raiseDeactivate;
}
constexpr bool const& GlobalNamespace::UseableObject::__cordl_internal_get__raiseDeactivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raiseDeactivate;
}
constexpr void GlobalNamespace::UseableObject::__cordl_internal_set__raiseDeactivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raiseDeactivate = value;
}
constexpr ::System::DateTime& GlobalNamespace::UseableObject::__cordl_internal_get__lastActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastActivate;
}
constexpr ::System::DateTime const& GlobalNamespace::UseableObject::__cordl_internal_get__lastActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastActivate;
}
constexpr void GlobalNamespace::UseableObject::__cordl_internal_set__lastActivate(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastActivate = value;
}
constexpr ::System::DateTime& GlobalNamespace::UseableObject::__cordl_internal_get__lastDeactivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDeactivate;
}
constexpr ::System::DateTime const& GlobalNamespace::UseableObject::__cordl_internal_get__lastDeactivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDeactivate;
}
constexpr void GlobalNamespace::UseableObject::__cordl_internal_set__lastDeactivate(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastDeactivate = value;
}
constexpr bool& GlobalNamespace::UseableObject::__cordl_internal_get__isMidUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMidUse;
}
constexpr bool const& GlobalNamespace::UseableObject::__cordl_internal_get__isMidUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMidUse;
}
constexpr void GlobalNamespace::UseableObject::__cordl_internal_set__isMidUse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isMidUse = value;
}
constexpr float_t& GlobalNamespace::UseableObject::__cordl_internal_get__useTimeElapsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useTimeElapsed;
}
constexpr float_t const& GlobalNamespace::UseableObject::__cordl_internal_get__useTimeElapsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useTimeElapsed;
}
constexpr void GlobalNamespace::UseableObject::__cordl_internal_set__useTimeElapsed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useTimeElapsed = value;
}
constexpr bool& GlobalNamespace::UseableObject::__cordl_internal_get__justUsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____justUsed;
}
constexpr bool const& GlobalNamespace::UseableObject::__cordl_internal_get__justUsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____justUsed;
}
constexpr void GlobalNamespace::UseableObject::__cordl_internal_set__justUsed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____justUsed = value;
}
constexpr int32_t& GlobalNamespace::UseableObject::__cordl_internal_get_tempHandPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempHandPos;
}
constexpr int32_t const& GlobalNamespace::UseableObject::__cordl_internal_get_tempHandPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempHandPos;
}
constexpr void GlobalNamespace::UseableObject::__cordl_internal_set_tempHandPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempHandPos = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::UseableObject::__cordl_internal_get_onActivateLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onActivateLocal;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::UseableObject::__cordl_internal_get_onActivateLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onActivateLocal;
}
constexpr void GlobalNamespace::UseableObject::__cordl_internal_set_onActivateLocal(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onActivateLocal = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::UseableObject::__cordl_internal_get_onDeactivateLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDeactivateLocal;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::UseableObject::__cordl_internal_get_onDeactivateLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDeactivateLocal;
}
constexpr void GlobalNamespace::UseableObject::__cordl_internal_set_onDeactivateLocal(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDeactivateLocal = value;
}
inline bool GlobalNamespace::UseableObject::get_isMidUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                        {"get_isMidUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::UseableObject::get_useTimeElapsed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                        {"get_useTimeElapsed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::UseableObject::get_justUsed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                        {"get_justUsed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::UseableObject::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UseableObject*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UseableObject::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UseableObject*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UseableObject::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UseableObject*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UseableObject::OnObjectActivated(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                        {"OnObjectActivated", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GlobalNamespace::UseableObject::OnObjectDeactivated(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                        {"OnObjectDeactivated", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GlobalNamespace::UseableObject::TriggeredLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UseableObject*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UseableObject::OnActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UseableObject*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UseableObject::OnDeactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UseableObject*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::UseableObject::CanActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UseableObject*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::UseableObject::CanDeactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UseableObject*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::UseableObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UseableObject* GlobalNamespace::UseableObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UseableObject*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UseableObject::UseableObject()   {
}
