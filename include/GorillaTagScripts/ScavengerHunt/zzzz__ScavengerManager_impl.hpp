#pragma once
// IWYU pragma private; include "GorillaTagScripts/ScavengerHunt/ScavengerManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/ScavengerHunt/zzzz__ScavengerManager_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipUserData_def.hpp"
#include "GlobalNamespace/zzzz__SetUserDataResponse_def.hpp"
#include "GorillaTagScripts/ScavengerHunt/zzzz__ScavengerManager_def.hpp"
#include "GorillaTagScripts/ScavengerHunt/zzzz__ScavengerTarget_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager> (*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c1246c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTagScripts::ScavengerHunt::ScavengerManager*)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager::set_Instance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c124b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5c12504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager::Start)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c12614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager.ImportMothershipUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::ScavengerHunt::ScavengerManager::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager::ImportMothershipUserData)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c12634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"ImportMothershipUserData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager.OnGetUserDataSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager::*)(::GlobalNamespace::MothershipUserData*)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager::OnGetUserDataSuccess)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5c126c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"OnGetUserDataSuccess", {}, {::i2c::type_of<::GlobalNamespace::MothershipUserData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager.OnGetUserDataFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager::OnGetUserDataFailure)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c127e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"OnGetUserDataFailure", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager::OnDestroy)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c128c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager.GetHunt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt* (::GorillaTagScripts::ScavengerHunt::ScavengerManager::*)(::StringW)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager::GetHunt)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c1290c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"GetHunt", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager.RegisterTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager::*)(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager::RegisterTarget)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c1298c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"RegisterTarget", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager.IsCollected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::ScavengerHunt::ScavengerManager::*)(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager::IsCollected)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c12ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"IsCollected", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager.Collect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager::*)(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager::Collect)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x5c12f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"Collect", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager.OnSetUserDataSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager::*)(::GlobalNamespace::SetUserDataResponse*)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager::OnSetUserDataSuccess)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5c13630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"OnSetUserDataSuccess", {}, {::i2c::type_of<::GlobalNamespace::SetUserDataResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager.OnSetUserDataFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager::OnSetUserDataFailure)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c13700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"OnSetUserDataFailure", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson* (::GorillaTagScripts::ScavengerHunt::ScavengerManager::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager::ToJson)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c13368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"ToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager.FromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager::*)(::StringW)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager::FromJson)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c127c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager.FromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager::*)(::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager::FromJson)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x5c13c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"FromJson", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5c143a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::StringW,::StringW>*>*& GorillaTagScripts::ScavengerHunt::ScavengerManager::__cordl_internal_get__collectOnLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collectOnLoad;
}
constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::StringW,::StringW>*>* const& GorillaTagScripts::ScavengerHunt::ScavengerManager::__cordl_internal_get__collectOnLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collectOnLoad;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerManager::__cordl_internal_set__collectOnLoad(::System::Collections::Generic::List_1<::System::Tuple_2<::StringW,::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collectOnLoad = value;
}
constexpr ::ArrayW<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>& GorillaTagScripts::ScavengerHunt::ScavengerManager::__cordl_internal_get_Hunts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hunts;
}
constexpr ::ArrayW<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*> const& GorillaTagScripts::ScavengerHunt::ScavengerManager::__cordl_internal_get_Hunts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hunts;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerManager::__cordl_internal_set_Hunts(::ArrayW<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Hunts = value;
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager::setStaticF_OnHuntCompleted(::System::Action_2<::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,bool>*, "OnHuntCompleted", ::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(std::forward<::System::Action_2<::StringW,bool>*>(value));
}
inline ::System::Action_2<::StringW,bool>* GorillaTagScripts::ScavengerHunt::ScavengerManager::getStaticF_OnHuntCompleted()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,bool>*, "OnHuntCompleted", ::GorillaTagScripts::ScavengerHunt::ScavengerManager*>();
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager::setStaticF_OnTargetCollected(::System::Action_3<::StringW,::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<::StringW,::StringW,bool>*, "OnTargetCollected", ::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(std::forward<::System::Action_3<::StringW,::StringW,bool>*>(value));
}
inline ::System::Action_3<::StringW,::StringW,bool>* GorillaTagScripts::ScavengerHunt::ScavengerManager::getStaticF_OnTargetCollected()  {
return ::cordl_internals::getStaticField<::System::Action_3<::StringW,::StringW,bool>*, "OnTargetCollected", ::GorillaTagScripts::ScavengerHunt::ScavengerManager*>();
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager::setStaticF__Instance_k__BackingField(::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager>, "<Instance>k__BackingField", ::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(std::forward<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager>>(value));
}
inline ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager> GorillaTagScripts::ScavengerHunt::ScavengerManager::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager>, "<Instance>k__BackingField", ::GorillaTagScripts::ScavengerHunt::ScavengerManager*>();
}
inline ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager> GorillaTagScripts::ScavengerHunt::ScavengerManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager>>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager::set_Instance(::GorillaTagScripts::ScavengerHunt::ScavengerManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::ScavengerHunt::ScavengerManager::ImportMothershipUserData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"ImportMothershipUserData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager::OnGetUserDataSuccess(::GlobalNamespace::MothershipUserData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"OnGetUserDataSuccess", {}, {::i2c::type_of<::GlobalNamespace::MothershipUserData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager::OnGetUserDataFailure(::GlobalNamespace::MothershipError*  error, int32_t  responseCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"OnGetUserDataFailure", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, responseCode);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt* GorillaTagScripts::ScavengerHunt::ScavengerManager::GetHunt(::StringW  huntName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"GetHunt", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(this, ___internal_method, huntName);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager::RegisterTarget(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"RegisterTarget", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline bool GorillaTagScripts::ScavengerHunt::ScavengerManager::IsCollected(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"IsCollected", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager::Collect(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"Collect", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager::OnSetUserDataSuccess(::GlobalNamespace::SetUserDataResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"OnSetUserDataSuccess", {}, {::i2c::type_of<::GlobalNamespace::SetUserDataResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager::OnSetUserDataFailure(::GlobalNamespace::MothershipError*  error, int32_t  statusCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"OnSetUserDataFailure", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, statusCode);
}
inline ::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson* GorillaTagScripts::ScavengerHunt::ScavengerManager::ToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"ToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*>(this, ___internal_method);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager::FromJson(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager::FromJson(::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {"FromJson", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::ScavengerHunt::ScavengerManager* GorillaTagScripts::ScavengerHunt::ScavengerManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::ScavengerHunt::ScavengerManager::ScavengerManager()   {
}
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::*)(int32_t)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c126a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c14d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5c14d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c14f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c14f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c14fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager>& GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager> const& GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11* GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11::ScavengerManager__ImportMothershipUserData_d__11()   {
}
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson.FromManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson* (*)(::GorillaTagScripts::ScavengerHunt::ScavengerManager*)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson::FromManager)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c137e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*>(),
                        {"FromManager", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson.FromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson* (*)(::StringW)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson::FromJson)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5c138e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson.ReadCollectedTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*, ::Newtonsoft::Json::JsonReader*)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson::ReadCollectedTargets)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5c14a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*>(),
                        {"ReadCollectedTargets", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*>(), ::i2c::type_of<::Newtonsoft::Json::JsonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson::Write)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5c1336c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*>(),
                        {"Write", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c149ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::StringW>>*& GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson::__cordl_internal_get_CollectedTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollectedTargets;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::StringW>>* const& GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson::__cordl_internal_get_CollectedTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollectedTargets;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson::__cordl_internal_set_CollectedTargets(::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::StringW>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CollectedTargets = value;
}
inline ::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson* GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson::FromManager(::GorillaTagScripts::ScavengerHunt::ScavengerManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*>(),
                        {"FromManager", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*>(nullptr, ___internal_method, manager);
}
inline ::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson* GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson::FromJson(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*>(nullptr, ___internal_method, json);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson::ReadCollectedTargets(::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*  json, ::Newtonsoft::Json::JsonReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*>(),
                        {"ReadCollectedTargets", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*>(), ::i2c::type_of<::Newtonsoft::Json::JsonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, json, reader);
}
inline ::StringW GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson::Write()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*>(),
                        {"Write", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson* GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson::ScavengerManager_ScavengerJson()   {
}
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::get_IsCompleted)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5c1445c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt.get_Targets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>* (::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::get_Targets)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c12a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"get_Targets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt.get_CollectedTargetNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* (::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::get_CollectedTargetNames)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c14608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"get_CollectedTargetNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt.get__collectedTargetNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::get__collectedTargetNames)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c1468c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"get__collectedTargetNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::*)(::StringW)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5c14710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt.Collect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::*)(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*, bool)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::Collect)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5c1326c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"Collect", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt.RegisterTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::*)(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::RegisterTarget)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x5c12b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"RegisterTarget", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt.SendTargetCollectedEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::*)(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*, bool)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::SendTargetCollectedEvents)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5c14844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"SendTargetCollectedEvents", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt.SendHuntCompletedEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::*)(bool)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::SendHuntCompletedEvents)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c1493c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"SendHuntCompletedEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt.IsCollected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::*)(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::IsCollected)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c12ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"IsCollected", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt.ClearCollectedTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::ClearCollectedTargets)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c1407c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"ClearCollectedTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt.GetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget> (::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::*)(::StringW)>(&::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::GetTarget)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5c140d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"GetTarget", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr bool& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get_SendTargetCollectedEventsOnLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendTargetCollectedEventsOnLoad;
}
constexpr bool const& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get_SendTargetCollectedEventsOnLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendTargetCollectedEventsOnLoad;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_set_SendTargetCollectedEventsOnLoad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SendTargetCollectedEventsOnLoad = value;
}
constexpr bool& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get_SendHuntCompletedEventsOnLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendHuntCompletedEventsOnLoad;
}
constexpr bool const& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get_SendHuntCompletedEventsOnLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendHuntCompletedEventsOnLoad;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_set_SendHuntCompletedEventsOnLoad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SendHuntCompletedEventsOnLoad = value;
}
constexpr bool& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get_Deprecated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Deprecated;
}
constexpr bool const& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get_Deprecated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Deprecated;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_set_Deprecated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Deprecated = value;
}
constexpr ::ArrayW<::StringW>& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get_TargetNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetNames;
}
constexpr ::ArrayW<::StringW> const& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get_TargetNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetNames;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_set_TargetNames(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetNames = value;
}
constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*>& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get_TargetCollected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetCollected;
}
constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*> const& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get_TargetCollected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetCollected;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_set_TargetCollected(::ArrayW<::UnityEngine::Events::UnityEvent*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetCollected = value;
}
constexpr ::ArrayW<::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*>& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get_TargetCollectedArg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetCollectedArg;
}
constexpr ::ArrayW<::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*> const& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get_TargetCollectedArg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetCollectedArg;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_set_TargetCollectedArg(::ArrayW<::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetCollectedArg = value;
}
constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*>& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get_HuntCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HuntCompleted;
}
constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*> const& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get_HuntCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HuntCompleted;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_set_HuntCompleted(::ArrayW<::UnityEngine::Events::UnityEvent*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HuntCompleted = value;
}
constexpr ::ArrayW<::UnityEngine::Events::UnityEvent_1<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>*>& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get_HuntCompletedArg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HuntCompletedArg;
}
constexpr ::ArrayW<::UnityEngine::Events::UnityEvent_1<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>*> const& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get_HuntCompletedArg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HuntCompletedArg;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_set_HuntCompletedArg(::ArrayW<::UnityEngine::Events::UnityEvent_1<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HuntCompletedArg = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get__targets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>* const& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get__targets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targets;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_set__targets(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targets = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get__collectedTargetNamesNullable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collectedTargetNamesNullable;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_get__collectedTargetNamesNullable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collectedTargetNamesNullable;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::__cordl_internal_set__collectedTargetNamesNullable(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collectedTargetNamesNullable = value;
}
inline bool GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>* GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::get_Targets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"get_Targets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::get_CollectedTargetNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"get_CollectedTargetNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::get__collectedTargetNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"get__collectedTargetNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*>(this, ___internal_method);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline bool GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::Collect(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*  target, bool  initialLoad)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"Collect", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target, initialLoad);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::RegisterTarget(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"RegisterTarget", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::SendTargetCollectedEvents(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*  target, bool  initialLoad)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"SendTargetCollectedEvents", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, initialLoad);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::SendHuntCompletedEvents(bool  initialLoad)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"SendHuntCompletedEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialLoad);
}
inline bool GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::IsCollected(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"IsCollected", {}, {::i2c::type_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::ClearCollectedTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"ClearCollectedTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget> GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::GetTarget(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(),
                        {"GetTarget", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>(this, ___internal_method, name);
}
inline ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt* GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>(name));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt::ScavengerManager_Hunt()   {
}
