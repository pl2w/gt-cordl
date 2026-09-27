#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/Allocator2D_Alloc2D.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_impl.hpp"
#include "UnityEngine/zzzz__RectInt_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Allocator2D_Alloc2D_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Allocator2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Allocator2D_Alloc2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Allocator2D_Alloc2D::*)(::UnityEngine::UIElements::UIR::Allocator2D_Row*, ::UnityEngine::UIElements::UIR::Alloc, int32_t, int32_t)>(&::GlobalNamespace::Allocator2D_Alloc2D::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb7cd3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator2D_Alloc2D>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::Allocator2D_Row*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::Alloc>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Allocator2D_Alloc2D::_ctor(::UnityEngine::UIElements::UIR::Allocator2D_Row*  row, ::UnityEngine::UIElements::UIR::Alloc  alloc, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator2D_Alloc2D>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::Allocator2D_Row*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::Alloc>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, row, alloc, width, height);
}
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::RectInt", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "row", ty: "::UnityEngine::UIElements::UIR::Allocator2D_Row*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "alloc", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Allocator2D_Alloc2D::Allocator2D_Alloc2D(::UnityEngine::RectInt  rect, ::UnityEngine::UIElements::UIR::Allocator2D_Row*  row, ::UnityEngine::UIElements::UIR::Alloc  alloc) noexcept  {
this->rect = rect;
this->row = row;
this->alloc = alloc;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Allocator2D_Alloc2D::Allocator2D_Alloc2D()   {
}
