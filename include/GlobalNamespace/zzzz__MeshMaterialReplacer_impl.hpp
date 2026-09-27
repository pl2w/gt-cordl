#pragma once
// IWYU pragma private; include "GlobalNamespace/MeshMaterialReplacer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MeshMaterialReplacer_def.hpp"
#include "GameObjectScheduling/zzzz__MeshMaterialReplacement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MeshMaterialReplacer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshMaterialReplacer::*)()>(&::GlobalNamespace::MeshMaterialReplacer::Start)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x56d1f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshMaterialReplacer*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshMaterialReplacer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshMaterialReplacer::*)()>(&::GlobalNamespace::MeshMaterialReplacer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d2014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshMaterialReplacer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GameObjectScheduling::MeshMaterialReplacement>& GlobalNamespace::MeshMaterialReplacer::__cordl_internal_get_meshMaterialReplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshMaterialReplacement;
}
constexpr ::UnityW<::GameObjectScheduling::MeshMaterialReplacement> const& GlobalNamespace::MeshMaterialReplacer::__cordl_internal_get_meshMaterialReplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshMaterialReplacement;
}
constexpr void GlobalNamespace::MeshMaterialReplacer::__cordl_internal_set_meshMaterialReplacement(::UnityW<::GameObjectScheduling::MeshMaterialReplacement>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshMaterialReplacement = value;
}
inline void GlobalNamespace::MeshMaterialReplacer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshMaterialReplacer*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MeshMaterialReplacer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshMaterialReplacer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MeshMaterialReplacer* GlobalNamespace::MeshMaterialReplacer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MeshMaterialReplacer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshMaterialReplacer::MeshMaterialReplacer()   {
}
