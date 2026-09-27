#pragma once
// IWYU pragma private; include "Fusion/RunnerVisibilityLink.hpp"
#include "Fusion/zzzz__RunnerVisibilityLink_ComponentType_impl.hpp"
#include "Fusion/zzzz__RunnerVisibilityLink_PreferredRunners_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Fusion/zzzz__RunnerVisibilityLink_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__RunnerVisibilityLink_ComponentType_def.hpp"
#include "Fusion/zzzz__RunnerVisibilityLink_PreferredRunners_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
//  Writing Method size for method: ::Fusion::RunnerVisibilityLink.get_IsOnSingleRunner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::RunnerVisibilityLink::*)()>(&::Fusion::RunnerVisibilityLink::get_IsOnSingleRunner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f5dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"get_IsOnSingleRunner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerVisibilityLink.set_IsOnSingleRunner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerVisibilityLink::*)(bool)>(&::Fusion::RunnerVisibilityLink::set_IsOnSingleRunner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f5df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"set_IsOnSingleRunner", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerVisibilityLink.get_DefaultState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::RunnerVisibilityLink::*)()>(&::Fusion::RunnerVisibilityLink::get_DefaultState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f5dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"get_DefaultState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerVisibilityLink.set_DefaultState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerVisibilityLink::*)(bool)>(&::Fusion::RunnerVisibilityLink::set_DefaultState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f5e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"set_DefaultState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerVisibilityLink.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::RunnerVisibilityLink::*)()>(&::Fusion::RunnerVisibilityLink::get_Enabled)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x60f5e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerVisibilityLink.set_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerVisibilityLink::*)(bool)>(&::Fusion::RunnerVisibilityLink::set_Enabled)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x60e954c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerVisibilityLink.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerVisibilityLink::*)()>(&::Fusion::RunnerVisibilityLink::Reset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60f5ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerVisibilityLink.AssociateComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::RunnerVisibilityLink::*)(::UnityEngine::Component*)>(&::Fusion::RunnerVisibilityLink::AssociateComponent)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x60f5f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"AssociateComponent", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerVisibilityLink.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerVisibilityLink::*)()>(&::Fusion::RunnerVisibilityLink::OnValidate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x60f6090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerVisibilityLink.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerVisibilityLink::*)()>(&::Fusion::RunnerVisibilityLink::Awake)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60f61f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerVisibilityLink.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerVisibilityLink::*)()>(&::Fusion::RunnerVisibilityLink::OnDestroy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60f6208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerVisibilityLink.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerVisibilityLink::*)(::UnityEngine::Component*, ::Fusion::NetworkRunner*)>(&::Fusion::RunnerVisibilityLink::Initialize)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x60e8eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerVisibilityLink.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerVisibilityLink::*)(bool)>(&::Fusion::RunnerVisibilityLink::SetEnabled)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60e9468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"SetEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerVisibilityLink.IsInputAuth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::RunnerVisibilityLink::*)()>(&::Fusion::RunnerVisibilityLink::IsInputAuth)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x60e94b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"IsInputAuth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerVisibilityLink.SetupOnSingleRunnerLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerVisibilityLink::*)(::GlobalNamespace::RunnerVisibilityLink_PreferredRunners)>(&::Fusion::RunnerVisibilityLink::SetupOnSingleRunnerLink)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60f4240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"SetupOnSingleRunnerLink", {}, {::i2c::type_of<::GlobalNamespace::RunnerVisibilityLink_PreferredRunners>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerVisibilityLink.InvokeRefreshCommonObjectVisibilities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerVisibilityLink::*)(float_t)>(&::Fusion::RunnerVisibilityLink::InvokeRefreshCommonObjectVisibilities)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60e968c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"InvokeRefreshCommonObjectVisibilities", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerVisibilityLink.RetryRefreshCommonLinks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerVisibilityLink::*)()>(&::Fusion::RunnerVisibilityLink::RetryRefreshCommonLinks)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60f625c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"RetryRefreshCommonLinks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerVisibilityLink._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerVisibilityLink::*)()>(&::Fusion::RunnerVisibilityLink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f62a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners& Fusion::RunnerVisibilityLink::__cordl_internal_get_PreferredRunner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreferredRunner;
}
constexpr ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners const& Fusion::RunnerVisibilityLink::__cordl_internal_get_PreferredRunner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreferredRunner;
}
constexpr void Fusion::RunnerVisibilityLink::__cordl_internal_set_PreferredRunner(::GlobalNamespace::RunnerVisibilityLink_PreferredRunners  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreferredRunner = value;
}
constexpr ::UnityW<::UnityEngine::Component>& Fusion::RunnerVisibilityLink::__cordl_internal_get_Component()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Component;
}
constexpr ::UnityW<::UnityEngine::Component> const& Fusion::RunnerVisibilityLink::__cordl_internal_get_Component() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Component;
}
constexpr void Fusion::RunnerVisibilityLink::__cordl_internal_set_Component(::UnityW<::UnityEngine::Component>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Component = value;
}
constexpr bool& Fusion::RunnerVisibilityLink::__cordl_internal_get__IsOnSingleRunner_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsOnSingleRunner_k__BackingField;
}
constexpr bool const& Fusion::RunnerVisibilityLink::__cordl_internal_get__IsOnSingleRunner_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsOnSingleRunner_k__BackingField;
}
constexpr void Fusion::RunnerVisibilityLink::__cordl_internal_set__IsOnSingleRunner_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsOnSingleRunner_k__BackingField = value;
}
constexpr ::StringW& Fusion::RunnerVisibilityLink::__cordl_internal_get_Guid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Guid;
}
constexpr ::StringW const& Fusion::RunnerVisibilityLink::__cordl_internal_get_Guid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Guid;
}
constexpr void Fusion::RunnerVisibilityLink::__cordl_internal_set_Guid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Guid = value;
}
constexpr bool& Fusion::RunnerVisibilityLink::__cordl_internal_get__showAtRuntime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showAtRuntime;
}
constexpr bool const& Fusion::RunnerVisibilityLink::__cordl_internal_get__showAtRuntime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showAtRuntime;
}
constexpr void Fusion::RunnerVisibilityLink::__cordl_internal_set__showAtRuntime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showAtRuntime = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::RunnerVisibilityLink::__cordl_internal_get__runner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runner;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::RunnerVisibilityLink::__cordl_internal_get__runner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runner;
}
constexpr void Fusion::RunnerVisibilityLink::__cordl_internal_set__runner(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runner = value;
}
constexpr ::GlobalNamespace::RunnerVisibilityLink_ComponentType& Fusion::RunnerVisibilityLink::__cordl_internal_get__componentType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____componentType;
}
constexpr ::GlobalNamespace::RunnerVisibilityLink_ComponentType const& Fusion::RunnerVisibilityLink::__cordl_internal_get__componentType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____componentType;
}
constexpr void Fusion::RunnerVisibilityLink::__cordl_internal_set__componentType(::GlobalNamespace::RunnerVisibilityLink_ComponentType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____componentType = value;
}
constexpr ::UnityW<::Fusion::NetworkObject>& Fusion::RunnerVisibilityLink::__cordl_internal_get__networkObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkObject;
}
constexpr ::UnityW<::Fusion::NetworkObject> const& Fusion::RunnerVisibilityLink::__cordl_internal_get__networkObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkObject;
}
constexpr void Fusion::RunnerVisibilityLink::__cordl_internal_set__networkObject(::UnityW<::Fusion::NetworkObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____networkObject = value;
}
constexpr bool& Fusion::RunnerVisibilityLink::__cordl_internal_get__originalState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalState;
}
constexpr bool const& Fusion::RunnerVisibilityLink::__cordl_internal_get__originalState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalState;
}
constexpr void Fusion::RunnerVisibilityLink::__cordl_internal_set__originalState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____originalState = value;
}
inline bool Fusion::RunnerVisibilityLink::get_IsOnSingleRunner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"get_IsOnSingleRunner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::RunnerVisibilityLink::set_IsOnSingleRunner(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"set_IsOnSingleRunner", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::RunnerVisibilityLink::get_DefaultState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"get_DefaultState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::RunnerVisibilityLink::set_DefaultState(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"set_DefaultState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::RunnerVisibilityLink::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::RunnerVisibilityLink::set_Enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::RunnerVisibilityLink::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::RunnerVisibilityLink::AssociateComponent(::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"AssociateComponent", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline void Fusion::RunnerVisibilityLink::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::RunnerVisibilityLink::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::RunnerVisibilityLink::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::RunnerVisibilityLink::Initialize(::UnityEngine::Component*  comp, ::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comp, runner);
}
inline void Fusion::RunnerVisibilityLink::SetEnabled(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"SetEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline bool Fusion::RunnerVisibilityLink::IsInputAuth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"IsInputAuth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::RunnerVisibilityLink::SetupOnSingleRunnerLink(::GlobalNamespace::RunnerVisibilityLink_PreferredRunners  preferredRunner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"SetupOnSingleRunnerLink", {}, {::i2c::type_of<::GlobalNamespace::RunnerVisibilityLink_PreferredRunners>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, preferredRunner);
}
inline void Fusion::RunnerVisibilityLink::InvokeRefreshCommonObjectVisibilities(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"InvokeRefreshCommonObjectVisibilities", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void Fusion::RunnerVisibilityLink::RetryRefreshCommonLinks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {"RetryRefreshCommonLinks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::RunnerVisibilityLink::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLink*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::RunnerVisibilityLink* Fusion::RunnerVisibilityLink::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::RunnerVisibilityLink*>());
}
// Ctor Parameters []
constexpr ::Fusion::RunnerVisibilityLink::RunnerVisibilityLink()   {
}
