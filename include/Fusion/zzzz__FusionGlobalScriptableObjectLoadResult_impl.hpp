#pragma once
// IWYU pragma private; include "Fusion/FusionGlobalScriptableObjectLoadResult.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObjectLoadResult_def.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObjectUnloadDelegate_def.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObject_def.hpp"
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectLoadResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionGlobalScriptableObjectLoadResult::*)(::Fusion::FusionGlobalScriptableObject*, ::Fusion::FusionGlobalScriptableObjectUnloadDelegate*)>(&::Fusion::FusionGlobalScriptableObjectLoadResult::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f3e6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectLoadResult>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::FusionGlobalScriptableObject*>(), ::i2c::type_of<::Fusion::FusionGlobalScriptableObjectUnloadDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::FusionGlobalScriptableObjectLoadResult::_ctor(::Fusion::FusionGlobalScriptableObject*  obj, ::Fusion::FusionGlobalScriptableObjectUnloadDelegate*  unloader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectLoadResult>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::FusionGlobalScriptableObject*>(), ::i2c::type_of<::Fusion::FusionGlobalScriptableObjectUnloadDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, obj, unloader);
}
// Ctor Parameters [CppParam { name: "Object", ty: "::UnityW<::Fusion::FusionGlobalScriptableObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Unloader", ty: "::Fusion::FusionGlobalScriptableObjectUnloadDelegate*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::FusionGlobalScriptableObjectLoadResult::FusionGlobalScriptableObjectLoadResult(::UnityW<::Fusion::FusionGlobalScriptableObject>  Object, ::Fusion::FusionGlobalScriptableObjectUnloadDelegate*  Unloader) noexcept  {
this->Object = Object;
this->Unloader = Unloader;
}
// Ctor Parameters []
constexpr ::Fusion::FusionGlobalScriptableObjectLoadResult::FusionGlobalScriptableObjectLoadResult()   {
}
