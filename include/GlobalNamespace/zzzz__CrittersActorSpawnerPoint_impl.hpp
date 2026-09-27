#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersActorSpawnerPoint.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersActorSpawnerPoint_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersActorSpawnerPoint.add_OnSpawnChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorSpawnerPoint::*)(::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*)>(&::GlobalNamespace::CrittersActorSpawnerPoint::add_OnSpawnChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55fabc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(),
                        {"add_OnSpawnChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorSpawnerPoint.remove_OnSpawnChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorSpawnerPoint::*)(::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*)>(&::GlobalNamespace::CrittersActorSpawnerPoint::remove_OnSpawnChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55fac78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(),
                        {"remove_OnSpawnChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorSpawnerPoint.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorSpawnerPoint::*)()>(&::GlobalNamespace::CrittersActorSpawnerPoint::Initialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x55fad28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorSpawnerPoint.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorSpawnerPoint::*)()>(&::GlobalNamespace::CrittersActorSpawnerPoint::OnDisable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x55fad50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorSpawnerPoint.SetSpawnedActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorSpawnerPoint::*)(::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersActorSpawnerPoint::SetSpawnedActor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x55fad7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(),
                        {"SetSpawnedActor", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorSpawnerPoint.UpdateSpawnedActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorSpawnerPoint::*)(int32_t)>(&::GlobalNamespace::CrittersActorSpawnerPoint::UpdateSpawnedActor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55fae68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(),
                        {"UpdateSpawnedActor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorSpawnerPoint.SendDataByCrittersActorType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorSpawnerPoint::*)(::Photon::Pun::PhotonStream*)>(&::GlobalNamespace::CrittersActorSpawnerPoint::SendDataByCrittersActorType)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x55faf5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorSpawnerPoint.UpdateSpecificActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersActorSpawnerPoint::*)(::Photon::Pun::PhotonStream*)>(&::GlobalNamespace::CrittersActorSpawnerPoint::UpdateSpecificActor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55fafb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorSpawnerPoint.AddActorDataToList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersActorSpawnerPoint::*)(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>)>(&::GlobalNamespace::CrittersActorSpawnerPoint::AddActorDataToList)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x55fb09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorSpawnerPoint.TotalActorDataLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersActorSpawnerPoint::*)()>(&::GlobalNamespace::CrittersActorSpawnerPoint::TotalActorDataLength)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x55fb18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorSpawnerPoint.UpdateFromRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersActorSpawnerPoint::*)(::ArrayW<::System::Object*>, int32_t)>(&::GlobalNamespace::CrittersActorSpawnerPoint::UpdateFromRPC)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x55fb1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorSpawnerPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorSpawnerPoint::*)()>(&::GlobalNamespace::CrittersActorSpawnerPoint::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x55fb2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CrittersActor>& GlobalNamespace::CrittersActorSpawnerPoint::__cordl_internal_get_spawnedActor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedActor;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& GlobalNamespace::CrittersActorSpawnerPoint::__cordl_internal_get_spawnedActor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedActor;
}
constexpr void GlobalNamespace::CrittersActorSpawnerPoint::__cordl_internal_set_spawnedActor(::UnityW<::GlobalNamespace::CrittersActor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnedActor = value;
}
constexpr int32_t& GlobalNamespace::CrittersActorSpawnerPoint::__cordl_internal_get_spawnedActorID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedActorID;
}
constexpr int32_t const& GlobalNamespace::CrittersActorSpawnerPoint::__cordl_internal_get_spawnedActorID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedActorID;
}
constexpr void GlobalNamespace::CrittersActorSpawnerPoint::__cordl_internal_set_spawnedActorID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnedActorID = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*& GlobalNamespace::CrittersActorSpawnerPoint::__cordl_internal_get_OnSpawnChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSpawnChanged;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& GlobalNamespace::CrittersActorSpawnerPoint::__cordl_internal_get_OnSpawnChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSpawnChanged;
}
constexpr void GlobalNamespace::CrittersActorSpawnerPoint::__cordl_internal_set_OnSpawnChanged(::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSpawnChanged = value;
}
inline void GlobalNamespace::CrittersActorSpawnerPoint::add_OnSpawnChanged(::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(),
                        {"add_OnSpawnChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CrittersActorSpawnerPoint::remove_OnSpawnChanged(::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(),
                        {"remove_OnSpawnChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CrittersActorSpawnerPoint::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersActorSpawnerPoint::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersActorSpawnerPoint::SetSpawnedActor(::GlobalNamespace::CrittersActor*  actor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(),
                        {"SetSpawnedActor", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actor);
}
inline void GlobalNamespace::CrittersActorSpawnerPoint::UpdateSpawnedActor(int32_t  newSpawnedActorID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(),
                        {"UpdateSpawnedActor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSpawnedActorID);
}
inline void GlobalNamespace::CrittersActorSpawnerPoint::SendDataByCrittersActorType(::Photon::Pun::PhotonStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline bool GlobalNamespace::CrittersActorSpawnerPoint::UpdateSpecificActor(::Photon::Pun::PhotonStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stream);
}
inline int32_t GlobalNamespace::CrittersActorSpawnerPoint::AddActorDataToList(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>  objList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, objList);
}
inline int32_t GlobalNamespace::CrittersActorSpawnerPoint::TotalActorDataLength()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CrittersActorSpawnerPoint::UpdateFromRPC(::ArrayW<::System::Object*>  data, int32_t  startingIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, startingIndex);
}
inline void GlobalNamespace::CrittersActorSpawnerPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorSpawnerPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersActorSpawnerPoint* GlobalNamespace::CrittersActorSpawnerPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersActorSpawnerPoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersActorSpawnerPoint::CrittersActorSpawnerPoint()   {
}
