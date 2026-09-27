#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneManagement.hpp"
#include "GlobalNamespace/zzzz__ZoneData_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ZoneManagement_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__ZoneData_def.hpp"
#include "GlobalNamespace/zzzz__ZoneManagement_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.add_OnZoneChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ZoneManagement_ZoneChangeEvent*)>(&::GlobalNamespace::ZoneManagement::add_OnZoneChange)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x56b6f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"add_OnZoneChange", {}, {::i2c::type_of<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.remove_OnZoneChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ZoneManagement_ZoneChangeEvent*)>(&::GlobalNamespace::ZoneManagement::remove_OnZoneChange)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x56b6ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"remove_OnZoneChange", {}, {::i2c::type_of<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.get_hasInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ZoneManagement::*)()>(&::GlobalNamespace::ZoneManagement::get_hasInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56b70b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"get_hasInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.set_hasInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneManagement::*)(bool)>(&::GlobalNamespace::ZoneManagement::set_hasInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56b70b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"set_hasInstance", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ZoneManagement::*)()>(&::GlobalNamespace::ZoneManagement::get_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56b70c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.set_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneManagement::*)(bool)>(&::GlobalNamespace::ZoneManagement::set_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56b70c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneManagement::*)()>(&::GlobalNamespace::ZoneManagement::Awake)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x56b70d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.SetActiveZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GTZone)>(&::GlobalNamespace::ZoneManagement::SetActiveZone)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x56b7500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"SetActiveZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.SetActiveZones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::GlobalNamespace::GTZone>)>(&::GlobalNamespace::ZoneManagement::SetActiveZones)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x56b6c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"SetActiveZones", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::GTZone>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.IsInZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GTZone)>(&::GlobalNamespace::ZoneManagement::IsInZone)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x56b8114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"IsInZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.IsZoneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GTZone)>(&::GlobalNamespace::ZoneManagement::IsZoneLoaded)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x56b8230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"IsZoneLoaded", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.GetPrimaryGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::ZoneManagement::*)(::GlobalNamespace::GTZone)>(&::GlobalNamespace::ZoneManagement::GetPrimaryGameObject)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56b833c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"GetPrimaryGameObject", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.AddSceneToForceStayLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::ZoneManagement::AddSceneToForceStayLoaded)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x56b836c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"AddSceneToForceStayLoaded", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.RemoveSceneFromForceStayLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::ZoneManagement::RemoveSceneFromForceStayLoaded)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x56b8434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"RemoveSceneFromForceStayLoaded", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.FindInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ZoneManagement::FindInstance)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x56b7564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"FindInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.IsSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ZoneManagement::*)(::GlobalNamespace::GTZone)>(&::GlobalNamespace::ZoneManagement::IsSceneLoaded)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x56b84fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"IsSceneLoaded", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.IsZoneActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ZoneManagement::*)(::GlobalNamespace::GTZone)>(&::GlobalNamespace::ZoneManagement::IsZoneActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56b85f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"IsZoneActive", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.GetAllLoadedScenes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (::GlobalNamespace::ZoneManagement::*)()>(&::GlobalNamespace::ZoneManagement::GetAllLoadedScenes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56b8618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"GetAllLoadedScenes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.IsSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ZoneManagement::*)(::StringW)>(&::GlobalNamespace::ZoneManagement::IsSceneLoaded)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56b8620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"IsSceneLoaded", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneManagement::*)()>(&::GlobalNamespace::ZoneManagement::Initialize)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x56b71dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.SetZones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneManagement::*)(::ArrayW<::GlobalNamespace::GTZone>)>(&::GlobalNamespace::ZoneManagement::SetZones)> {
  constexpr static std::size_t size = 0xa9c;
  constexpr static std::size_t addrs = 0x56b7678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"SetZones", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::GTZone>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.HandleOnSceneLoadCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneManagement::*)(::UnityEngine::AsyncOperation*)>(&::GlobalNamespace::ZoneManagement::HandleOnSceneLoadCompleted)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x56b8678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"HandleOnSceneLoadCompleted", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.AnyActiveLoadOps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ZoneManagement::*)()>(&::GlobalNamespace::ZoneManagement::AnyActiveLoadOps)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x56b89d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"AnyActiveLoadOps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.GetZoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ZoneData* (::GlobalNamespace::ZoneManagement::*)(::GlobalNamespace::GTZone)>(&::GlobalNamespace::ZoneManagement::GetZoneData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x56b81d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"GetZoneData", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.GetSceneNameForZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ZoneManagement::*)(::GlobalNamespace::GTZone)>(&::GlobalNamespace::ZoneManagement::GetSceneNameForZone)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56b8afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"GetSceneNameForZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement.IsValidZoneInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::ZoneManagement::IsValidZoneInt)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56b8b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"IsValidZoneInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneManagement::*)()>(&::GlobalNamespace::ZoneManagement::_ctor)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x56b8b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::ZoneManagement::__cordl_internal_get__hasInstance_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasInstance_k__BackingField;
}
constexpr bool const& GlobalNamespace::ZoneManagement::__cordl_internal_get__hasInstance_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasInstance_k__BackingField;
}
constexpr void GlobalNamespace::ZoneManagement::__cordl_internal_set__hasInstance_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasInstance_k__BackingField = value;
}
constexpr bool& GlobalNamespace::ZoneManagement::__cordl_internal_get__Initialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr bool const& GlobalNamespace::ZoneManagement::__cordl_internal_get__Initialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr void GlobalNamespace::ZoneManagement::__cordl_internal_set__Initialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Initialized_k__BackingField = value;
}
constexpr ::ArrayW<::GlobalNamespace::ZoneData*>& GlobalNamespace::ZoneManagement::__cordl_internal_get_zones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zones;
}
constexpr ::ArrayW<::GlobalNamespace::ZoneData*> const& GlobalNamespace::ZoneManagement::__cordl_internal_get_zones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zones;
}
constexpr void GlobalNamespace::ZoneManagement::__cordl_internal_set_zones(::ArrayW<::GlobalNamespace::ZoneData*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zones = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::ZoneManagement::__cordl_internal_get_allObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::ZoneManagement::__cordl_internal_get_allObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allObjects;
}
constexpr void GlobalNamespace::ZoneManagement::__cordl_internal_set_allObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allObjects = value;
}
constexpr ::ArrayW<bool>& GlobalNamespace::ZoneManagement::__cordl_internal_get_objectActivationState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectActivationState;
}
constexpr ::ArrayW<bool> const& GlobalNamespace::ZoneManagement::__cordl_internal_get_objectActivationState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectActivationState;
}
constexpr void GlobalNamespace::ZoneManagement::__cordl_internal_set_objectActivationState(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectActivationState = value;
}
constexpr ::System::Action*& GlobalNamespace::ZoneManagement::__cordl_internal_get_onZoneChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onZoneChanged;
}
constexpr ::System::Action* const& GlobalNamespace::ZoneManagement::__cordl_internal_get_onZoneChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onZoneChanged;
}
constexpr void GlobalNamespace::ZoneManagement::__cordl_internal_set_onZoneChanged(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onZoneChanged = value;
}
constexpr ::System::Action*& GlobalNamespace::ZoneManagement::__cordl_internal_get_OnSceneLoadsCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSceneLoadsCompleted;
}
constexpr ::System::Action* const& GlobalNamespace::ZoneManagement::__cordl_internal_get_OnSceneLoadsCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSceneLoadsCompleted;
}
constexpr void GlobalNamespace::ZoneManagement::__cordl_internal_set_OnSceneLoadsCompleted(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSceneLoadsCompleted = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>*& GlobalNamespace::ZoneManagement::__cordl_internal_get_activeZones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeZones;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>* const& GlobalNamespace::ZoneManagement::__cordl_internal_get_activeZones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeZones;
}
constexpr void GlobalNamespace::ZoneManagement::__cordl_internal_set_activeZones(::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeZones = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::ZoneManagement::__cordl_internal_get_scenesLoaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenesLoaded;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::ZoneManagement::__cordl_internal_get_scenesLoaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenesLoaded;
}
constexpr void GlobalNamespace::ZoneManagement::__cordl_internal_set_scenesLoaded(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scenesLoaded = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::ZoneManagement::__cordl_internal_get_scenesRequested()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenesRequested;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::ZoneManagement::__cordl_internal_get_scenesRequested() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenesRequested;
}
constexpr void GlobalNamespace::ZoneManagement::__cordl_internal_set_scenesRequested(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scenesRequested = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::ZoneManagement::__cordl_internal_get_sceneForceStayLoaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneForceStayLoaded;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::ZoneManagement::__cordl_internal_get_sceneForceStayLoaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneForceStayLoaded;
}
constexpr void GlobalNamespace::ZoneManagement::__cordl_internal_set_sceneForceStayLoaded(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneForceStayLoaded = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::ZoneManagement::__cordl_internal_get_scenesToUnload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenesToUnload;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::ZoneManagement::__cordl_internal_get_scenesToUnload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenesToUnload;
}
constexpr void GlobalNamespace::ZoneManagement::__cordl_internal_set_scenesToUnload(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scenesToUnload = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::AsyncOperation*>*& GlobalNamespace::ZoneManagement::__cordl_internal_get__scenes_to_loadOps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scenes_to_loadOps;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::AsyncOperation*>* const& GlobalNamespace::ZoneManagement::__cordl_internal_get__scenes_to_loadOps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scenes_to_loadOps;
}
constexpr void GlobalNamespace::ZoneManagement::__cordl_internal_set__scenes_to_loadOps(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::AsyncOperation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scenes_to_loadOps = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::AsyncOperation*>*& GlobalNamespace::ZoneManagement::__cordl_internal_get__scenes_to_unloadOps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scenes_to_unloadOps;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::AsyncOperation*>* const& GlobalNamespace::ZoneManagement::__cordl_internal_get__scenes_to_unloadOps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scenes_to_unloadOps;
}
constexpr void GlobalNamespace::ZoneManagement::__cordl_internal_set__scenes_to_unloadOps(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::AsyncOperation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scenes_to_unloadOps = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::ZoneManagement::__cordl_internal_get_mainCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::ZoneManagement::__cordl_internal_get_mainCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCamera;
}
constexpr void GlobalNamespace::ZoneManagement::__cordl_internal_set_mainCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainCamera = value;
}
inline void GlobalNamespace::ZoneManagement::setStaticF_OnZoneChange(::GlobalNamespace::ZoneManagement_ZoneChangeEvent*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*, "OnZoneChange", ::GlobalNamespace::ZoneManagement*>(std::forward<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*>(value));
}
inline ::GlobalNamespace::ZoneManagement_ZoneChangeEvent* GlobalNamespace::ZoneManagement::getStaticF_OnZoneChange()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*, "OnZoneChange", ::GlobalNamespace::ZoneManagement*>();
}
inline void GlobalNamespace::ZoneManagement::setStaticF_instance(::UnityW<::GlobalNamespace::ZoneManagement>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::ZoneManagement>, "instance", ::GlobalNamespace::ZoneManagement*>(std::forward<::UnityW<::GlobalNamespace::ZoneManagement>>(value));
}
inline ::UnityW<::GlobalNamespace::ZoneManagement> GlobalNamespace::ZoneManagement::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::ZoneManagement>, "instance", ::GlobalNamespace::ZoneManagement*>();
}
inline void GlobalNamespace::ZoneManagement::add_OnZoneChange(::GlobalNamespace::ZoneManagement_ZoneChangeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"add_OnZoneChange", {}, {::i2c::type_of<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::ZoneManagement::remove_OnZoneChange(::GlobalNamespace::ZoneManagement_ZoneChangeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"remove_OnZoneChange", {}, {::i2c::type_of<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::ZoneManagement::get_hasInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"get_hasInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneManagement::set_hasInstance(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"set_hasInstance", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::ZoneManagement::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneManagement::set_Initialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ZoneManagement::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneManagement::SetActiveZone(::GlobalNamespace::GTZone  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"SetActiveZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zone);
}
inline void GlobalNamespace::ZoneManagement::SetActiveZones(::ArrayW<::GlobalNamespace::GTZone>  zones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"SetActiveZones", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::GTZone>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zones);
}
inline bool GlobalNamespace::ZoneManagement::IsInZone(::GlobalNamespace::GTZone  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"IsInZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, zone);
}
inline bool GlobalNamespace::ZoneManagement::IsZoneLoaded(::GlobalNamespace::GTZone  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"IsZoneLoaded", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, zone);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::ZoneManagement::GetPrimaryGameObject(::GlobalNamespace::GTZone  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"GetPrimaryGameObject", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, zone);
}
inline void GlobalNamespace::ZoneManagement::AddSceneToForceStayLoaded(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"AddSceneToForceStayLoaded", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sceneName);
}
inline void GlobalNamespace::ZoneManagement::RemoveSceneFromForceStayLoaded(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"RemoveSceneFromForceStayLoaded", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sceneName);
}
inline void GlobalNamespace::ZoneManagement::FindInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"FindInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::ZoneManagement::IsSceneLoaded(::GlobalNamespace::GTZone  gtZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"IsSceneLoaded", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gtZone);
}
inline bool GlobalNamespace::ZoneManagement::IsZoneActive(::GlobalNamespace::GTZone  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"IsZoneActive", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zone);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* GlobalNamespace::ZoneManagement::GetAllLoadedScenes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"GetAllLoadedScenes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*>(this, ___internal_method);
}
inline bool GlobalNamespace::ZoneManagement::IsSceneLoaded(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"IsSceneLoaded", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sceneName);
}
inline void GlobalNamespace::ZoneManagement::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneManagement::SetZones(::ArrayW<::GlobalNamespace::GTZone>  newActiveZones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"SetZones", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::GTZone>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newActiveZones);
}
inline void GlobalNamespace::ZoneManagement::HandleOnSceneLoadCompleted(::UnityEngine::AsyncOperation*  thisLoadOp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"HandleOnSceneLoadCompleted", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisLoadOp);
}
inline bool GlobalNamespace::ZoneManagement::AnyActiveLoadOps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"AnyActiveLoadOps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::ZoneData* GlobalNamespace::ZoneManagement::GetZoneData(::GlobalNamespace::GTZone  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"GetZoneData", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ZoneData*>(this, ___internal_method, zone);
}
inline ::StringW GlobalNamespace::ZoneManagement::GetSceneNameForZone(::GlobalNamespace::GTZone  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"GetSceneNameForZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, zone);
}
inline bool GlobalNamespace::ZoneManagement::IsValidZoneInt(int32_t  zoneInt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {"IsValidZoneInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, zoneInt);
}
inline void GlobalNamespace::ZoneManagement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ZoneManagement* GlobalNamespace::ZoneManagement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ZoneManagement*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZoneManagement::ZoneManagement()   {
}
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneManagement___c::*)()>(&::GlobalNamespace::ZoneManagement___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56b8ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement___c._AnyActiveLoadOps_b__45_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ZoneManagement___c::*)(::UnityEngine::AsyncOperation*)>(&::GlobalNamespace::ZoneManagement___c::_AnyActiveLoadOps_b__45_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56b8ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement___c*>(),
                        {"<AnyActiveLoadOps>b__45_0", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ZoneManagement___c::setStaticF___9(::GlobalNamespace::ZoneManagement___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ZoneManagement___c*, "<>9", ::GlobalNamespace::ZoneManagement___c*>(std::forward<::GlobalNamespace::ZoneManagement___c*>(value));
}
inline ::GlobalNamespace::ZoneManagement___c* GlobalNamespace::ZoneManagement___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ZoneManagement___c*, "<>9", ::GlobalNamespace::ZoneManagement___c*>();
}
inline void GlobalNamespace::ZoneManagement___c::setStaticF___9__45_0(::System::Func_2<::UnityEngine::AsyncOperation*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::AsyncOperation*,bool>*, "<>9__45_0", ::GlobalNamespace::ZoneManagement___c*>(std::forward<::System::Func_2<::UnityEngine::AsyncOperation*,bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::AsyncOperation*,bool>* GlobalNamespace::ZoneManagement___c::getStaticF___9__45_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::AsyncOperation*,bool>*, "<>9__45_0", ::GlobalNamespace::ZoneManagement___c*>();
}
inline void GlobalNamespace::ZoneManagement___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ZoneManagement___c::_AnyActiveLoadOps_b__45_0(::UnityEngine::AsyncOperation*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement___c*>(),
                        {"<AnyActiveLoadOps>b__45_0", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, op);
}
inline ::GlobalNamespace::ZoneManagement___c* GlobalNamespace::ZoneManagement___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ZoneManagement___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZoneManagement___c::ZoneManagement___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement_ZoneChangeEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneManagement_ZoneChangeEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::ZoneManagement_ZoneChangeEvent::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x56b8d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement_ZoneChangeEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneManagement_ZoneChangeEvent::*)(::ArrayW<::GlobalNamespace::ZoneData*>)>(&::GlobalNamespace::ZoneManagement_ZoneChangeEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56b8e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement_ZoneChangeEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::ZoneManagement_ZoneChangeEvent::*)(::ArrayW<::GlobalNamespace::ZoneData*>, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::ZoneManagement_ZoneChangeEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56b8e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneManagement_ZoneChangeEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneManagement_ZoneChangeEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::ZoneManagement_ZoneChangeEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56b8e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ZoneManagement_ZoneChangeEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::ZoneManagement_ZoneChangeEvent::Invoke(::ArrayW<::GlobalNamespace::ZoneData*>  zones)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zones);
}
inline ::System::IAsyncResult* GlobalNamespace::ZoneManagement_ZoneChangeEvent::BeginInvoke(::ArrayW<::GlobalNamespace::ZoneData*>  zones, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, zones, callback, object);
}
inline void GlobalNamespace::ZoneManagement_ZoneChangeEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::ZoneManagement_ZoneChangeEvent* GlobalNamespace::ZoneManagement_ZoneChangeEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZoneManagement_ZoneChangeEvent::ZoneManagement_ZoneChangeEvent()   {
}
