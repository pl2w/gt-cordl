#pragma once
// IWYU pragma private; include "Liv/NGFX/NativeGraphicsBuffer`1_BufferCreateInfo.hpp"
#include "Liv/NGFX/zzzz__EventType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_Target_impl.hpp"
#include "Liv/NGFX/zzzz__NativeGraphicsBuffer`1_BufferCreateInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_Target_def.hpp"
template<typename T>
inline void GlobalNamespace::NativeGraphicsBuffer_1_BufferCreateInfo<T>::setStaticF_eventType(::Liv::NGFX::EventType  value)  {
::cordl_internals::setStaticField<::Liv::NGFX::EventType, "eventType", ::GlobalNamespace::NativeGraphicsBuffer_1_BufferCreateInfo<T>>(std::forward<::Liv::NGFX::EventType>(value));
}
template<typename T>
inline ::Liv::NGFX::EventType GlobalNamespace::NativeGraphicsBuffer_1_BufferCreateInfo<T>::getStaticF_eventType()  {
return ::cordl_internals::getStaticField<::Liv::NGFX::EventType, "eventType", ::GlobalNamespace::NativeGraphicsBuffer_1_BufferCreateInfo<T>>();
}
template<typename T>
inline void GlobalNamespace::NativeGraphicsBuffer_1_BufferCreateInfo<T>::_ctor(::System::IntPtr  ctx, uint32_t  id, ::System::IntPtr  handle, int32_t  count, int32_t  stride, ::GlobalNamespace::GraphicsBuffer_Target  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeGraphicsBuffer_1_BufferCreateInfo<T>>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GraphicsBuffer_Target>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ctx, id, handle, count, stride, target);
}
template<typename T>
inline uint32_t GlobalNamespace::NativeGraphicsBuffer_1_BufferCreateInfo<T>::id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeGraphicsBuffer_1_BufferCreateInfo<T>>(),
                        {"id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_context", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_handle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_stride", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_target", ty: "::GlobalNamespace::GraphicsBuffer_Target", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_out_id", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::NativeGraphicsBuffer_1_BufferCreateInfo<T>::NativeGraphicsBuffer_1_BufferCreateInfo(::System::IntPtr  m_context, ::System::IntPtr  m_handle, int32_t  m_count, int32_t  m_stride, ::GlobalNamespace::GraphicsBuffer_Target  m_target, uint32_t  m_out_id) noexcept  {
this->m_context = m_context;
this->m_handle = m_handle;
this->m_count = m_count;
this->m_stride = m_stride;
this->m_target = m_target;
this->m_out_id = m_out_id;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::NativeGraphicsBuffer_1_BufferCreateInfo<T>::NativeGraphicsBuffer_1_BufferCreateInfo()   {
}
