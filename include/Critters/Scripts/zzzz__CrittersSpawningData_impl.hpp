#pragma once
// IWYU pragma private; include "Critters/Scripts/CrittersSpawningData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Critters/Scripts/zzzz__CrittersSpawningData_def.hpp"
#include "Critters/Scripts/zzzz__CrittersSpawningData_def.hpp"
#include "GlobalNamespace/zzzz__CritterTemplate_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Critters::Scripts::CrittersSpawningData.InitializeSpawnCollection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersSpawningData::*)()>(&::Critters::Scripts::CrittersSpawningData::InitializeSpawnCollection)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5dddb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersSpawningData*>(),
                        {"InitializeSpawnCollection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Critters::Scripts::CrittersSpawningData.GetRandomTemplate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Critters::Scripts::CrittersSpawningData::*)()>(&::Critters::Scripts::CrittersSpawningData::GetRandomTemplate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5dddc34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersSpawningData*>(),
                        {"GetRandomTemplate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Critters::Scripts::CrittersSpawningData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersSpawningData::*)()>(&::Critters::Scripts::CrittersSpawningData::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5dddcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersSpawningData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters*>*& Critters::Scripts::CrittersSpawningData::__cordl_internal_get_SpawnParametersList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnParametersList;
}
constexpr ::System::Collections::Generic::List_1<::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters*>* const& Critters::Scripts::CrittersSpawningData::__cordl_internal_get_SpawnParametersList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnParametersList;
}
constexpr void Critters::Scripts::CrittersSpawningData::__cordl_internal_set_SpawnParametersList(::System::Collections::Generic::List_1<::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpawnParametersList = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Critters::Scripts::CrittersSpawningData::__cordl_internal_get_templateCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateCollection;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Critters::Scripts::CrittersSpawningData::__cordl_internal_get_templateCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateCollection;
}
constexpr void Critters::Scripts::CrittersSpawningData::__cordl_internal_set_templateCollection(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___templateCollection = value;
}
inline void Critters::Scripts::CrittersSpawningData::InitializeSpawnCollection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersSpawningData*>(),
                        {"InitializeSpawnCollection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Critters::Scripts::CrittersSpawningData::GetRandomTemplate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersSpawningData*>(),
                        {"GetRandomTemplate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Critters::Scripts::CrittersSpawningData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersSpawningData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Critters::Scripts::CrittersSpawningData* Critters::Scripts::CrittersSpawningData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Critters::Scripts::CrittersSpawningData*>());
}
// Ctor Parameters []
constexpr ::Critters::Scripts::CrittersSpawningData::CrittersSpawningData()   {
}
//  Writing Method size for method: ::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters::*)()>(&::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dddd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CritterTemplate>& Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters::__cordl_internal_get_Template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Template;
}
constexpr ::UnityW<::GlobalNamespace::CritterTemplate> const& Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters::__cordl_internal_get_Template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Template;
}
constexpr void Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters::__cordl_internal_set_Template(::UnityW<::GlobalNamespace::CritterTemplate>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Template = value;
}
constexpr int32_t& Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters::__cordl_internal_get_ChancesToSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChancesToSpawn;
}
constexpr int32_t const& Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters::__cordl_internal_get_ChancesToSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChancesToSpawn;
}
constexpr void Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters::__cordl_internal_set_ChancesToSpawn(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ChancesToSpawn = value;
}
constexpr int32_t& Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters::__cordl_internal_get_StartingIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartingIndex;
}
constexpr int32_t const& Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters::__cordl_internal_get_StartingIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartingIndex;
}
constexpr void Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters::__cordl_internal_set_StartingIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartingIndex = value;
}
inline void Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters* Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters*>());
}
// Ctor Parameters []
constexpr ::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters::CrittersSpawningData_CreatureSpawnParameters()   {
}
