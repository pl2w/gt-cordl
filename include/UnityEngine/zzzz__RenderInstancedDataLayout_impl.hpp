#pragma once
// IWYU pragma private; include "UnityEngine/RenderInstancedDataLayout.hpp"
#include "UnityEngine/zzzz__RenderInstancedDataLayout_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::RenderInstancedDataLayout._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderInstancedDataLayout::*)(::System::Type*)>(&::UnityEngine::RenderInstancedDataLayout::_ctor)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xb57e670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderInstancedDataLayout>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::RenderInstancedDataLayout::_ctor(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderInstancedDataLayout>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, t);
}
// Ctor Parameters [CppParam { name: "_size_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_offsetObjectToWorld_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_offsetPrevObjectToWorld_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_offsetRenderingLayerMask_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::RenderInstancedDataLayout::RenderInstancedDataLayout(int32_t  _size_k__BackingField, int32_t  _offsetObjectToWorld_k__BackingField, int32_t  _offsetPrevObjectToWorld_k__BackingField, int32_t  _offsetRenderingLayerMask_k__BackingField) noexcept  {
this->_size_k__BackingField = _size_k__BackingField;
this->_offsetObjectToWorld_k__BackingField = _offsetObjectToWorld_k__BackingField;
this->_offsetPrevObjectToWorld_k__BackingField = _offsetPrevObjectToWorld_k__BackingField;
this->_offsetRenderingLayerMask_k__BackingField = _offsetRenderingLayerMask_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::RenderInstancedDataLayout::RenderInstancedDataLayout()   {
}
