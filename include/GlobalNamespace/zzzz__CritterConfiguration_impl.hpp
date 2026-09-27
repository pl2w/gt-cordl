#pragma once
// IWYU pragma private; include "GlobalNamespace/CritterConfiguration.hpp"
#include "GlobalNamespace/zzzz__CritterConfiguration_AnimalType_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersBiome_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CritterConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__CritterAppearance_def.hpp"
#include "GlobalNamespace/zzzz__CritterConfiguration_AnimalType_def.hpp"
#include "GlobalNamespace/zzzz__CritterSpawnCriteria_def.hpp"
#include "GlobalNamespace/zzzz__CritterTemplate_def.hpp"
#include "GlobalNamespace/zzzz__CritterVisuals_def.hpp"
#include "GlobalNamespace/zzzz__CrittersPawn_def.hpp"
#include "GlobalNamespace/zzzz__CrittersRegion_def.hpp"
#include "GlobalNamespace/zzzz__RealWorldDateTimeWindow_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CritterConfiguration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CritterConfiguration::*)()>(&::GlobalNamespace::CritterConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x55f0520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterConfiguration.GetIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CritterConfiguration::*)()>(&::GlobalNamespace::CritterConfiguration::GetIndex)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x55f0590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"GetIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterConfiguration.RegionMatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CritterConfiguration::*)(::GlobalNamespace::CrittersRegion*)>(&::GlobalNamespace::CritterConfiguration::RegionMatches)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x55f0614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"RegionMatches", {}, {::i2c::type_of<::GlobalNamespace::CrittersRegion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterConfiguration.SpawnCriteriaMatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CritterConfiguration::*)()>(&::GlobalNamespace::CritterConfiguration::SpawnCriteriaMatches)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x55f06a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"SpawnCriteriaMatches", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterConfiguration.CanSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CritterConfiguration::*)()>(&::GlobalNamespace::CritterConfiguration::CanSpawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55f0724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"CanSpawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterConfiguration.CanSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CritterConfiguration::*)(::GlobalNamespace::CrittersRegion*)>(&::GlobalNamespace::CritterConfiguration::CanSpawn)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x55f0728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"CanSpawn", {}, {::i2c::type_of<::GlobalNamespace::CrittersRegion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterConfiguration.DateConditionsMet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CritterConfiguration::*)(::System::DateTime)>(&::GlobalNamespace::CritterConfiguration::DateConditionsMet)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55f0750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"DateConditionsMet", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterConfiguration.ShouldDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CritterConfiguration::*)()>(&::GlobalNamespace::CritterConfiguration::ShouldDespawn)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x55f07e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"ShouldDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterConfiguration.ApplyToCreature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CritterConfiguration::*)(::GlobalNamespace::CrittersPawn*)>(&::GlobalNamespace::CritterConfiguration::ApplyToCreature)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x55f0800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"ApplyToCreature", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterConfiguration.ApplyVisualsTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CritterConfiguration::*)(::GlobalNamespace::CrittersPawn*, bool)>(&::GlobalNamespace::CritterConfiguration::ApplyVisualsTo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x55f088c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"ApplyVisualsTo", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterConfiguration.ApplyVisualsTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CritterConfiguration::*)(::GlobalNamespace::CritterVisuals*, bool)>(&::GlobalNamespace::CritterConfiguration::ApplyVisualsTo)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x55f08a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"ApplyVisualsTo", {}, {::i2c::type_of<::GlobalNamespace::CritterVisuals*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterConfiguration.GenerateAppearance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CritterAppearance (::GlobalNamespace::CritterConfiguration::*)()>(&::GlobalNamespace::CritterConfiguration::GenerateAppearance)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x55f09d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"GenerateAppearance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterConfiguration.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CritterConfiguration::*)()>(&::GlobalNamespace::CritterConfiguration::ToString)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x55f0b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                    {::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::CritterConfiguration::__cordl_internal_get_internalDescription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalDescription;
}
constexpr ::StringW const& GlobalNamespace::CritterConfiguration::__cordl_internal_get_internalDescription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalDescription;
}
constexpr void GlobalNamespace::CritterConfiguration::__cordl_internal_set_internalDescription(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___internalDescription = value;
}
constexpr ::StringW& GlobalNamespace::CritterConfiguration::__cordl_internal_get_critterName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterName;
}
constexpr ::StringW const& GlobalNamespace::CritterConfiguration::__cordl_internal_get_critterName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterName;
}
constexpr void GlobalNamespace::CritterConfiguration::__cordl_internal_set_critterName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___critterName = value;
}
constexpr ::GlobalNamespace::CritterConfiguration_AnimalType& GlobalNamespace::CritterConfiguration::__cordl_internal_get_animalType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animalType;
}
constexpr ::GlobalNamespace::CritterConfiguration_AnimalType const& GlobalNamespace::CritterConfiguration::__cordl_internal_get_animalType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animalType;
}
constexpr void GlobalNamespace::CritterConfiguration::__cordl_internal_set_animalType(::GlobalNamespace::CritterConfiguration_AnimalType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animalType = value;
}
constexpr ::UnityW<::GlobalNamespace::CritterTemplate>& GlobalNamespace::CritterConfiguration::__cordl_internal_get_behaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviour;
}
constexpr ::UnityW<::GlobalNamespace::CritterTemplate> const& GlobalNamespace::CritterConfiguration::__cordl_internal_get_behaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviour;
}
constexpr void GlobalNamespace::CritterConfiguration::__cordl_internal_set_behaviour(::UnityW<::GlobalNamespace::CritterTemplate>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___behaviour = value;
}
constexpr ::UnityW<::GlobalNamespace::CritterSpawnCriteria>& GlobalNamespace::CritterConfiguration::__cordl_internal_get_spawnCriteria()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnCriteria;
}
constexpr ::UnityW<::GlobalNamespace::CritterSpawnCriteria> const& GlobalNamespace::CritterConfiguration::__cordl_internal_get_spawnCriteria() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnCriteria;
}
constexpr void GlobalNamespace::CritterConfiguration::__cordl_internal_set_spawnCriteria(::UnityW<::GlobalNamespace::CritterSpawnCriteria>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnCriteria = value;
}
constexpr ::UnityW<::GlobalNamespace::RealWorldDateTimeWindow>& GlobalNamespace::CritterConfiguration::__cordl_internal_get_dateLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dateLimit;
}
constexpr ::UnityW<::GlobalNamespace::RealWorldDateTimeWindow> const& GlobalNamespace::CritterConfiguration::__cordl_internal_get_dateLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dateLimit;
}
constexpr void GlobalNamespace::CritterConfiguration::__cordl_internal_set_dateLimit(::UnityW<::GlobalNamespace::RealWorldDateTimeWindow>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dateLimit = value;
}
constexpr ::GlobalNamespace::CrittersBiome& GlobalNamespace::CritterConfiguration::__cordl_internal_get_biome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___biome;
}
constexpr ::GlobalNamespace::CrittersBiome const& GlobalNamespace::CritterConfiguration::__cordl_internal_get_biome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___biome;
}
constexpr void GlobalNamespace::CritterConfiguration::__cordl_internal_set_biome(::GlobalNamespace::CrittersBiome  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___biome = value;
}
constexpr float_t& GlobalNamespace::CritterConfiguration::__cordl_internal_get_spawnWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnWeight;
}
constexpr float_t const& GlobalNamespace::CritterConfiguration::__cordl_internal_get_spawnWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnWeight;
}
constexpr void GlobalNamespace::CritterConfiguration::__cordl_internal_set_spawnWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnWeight = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::CritterConfiguration::__cordl_internal_get_critterMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::CritterConfiguration::__cordl_internal_get_critterMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterMat;
}
constexpr void GlobalNamespace::CritterConfiguration::__cordl_internal_set_critterMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___critterMat = value;
}
inline void GlobalNamespace::CritterConfiguration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CritterConfiguration::GetIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"GetIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::CritterConfiguration::RegionMatches(::GlobalNamespace::CrittersRegion*  region)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"RegionMatches", {}, {::i2c::type_of<::GlobalNamespace::CrittersRegion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, region);
}
inline bool GlobalNamespace::CritterConfiguration::SpawnCriteriaMatches()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"SpawnCriteriaMatches", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CritterConfiguration::CanSpawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"CanSpawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CritterConfiguration::CanSpawn(::GlobalNamespace::CrittersRegion*  region)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"CanSpawn", {}, {::i2c::type_of<::GlobalNamespace::CrittersRegion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, region);
}
inline bool GlobalNamespace::CritterConfiguration::DateConditionsMet(::System::DateTime  utcDate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"DateConditionsMet", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, utcDate);
}
inline bool GlobalNamespace::CritterConfiguration::ShouldDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"ShouldDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CritterConfiguration::ApplyToCreature(::GlobalNamespace::CrittersPawn*  crittersPawn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"ApplyToCreature", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crittersPawn);
}
inline void GlobalNamespace::CritterConfiguration::ApplyVisualsTo(::GlobalNamespace::CrittersPawn*  critter, bool  generateAppearance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"ApplyVisualsTo", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critter, generateAppearance);
}
inline void GlobalNamespace::CritterConfiguration::ApplyVisualsTo(::GlobalNamespace::CritterVisuals*  visuals, bool  generateAppearance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"ApplyVisualsTo", {}, {::i2c::type_of<::GlobalNamespace::CritterVisuals*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visuals, generateAppearance);
}
inline ::GlobalNamespace::CritterAppearance GlobalNamespace::CritterConfiguration::GenerateAppearance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(),
                        {"GenerateAppearance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CritterAppearance>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CritterConfiguration::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CritterConfiguration*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::CritterConfiguration* GlobalNamespace::CritterConfiguration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CritterConfiguration*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CritterConfiguration::CritterConfiguration()   {
}
