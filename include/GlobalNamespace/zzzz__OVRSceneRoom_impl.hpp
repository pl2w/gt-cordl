#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneRoom.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlane_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneRoom_def.hpp"
#include "GlobalNamespace/zzzz__IOVRSceneComponent_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlane_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneRoom__LoadRoom_d__19_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSceneRoom.get_Floor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRScenePlane> (::GlobalNamespace::OVRSceneRoom::*)()>(&::GlobalNamespace::OVRSceneRoom::get_Floor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63a9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"get_Floor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneRoom.set_Floor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneRoom::*)(::GlobalNamespace::OVRScenePlane*)>(&::GlobalNamespace::OVRSceneRoom::set_Floor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63a9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"set_Floor", {}, {::i2c::type_of<::GlobalNamespace::OVRScenePlane*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneRoom.get_Ceiling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRScenePlane> (::GlobalNamespace::OVRSceneRoom::*)()>(&::GlobalNamespace::OVRSceneRoom::get_Ceiling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63a9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"get_Ceiling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneRoom.set_Ceiling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneRoom::*)(::GlobalNamespace::OVRScenePlane*)>(&::GlobalNamespace::OVRSceneRoom::set_Ceiling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63a9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"set_Ceiling", {}, {::i2c::type_of<::GlobalNamespace::OVRScenePlane*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneRoom.get_Walls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>> (::GlobalNamespace::OVRSceneRoom::*)()>(&::GlobalNamespace::OVRSceneRoom::get_Walls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63a9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"get_Walls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneRoom.set_Walls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneRoom::*)(::ArrayW<::GlobalNamespace::OVRScenePlane*>)>(&::GlobalNamespace::OVRSceneRoom::set_Walls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63a9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"set_Walls", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::OVRScenePlane*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneRoom.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneRoom::*)()>(&::GlobalNamespace::OVRSceneRoom::Awake)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa63a9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneRoom.IOVRSceneComponent_Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneRoom::*)()>(&::GlobalNamespace::OVRSceneRoom::IOVRSceneComponent_Initialize)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa63ab28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"IOVRSceneComponent.Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneRoom.LoadRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSceneRoom::*)(::System::Guid, ::System::Guid, ::ArrayW<::System::Guid>)>(&::GlobalNamespace::OVRSceneRoom::LoadRoom)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa636a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"LoadRoom", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::ArrayW<::System::Guid>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneRoom.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneRoom::*)()>(&::GlobalNamespace::OVRSceneRoom::OnDestroy)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa63ac30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneRoom.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneRoom::*)(::StringW)>(&::GlobalNamespace::OVRSceneRoom::Log)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa63ace0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneRoom.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneRoom::*)(::StringW)>(&::GlobalNamespace::OVRSceneRoom::LogWarning)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa63ad84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneRoom.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneRoom::*)(::StringW)>(&::GlobalNamespace::OVRSceneRoom::LogError)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa63ae28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneRoom._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneRoom::*)()>(&::GlobalNamespace::OVRSceneRoom::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa63aecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneRoom._LoadRoom_g__TryGetPlane_19_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Guid, ::by_ref<::GlobalNamespace::OVRScenePlane*>)>(&::GlobalNamespace::OVRSceneRoom::_LoadRoom_g__TryGetPlane_19_0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa63b068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"<LoadRoom>g__TryGetPlane|19_0", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRScenePlane*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneRoom._LoadRoom_g__GetPlane_19_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRScenePlane> (*)(::System::Guid)>(&::GlobalNamespace::OVRSceneRoom::_LoadRoom_g__GetPlane_19_1)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa63b158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"<LoadRoom>g__GetPlane|19_1", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& GlobalNamespace::OVRSceneRoom::__cordl_internal_get__Floor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Floor_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& GlobalNamespace::OVRSceneRoom::__cordl_internal_get__Floor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Floor_k__BackingField;
}
constexpr void GlobalNamespace::OVRSceneRoom::__cordl_internal_set__Floor_k__BackingField(::UnityW<::GlobalNamespace::OVRScenePlane>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Floor_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& GlobalNamespace::OVRSceneRoom::__cordl_internal_get__Ceiling_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Ceiling_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& GlobalNamespace::OVRSceneRoom::__cordl_internal_get__Ceiling_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Ceiling_k__BackingField;
}
constexpr void GlobalNamespace::OVRSceneRoom::__cordl_internal_set__Ceiling_k__BackingField(::UnityW<::GlobalNamespace::OVRScenePlane>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Ceiling_k__BackingField = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>>& GlobalNamespace::OVRSceneRoom::__cordl_internal_get__Walls_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Walls_k__BackingField;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>> const& GlobalNamespace::OVRSceneRoom::__cordl_internal_get__Walls_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Walls_k__BackingField;
}
constexpr void GlobalNamespace::OVRSceneRoom::__cordl_internal_set__Walls_k__BackingField(::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Walls_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& GlobalNamespace::OVRSceneRoom::__cordl_internal_get__sceneAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneAnchor;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& GlobalNamespace::OVRSceneRoom::__cordl_internal_get__sceneAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneAnchor;
}
constexpr void GlobalNamespace::OVRSceneRoom::__cordl_internal_set__sceneAnchor(::UnityW<::GlobalNamespace::OVRSceneAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneAnchor = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneManager>& GlobalNamespace::OVRSceneRoom::__cordl_internal_get__sceneManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneManager;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneManager> const& GlobalNamespace::OVRSceneRoom::__cordl_internal_get__sceneManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneManager;
}
constexpr void GlobalNamespace::OVRSceneRoom::__cordl_internal_set__sceneManager(::UnityW<::GlobalNamespace::OVRSceneManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneManager = value;
}
constexpr ::System::Guid& GlobalNamespace::OVRSceneRoom::__cordl_internal_get__uuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uuid;
}
constexpr ::System::Guid const& GlobalNamespace::OVRSceneRoom::__cordl_internal_get__uuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uuid;
}
constexpr void GlobalNamespace::OVRSceneRoom::__cordl_internal_set__uuid(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uuid = value;
}
inline void GlobalNamespace::OVRSceneRoom::setStaticF_SceneRooms(::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityW<::GlobalNamespace::OVRSceneRoom>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityW<::GlobalNamespace::OVRSceneRoom>>*, "SceneRooms", ::GlobalNamespace::OVRSceneRoom*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityW<::GlobalNamespace::OVRSceneRoom>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityW<::GlobalNamespace::OVRSceneRoom>>* GlobalNamespace::OVRSceneRoom::getStaticF_SceneRooms()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityW<::GlobalNamespace::OVRSceneRoom>>*, "SceneRooms", ::GlobalNamespace::OVRSceneRoom*>();
}
inline void GlobalNamespace::OVRSceneRoom::setStaticF_SceneRoomsList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSceneRoom>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSceneRoom>>*, "SceneRoomsList", ::GlobalNamespace::OVRSceneRoom*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSceneRoom>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSceneRoom>>* GlobalNamespace::OVRSceneRoom::getStaticF_SceneRoomsList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSceneRoom>>*, "SceneRoomsList", ::GlobalNamespace::OVRSceneRoom*>();
}
inline ::UnityW<::GlobalNamespace::OVRScenePlane> GlobalNamespace::OVRSceneRoom::get_Floor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"get_Floor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRScenePlane>>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneRoom::set_Floor(::GlobalNamespace::OVRScenePlane*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"set_Floor", {}, {::i2c::type_of<::GlobalNamespace::OVRScenePlane*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::OVRScenePlane> GlobalNamespace::OVRSceneRoom::get_Ceiling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"get_Ceiling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRScenePlane>>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneRoom::set_Ceiling(::GlobalNamespace::OVRScenePlane*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"set_Ceiling", {}, {::i2c::type_of<::GlobalNamespace::OVRScenePlane*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>> GlobalNamespace::OVRSceneRoom::get_Walls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"get_Walls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>>>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneRoom::set_Walls(::ArrayW<::GlobalNamespace::OVRScenePlane*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"set_Walls", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::OVRScenePlane*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRSceneRoom::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneRoom::IOVRSceneComponent_Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"IOVRSceneComponent.Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSceneRoom::LoadRoom(::System::Guid  floor, ::System::Guid  ceiling, ::ArrayW<::System::Guid>  walls)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"LoadRoom", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::ArrayW<::System::Guid>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(this, ___internal_method, floor, ceiling, walls);
}
inline void GlobalNamespace::OVRSceneRoom::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneRoom::Log(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::OVRSceneRoom::LogWarning(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::OVRSceneRoom::LogError(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::OVRSceneRoom::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneRoom::_LoadRoom_g__TryGetPlane_19_0(::System::Guid  uuid, ::by_ref<::GlobalNamespace::OVRScenePlane*>  plane)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"<LoadRoom>g__TryGetPlane|19_0", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRScenePlane*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, uuid, plane);
}
inline ::UnityW<::GlobalNamespace::OVRScenePlane> GlobalNamespace::OVRSceneRoom::_LoadRoom_g__GetPlane_19_1(::System::Guid  uuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom*>(),
                        {"<LoadRoom>g__GetPlane|19_1", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRScenePlane>>(nullptr, ___internal_method, uuid);
}
inline ::GlobalNamespace::OVRSceneRoom* GlobalNamespace::OVRSceneRoom::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSceneRoom*>());
}
/// @brief Convert operator to "::GlobalNamespace::IOVRSceneComponent"
constexpr  GlobalNamespace::OVRSceneRoom::operator ::GlobalNamespace::IOVRSceneComponent*() noexcept {
return static_cast<::GlobalNamespace::IOVRSceneComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IOVRSceneComponent"
constexpr ::GlobalNamespace::IOVRSceneComponent* GlobalNamespace::OVRSceneRoom::i___GlobalNamespace__IOVRSceneComponent() noexcept {
return static_cast<::GlobalNamespace::IOVRSceneComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneRoom::OVRSceneRoom()   {
}
