#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_TexArraySlice.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MB_TexArraySlice_def.hpp"
#include "GlobalNamespace/zzzz__MB_TexArraySliceRendererMatPair_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_TexArraySlice.ContainsMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB_TexArraySlice::*)(::UnityEngine::Material*)>(&::GlobalNamespace::MB_TexArraySlice::ContainsMaterial)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d722dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TexArraySlice*>(),
                        {"ContainsMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_TexArraySlice.GetDistinctMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>* (::GlobalNamespace::MB_TexArraySlice::*)()>(&::GlobalNamespace::MB_TexArraySlice::GetDistinctMaterials)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d723bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TexArraySlice*>(),
                        {"GetDistinctMaterials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_TexArraySlice.ContainsMaterialAndMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB_TexArraySlice::*)(::UnityEngine::Material*, ::UnityEngine::Mesh*)>(&::GlobalNamespace::MB_TexArraySlice::ContainsMaterialAndMesh)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9d724b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TexArraySlice*>(),
                        {"ContainsMaterialAndMesh", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_TexArraySlice.GetAllUsedMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* (::GlobalNamespace::MB_TexArraySlice::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*)>(&::GlobalNamespace::MB_TexArraySlice::GetAllUsedMaterials)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9d725ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TexArraySlice*>(),
                        {"GetAllUsedMaterials", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_TexArraySlice.GetAllUsedRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (::GlobalNamespace::MB_TexArraySlice::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::GlobalNamespace::MB_TexArraySlice::GetAllUsedRenderers)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9d72720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TexArraySlice*>(),
                        {"GetAllUsedRenderers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_TexArraySlice._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_TexArraySlice::*)()>(&::GlobalNamespace::MB_TexArraySlice::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9d72868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TexArraySlice*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MB_TexArraySlice::__cordl_internal_get_considerMeshUVs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___considerMeshUVs;
}
constexpr bool const& GlobalNamespace::MB_TexArraySlice::__cordl_internal_get_considerMeshUVs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___considerMeshUVs;
}
constexpr void GlobalNamespace::MB_TexArraySlice::__cordl_internal_set_considerMeshUVs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___considerMeshUVs = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySliceRendererMatPair*>*& GlobalNamespace::MB_TexArraySlice::__cordl_internal_get_sourceMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterials;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySliceRendererMatPair*>* const& GlobalNamespace::MB_TexArraySlice::__cordl_internal_get_sourceMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterials;
}
constexpr void GlobalNamespace::MB_TexArraySlice::__cordl_internal_set_sourceMaterials(::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySliceRendererMatPair*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMaterials = value;
}
inline bool GlobalNamespace::MB_TexArraySlice::ContainsMaterial(::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TexArraySlice*>(),
                        {"ContainsMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mat);
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>* GlobalNamespace::MB_TexArraySlice::GetDistinctMaterials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TexArraySlice*>(),
                        {"GetDistinctMaterials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>*>(this, ___internal_method);
}
inline bool GlobalNamespace::MB_TexArraySlice::ContainsMaterialAndMesh(::UnityEngine::Material*  mat, ::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TexArraySlice*>(),
                        {"ContainsMaterialAndMesh", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mat, mesh);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* GlobalNamespace::MB_TexArraySlice::GetAllUsedMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  usedMats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TexArraySlice*>(),
                        {"GetAllUsedMaterials", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(this, ___internal_method, usedMats);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::MB_TexArraySlice::GetAllUsedRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  allObjsFromTextureBaker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TexArraySlice*>(),
                        {"GetAllUsedRenderers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method, allObjsFromTextureBaker);
}
inline void GlobalNamespace::MB_TexArraySlice::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TexArraySlice*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_TexArraySlice* GlobalNamespace::MB_TexArraySlice::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_TexArraySlice*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_TexArraySlice::MB_TexArraySlice()   {
}
