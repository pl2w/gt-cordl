#pragma once
// IWYU pragma private; include "GlobalNamespace/CritterIndex.hpp"
#include "GlobalNamespace/zzzz__CritterConfiguration_AnimalType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__CritterIndex_def.hpp"
#include "GlobalNamespace/zzzz__CritterConfiguration_AnimalType_def.hpp"
#include "GlobalNamespace/zzzz__CritterConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__CritterIndex_def.hpp"
#include "GlobalNamespace/zzzz__CrittersRegion_def.hpp"
#include "GlobalNamespace/zzzz__WeightedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CritterIndex.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CritterConfiguration* (::GlobalNamespace::CritterIndex::*)(int32_t)>(&::GlobalNamespace::CritterIndex::get_Item)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x55f0be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterIndex*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterIndex.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CritterIndex::*)()>(&::GlobalNamespace::CritterIndex::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x55f0c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterIndex*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterIndex.GetMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::GlobalNamespace::CritterConfiguration_AnimalType)>(&::GlobalNamespace::CritterIndex::GetMesh)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x55f0930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterIndex*>(),
                        {"GetMesh", {}, {::i2c::type_of<::GlobalNamespace::CritterConfiguration_AnimalType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterIndex.GetRandomCritterType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CritterIndex::*)(::GlobalNamespace::CrittersRegion*)>(&::GlobalNamespace::CritterIndex::GetRandomCritterType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x55f0cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterIndex*>(),
                        {"GetRandomCritterType", {}, {::i2c::type_of<::GlobalNamespace::CrittersRegion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterIndex.GetRandomConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CritterConfiguration* (::GlobalNamespace::CritterIndex::*)(::GlobalNamespace::CrittersRegion*)>(&::GlobalNamespace::CritterIndex::GetRandomConfiguration)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x55f0d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterIndex*>(),
                        {"GetRandomConfiguration", {}, {::i2c::type_of<::GlobalNamespace::CrittersRegion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterIndex.GetCritterDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)()>(&::GlobalNamespace::CritterIndex::GetCritterDateTime)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55f0fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterIndex*>(),
                        {"GetCritterDateTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterIndex.GetValidCritterTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::WeightedList_1<::GlobalNamespace::CritterConfiguration*>* (::GlobalNamespace::CritterIndex::*)(::GlobalNamespace::CrittersRegion*)>(&::GlobalNamespace::CritterIndex::GetValidCritterTypes)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x55f0db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterIndex*>(),
                        {"GetValidCritterTypes", {}, {::i2c::type_of<::GlobalNamespace::CrittersRegion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterIndex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CritterIndex::*)()>(&::GlobalNamespace::CritterIndex::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x55f1094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterIndex*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry*>*& GlobalNamespace::CritterIndex::__cordl_internal_get_animalMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animalMeshes;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry*>* const& GlobalNamespace::CritterIndex::__cordl_internal_get_animalMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animalMeshes;
}
constexpr void GlobalNamespace::CritterIndex::__cordl_internal_set_animalMeshes(::System::Collections::Generic::List_1<::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animalMeshes = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CritterConfiguration*>*& GlobalNamespace::CritterIndex::__cordl_internal_get_critterTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterTypes;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CritterConfiguration*>* const& GlobalNamespace::CritterIndex::__cordl_internal_get_critterTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterTypes;
}
constexpr void GlobalNamespace::CritterIndex::__cordl_internal_set_critterTypes(::System::Collections::Generic::List_1<::GlobalNamespace::CritterConfiguration*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___critterTypes = value;
}
constexpr ::GlobalNamespace::WeightedList_1<::GlobalNamespace::CritterConfiguration*>*& GlobalNamespace::CritterIndex::__cordl_internal_get__currentConfigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentConfigs;
}
constexpr ::GlobalNamespace::WeightedList_1<::GlobalNamespace::CritterConfiguration*>* const& GlobalNamespace::CritterIndex::__cordl_internal_get__currentConfigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentConfigs;
}
constexpr void GlobalNamespace::CritterIndex::__cordl_internal_set__currentConfigs(::GlobalNamespace::WeightedList_1<::GlobalNamespace::CritterConfiguration*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentConfigs = value;
}
inline void GlobalNamespace::CritterIndex::setStaticF__instance(::UnityW<::GlobalNamespace::CritterIndex>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::CritterIndex>, "_instance", ::GlobalNamespace::CritterIndex*>(std::forward<::UnityW<::GlobalNamespace::CritterIndex>>(value));
}
inline ::UnityW<::GlobalNamespace::CritterIndex> GlobalNamespace::CritterIndex::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::CritterIndex>, "_instance", ::GlobalNamespace::CritterIndex*>();
}
inline ::GlobalNamespace::CritterConfiguration* GlobalNamespace::CritterIndex::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterIndex*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CritterConfiguration*>(this, ___internal_method, index);
}
inline void GlobalNamespace::CritterIndex::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterIndex*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> GlobalNamespace::CritterIndex::GetMesh(::GlobalNamespace::CritterConfiguration_AnimalType  animalType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterIndex*>(),
                        {"GetMesh", {}, {::i2c::type_of<::GlobalNamespace::CritterConfiguration_AnimalType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, animalType);
}
inline int32_t GlobalNamespace::CritterIndex::GetRandomCritterType(::GlobalNamespace::CrittersRegion*  region)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterIndex*>(),
                        {"GetRandomCritterType", {}, {::i2c::type_of<::GlobalNamespace::CrittersRegion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, region);
}
inline ::GlobalNamespace::CritterConfiguration* GlobalNamespace::CritterIndex::GetRandomConfiguration(::GlobalNamespace::CrittersRegion*  region)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterIndex*>(),
                        {"GetRandomConfiguration", {}, {::i2c::type_of<::GlobalNamespace::CrittersRegion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CritterConfiguration*>(this, ___internal_method, region);
}
inline ::System::DateTime GlobalNamespace::CritterIndex::GetCritterDateTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterIndex*>(),
                        {"GetCritterDateTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::WeightedList_1<::GlobalNamespace::CritterConfiguration*>* GlobalNamespace::CritterIndex::GetValidCritterTypes(::GlobalNamespace::CrittersRegion*  region)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterIndex*>(),
                        {"GetValidCritterTypes", {}, {::i2c::type_of<::GlobalNamespace::CrittersRegion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WeightedList_1<::GlobalNamespace::CritterConfiguration*>*>(this, ___internal_method, region);
}
inline void GlobalNamespace::CritterIndex::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterIndex*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CritterIndex* GlobalNamespace::CritterIndex::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CritterIndex*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CritterIndex::CritterIndex()   {
}
//  Writing Method size for method: ::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry::*)()>(&::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55f1170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CritterConfiguration_AnimalType& GlobalNamespace::CritterIndex_AnimalTypeMeshEntry::__cordl_internal_get_animalType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animalType;
}
constexpr ::GlobalNamespace::CritterConfiguration_AnimalType const& GlobalNamespace::CritterIndex_AnimalTypeMeshEntry::__cordl_internal_get_animalType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animalType;
}
constexpr void GlobalNamespace::CritterIndex_AnimalTypeMeshEntry::__cordl_internal_set_animalType(::GlobalNamespace::CritterConfiguration_AnimalType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animalType = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::CritterIndex_AnimalTypeMeshEntry::__cordl_internal_get_mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::CritterIndex_AnimalTypeMeshEntry::__cordl_internal_get_mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr void GlobalNamespace::CritterIndex_AnimalTypeMeshEntry::__cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mesh = value;
}
inline void GlobalNamespace::CritterIndex_AnimalTypeMeshEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry* GlobalNamespace::CritterIndex_AnimalTypeMeshEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry::CritterIndex_AnimalTypeMeshEntry()   {
}
