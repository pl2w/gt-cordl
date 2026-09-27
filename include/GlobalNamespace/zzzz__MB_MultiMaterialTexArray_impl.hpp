#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_MultiMaterialTexArray.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MB_MultiMaterialTexArray_def.hpp"
#include "GlobalNamespace/zzzz__MB_TexArrayForProperty_def.hpp"
#include "GlobalNamespace/zzzz__MB_TexArraySlice_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_MultiMaterialTexArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_MultiMaterialTexArray::*)()>(&::GlobalNamespace::MB_MultiMaterialTexArray::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9d729cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_MultiMaterialTexArray*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MB_MultiMaterialTexArray::__cordl_internal_get_combinedMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combinedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MB_MultiMaterialTexArray::__cordl_internal_get_combinedMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combinedMaterial;
}
constexpr void GlobalNamespace::MB_MultiMaterialTexArray::__cordl_internal_set_combinedMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combinedMaterial = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySlice*>*& GlobalNamespace::MB_MultiMaterialTexArray::__cordl_internal_get_slices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slices;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySlice*>* const& GlobalNamespace::MB_MultiMaterialTexArray::__cordl_internal_get_slices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slices;
}
constexpr void GlobalNamespace::MB_MultiMaterialTexArray::__cordl_internal_set_slices(::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySlice*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slices = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArrayForProperty*>*& GlobalNamespace::MB_MultiMaterialTexArray::__cordl_internal_get_textureProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureProperties;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArrayForProperty*>* const& GlobalNamespace::MB_MultiMaterialTexArray::__cordl_internal_get_textureProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureProperties;
}
constexpr void GlobalNamespace::MB_MultiMaterialTexArray::__cordl_internal_set_textureProperties(::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArrayForProperty*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureProperties = value;
}
inline void GlobalNamespace::MB_MultiMaterialTexArray::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_MultiMaterialTexArray*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_MultiMaterialTexArray* GlobalNamespace::MB_MultiMaterialTexArray::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_MultiMaterialTexArray*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_MultiMaterialTexArray::MB_MultiMaterialTexArray()   {
}
