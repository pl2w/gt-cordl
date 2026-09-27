#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/CuratedDestinationsManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CuratedDestinationsManager_def.hpp"
#include "GorillaNetworking/zzzz__PlayFabTitleDataCache_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CuratedDestinationsManager_CuratedDoorway_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CuratedDestinationsManager_def.hpp"
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager.get_IsLoading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::get_IsLoading)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bdd5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"get_IsLoading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager.get_HasRetrievedCuratedMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::get_HasRetrievedCuratedMaps)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bdd5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"get_HasRetrievedCuratedMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager.RetrieveCuratedMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::RetrieveCuratedMaps)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5bdd650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"RetrieveCuratedMaps", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager.OnGetCuratedMapsTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::OnGetCuratedMapsTitleData)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5bdd7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"OnGetCuratedMapsTitleData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager.AddEmptySlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::AddEmptySlot)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5bdd850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"AddEmptySlot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager.FinishRetrieval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::FinishRetrieval)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5bdd998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"FinishRetrieval", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager.TryGetCuratedModId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::CuratedDestinationsManager_CuratedDoorway, ::by_ref<::Modio::Mods::ModId>)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::TryGetCuratedModId)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bddaec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"TryGetCuratedModId", {}, {::i2c::type_of<::GlobalNamespace::CuratedDestinationsManager_CuratedDoorway>(), ::i2c::type_of<::by_ref<::Modio::Mods::ModId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager.TryGetCuratedModId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::Modio::Mods::ModId>)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::TryGetCuratedModId)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5bddb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"TryGetCuratedModId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Modio::Mods::ModId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager.TryGetCuratedMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CuratedDestinationsManager_CuratedDoorway, ::by_ref<::Modio::Mods::Mod*>)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::TryGetCuratedMod)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bddc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"TryGetCuratedMod", {}, {::i2c::type_of<::GlobalNamespace::CuratedDestinationsManager_CuratedDoorway>(), ::i2c::type_of<::by_ref<::Modio::Mods::Mod*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager.TryGetCuratedMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::Modio::Mods::Mod*>)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::TryGetCuratedMod)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5bddcd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"TryGetCuratedMod", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Modio::Mods::Mod*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::setStaticF_OnCuratedMapsUpdated(::UnityEngine::Events::UnityEvent*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent*, "OnCuratedMapsUpdated", ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(std::forward<::UnityEngine::Events::UnityEvent*>(value));
}
inline ::UnityEngine::Events::UnityEvent* GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::getStaticF_OnCuratedMapsUpdated()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent*, "OnCuratedMapsUpdated", ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::setStaticF_loadingCuratedMaps(bool  value)  {
::cordl_internals::setStaticField<bool, "loadingCuratedMaps", ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::getStaticF_loadingCuratedMaps()  {
return ::cordl_internals::getStaticField<bool, "loadingCuratedMaps", ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::setStaticF_curatedMapsRetrieved(bool  value)  {
::cordl_internals::setStaticField<bool, "curatedMapsRetrieved", ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::getStaticF_curatedMapsRetrieved()  {
return ::cordl_internals::getStaticField<bool, "curatedMapsRetrieved", ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::setStaticF_curatedModIds(::System::Collections::Generic::List_1<int64_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int64_t>*, "curatedModIds", ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(std::forward<::System::Collections::Generic::List_1<int64_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int64_t>* GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::getStaticF_curatedModIds()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int64_t>*, "curatedModIds", ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::setStaticF_curatedMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*, "curatedMods", ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(std::forward<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::getStaticF_curatedMods()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*, "curatedMods", ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>();
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::get_IsLoading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"get_IsLoading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::get_HasRetrievedCuratedMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"get_HasRetrievedCuratedMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::RetrieveCuratedMaps(bool  forceRefresh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"RetrieveCuratedMaps", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, forceRefresh);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::OnGetCuratedMapsTitleData(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"OnGetCuratedMapsTitleData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::AddEmptySlot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"AddEmptySlot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::FinishRetrieval(bool  succeeded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"FinishRetrieval", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, succeeded);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::TryGetCuratedModId(::GlobalNamespace::CuratedDestinationsManager_CuratedDoorway  doorway, ::by_ref<::Modio::Mods::ModId>  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"TryGetCuratedModId", {}, {::i2c::type_of<::GlobalNamespace::CuratedDestinationsManager_CuratedDoorway>(), ::i2c::type_of<::by_ref<::Modio::Mods::ModId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, doorway, modId);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::TryGetCuratedModId(int32_t  doorwayIndex, ::by_ref<::Modio::Mods::ModId>  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"TryGetCuratedModId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Modio::Mods::ModId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, doorwayIndex, modId);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::TryGetCuratedMod(::GlobalNamespace::CuratedDestinationsManager_CuratedDoorway  doorway, ::by_ref<::Modio::Mods::Mod*>  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"TryGetCuratedMod", {}, {::i2c::type_of<::GlobalNamespace::CuratedDestinationsManager_CuratedDoorway>(), ::i2c::type_of<::by_ref<::Modio::Mods::Mod*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, doorway, mod);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::TryGetCuratedMod(int32_t  doorwayIndex, ::by_ref<::Modio::Mods::Mod*>  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*>(),
                        {"TryGetCuratedMod", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Modio::Mods::Mod*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, doorwayIndex, mod);
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager::CuratedDestinationsManager()   {
}
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bddf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c._RetrieveCuratedMaps_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c::*)(::GorillaNetworking::PlayFabTitleDataCache*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c::_RetrieveCuratedMaps_b__11_0)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5bddf98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*>(),
                        {"<RetrieveCuratedMaps>b__11_0", {}, {::i2c::type_of<::GorillaNetworking::PlayFabTitleDataCache*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c._RetrieveCuratedMaps_b__11_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c::*)(::PlayFab::PlayFabError*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c::_RetrieveCuratedMaps_b__11_1)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5bde0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*>(),
                        {"<RetrieveCuratedMaps>b__11_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c::setStaticF___9(::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*  value)  {
::cordl_internals::setStaticField<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*, "<>9", ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*>(std::forward<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*>(value));
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c* GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*, "<>9", ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c::setStaticF___9__11_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__11_1", ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c::getStaticF___9__11_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__11_1", ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c::setStaticF___9__11_0(::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>*, "<>9__11_0", ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*>(std::forward<::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>*>(value));
}
inline ::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>* GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c::getStaticF___9__11_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>*, "<>9__11_0", ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c::_RetrieveCuratedMaps_b__11_0(::GorillaNetworking::PlayFabTitleDataCache*  cache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*>(),
                        {"<RetrieveCuratedMaps>b__11_0", {}, {::i2c::type_of<::GorillaNetworking::PlayFabTitleDataCache*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cache);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c::_RetrieveCuratedMaps_b__11_1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*>(),
                        {"<RetrieveCuratedMaps>b__11_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c* GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c::CuratedDestinationsManager___c()   {
}
