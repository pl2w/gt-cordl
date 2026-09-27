#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/CustomizerPutSliceIndexInUV0_z.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_DefaultMeshAssignCustomizer_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__CustomizerPutSliceIndexInUV0_z_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_IMeshBakerSettings_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z.meshAssign_UV0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z::*)(int32_t, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::GlobalNamespace::MB2_TextureBakeResults*, ::UnityEngine::Mesh*, ::ArrayW<::UnityEngine::Vector2>, ::ArrayW<float_t>)>(&::DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z::meshAssign_UV0)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x9d7e560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z::*)()>(&::DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7e768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z::meshAssign_UV0(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<float_t>  sliceIndexes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, settings, textureBakeResults, mesh, uvs, sliceIndexes);
}
inline void DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z* DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::CustomizerPutSliceIndexInUV0_z::CustomizerPutSliceIndexInUV0_z()   {
}
