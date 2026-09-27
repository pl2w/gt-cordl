#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/IAssignToMeshCustomizer_NativeArrays.hpp"
#include "DigitalOpus/MB/Core/zzzz__IAssignToMeshCustomizer_NativeArrays_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__IAssignToMeshCustomizer_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_IMeshBakerSettings_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays.UVchannelWithExtraParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays::*)()>(&::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays::UVchannelWithExtraParameter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays.meshAssign_UV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays::*)(int32_t, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::GlobalNamespace::MB2_TextureBakeResults*, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<float_t>)>(&::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays::meshAssign_UV)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays.meshAssign_colors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays::*)(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::GlobalNamespace::MB2_TextureBakeResults*, ::Unity::Collections::NativeSlice_1<::UnityEngine::Color>, ::Unity::Collections::NativeSlice_1<float_t>)>(&::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays::meshAssign_colors)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays*>(), 2}
                ));
    return ___internal_method;
  }
};
inline int32_t DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays::UVchannelWithExtraParameter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays::meshAssign_UV(int32_t  channel_0_to_7, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  outUVsInMesh, ::Unity::Collections::NativeSlice_1<float_t>  sliceIndexes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel_0_to_7, settings, textureBakeResults, outUVsInMesh, sliceIndexes);
}
inline void DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays::meshAssign_colors(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::Unity::Collections::NativeSlice_1<::UnityEngine::Color>  outUVsInMesh, ::Unity::Collections::NativeSlice_1<float_t>  sliceIndexes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, textureBakeResults, outUVsInMesh, sliceIndexes);
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::IAssignToMeshCustomizer"
constexpr  DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays::operator ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*() noexcept {
return static_cast<::DigitalOpus::MB::Core::IAssignToMeshCustomizer*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::IAssignToMeshCustomizer"
constexpr ::DigitalOpus::MB::Core::IAssignToMeshCustomizer* DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays::i___DigitalOpus__MB__Core__IAssignToMeshCustomizer() noexcept {
return static_cast<::DigitalOpus::MB::Core::IAssignToMeshCustomizer*>(static_cast<void*>(this));
}
