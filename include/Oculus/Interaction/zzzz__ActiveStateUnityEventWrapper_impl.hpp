#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateUnityEventWrapper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateUnityEventWrapper_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateUnityEventWrapper.get_WhenActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Oculus::Interaction::ActiveStateUnityEventWrapper::*)()>(&::Oculus::Interaction::ActiveStateUnityEventWrapper::get_WhenActivated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa482e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                        {"get_WhenActivated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateUnityEventWrapper.get_WhenDeactivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Oculus::Interaction::ActiveStateUnityEventWrapper::*)()>(&::Oculus::Interaction::ActiveStateUnityEventWrapper::get_WhenDeactivated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa482e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                        {"get_WhenDeactivated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateUnityEventWrapper.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateUnityEventWrapper::*)()>(&::Oculus::Interaction::ActiveStateUnityEventWrapper::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa482ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateUnityEventWrapper.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateUnityEventWrapper::*)()>(&::Oculus::Interaction::ActiveStateUnityEventWrapper::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa482f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateUnityEventWrapper.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateUnityEventWrapper::*)()>(&::Oculus::Interaction::ActiveStateUnityEventWrapper::Update)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa482f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateUnityEventWrapper.InvokeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateUnityEventWrapper::*)()>(&::Oculus::Interaction::ActiveStateUnityEventWrapper::InvokeEvent)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa482ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                        {"InvokeEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateUnityEventWrapper.InjectAllActiveStateUnityEventWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateUnityEventWrapper::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::ActiveStateUnityEventWrapper::InjectAllActiveStateUnityEventWrapper)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa483028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                        {"InjectAllActiveStateUnityEventWrapper", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateUnityEventWrapper.InjectActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateUnityEventWrapper::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::ActiveStateUnityEventWrapper::InjectActiveState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa48302c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                        {"InjectActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateUnityEventWrapper.InjectOptionalEmitOnFirstUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateUnityEventWrapper::*)(bool)>(&::Oculus::Interaction::ActiveStateUnityEventWrapper::InjectOptionalEmitOnFirstUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4830fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                        {"InjectOptionalEmitOnFirstUpdate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateUnityEventWrapper.InjectOptionalWhenActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateUnityEventWrapper::*)(::UnityEngine::Events::UnityEvent*)>(&::Oculus::Interaction::ActiveStateUnityEventWrapper::InjectOptionalWhenActivated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa483104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                        {"InjectOptionalWhenActivated", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateUnityEventWrapper.InjectOptionalWhenDeactivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateUnityEventWrapper::*)(::UnityEngine::Events::UnityEvent*)>(&::Oculus::Interaction::ActiveStateUnityEventWrapper::InjectOptionalWhenDeactivated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48310c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                        {"InjectOptionalWhenDeactivated", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateUnityEventWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateUnityEventWrapper::*)()>(&::Oculus::Interaction::ActiveStateUnityEventWrapper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa483114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_get__activeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_get__activeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr void Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeState = value;
}
constexpr ::Oculus::Interaction::IActiveState*& Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_get_ActiveState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveState;
}
constexpr ::Oculus::Interaction::IActiveState* const& Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_get_ActiveState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveState;
}
constexpr void Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_set_ActiveState(::Oculus::Interaction::IActiveState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveState = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_get__whenActivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenActivated;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_get__whenActivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenActivated;
}
constexpr void Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_set__whenActivated(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenActivated = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_get__whenDeactivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenDeactivated;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_get__whenDeactivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenDeactivated;
}
constexpr void Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_set__whenDeactivated(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenDeactivated = value;
}
constexpr bool& Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_get__emitOnFirstUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitOnFirstUpdate;
}
constexpr bool const& Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_get__emitOnFirstUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitOnFirstUpdate;
}
constexpr void Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_set__emitOnFirstUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emitOnFirstUpdate = value;
}
constexpr bool& Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_get__emittedOnFirstUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emittedOnFirstUpdate;
}
constexpr bool const& Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_get__emittedOnFirstUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emittedOnFirstUpdate;
}
constexpr void Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_set__emittedOnFirstUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emittedOnFirstUpdate = value;
}
constexpr bool& Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_get__savedState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____savedState;
}
constexpr bool const& Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_get__savedState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____savedState;
}
constexpr void Oculus::Interaction::ActiveStateUnityEventWrapper::__cordl_internal_set__savedState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____savedState = value;
}
inline ::UnityEngine::Events::UnityEvent* Oculus::Interaction::ActiveStateUnityEventWrapper::get_WhenActivated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                        {"get_WhenActivated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Oculus::Interaction::ActiveStateUnityEventWrapper::get_WhenDeactivated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                        {"get_WhenDeactivated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateUnityEventWrapper::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateUnityEventWrapper::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateUnityEventWrapper::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateUnityEventWrapper::InvokeEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                        {"InvokeEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateUnityEventWrapper::InjectAllActiveStateUnityEventWrapper(::Oculus::Interaction::IActiveState*  activeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                        {"InjectAllActiveStateUnityEventWrapper", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeState);
}
inline void Oculus::Interaction::ActiveStateUnityEventWrapper::InjectActiveState(::Oculus::Interaction::IActiveState*  activeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                        {"InjectActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeState);
}
inline void Oculus::Interaction::ActiveStateUnityEventWrapper::InjectOptionalEmitOnFirstUpdate(bool  emitOnFirstUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                        {"InjectOptionalEmitOnFirstUpdate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitOnFirstUpdate);
}
inline void Oculus::Interaction::ActiveStateUnityEventWrapper::InjectOptionalWhenActivated(::UnityEngine::Events::UnityEvent*  whenActivated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                        {"InjectOptionalWhenActivated", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, whenActivated);
}
inline void Oculus::Interaction::ActiveStateUnityEventWrapper::InjectOptionalWhenDeactivated(::UnityEngine::Events::UnityEvent*  whenDeactivated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                        {"InjectOptionalWhenDeactivated", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, whenDeactivated);
}
inline void Oculus::Interaction::ActiveStateUnityEventWrapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateUnityEventWrapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ActiveStateUnityEventWrapper* Oculus::Interaction::ActiveStateUnityEventWrapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ActiveStateUnityEventWrapper*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ActiveStateUnityEventWrapper::ActiveStateUnityEventWrapper()   {
}
