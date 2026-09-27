#pragma once
// IWYU pragma private; include "Liv/NGFX/NativeGraphicsBuffer`1_BufferCopyInfo.hpp"
#include "Liv/NGFX/zzzz__EventType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Liv/NGFX/zzzz__NativeGraphicsBuffer`1_BufferCopyInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
template<typename T>
inline void GlobalNamespace::NativeGraphicsBuffer_1_BufferCopyInfo<T>::setStaticF_eventType(::Liv::NGFX::EventType  value)  {
::cordl_internals::setStaticField<::Liv::NGFX::EventType, "eventType", ::GlobalNamespace::NativeGraphicsBuffer_1_BufferCopyInfo<T>>(std::forward<::Liv::NGFX::EventType>(value));
}
template<typename T>
inline ::Liv::NGFX::EventType GlobalNamespace::NativeGraphicsBuffer_1_BufferCopyInfo<T>::getStaticF_eventType()  {
return ::cordl_internals::getStaticField<::Liv::NGFX::EventType, "eventType", ::GlobalNamespace::NativeGraphicsBuffer_1_BufferCopyInfo<T>>();
}
template<typename T>
inline void GlobalNamespace::NativeGraphicsBuffer_1_BufferCopyInfo<T>::_ctor(::System::IntPtr  ctx, uint32_t  src, uint32_t  dst, uint32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeGraphicsBuffer_1_BufferCopyInfo<T>>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ctx, src, dst, size);
}
// Ctor Parameters [CppParam { name: "m_context", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_src", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_dst", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_size", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::NativeGraphicsBuffer_1_BufferCopyInfo<T>::NativeGraphicsBuffer_1_BufferCopyInfo(::System::IntPtr  m_context, uint32_t  m_src, uint32_t  m_dst, uint32_t  m_size) noexcept  {
this->m_context = m_context;
this->m_src = m_src;
this->m_dst = m_dst;
this->m_size = m_size;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::NativeGraphicsBuffer_1_BufferCopyInfo<T>::NativeGraphicsBuffer_1_BufferCopyInfo()   {
}
