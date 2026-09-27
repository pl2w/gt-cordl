#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_AtlasesAndRects.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
#include "GlobalNamespace/zzzz__MB_AtlasesAndRects_def.hpp"
#include "GlobalNamespace/zzzz__MB_MaterialAndUVRect_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_AtlasesAndRects._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_AtlasesAndRects::*)()>(&::GlobalNamespace::MB_AtlasesAndRects::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7223c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_AtlasesAndRects*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& GlobalNamespace::MB_AtlasesAndRects::__cordl_internal_get_atlases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlases;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& GlobalNamespace::MB_AtlasesAndRects::__cordl_internal_get_atlases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlases;
}
constexpr void GlobalNamespace::MB_AtlasesAndRects::__cordl_internal_set_atlases(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atlases = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_MaterialAndUVRect*>*& GlobalNamespace::MB_AtlasesAndRects::__cordl_internal_get_mat2rect_map()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mat2rect_map;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_MaterialAndUVRect*>* const& GlobalNamespace::MB_AtlasesAndRects::__cordl_internal_get_mat2rect_map() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mat2rect_map;
}
constexpr void GlobalNamespace::MB_AtlasesAndRects::__cordl_internal_set_mat2rect_map(::System::Collections::Generic::List_1<::GlobalNamespace::MB_MaterialAndUVRect*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mat2rect_map = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::MB_AtlasesAndRects::__cordl_internal_get_texPropertyNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texPropertyNames;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::MB_AtlasesAndRects::__cordl_internal_get_texPropertyNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texPropertyNames;
}
constexpr void GlobalNamespace::MB_AtlasesAndRects::__cordl_internal_set_texPropertyNames(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texPropertyNames = value;
}
inline void GlobalNamespace::MB_AtlasesAndRects::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_AtlasesAndRects*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_AtlasesAndRects* GlobalNamespace::MB_AtlasesAndRects::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_AtlasesAndRects*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_AtlasesAndRects::MB_AtlasesAndRects()   {
}
