#pragma once
// IWYU pragma private; include "GlobalNamespace/LuauVm.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_impl.hpp"
#include "GlobalNamespace/zzzz__LuauVm_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "GlobalNamespace/zzzz__lua_State_def.hpp"
#include "Photon/Realtime/zzzz__IOnEventCallback_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LuauVm.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LuauVm::*)()>(&::GlobalNamespace::LuauVm::LateUpdate)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5a95594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauVm*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LuauVm.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LuauVm::*)()>(&::GlobalNamespace::LuauVm::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a95984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauVm*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LuauVm.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LuauVm::*)()>(&::GlobalNamespace::LuauVm::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a95988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauVm*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LuauVm.OnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LuauVm::*)(::ExitGames::Client::Photon::EventData*)>(&::GlobalNamespace::LuauVm::OnEvent)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x5a9598c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauVm*>(),
                        {"OnEvent", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LuauVm.SendEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, ::ArrayW<::System::Object*>, bool)>(&::GlobalNamespace::LuauVm::SendEvent)> {
  constexpr static std::size_t size = 0x1508;
  constexpr static std::size_t addrs = 0x5a95dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauVm*>(),
                        {"SendEvent", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LuauVm.ProcessEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::LuauVm::ProcessEvents)> {
  constexpr static std::size_t size = 0x638;
  constexpr static std::size_t addrs = 0x5a972dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauVm*>(),
                        {"ProcessEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LuauVm.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LuauVm::*)()>(&::GlobalNamespace::LuauVm::Finalize)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x5a97914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LuauVm*>(),
                    {::i2c::class_of<::GlobalNamespace::LuauVm*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LuauVm._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LuauVm::*)()>(&::GlobalNamespace::LuauVm::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a97f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauVm*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LuauVm::setStaticF_ClassBuilders(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Object*>*, "ClassBuilders", ::GlobalNamespace::LuauVm*>(std::forward<::System::Collections::Generic::List_1<::System::Object*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Object*>* GlobalNamespace::LuauVm::getStaticF_ClassBuilders()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Object*>*, "ClassBuilders", ::GlobalNamespace::LuauVm*>();
}
inline void GlobalNamespace::LuauVm::setStaticF_Handles(::System::Collections::Generic::List_1<::System::Runtime::InteropServices::GCHandle>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Runtime::InteropServices::GCHandle>*, "Handles", ::GlobalNamespace::LuauVm*>(std::forward<::System::Collections::Generic::List_1<::System::Runtime::InteropServices::GCHandle>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Runtime::InteropServices::GCHandle>* GlobalNamespace::LuauVm::getStaticF_Handles()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Runtime::InteropServices::GCHandle>*, "Handles", ::GlobalNamespace::LuauVm*>();
}
inline void GlobalNamespace::LuauVm::setStaticF_callTimers(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,float_t>*, "callTimers", ::GlobalNamespace::LuauVm*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,float_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* GlobalNamespace::LuauVm::getStaticF_callTimers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,float_t>*, "callTimers", ::GlobalNamespace::LuauVm*>();
}
inline void GlobalNamespace::LuauVm::setStaticF_callCount(float_t  value)  {
::cordl_internals::setStaticField<float_t, "callCount", ::GlobalNamespace::LuauVm*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::LuauVm::getStaticF_callCount()  {
return ::cordl_internals::getStaticField<float_t, "callCount", ::GlobalNamespace::LuauVm*>();
}
inline void GlobalNamespace::LuauVm::setStaticF_eventQueue(::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*, "eventQueue", ::GlobalNamespace::LuauVm*>(std::forward<::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>* GlobalNamespace::LuauVm::getStaticF_eventQueue()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*, "eventQueue", ::GlobalNamespace::LuauVm*>();
}
inline void GlobalNamespace::LuauVm::setStaticF_localEventQueue(::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*, "localEventQueue", ::GlobalNamespace::LuauVm*>(std::forward<::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>* GlobalNamespace::LuauVm::getStaticF_localEventQueue()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*, "localEventQueue", ::GlobalNamespace::LuauVm*>();
}
inline void GlobalNamespace::LuauVm::setStaticF_touchEventsQueue(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>*, "touchEventsQueue", ::GlobalNamespace::LuauVm*>(std::forward<::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::LuauVm::getStaticF_touchEventsQueue()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>*, "touchEventsQueue", ::GlobalNamespace::LuauVm*>();
}
inline void GlobalNamespace::LuauVm::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauVm*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LuauVm::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauVm*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LuauVm::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauVm*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LuauVm::OnEvent(::ExitGames::Client::Photon::EventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauVm*>(),
                        {"OnEvent", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline int32_t GlobalNamespace::LuauVm::SendEvent(::GlobalNamespace::lua_State*  L, ::ArrayW<::System::Object*>  args, bool  useTable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauVm*>(),
                        {"SendEvent", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, args, useTable);
}
inline void GlobalNamespace::LuauVm::ProcessEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauVm*>(),
                        {"ProcessEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::LuauVm::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LuauVm*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LuauVm::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauVm*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LuauVm* GlobalNamespace::LuauVm::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LuauVm*>());
}
/// @brief Convert operator to "::Photon::Realtime::IOnEventCallback"
constexpr  GlobalNamespace::LuauVm::operator ::Photon::Realtime::IOnEventCallback*() noexcept {
return static_cast<::Photon::Realtime::IOnEventCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IOnEventCallback"
constexpr ::Photon::Realtime::IOnEventCallback* GlobalNamespace::LuauVm::i___Photon__Realtime__IOnEventCallback() noexcept {
return static_cast<::Photon::Realtime::IOnEventCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LuauVm::LuauVm()   {
}
