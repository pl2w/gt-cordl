#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersRegion.hpp"
#include "GlobalNamespace/zzzz__CrittersBiome_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersRegion_def.hpp"
#include "GlobalNamespace/zzzz__CrittersPawn_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersRegion.get_Regions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>* (*)()>(&::GlobalNamespace::CrittersRegion::get_Regions)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56f35cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"get_Regions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersRegion.get_CritterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersRegion::*)()>(&::GlobalNamespace::CrittersRegion::get_CritterCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x56f3624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"get_CritterCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersRegion.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersRegion::*)()>(&::GlobalNamespace::CrittersRegion::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56f366c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"get_ID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersRegion.set_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersRegion::*)(int32_t)>(&::GlobalNamespace::CrittersRegion::set_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56f3674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"set_ID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersRegion.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersRegion::*)()>(&::GlobalNamespace::CrittersRegion::OnEnable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x56f367c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersRegion.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersRegion::*)()>(&::GlobalNamespace::CrittersRegion::OnDisable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x56f37dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersRegion.RegisterRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CrittersRegion*)>(&::GlobalNamespace::CrittersRegion::RegisterRegion)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x56f36d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"RegisterRegion", {}, {::i2c::type_of<::GlobalNamespace::CrittersRegion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersRegion.UnregisterRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CrittersRegion*)>(&::GlobalNamespace::CrittersRegion::UnregisterRegion)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x56f3830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"UnregisterRegion", {}, {::i2c::type_of<::GlobalNamespace::CrittersRegion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersRegion.AddCritterToRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CrittersPawn*, int32_t)>(&::GlobalNamespace::CrittersRegion::AddCritterToRegion)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x56f38e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"AddCritterToRegion", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersRegion.RemoveCritterFromRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CrittersPawn*)>(&::GlobalNamespace::CrittersRegion::RemoveCritterFromRegion)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x56f3ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"RemoveCritterFromRegion", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersRegion.AddCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersRegion::*)(::GlobalNamespace::CrittersPawn*)>(&::GlobalNamespace::CrittersRegion::AddCritter)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x56f3a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"AddCritter", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersRegion.RemoveCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersRegion::*)(::GlobalNamespace::CrittersPawn*)>(&::GlobalNamespace::CrittersRegion::RemoveCritter)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56f3c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"RemoveCritter", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersRegion.GetSpawnPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::CrittersRegion::*)()>(&::GlobalNamespace::CrittersRegion::GetSpawnPoint)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x56f3c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"GetSpawnPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersRegion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersRegion::*)()>(&::GlobalNamespace::CrittersRegion::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56f3ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CrittersBiome& GlobalNamespace::CrittersRegion::__cordl_internal_get_Biome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Biome;
}
constexpr ::GlobalNamespace::CrittersBiome const& GlobalNamespace::CrittersRegion::__cordl_internal_get_Biome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Biome;
}
constexpr void GlobalNamespace::CrittersRegion::__cordl_internal_set_Biome(::GlobalNamespace::CrittersBiome  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Biome = value;
}
constexpr int32_t& GlobalNamespace::CrittersRegion::__cordl_internal_get_maxCritters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCritters;
}
constexpr int32_t const& GlobalNamespace::CrittersRegion::__cordl_internal_get_maxCritters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCritters;
}
constexpr void GlobalNamespace::CrittersRegion::__cordl_internal_set_maxCritters(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxCritters = value;
}
constexpr float_t& GlobalNamespace::CrittersRegion::__cordl_internal_get_scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr float_t const& GlobalNamespace::CrittersRegion::__cordl_internal_get_scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr void GlobalNamespace::CrittersRegion::__cordl_internal_set_scale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scale = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersPawn>>*& GlobalNamespace::CrittersRegion::__cordl_internal_get__critters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____critters;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersPawn>>* const& GlobalNamespace::CrittersRegion::__cordl_internal_get__critters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____critters;
}
constexpr void GlobalNamespace::CrittersRegion::__cordl_internal_set__critters(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersPawn>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____critters = value;
}
constexpr int32_t& GlobalNamespace::CrittersRegion::__cordl_internal_get__ID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ID_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::CrittersRegion::__cordl_internal_get__ID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ID_k__BackingField;
}
constexpr void GlobalNamespace::CrittersRegion::__cordl_internal_set__ID_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ID_k__BackingField = value;
}
inline void GlobalNamespace::CrittersRegion::setStaticF__regions(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>*, "_regions", ::GlobalNamespace::CrittersRegion*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>* GlobalNamespace::CrittersRegion::getStaticF__regions()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>*, "_regions", ::GlobalNamespace::CrittersRegion*>();
}
inline void GlobalNamespace::CrittersRegion::setStaticF__regionLookup(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersRegion>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersRegion>>*, "_regionLookup", ::GlobalNamespace::CrittersRegion*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersRegion>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersRegion>>* GlobalNamespace::CrittersRegion::getStaticF__regionLookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersRegion>>*, "_regionLookup", ::GlobalNamespace::CrittersRegion*>();
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>* GlobalNamespace::CrittersRegion::get_Regions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"get_Regions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>*>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::CrittersRegion::get_CritterCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"get_CritterCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CrittersRegion::get_ID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"get_ID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersRegion::set_ID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"set_ID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CrittersRegion::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersRegion::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersRegion::RegisterRegion(::GlobalNamespace::CrittersRegion*  region)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"RegisterRegion", {}, {::i2c::type_of<::GlobalNamespace::CrittersRegion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, region);
}
inline void GlobalNamespace::CrittersRegion::UnregisterRegion(::GlobalNamespace::CrittersRegion*  region)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"UnregisterRegion", {}, {::i2c::type_of<::GlobalNamespace::CrittersRegion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, region);
}
inline void GlobalNamespace::CrittersRegion::AddCritterToRegion(::GlobalNamespace::CrittersPawn*  critter, int32_t  regionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"AddCritterToRegion", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, critter, regionId);
}
inline void GlobalNamespace::CrittersRegion::RemoveCritterFromRegion(::GlobalNamespace::CrittersPawn*  critter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"RemoveCritterFromRegion", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, critter);
}
inline void GlobalNamespace::CrittersRegion::AddCritter(::GlobalNamespace::CrittersPawn*  pawn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"AddCritter", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pawn);
}
inline void GlobalNamespace::CrittersRegion::RemoveCritter(::GlobalNamespace::CrittersPawn*  pawn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"RemoveCritter", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pawn);
}
inline ::UnityEngine::Vector3 GlobalNamespace::CrittersRegion::GetSpawnPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {"GetSpawnPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersRegion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRegion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersRegion* GlobalNamespace::CrittersRegion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersRegion*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersRegion::CrittersRegion()   {
}
