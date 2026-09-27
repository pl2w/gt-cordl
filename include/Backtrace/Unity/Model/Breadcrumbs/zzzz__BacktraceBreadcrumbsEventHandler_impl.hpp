#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/BacktraceBreadcrumbsEventHandler.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BacktraceBreadcrumbType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__NetworkReachability_impl.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BacktraceBreadcrumbsEventHandler_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BacktraceBreadcrumbType_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BacktraceBreadcrumbs_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BreadcrumbLevel_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "UnityEngine/zzzz__NetworkReachability_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler.get_HasRegisteredEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::get_HasRegisteredEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1db24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"get_HasRegisteredEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler.set_HasRegisteredEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(bool)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::set_HasRegisteredEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1db2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"set_HasRegisteredEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f1cce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Register)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5f1d1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"Register", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Unregister)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x5f1cd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"Unregister", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler.SceneManager_sceneUnloaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(::UnityEngine::SceneManagement::Scene)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::SceneManager_sceneUnloaded)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f1db34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"SceneManager_sceneUnloaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler.SceneManager_sceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::SceneManager_sceneLoaded)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f1dc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"SceneManager_sceneLoaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler.HandleSceneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleSceneChanged)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f1dd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"HandleSceneChanged", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler.HandleLowMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleLowMemory)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f1defc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"HandleLowMemory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler.HandleApplicationQuitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleApplicationQuitting)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f1df50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"HandleApplicationQuitting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler.HandleBackgroundMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleBackgroundMessage)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f1dfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"HandleBackgroundMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler.HandleMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleMessage)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f1e004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"HandleMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler.Application_focusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(bool)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Application_focusChanged)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5f1e0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"Application_focusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(::StringW, ::UnityEngine::LogType, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Log)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f1dbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler.LogNewNetworkStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)(::UnityEngine::NetworkReachability)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::LogNewNetworkStatus)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f1e1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"LogNewNetworkStatus", {}, {::i2c::type_of<::UnityEngine::NetworkReachability>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Update)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f1d9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::__cordl_internal_get__HasRegisteredEvents_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasRegisteredEvents_k__BackingField;
}
constexpr bool const& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::__cordl_internal_get__HasRegisteredEvents_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasRegisteredEvents_k__BackingField;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::__cordl_internal_set__HasRegisteredEvents_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasRegisteredEvents_k__BackingField = value;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::__cordl_internal_get__breadcrumbs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breadcrumbs;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs* const& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::__cordl_internal_get__breadcrumbs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breadcrumbs;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::__cordl_internal_set__breadcrumbs(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____breadcrumbs = value;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::__cordl_internal_get__registeredLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____registeredLevel;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType const& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::__cordl_internal_get__registeredLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____registeredLevel;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::__cordl_internal_set__registeredLevel(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____registeredLevel = value;
}
constexpr ::UnityEngine::NetworkReachability& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::__cordl_internal_get__networkStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkStatus;
}
constexpr ::UnityEngine::NetworkReachability const& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::__cordl_internal_get__networkStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkStatus;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::__cordl_internal_set__networkStatus(::UnityEngine::NetworkReachability  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____networkStatus = value;
}
constexpr ::System::Threading::Thread*& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::__cordl_internal_get__thread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thread;
}
constexpr ::System::Threading::Thread* const& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::__cordl_internal_get__thread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thread;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::__cordl_internal_set__thread(::System::Threading::Thread*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thread = value;
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::get_HasRegisteredEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"get_HasRegisteredEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::set_HasRegisteredEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"set_HasRegisteredEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::_ctor(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  breadcrumbs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, breadcrumbs);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Register(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"Register", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Unregister()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"Unregister", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::SceneManager_sceneUnloaded(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"SceneManager_sceneUnloaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::SceneManager_sceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  loadSceneMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"SceneManager_sceneLoaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene, loadSceneMode);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleSceneChanged(::UnityEngine::SceneManagement::Scene  sceneFrom, ::UnityEngine::SceneManagement::Scene  sceneTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"HandleSceneChanged", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneFrom, sceneTo);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleLowMemory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"HandleLowMemory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleApplicationQuitting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"HandleApplicationQuitting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleBackgroundMessage(::StringW  condition, ::StringW  stackTrace, ::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"HandleBackgroundMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, condition, stackTrace, type);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::HandleMessage(::StringW  condition, ::StringW  stackTrace, ::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"HandleMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, condition, stackTrace, type);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Application_focusChanged(bool  hasFocus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"Application_focusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasFocus);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Log(::StringW  message, ::UnityEngine::LogType  level, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  breadcrumbLevel, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, level, breadcrumbLevel, attributes);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::LogNewNetworkStatus(::UnityEngine::NetworkReachability  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"LogNewNetworkStatus", {}, {::i2c::type_of<::UnityEngine::NetworkReachability>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler* Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::New_ctor(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  breadcrumbs)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*>(breadcrumbs));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler::BacktraceBreadcrumbsEventHandler()   {
}
