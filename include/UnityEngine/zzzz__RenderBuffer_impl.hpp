#pragma once
// IWYU pragma private; include "UnityEngine/RenderBuffer.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__RenderBuffer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::RenderBuffer.GetNativeRenderBufferPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::RenderBuffer::*)()>(&::UnityEngine::RenderBuffer::GetNativeRenderBufferPtr)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb57bdd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderBuffer>(),
                        {"GetNativeRenderBufferPtr", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::RenderBuffer::GetNativeRenderBufferPtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderBuffer>(),
                        {"GetNativeRenderBufferPtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_RenderTextureInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BufferPtr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::RenderBuffer::RenderBuffer(int32_t  m_RenderTextureInstanceID, ::System::IntPtr  m_BufferPtr) noexcept  {
this->m_RenderTextureInstanceID = m_RenderTextureInstanceID;
this->m_BufferPtr = m_BufferPtr;
}
// Ctor Parameters []
constexpr ::UnityEngine::RenderBuffer::RenderBuffer()   {
}
