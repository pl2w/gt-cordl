#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/CustomizerNativeArrayPutSliceIndexInUV0_z.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_DefaultMeshAssignCustomizer_NativeArray_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__CustomizerNativeArrayPutSliceIndexInUV0_z_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_IMeshBakerSettings_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z.UVchannelWithExtraParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z::*)()>(&::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z::UVchannelWithExtraParameter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7e3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z.meshAssign_UV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z::*)(int32_t, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::GlobalNamespace::MB2_TextureBakeResults*, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<float_t>)>(&::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z::meshAssign_UV)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x9d7e3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z::*)()>(&::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7e558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z::UVchannelWithExtraParameter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z::meshAssign_UV(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  outUVsInMesh, ::Unity::Collections::NativeSlice_1<float_t>  sliceIndexes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, settings, textureBakeResults, outUVsInMesh, sliceIndexes);
}
inline void DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z* DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::CustomizerNativeArrayPutSliceIndexInUV0_z::CustomizerNativeArrayPutSliceIndexInUV0_z()   {
}
