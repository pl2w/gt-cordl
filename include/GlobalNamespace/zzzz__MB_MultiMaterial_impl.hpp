#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_MultiMaterial.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MB_MultiMaterial_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_MultiMaterial._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_MultiMaterial::*)()>(&::GlobalNamespace::MB_MultiMaterial::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9d7224c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_MultiMaterial*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MB_MultiMaterial::__cordl_internal_get_combinedMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combinedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MB_MultiMaterial::__cordl_internal_get_combinedMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combinedMaterial;
}
constexpr void GlobalNamespace::MB_MultiMaterial::__cordl_internal_set_combinedMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combinedMaterial = value;
}
constexpr bool& GlobalNamespace::MB_MultiMaterial::__cordl_internal_get_considerMeshUVs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___considerMeshUVs;
}
constexpr bool const& GlobalNamespace::MB_MultiMaterial::__cordl_internal_get_considerMeshUVs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___considerMeshUVs;
}
constexpr void GlobalNamespace::MB_MultiMaterial::__cordl_internal_set_considerMeshUVs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___considerMeshUVs = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& GlobalNamespace::MB_MultiMaterial::__cordl_internal_get_sourceMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterials;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& GlobalNamespace::MB_MultiMaterial::__cordl_internal_get_sourceMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterials;
}
constexpr void GlobalNamespace::MB_MultiMaterial::__cordl_internal_set_sourceMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMaterials = value;
}
inline void GlobalNamespace::MB_MultiMaterial::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_MultiMaterial*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_MultiMaterial* GlobalNamespace::MB_MultiMaterial::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_MultiMaterial*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_MultiMaterial::MB_MultiMaterial()   {
}
