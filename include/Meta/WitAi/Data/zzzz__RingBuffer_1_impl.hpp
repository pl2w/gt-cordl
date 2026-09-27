#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/RingBuffer_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Data/zzzz__RingBuffer_1_def.hpp"
#include "Meta/WitAi/Data/zzzz__RingBuffer_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::Meta::WitAi::Data::RingBuffer_1_OnDataAdded<T>*& Meta::WitAi::Data::RingBuffer_1<T>::__cordl_internal_get_OnDataAddedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDataAddedEvent;
}
template<typename T>
constexpr ::Meta::WitAi::Data::RingBuffer_1_OnDataAdded<T>* const& Meta::WitAi::Data::RingBuffer_1<T>::__cordl_internal_get_OnDataAddedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDataAddedEvent;
}
template<typename T>
constexpr void Meta::WitAi::Data::RingBuffer_1<T>::__cordl_internal_set_OnDataAddedEvent(::Meta::WitAi::Data::RingBuffer_1_OnDataAdded<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDataAddedEvent = value;
}
template<typename T>
constexpr ::ArrayW<T>& Meta::WitAi::Data::RingBuffer_1<T>::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
template<typename T>
constexpr ::ArrayW<T> const& Meta::WitAi::Data::RingBuffer_1<T>::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
template<typename T>
constexpr void Meta::WitAi::Data::RingBuffer_1<T>::__cordl_internal_set_buffer(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
template<typename T>
constexpr int32_t& Meta::WitAi::Data::RingBuffer_1<T>::__cordl_internal_get_bufferIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferIndex;
}
template<typename T>
constexpr int32_t const& Meta::WitAi::Data::RingBuffer_1<T>::__cordl_internal_get_bufferIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferIndex;
}
template<typename T>
constexpr void Meta::WitAi::Data::RingBuffer_1<T>::__cordl_internal_set_bufferIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferIndex = value;
}
template<typename T>
constexpr int64_t& Meta::WitAi::Data::RingBuffer_1<T>::__cordl_internal_get_bufferDataLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferDataLength;
}
template<typename T>
constexpr int64_t const& Meta::WitAi::Data::RingBuffer_1<T>::__cordl_internal_get_bufferDataLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferDataLength;
}
template<typename T>
constexpr void Meta::WitAi::Data::RingBuffer_1<T>::__cordl_internal_set_bufferDataLength(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferDataLength = value;
}
template<typename T>
inline int32_t Meta::WitAi::Data::RingBuffer_1<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::RingBuffer_1<T>*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t Meta::WitAi::Data::RingBuffer_1<T>::GetBufferArrayIndex(int64_t  bufferDataIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::RingBuffer_1<T>*>(),
                        {"GetBufferArrayIndex", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bufferDataIndex);
}
template<typename T>
inline void Meta::WitAi::Data::RingBuffer_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::RingBuffer_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline void Meta::WitAi::Data::RingBuffer_1<T>::WriteFromBuffer(::Meta::WitAi::Data::RingBuffer_1_ByteDataWriter<T>*  writer, int64_t  newBufferIndex, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::RingBuffer_1<T>*>(),
                        {"WriteFromBuffer", {}, {::i2c::type_of<::Meta::WitAi::Data::RingBuffer_1_ByteDataWriter<T>*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, newBufferIndex, length);
}
template<typename T>
inline void Meta::WitAi::Data::RingBuffer_1<T>::Push(T  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::RingBuffer_1<T>*>(),
                        {"Push", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template<typename T>
inline ::Meta::WitAi::Data::RingBuffer_1_Marker<T>* Meta::WitAi::Data::RingBuffer_1<T>::CreateMarker(int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::RingBuffer_1<T>*>(),
                        {"CreateMarker", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::RingBuffer_1_Marker<T>*>(this, ___internal_method, offset);
}
template<typename T>
inline ::Meta::WitAi::Data::RingBuffer_1<T>* Meta::WitAi::Data::RingBuffer_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::RingBuffer_1<T>*>(capacity));
}
// Ctor Parameters []
template<typename T>
constexpr ::Meta::WitAi::Data::RingBuffer_1<T>::RingBuffer_1()   {
}
template<typename T>
constexpr int64_t& Meta::WitAi::Data::RingBuffer_1_Marker<T>::__cordl_internal_get_bufferDataIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferDataIndex;
}
template<typename T>
constexpr int64_t const& Meta::WitAi::Data::RingBuffer_1_Marker<T>::__cordl_internal_get_bufferDataIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferDataIndex;
}
template<typename T>
constexpr void Meta::WitAi::Data::RingBuffer_1_Marker<T>::__cordl_internal_set_bufferDataIndex(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferDataIndex = value;
}
template<typename T>
constexpr int32_t& Meta::WitAi::Data::RingBuffer_1_Marker<T>::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
template<typename T>
constexpr int32_t const& Meta::WitAi::Data::RingBuffer_1_Marker<T>::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
template<typename T>
constexpr void Meta::WitAi::Data::RingBuffer_1_Marker<T>::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
template<typename T>
constexpr ::Meta::WitAi::Data::RingBuffer_1<T>*& Meta::WitAi::Data::RingBuffer_1_Marker<T>::__cordl_internal_get_ringBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ringBuffer;
}
template<typename T>
constexpr ::Meta::WitAi::Data::RingBuffer_1<T>* const& Meta::WitAi::Data::RingBuffer_1_Marker<T>::__cordl_internal_get_ringBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ringBuffer;
}
template<typename T>
constexpr void Meta::WitAi::Data::RingBuffer_1_Marker<T>::__cordl_internal_set_ringBuffer(::Meta::WitAi::Data::RingBuffer_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ringBuffer = value;
}
template<typename T>
inline ::Meta::WitAi::Data::RingBuffer_1<T>* Meta::WitAi::Data::RingBuffer_1_Marker<T>::get_RingBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::RingBuffer_1_Marker<T>*>(),
                        {"get_RingBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::RingBuffer_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void Meta::WitAi::Data::RingBuffer_1_Marker<T>::_ctor(::Meta::WitAi::Data::RingBuffer_1<T>*  ringBuffer, int64_t  markerPosition, int32_t  bufIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::RingBuffer_1_Marker<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::Data::RingBuffer_1<T>*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ringBuffer, markerPosition, bufIndex);
}
template<typename T>
inline bool Meta::WitAi::Data::RingBuffer_1_Marker<T>::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::RingBuffer_1_Marker<T>*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline int64_t Meta::WitAi::Data::RingBuffer_1_Marker<T>::get_AvailableByteCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::RingBuffer_1_Marker<T>*>(),
                        {"get_AvailableByteCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
template<typename T>
inline int64_t Meta::WitAi::Data::RingBuffer_1_Marker<T>::get_RequestedByteCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::RingBuffer_1_Marker<T>*>(),
                        {"get_RequestedByteCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
template<typename T>
inline void Meta::WitAi::Data::RingBuffer_1_Marker<T>::ReadIntoWriters(/* [ParamArray] */ ::ArrayW<::Meta::WitAi::Data::RingBuffer_1_ByteDataWriter<T>*>  writers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::RingBuffer_1_Marker<T>*>(),
                        {"ReadIntoWriters", {}, {::i2c::type_of<::ArrayW<::Meta::WitAi::Data::RingBuffer_1_ByteDataWriter<T>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writers);
}
template<typename T>
inline ::Meta::WitAi::Data::RingBuffer_1_Marker<T>* Meta::WitAi::Data::RingBuffer_1_Marker<T>::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::RingBuffer_1_Marker<T>*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::RingBuffer_1_Marker<T>*>(this, ___internal_method);
}
template<typename T>
inline void Meta::WitAi::Data::RingBuffer_1_Marker<T>::Offset(int32_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::RingBuffer_1_Marker<T>*>(),
                        {"Offset", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, amount);
}
template<typename T>
inline ::Meta::WitAi::Data::RingBuffer_1_Marker<T>* Meta::WitAi::Data::RingBuffer_1_Marker<T>::New_ctor(::Meta::WitAi::Data::RingBuffer_1<T>*  ringBuffer, int64_t  markerPosition, int32_t  bufIndex)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::RingBuffer_1_Marker<T>*>(ringBuffer, markerPosition, bufIndex));
}
// Ctor Parameters []
template<typename T>
constexpr ::Meta::WitAi::Data::RingBuffer_1_Marker<T>::RingBuffer_1_Marker()   {
}
template<typename T>
inline void Meta::WitAi::Data::RingBuffer_1_ByteDataWriter<T>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::RingBuffer_1_ByteDataWriter<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T>
inline void Meta::WitAi::Data::RingBuffer_1_ByteDataWriter<T>::Invoke(::ArrayW<T>  buffer, int32_t  offset, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::RingBuffer_1_ByteDataWriter<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, length);
}
template<typename T>
inline ::Meta::WitAi::Data::RingBuffer_1_ByteDataWriter<T>* Meta::WitAi::Data::RingBuffer_1_ByteDataWriter<T>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::RingBuffer_1_ByteDataWriter<T>*>(object, method));
}
// Ctor Parameters []
template<typename T>
constexpr ::Meta::WitAi::Data::RingBuffer_1_ByteDataWriter<T>::RingBuffer_1_ByteDataWriter()   {
}
template<typename T>
inline void Meta::WitAi::Data::RingBuffer_1_OnDataAdded<T>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::RingBuffer_1_OnDataAdded<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T>
inline void Meta::WitAi::Data::RingBuffer_1_OnDataAdded<T>::Invoke(::ArrayW<T>  data, int32_t  offset, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::RingBuffer_1_OnDataAdded<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, length);
}
template<typename T>
inline ::Meta::WitAi::Data::RingBuffer_1_OnDataAdded<T>* Meta::WitAi::Data::RingBuffer_1_OnDataAdded<T>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::RingBuffer_1_OnDataAdded<T>*>(object, method));
}
// Ctor Parameters []
template<typename T>
constexpr ::Meta::WitAi::Data::RingBuffer_1_OnDataAdded<T>::RingBuffer_1_OnDataAdded()   {
}
