#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUPrefixSum.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_SystemResources_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_DirectArgs_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_IndirectDirectArgs_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_LevelOffsets_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_RenderGraphResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_SupportResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_SystemResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUPrefixSum::*)(::GlobalNamespace::GPUPrefixSum_SystemResources)>(&::UnityEngine::Rendering::GPUPrefixSum::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb193da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUPrefixSum>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GPUPrefixSum_SystemResources>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum.PackPrefixSumArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::GPUPrefixSum::*)(int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::GPUPrefixSum::PackPrefixSumArgs)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb193f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUPrefixSum>(),
                        {"PackPrefixSumArgs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum.ExecuteCommonIndirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUPrefixSum::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, ::by_ref<::GlobalNamespace::GPUPrefixSum_SupportResources>, bool)>(&::UnityEngine::Rendering::GPUPrefixSum::ExecuteCommonIndirect)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0xb193fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUPrefixSum>(),
                        {"ExecuteCommonIndirect", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GPUPrefixSum_SupportResources>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum.DispatchDirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUPrefixSum::*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::GlobalNamespace::GPUPrefixSum_DirectArgs>)>(&::UnityEngine::Rendering::GPUPrefixSum::DispatchDirect)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb194340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUPrefixSum>(),
                        {"DispatchDirect", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GPUPrefixSum_DirectArgs>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum.DispatchIndirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUPrefixSum::*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::GlobalNamespace::GPUPrefixSum_IndirectDirectArgs>)>(&::UnityEngine::Rendering::GPUPrefixSum::DispatchIndirect)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb19453c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUPrefixSum>(),
                        {"DispatchIndirect", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GPUPrefixSum_IndirectDirectArgs>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUPrefixSum::_ctor(::GlobalNamespace::GPUPrefixSum_SystemResources  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUPrefixSum>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GPUPrefixSum_SystemResources>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, resources);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::GPUPrefixSum::PackPrefixSumArgs(int32_t  a, int32_t  b, int32_t  c, int32_t  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUPrefixSum>(),
                        {"PackPrefixSumArgs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(*this, ___internal_method, a, b, c, d);
}
inline void UnityEngine::Rendering::GPUPrefixSum::ExecuteCommonIndirect(::UnityEngine::Rendering::CommandBuffer*  cmdBuffer, ::UnityEngine::GraphicsBuffer*  inputBuffer, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::GPUPrefixSum_SupportResources>  supportResources, bool  isExclusive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUPrefixSum>(),
                        {"ExecuteCommonIndirect", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GPUPrefixSum_SupportResources>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmdBuffer, inputBuffer, supportResources, isExclusive);
}
inline void UnityEngine::Rendering::GPUPrefixSum::DispatchDirect(::UnityEngine::Rendering::CommandBuffer*  cmdBuffer, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::GPUPrefixSum_DirectArgs>  arguments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUPrefixSum>(),
                        {"DispatchDirect", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GPUPrefixSum_DirectArgs>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmdBuffer, arguments);
}
inline void UnityEngine::Rendering::GPUPrefixSum::DispatchIndirect(::UnityEngine::Rendering::CommandBuffer*  cmdBuffer, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::GPUPrefixSum_IndirectDirectArgs>  arguments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUPrefixSum>(),
                        {"DispatchIndirect", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GPUPrefixSum_IndirectDirectArgs>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmdBuffer, arguments);
}
// Ctor Parameters [CppParam { name: "resources", ty: "::GlobalNamespace::GPUPrefixSum_SystemResources", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::GPUPrefixSum::GPUPrefixSum(::GlobalNamespace::GPUPrefixSum_SystemResources  resources) noexcept  {
this->resources = resources;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUPrefixSum::GPUPrefixSum()   {
}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::setStaticF__InputBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_InputBuffer", ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::getStaticF__InputBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "_InputBuffer", ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>();
}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::setStaticF__OutputBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_OutputBuffer", ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::getStaticF__OutputBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "_OutputBuffer", ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>();
}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::setStaticF__InputCountBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_InputCountBuffer", ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::getStaticF__InputCountBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "_InputCountBuffer", ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>();
}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::setStaticF__TotalLevelsBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TotalLevelsBuffer", ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::getStaticF__TotalLevelsBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "_TotalLevelsBuffer", ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>();
}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::setStaticF__OutputTotalLevelsBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_OutputTotalLevelsBuffer", ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::getStaticF__OutputTotalLevelsBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "_OutputTotalLevelsBuffer", ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>();
}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::setStaticF__OutputDispatchLevelArgsBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_OutputDispatchLevelArgsBuffer", ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::getStaticF__OutputDispatchLevelArgsBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "_OutputDispatchLevelArgsBuffer", ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>();
}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::setStaticF__LevelsOffsetsBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_LevelsOffsetsBuffer", ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::getStaticF__LevelsOffsetsBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "_LevelsOffsetsBuffer", ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>();
}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::setStaticF__OutputLevelsOffsetsBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_OutputLevelsOffsetsBuffer", ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::getStaticF__OutputLevelsOffsetsBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "_OutputLevelsOffsetsBuffer", ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>();
}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::setStaticF__PrefixSumIntArgs(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_PrefixSumIntArgs", ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::getStaticF__PrefixSumIntArgs()  {
return ::cordl_internals::getStaticField<int32_t, "_PrefixSumIntArgs", ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs::GPUPrefixSum_ShaderIDs()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs.DivUpGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs::DivUpGroup)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb194730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs*>(),
                        {"DivUpGroup", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs.AlignUpGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs::AlignUpGroup)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb194748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs*>(),
                        {"AlignUpGroup", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs.CalculateTotalBufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs::CalculateTotalBufferSize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb194760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs*>(),
                        {"CalculateTotalBufferSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderDefs::DivUpGroup(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs*>(),
                        {"DivUpGroup", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::GPUPrefixSum_ShaderDefs::AlignUpGroup(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs*>(),
                        {"AlignUpGroup", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::GPUPrefixSum_ShaderDefs::CalculateTotalBufferSize(int32_t  maxElementCount, ::by_ref<int32_t>  totalSize, ::by_ref<int32_t>  levelCounts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs*>(),
                        {"CalculateTotalBufferSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, maxElementCount, totalSize, levelCounts);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs::GPUPrefixSum_ShaderDefs()   {
}
