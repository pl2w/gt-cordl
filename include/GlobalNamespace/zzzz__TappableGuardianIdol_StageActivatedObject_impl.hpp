#pragma once
// IWYU pragma private; include "GlobalNamespace/TappableGuardianIdol_StageActivatedObject.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "GlobalNamespace/zzzz__TappableGuardianIdol_StageActivatedObject_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol_StageActivatedObject.UpdateActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol_StageActivatedObject::*)(int32_t)>(&::GlobalNamespace::TappableGuardianIdol_StageActivatedObject::UpdateActiveState)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x598e050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol_StageActivatedObject>(),
                        {"UpdateActiveState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TappableGuardianIdol_StageActivatedObject::UpdateActiveState(int32_t  stage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol_StageActivatedObject>(),
                        {"UpdateActiveState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stage);
}
// Ctor Parameters [CppParam { name: "objects", ty: "::ArrayW<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "min", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "max", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TappableGuardianIdol_StageActivatedObject::TappableGuardianIdol_StageActivatedObject(::ArrayW<::UnityW<::UnityEngine::GameObject>>  objects, int32_t  min, int32_t  max) noexcept  {
this->objects = objects;
this->min = min;
this->max = max;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TappableGuardianIdol_StageActivatedObject::TappableGuardianIdol_StageActivatedObject()   {
}
