#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUSort.hpp"
#include "UnityEngine/Rendering/zzzz__GPUSort_SystemResources_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUSort_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUSort_Args_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUSort_RenderGraphResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUSort_Stage_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUSort_SupportResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUSort_SystemResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUSort._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUSort::*)(::GlobalNamespace::GPUSort_SystemResources)>(&::UnityEngine::Rendering::GPUSort::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xb19525c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUSort>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GPUSort_SystemResources>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUSort.DispatchStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUSort::*)(::UnityEngine::Rendering::CommandBuffer*, ::GlobalNamespace::GPUSort_Args, uint32_t, ::GlobalNamespace::GPUSort_Stage)>(&::UnityEngine::Rendering::GPUSort::DispatchStage)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xb195448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUSort>(),
                        {"DispatchStage", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::GlobalNamespace::GPUSort_Args>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::GPUSort_Stage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUSort.CopyBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUSort::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::GPUSort::CopyBuffer)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xb1956f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUSort>(),
                        {"CopyBuffer", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUSort.DivRoundUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::GPUSort::DivRoundUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb1958b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUSort>(),
                        {"DivRoundUp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUSort.Dispatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUSort::*)(::UnityEngine::Rendering::CommandBuffer*, ::GlobalNamespace::GPUSort_Args)>(&::UnityEngine::Rendering::GPUSort::Dispatch)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xb1958c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUSort>(),
                        {"Dispatch", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::GlobalNamespace::GPUSort_Args>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUSort::_ctor(::GlobalNamespace::GPUSort_SystemResources  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUSort>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GPUSort_SystemResources>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, resources);
}
inline void UnityEngine::Rendering::GPUSort::DispatchStage(::UnityEngine::Rendering::CommandBuffer*  cmd, ::GlobalNamespace::GPUSort_Args  args, uint32_t  h, ::GlobalNamespace::GPUSort_Stage  stage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUSort>(),
                        {"DispatchStage", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::GlobalNamespace::GPUSort_Args>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::GPUSort_Stage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, args, h, stage);
}
inline void UnityEngine::Rendering::GPUSort::CopyBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  src, ::UnityEngine::GraphicsBuffer*  dst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUSort>(),
                        {"CopyBuffer", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, src, dst);
}
inline int32_t UnityEngine::Rendering::GPUSort::DivRoundUp(int32_t  x, int32_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUSort>(),
                        {"DivRoundUp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
inline void UnityEngine::Rendering::GPUSort::Dispatch(::UnityEngine::Rendering::CommandBuffer*  cmd, ::GlobalNamespace::GPUSort_Args  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUSort>(),
                        {"Dispatch", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::GlobalNamespace::GPUSort_Args>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, args);
}
// Ctor Parameters [CppParam { name: "m_Keywords", ty: "::ArrayW<::UnityEngine::Rendering::LocalKeyword>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "resources", ty: "::GlobalNamespace::GPUSort_SystemResources", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::GPUSort::GPUSort(::ArrayW<::UnityEngine::Rendering::LocalKeyword>  m_Keywords, ::GlobalNamespace::GPUSort_SystemResources  resources) noexcept  {
this->m_Keywords = m_Keywords;
this->resources = resources;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUSort::GPUSort()   {
}
