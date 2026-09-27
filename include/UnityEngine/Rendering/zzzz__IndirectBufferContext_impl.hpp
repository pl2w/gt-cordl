#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectBufferContext.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferContext_BufferState_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferContext_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferContext_BufferState_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IndirectBufferContext::*)(::Unity::Jobs::JobHandle)>(&::UnityEngine::Rendering::IndirectBufferContext::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb20926c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContext>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContext.Matches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::IndirectBufferContext::*)(::GlobalNamespace::IndirectBufferContext_BufferState, int32_t, int32_t)>(&::UnityEngine::Rendering::IndirectBufferContext::Matches)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb20927c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContext>(),
                        {"Matches", {}, {::i2c::type_of<::GlobalNamespace::IndirectBufferContext_BufferState>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::IndirectBufferContext::_ctor(::Unity::Jobs::JobHandle  cullingJobHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContext>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cullingJobHandle);
}
inline bool UnityEngine::Rendering::IndirectBufferContext::Matches(::GlobalNamespace::IndirectBufferContext_BufferState  bufferState, int32_t  occluderVersion, int32_t  subviewMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContext>(),
                        {"Matches", {}, {::i2c::type_of<::GlobalNamespace::IndirectBufferContext_BufferState>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, bufferState, occluderVersion, subviewMask);
}
// Ctor Parameters [CppParam { name: "cullingJobHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bufferState", ty: "::GlobalNamespace::IndirectBufferContext_BufferState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "occluderVersion", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "subviewMask", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::IndirectBufferContext::IndirectBufferContext(::Unity::Jobs::JobHandle  cullingJobHandle, ::GlobalNamespace::IndirectBufferContext_BufferState  bufferState, int32_t  occluderVersion, int32_t  subviewMask) noexcept  {
this->cullingJobHandle = cullingJobHandle;
this->bufferState = bufferState;
this->occluderVersion = occluderVersion;
this->subviewMask = subviewMask;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::IndirectBufferContext::IndirectBufferContext()   {
}
