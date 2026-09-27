#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSignalRelay.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourStatic_1_impl.hpp"
#include "GlobalNamespace/zzzz__GTSignalRelay_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "GlobalNamespace/zzzz__GTSignalListener_def.hpp"
#include "Photon/Realtime/zzzz__IOnEventCallback_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTSignalRelay.get_ActiveListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::GTSignalListener>>* (*)()>(&::GlobalNamespace::GTSignalRelay::get_ActiveListeners)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x594ae08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalRelay*>(),
                        {"get_ActiveListeners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalRelay.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSignalRelay::*)()>(&::GlobalNamespace::GTSignalRelay::OnEnable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x594ae60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalRelay*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalRelay.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSignalRelay::*)()>(&::GlobalNamespace::GTSignalRelay::OnDisable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x594aef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalRelay*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalRelay.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GTSignalListener*)>(&::GlobalNamespace::GTSignalRelay::Register)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x594a904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalRelay*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::GTSignalListener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalRelay.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GTSignalListener*)>(&::GlobalNamespace::GTSignalRelay::Unregister)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x594abfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalRelay*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::GTSignalListener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalRelay.InitializeOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GTSignalRelay::InitializeOnLoad)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x594af88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalRelay*>(),
                        {"InitializeOnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalRelay.Photon_Realtime_IOnEventCallback_OnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSignalRelay::*)(::ExitGames::Client::Photon::EventData*)>(&::GlobalNamespace::GTSignalRelay::Photon_Realtime_IOnEventCallback_OnEvent)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x594b04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalRelay*>(),
                        {"Photon.Realtime.IOnEventCallback.OnEvent", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalRelay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSignalRelay::*)()>(&::GlobalNamespace::GTSignalRelay::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x594b314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalRelay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GTSignalRelay::setStaticF_gActiveListeners(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*, "gActiveListeners", ::GlobalNamespace::GTSignalRelay*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>* GlobalNamespace::GTSignalRelay::getStaticF_gActiveListeners()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*, "gActiveListeners", ::GlobalNamespace::GTSignalRelay*>();
}
inline void GlobalNamespace::GTSignalRelay::setStaticF_gListenerSet(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::GTSignalListener>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::GTSignalListener>>*, "gListenerSet", ::GlobalNamespace::GTSignalRelay*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::GTSignalListener>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::GTSignalListener>>* GlobalNamespace::GTSignalRelay::getStaticF_gListenerSet()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::GTSignalListener>>*, "gListenerSet", ::GlobalNamespace::GTSignalRelay*>();
}
inline void GlobalNamespace::GTSignalRelay::setStaticF_gSignalIdToListeners(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*>*, "gSignalIdToListeners", ::GlobalNamespace::GTSignalRelay*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*>* GlobalNamespace::GTSignalRelay::getStaticF_gSignalIdToListeners()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*>*, "gSignalIdToListeners", ::GlobalNamespace::GTSignalRelay*>();
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::GTSignalListener>>* GlobalNamespace::GTSignalRelay::get_ActiveListeners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalRelay*>(),
                        {"get_ActiveListeners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::GTSignalListener>>*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GTSignalRelay::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalRelay*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTSignalRelay::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalRelay*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTSignalRelay::Register(::GlobalNamespace::GTSignalListener*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalRelay*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::GTSignalListener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener);
}
inline void GlobalNamespace::GTSignalRelay::Unregister(::GlobalNamespace::GTSignalListener*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalRelay*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::GTSignalListener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener);
}
inline void GlobalNamespace::GTSignalRelay::InitializeOnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalRelay*>(),
                        {"InitializeOnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GTSignalRelay::Photon_Realtime_IOnEventCallback_OnEvent(::ExitGames::Client::Photon::EventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalRelay*>(),
                        {"Photon.Realtime.IOnEventCallback.OnEvent", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::GTSignalRelay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalRelay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GTSignalRelay* GlobalNamespace::GTSignalRelay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTSignalRelay*>());
}
/// @brief Convert operator to "::Photon::Realtime::IOnEventCallback"
constexpr  GlobalNamespace::GTSignalRelay::operator ::Photon::Realtime::IOnEventCallback*() noexcept {
return static_cast<::Photon::Realtime::IOnEventCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IOnEventCallback"
constexpr ::Photon::Realtime::IOnEventCallback* GlobalNamespace::GTSignalRelay::i___Photon__Realtime__IOnEventCallback() noexcept {
return static_cast<::Photon::Realtime::IOnEventCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTSignalRelay::GTSignalRelay()   {
}
