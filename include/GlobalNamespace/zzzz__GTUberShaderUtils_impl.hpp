#pragma once
// IWYU pragma private; include "GlobalNamespace/GTUberShaderUtils.hpp"
#include "GlobalNamespace/zzzz__ShaderHashId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GTUberShaderUtils_def.hpp"
#include "GlobalNamespace/zzzz__GTShaderStencilCompare_def.hpp"
#include "GlobalNamespace/zzzz__GTShaderStencilOp_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderQueue_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTUberShaderUtils.SetStencilComparison
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::GlobalNamespace::GTShaderStencilCompare)>(&::GlobalNamespace::GTUberShaderUtils::SetStencilComparison)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b3d8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTUberShaderUtils*>(),
                        {"SetStencilComparison", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::GlobalNamespace::GTShaderStencilCompare>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTUberShaderUtils.SetStencilPassFrontOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::GlobalNamespace::GTShaderStencilOp)>(&::GlobalNamespace::GTUberShaderUtils::SetStencilPassFrontOp)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b3d934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTUberShaderUtils*>(),
                        {"SetStencilPassFrontOp", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::GlobalNamespace::GTShaderStencilOp>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTUberShaderUtils.SetStencilReferenceValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, int32_t)>(&::GlobalNamespace::GTUberShaderUtils::SetStencilReferenceValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b3d9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTUberShaderUtils*>(),
                        {"SetStencilReferenceValue", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTUberShaderUtils.SetVisibleToXRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, bool, bool)>(&::GlobalNamespace::GTUberShaderUtils::SetVisibleToXRay)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5b3da2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTUberShaderUtils*>(),
                        {"SetVisibleToXRay", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTUberShaderUtils.SetRevealsXRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, bool, bool, bool)>(&::GlobalNamespace::GTUberShaderUtils::SetRevealsXRay)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5b3db88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTUberShaderUtils*>(),
                        {"SetRevealsXRay", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTUberShaderUtils.GetNearestRenderQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Material*, ::by_ref<::UnityEngine::Rendering::RenderQueue>)>(&::GlobalNamespace::GTUberShaderUtils::GetNearestRenderQueue)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5b3ddb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTUberShaderUtils*>(),
                        {"GetNearestRenderQueue", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderQueue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTUberShaderUtils.InitOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GTUberShaderUtils::InitOnLoad)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b3dee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTUberShaderUtils*>(),
                        {"InitOnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GTUberShaderUtils::setStaticF_kUberShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "kUberShader", ::GlobalNamespace::GTUberShaderUtils*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> GlobalNamespace::GTUberShaderUtils::getStaticF_kUberShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "kUberShader", ::GlobalNamespace::GTUberShaderUtils*>();
}
inline void GlobalNamespace::GTUberShaderUtils::setStaticF__StencilComparison(::GlobalNamespace::ShaderHashId  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ShaderHashId, "_StencilComparison", ::GlobalNamespace::GTUberShaderUtils*>(std::forward<::GlobalNamespace::ShaderHashId>(value));
}
inline ::GlobalNamespace::ShaderHashId GlobalNamespace::GTUberShaderUtils::getStaticF__StencilComparison()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ShaderHashId, "_StencilComparison", ::GlobalNamespace::GTUberShaderUtils*>();
}
inline void GlobalNamespace::GTUberShaderUtils::setStaticF__StencilPassFront(::GlobalNamespace::ShaderHashId  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ShaderHashId, "_StencilPassFront", ::GlobalNamespace::GTUberShaderUtils*>(std::forward<::GlobalNamespace::ShaderHashId>(value));
}
inline ::GlobalNamespace::ShaderHashId GlobalNamespace::GTUberShaderUtils::getStaticF__StencilPassFront()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ShaderHashId, "_StencilPassFront", ::GlobalNamespace::GTUberShaderUtils*>();
}
inline void GlobalNamespace::GTUberShaderUtils::setStaticF__StencilReference(::GlobalNamespace::ShaderHashId  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ShaderHashId, "_StencilReference", ::GlobalNamespace::GTUberShaderUtils*>(std::forward<::GlobalNamespace::ShaderHashId>(value));
}
inline ::GlobalNamespace::ShaderHashId GlobalNamespace::GTUberShaderUtils::getStaticF__StencilReference()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ShaderHashId, "_StencilReference", ::GlobalNamespace::GTUberShaderUtils*>();
}
inline void GlobalNamespace::GTUberShaderUtils::setStaticF__ColorMask_(::GlobalNamespace::ShaderHashId  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ShaderHashId, "_ColorMask_", ::GlobalNamespace::GTUberShaderUtils*>(std::forward<::GlobalNamespace::ShaderHashId>(value));
}
inline ::GlobalNamespace::ShaderHashId GlobalNamespace::GTUberShaderUtils::getStaticF__ColorMask_()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ShaderHashId, "_ColorMask_", ::GlobalNamespace::GTUberShaderUtils*>();
}
inline void GlobalNamespace::GTUberShaderUtils::setStaticF__ManualZWrite(::GlobalNamespace::ShaderHashId  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ShaderHashId, "_ManualZWrite", ::GlobalNamespace::GTUberShaderUtils*>(std::forward<::GlobalNamespace::ShaderHashId>(value));
}
inline ::GlobalNamespace::ShaderHashId GlobalNamespace::GTUberShaderUtils::getStaticF__ManualZWrite()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ShaderHashId, "_ManualZWrite", ::GlobalNamespace::GTUberShaderUtils*>();
}
inline void GlobalNamespace::GTUberShaderUtils::setStaticF__ZWrite(::GlobalNamespace::ShaderHashId  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ShaderHashId, "_ZWrite", ::GlobalNamespace::GTUberShaderUtils*>(std::forward<::GlobalNamespace::ShaderHashId>(value));
}
inline ::GlobalNamespace::ShaderHashId GlobalNamespace::GTUberShaderUtils::getStaticF__ZWrite()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ShaderHashId, "_ZWrite", ::GlobalNamespace::GTUberShaderUtils*>();
}
inline void GlobalNamespace::GTUberShaderUtils::setStaticF_kRenderQueueInts(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "kRenderQueueInts", ::GlobalNamespace::GTUberShaderUtils*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> GlobalNamespace::GTUberShaderUtils::getStaticF_kRenderQueueInts()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "kRenderQueueInts", ::GlobalNamespace::GTUberShaderUtils*>();
}
inline void GlobalNamespace::GTUberShaderUtils::SetStencilComparison(::UnityEngine::Material*  m, ::GlobalNamespace::GTShaderStencilCompare  cmp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTUberShaderUtils*>(),
                        {"SetStencilComparison", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::GlobalNamespace::GTShaderStencilCompare>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, cmp);
}
inline void GlobalNamespace::GTUberShaderUtils::SetStencilPassFrontOp(::UnityEngine::Material*  m, ::GlobalNamespace::GTShaderStencilOp  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTUberShaderUtils*>(),
                        {"SetStencilPassFrontOp", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::GlobalNamespace::GTShaderStencilOp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, op);
}
inline void GlobalNamespace::GTUberShaderUtils::SetStencilReferenceValue(::UnityEngine::Material*  m, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTUberShaderUtils*>(),
                        {"SetStencilReferenceValue", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, value);
}
inline void GlobalNamespace::GTUberShaderUtils::SetVisibleToXRay(::UnityEngine::Material*  m, bool  visible, bool  saveToDisk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTUberShaderUtils*>(),
                        {"SetVisibleToXRay", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, visible, saveToDisk);
}
inline void GlobalNamespace::GTUberShaderUtils::SetRevealsXRay(::UnityEngine::Material*  m, bool  reveals, bool  changeQueue, bool  saveToDisk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTUberShaderUtils*>(),
                        {"SetRevealsXRay", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, reveals, changeQueue, saveToDisk);
}
inline int32_t GlobalNamespace::GTUberShaderUtils::GetNearestRenderQueue(::UnityEngine::Material*  m, ::by_ref<::UnityEngine::Rendering::RenderQueue>  queue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTUberShaderUtils*>(),
                        {"GetNearestRenderQueue", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderQueue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, m, queue);
}
inline void GlobalNamespace::GTUberShaderUtils::InitOnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTUberShaderUtils*>(),
                        {"InitOnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTUberShaderUtils::GTUberShaderUtils()   {
}
