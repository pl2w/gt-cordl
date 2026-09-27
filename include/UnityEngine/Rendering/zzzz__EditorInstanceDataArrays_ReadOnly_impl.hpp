#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/EditorInstanceDataArrays_ReadOnly.hpp"
#include "UnityEngine/Rendering/zzzz__EditorInstanceDataArrays_ReadOnly_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EditorInstanceDataArrays_ReadOnly._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditorInstanceDataArrays_ReadOnly::*)(::by_ref<::UnityEngine::Rendering::CPUInstanceData>)>(&::GlobalNamespace::EditorInstanceDataArrays_ReadOnly::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb1ffaec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EditorInstanceDataArrays_ReadOnly>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EditorInstanceDataArrays_ReadOnly::_ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EditorInstanceDataArrays_ReadOnly>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EditorInstanceDataArrays_ReadOnly::EditorInstanceDataArrays_ReadOnly()   {
}
