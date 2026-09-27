#pragma once
// IWYU pragma private; include "Liv/NGFX/NativeGraphicsBuffer_1.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/NGFX/zzzz__NativeGraphicsBuffer_1_def.hpp"
#include "Liv/NGFX/zzzz__NativeGraphicsBuffer`1_BufferCopyInfo_def.hpp"
#include "Liv/NGFX/zzzz__NativeGraphicsBuffer`1_BufferCreateInfo_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_Target_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
template<typename T>
constexpr ::UnityEngine::GraphicsBuffer*& Liv::NGFX::NativeGraphicsBuffer_1<T>::__cordl_internal_get_m_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_buffer;
}
template<typename T>
constexpr ::UnityEngine::GraphicsBuffer* const& Liv::NGFX::NativeGraphicsBuffer_1<T>::__cordl_internal_get_m_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_buffer;
}
template<typename T>
constexpr void Liv::NGFX::NativeGraphicsBuffer_1<T>::__cordl_internal_set_m_buffer(::UnityEngine::GraphicsBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_buffer = value;
}
template<typename T>
constexpr uint32_t& Liv::NGFX::NativeGraphicsBuffer_1<T>::__cordl_internal_get_m_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_id;
}
template<typename T>
constexpr uint32_t const& Liv::NGFX::NativeGraphicsBuffer_1<T>::__cordl_internal_get_m_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_id;
}
template<typename T>
constexpr void Liv::NGFX::NativeGraphicsBuffer_1<T>::__cordl_internal_set_m_id(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_id = value;
}
template<typename T>
constexpr int32_t& Liv::NGFX::NativeGraphicsBuffer_1<T>::__cordl_internal_get_m_count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_count;
}
template<typename T>
constexpr int32_t const& Liv::NGFX::NativeGraphicsBuffer_1<T>::__cordl_internal_get_m_count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_count;
}
template<typename T>
constexpr void Liv::NGFX::NativeGraphicsBuffer_1<T>::__cordl_internal_set_m_count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_count = value;
}
template<typename T>
constexpr bool& Liv::NGFX::NativeGraphicsBuffer_1<T>::__cordl_internal_get_m_valid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_valid;
}
template<typename T>
constexpr bool const& Liv::NGFX::NativeGraphicsBuffer_1<T>::__cordl_internal_get_m_valid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_valid;
}
template<typename T>
constexpr void Liv::NGFX::NativeGraphicsBuffer_1<T>::__cordl_internal_set_m_valid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_valid = value;
}
template<typename T>
constexpr ::System::IntPtr& Liv::NGFX::NativeGraphicsBuffer_1<T>::__cordl_internal_get_m_context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_context;
}
template<typename T>
constexpr ::System::IntPtr const& Liv::NGFX::NativeGraphicsBuffer_1<T>::__cordl_internal_get_m_context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_context;
}
template<typename T>
constexpr void Liv::NGFX::NativeGraphicsBuffer_1<T>::__cordl_internal_set_m_context(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_context = value;
}
template<typename T>
inline void Liv::NGFX::NativeGraphicsBuffer_1<T>::_ctor(::System::IntPtr  ctx, int32_t  count, ::GlobalNamespace::GraphicsBuffer_Target  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeGraphicsBuffer_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GraphicsBuffer_Target>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx, count, target);
}
template<typename T>
inline void Liv::NGFX::NativeGraphicsBuffer_1<T>::_ctor(::System::IntPtr  ctx, int32_t  count, ::System::IntPtr  nativeBuffer, ::GlobalNamespace::GraphicsBuffer_Target  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeGraphicsBuffer_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::GlobalNamespace::GraphicsBuffer_Target>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx, count, nativeBuffer, target);
}
template<typename T>
inline void Liv::NGFX::NativeGraphicsBuffer_1<T>::_ctor(::System::IntPtr  ctx, ::UnityEngine::GraphicsBuffer*  buffer, ::GlobalNamespace::GraphicsBuffer_Target  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeGraphicsBuffer_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::GlobalNamespace::GraphicsBuffer_Target>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx, buffer, target);
}
template<typename T>
inline void Liv::NGFX::NativeGraphicsBuffer_1<T>::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::NGFX::NativeGraphicsBuffer_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Liv::NGFX::NativeGraphicsBuffer_1<T>::BufferCopy(::Liv::NGFX::NativeGraphicsBuffer_1<T>*  dst, uint32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeGraphicsBuffer_1<T>*>(),
                        {"BufferCopy", {}, {::i2c::type_of<::Liv::NGFX::NativeGraphicsBuffer_1<T>*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dst, size);
}
template<typename T>
inline ::UnityEngine::GraphicsBuffer* Liv::NGFX::NativeGraphicsBuffer_1<T>::op_Implicit___UnityEngine__GraphicsBuffer_(::Liv::NGFX::NativeGraphicsBuffer_1<T>*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeGraphicsBuffer_1<T>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Liv::NGFX::NativeGraphicsBuffer_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(nullptr, ___internal_method, o);
}
template<typename T>
inline uint32_t Liv::NGFX::NativeGraphicsBuffer_1<T>::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeGraphicsBuffer_1<T>*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t Liv::NGFX::NativeGraphicsBuffer_1<T>::get_count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeGraphicsBuffer_1<T>*>(),
                        {"get_count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::GraphicsBuffer* Liv::NGFX::NativeGraphicsBuffer_1<T>::get_buffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeGraphicsBuffer_1<T>*>(),
                        {"get_buffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
template<typename T>
inline void Liv::NGFX::NativeGraphicsBuffer_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeGraphicsBuffer_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Liv::NGFX::NativeGraphicsBuffer_1<T>* Liv::NGFX::NativeGraphicsBuffer_1<T>::New_ctor(::System::IntPtr  ctx, int32_t  count, ::GlobalNamespace::GraphicsBuffer_Target  target)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::NGFX::NativeGraphicsBuffer_1<T>*>(ctx, count, target));
}
template<typename T>
inline ::Liv::NGFX::NativeGraphicsBuffer_1<T>* Liv::NGFX::NativeGraphicsBuffer_1<T>::New_ctor(::System::IntPtr  ctx, int32_t  count, ::System::IntPtr  nativeBuffer, ::GlobalNamespace::GraphicsBuffer_Target  target)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::NGFX::NativeGraphicsBuffer_1<T>*>(ctx, count, nativeBuffer, target));
}
template<typename T>
inline ::Liv::NGFX::NativeGraphicsBuffer_1<T>* Liv::NGFX::NativeGraphicsBuffer_1<T>::New_ctor(::System::IntPtr  ctx, ::UnityEngine::GraphicsBuffer*  buffer, ::GlobalNamespace::GraphicsBuffer_Target  target)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::NGFX::NativeGraphicsBuffer_1<T>*>(ctx, buffer, target));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Liv::NGFX::NativeGraphicsBuffer_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Liv::NGFX::NativeGraphicsBuffer_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Liv::NGFX::NativeGraphicsBuffer_1<T>::NativeGraphicsBuffer_1()   {
}
