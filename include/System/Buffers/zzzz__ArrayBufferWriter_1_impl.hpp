#pragma once
// IWYU pragma private; include "System/Buffers/ArrayBufferWriter_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/zzzz__ArrayBufferWriter_1_def.hpp"
#include "System/Buffers/zzzz__IBufferWriter_1_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& System::Buffers::ArrayBufferWriter_1<T>::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
template<typename T>
constexpr ::ArrayW<T> const& System::Buffers::ArrayBufferWriter_1<T>::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
template<typename T>
constexpr void System::Buffers::ArrayBufferWriter_1<T>::__cordl_internal_set__buffer(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
template<typename T>
constexpr int32_t& System::Buffers::ArrayBufferWriter_1<T>::__cordl_internal_get__index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
template<typename T>
constexpr int32_t const& System::Buffers::ArrayBufferWriter_1<T>::__cordl_internal_get__index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
template<typename T>
constexpr void System::Buffers::ArrayBufferWriter_1<T>::__cordl_internal_set__index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____index = value;
}
template<typename T>
inline void System::Buffers::ArrayBufferWriter_1<T>::_ctor(int32_t  initialCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ArrayBufferWriter_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialCapacity);
}
template<typename T>
inline ::System::ReadOnlyMemory_1<T> System::Buffers::ArrayBufferWriter_1<T>::get_WrittenMemory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ArrayBufferWriter_1<T>*>(),
                        {"get_WrittenMemory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlyMemory_1<T>>(this, ___internal_method);
}
template<typename T>
inline int32_t System::Buffers::ArrayBufferWriter_1<T>::get_FreeCapacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ArrayBufferWriter_1<T>*>(),
                        {"get_FreeCapacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void System::Buffers::ArrayBufferWriter_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ArrayBufferWriter_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void System::Buffers::ArrayBufferWriter_1<T>::Advance(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ArrayBufferWriter_1<T>*>(),
                        {"Advance", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
template<typename T>
inline ::System::Span_1<T> System::Buffers::ArrayBufferWriter_1<T>::GetSpan(int32_t  sizeHint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ArrayBufferWriter_1<T>*>(),
                        {"GetSpan", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(this, ___internal_method, sizeHint);
}
template<typename T>
inline void System::Buffers::ArrayBufferWriter_1<T>::CheckAndResizeBuffer(int32_t  sizeHint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ArrayBufferWriter_1<T>*>(),
                        {"CheckAndResizeBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sizeHint);
}
template<typename T>
inline void System::Buffers::ArrayBufferWriter_1<T>::ThrowInvalidOperationException_AdvancedTooFar(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ArrayBufferWriter_1<T>*>(),
                        {"ThrowInvalidOperationException_AdvancedTooFar", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, capacity);
}
template<typename T>
inline ::System::Buffers::ArrayBufferWriter_1<T>* System::Buffers::ArrayBufferWriter_1<T>::New_ctor(int32_t  initialCapacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Buffers::ArrayBufferWriter_1<T>*>(initialCapacity));
}
/// @brief Convert operator to "::System::Buffers::IBufferWriter_1<T>"
template<typename T>
constexpr  System::Buffers::ArrayBufferWriter_1<T>::operator ::System::Buffers::IBufferWriter_1<T>*() noexcept {
return static_cast<::System::Buffers::IBufferWriter_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Buffers::IBufferWriter_1<T>"
template<typename T>
constexpr ::System::Buffers::IBufferWriter_1<T>* System::Buffers::ArrayBufferWriter_1<T>::i___System__Buffers__IBufferWriter_1_T_() noexcept {
return static_cast<::System::Buffers::IBufferWriter_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Buffers::ArrayBufferWriter_1<T>::ArrayBufferWriter_1()   {
}
