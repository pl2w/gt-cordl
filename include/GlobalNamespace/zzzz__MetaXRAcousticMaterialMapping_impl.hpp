#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticMaterialMapping.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticMaterialMapping_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticMaterialMapping_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticMaterialProperties_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialMapping.findAcousticMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties> (::GlobalNamespace::MetaXRAcousticMaterialMapping::*)(::UnityEngine::PhysicsMaterial*)>(&::GlobalNamespace::MetaXRAcousticMaterialMapping::findAcousticMaterial)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9ea5e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialMapping*>(),
                        {"findAcousticMaterial", {}, {::i2c::type_of<::UnityEngine::PhysicsMaterial*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialMapping.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MetaXRAcousticMaterialMapping> (*)()>(&::GlobalNamespace::MetaXRAcousticMaterialMapping::get_Instance)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9ea5ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialMapping*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMaterialMapping::*)()>(&::GlobalNamespace::MetaXRAcousticMaterialMapping::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea9780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialMapping*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair*>& GlobalNamespace::MetaXRAcousticMaterialMapping::__cordl_internal_get_mapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapping;
}
constexpr ::ArrayW<::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair*> const& GlobalNamespace::MetaXRAcousticMaterialMapping::__cordl_internal_get_mapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapping;
}
constexpr void GlobalNamespace::MetaXRAcousticMaterialMapping::__cordl_internal_set_mapping(::ArrayW<::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapping = value;
}
constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>& GlobalNamespace::MetaXRAcousticMaterialMapping::__cordl_internal_get_fallbackMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackMaterial;
}
constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties> const& GlobalNamespace::MetaXRAcousticMaterialMapping::__cordl_internal_get_fallbackMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackMaterial;
}
constexpr void GlobalNamespace::MetaXRAcousticMaterialMapping::__cordl_internal_set_fallbackMaterial(::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallbackMaterial = value;
}
inline void GlobalNamespace::MetaXRAcousticMaterialMapping::setStaticF_instance(::UnityW<::GlobalNamespace::MetaXRAcousticMaterialMapping>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::MetaXRAcousticMaterialMapping>, "instance", ::GlobalNamespace::MetaXRAcousticMaterialMapping*>(std::forward<::UnityW<::GlobalNamespace::MetaXRAcousticMaterialMapping>>(value));
}
inline ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialMapping> GlobalNamespace::MetaXRAcousticMaterialMapping::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::MetaXRAcousticMaterialMapping>, "instance", ::GlobalNamespace::MetaXRAcousticMaterialMapping*>();
}
inline ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties> GlobalNamespace::MetaXRAcousticMaterialMapping::findAcousticMaterial(::UnityEngine::PhysicsMaterial*  pmat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialMapping*>(),
                        {"findAcousticMaterial", {}, {::i2c::type_of<::UnityEngine::PhysicsMaterial*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>>(this, ___internal_method, pmat);
}
inline ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialMapping> GlobalNamespace::MetaXRAcousticMaterialMapping::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialMapping*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MetaXRAcousticMaterialMapping>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMaterialMapping::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialMapping*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAcousticMaterialMapping* GlobalNamespace::MetaXRAcousticMaterialMapping::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticMaterialMapping*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticMaterialMapping::MetaXRAcousticMaterialMapping()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0::*)()>(&::GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea9778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0._findAcousticMaterial_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0::*)(::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair*)>(&::GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0::_findAcousticMaterial_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ea9790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0*>(),
                        {"<findAcousticMaterial>b__0", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0::__cordl_internal_get_pmat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pmat;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0::__cordl_internal_get_pmat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pmat;
}
constexpr void GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0::__cordl_internal_set_pmat(::UnityW<::UnityEngine::PhysicsMaterial>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pmat = value;
}
inline void GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0::_findAcousticMaterial_b__0(::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair*  pair)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0*>(),
                        {"<findAcousticMaterial>b__0", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pair);
}
inline ::GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0* GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0::MetaXRAcousticMaterialMapping___c__DisplayClass0_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair::*)()>(&::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea9788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& GlobalNamespace::MetaXRAcousticMaterialMapping_Pair::__cordl_internal_get_physicMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___physicMaterial;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& GlobalNamespace::MetaXRAcousticMaterialMapping_Pair::__cordl_internal_get_physicMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___physicMaterial;
}
constexpr void GlobalNamespace::MetaXRAcousticMaterialMapping_Pair::__cordl_internal_set_physicMaterial(::UnityW<::UnityEngine::PhysicsMaterial>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___physicMaterial = value;
}
constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>& GlobalNamespace::MetaXRAcousticMaterialMapping_Pair::__cordl_internal_get_acousticMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acousticMaterial;
}
constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties> const& GlobalNamespace::MetaXRAcousticMaterialMapping_Pair::__cordl_internal_get_acousticMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acousticMaterial;
}
constexpr void GlobalNamespace::MetaXRAcousticMaterialMapping_Pair::__cordl_internal_set_acousticMaterial(::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acousticMaterial = value;
}
inline void GlobalNamespace::MetaXRAcousticMaterialMapping_Pair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair* GlobalNamespace::MetaXRAcousticMaterialMapping_Pair::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair::MetaXRAcousticMaterialMapping_Pair()   {
}
