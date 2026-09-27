#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_DefaultMeshAssignCustomizer_NativeArray.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_DefaultMeshAssignCustomizer_NativeArray_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__IAssignToMeshCustomizer_NativeArrays_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__IAssignToMeshCustomizer_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_IMeshBakerSettings_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray.UVchannelWithExtraParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray::*)()>(&::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray::UVchannelWithExtraParameter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc097c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray.meshAssign_UV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray::*)(int32_t, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::GlobalNamespace::MB2_TextureBakeResults*, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<float_t>)>(&::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray::meshAssign_UV)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9dc0984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray.meshAssign_colors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray::*)(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::GlobalNamespace::MB2_TextureBakeResults*, ::Unity::Collections::NativeSlice_1<::UnityEngine::Color>, ::Unity::Collections::NativeSlice_1<float_t>)>(&::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray::meshAssign_colors)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9dc0988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray::*)()>(&::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc098c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray::UVchannelWithExtraParameter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray::meshAssign_UV(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  outUVsInMesh, ::Unity::Collections::NativeSlice_1<float_t>  sliceIndexes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, settings, textureBakeResults, outUVsInMesh, sliceIndexes);
}
inline void DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray::meshAssign_colors(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::Unity::Collections::NativeSlice_1<::UnityEngine::Color>  outUVsInMesh, ::Unity::Collections::NativeSlice_1<float_t>  sliceIndexes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, textureBakeResults, outUVsInMesh, sliceIndexes);
}
inline void DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray* DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray*>());
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays"
constexpr  DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray::operator ::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays*() noexcept {
return static_cast<::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays"
constexpr ::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays* DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray::i___DigitalOpus__MB__Core__IAssignToMeshCustomizer_NativeArrays() noexcept {
return static_cast<::DigitalOpus::MB::Core::IAssignToMeshCustomizer_NativeArrays*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::IAssignToMeshCustomizer"
constexpr  DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray::operator ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*() noexcept {
return static_cast<::DigitalOpus::MB::Core::IAssignToMeshCustomizer*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::IAssignToMeshCustomizer"
constexpr ::DigitalOpus::MB::Core::IAssignToMeshCustomizer* DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray::i___DigitalOpus__MB__Core__IAssignToMeshCustomizer() noexcept {
return static_cast<::DigitalOpus::MB::Core::IAssignToMeshCustomizer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer_NativeArray::MB_DefaultMeshAssignCustomizer_NativeArray()   {
}
