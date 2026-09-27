#pragma once
// IWYU pragma private; include "System/Buffers/ReadOnlySequenceSegment_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ReadOnlyMemory_1_impl.hpp"
#include "System/Buffers/zzzz__ReadOnlySequenceSegment_1_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
template<typename T>
constexpr ::System::ReadOnlyMemory_1<T>& System::Buffers::ReadOnlySequenceSegment_1<T>::__cordl_internal_get__Memory_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Memory_k__BackingField;
}
template<typename T>
constexpr ::System::ReadOnlyMemory_1<T> const& System::Buffers::ReadOnlySequenceSegment_1<T>::__cordl_internal_get__Memory_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Memory_k__BackingField;
}
template<typename T>
constexpr void System::Buffers::ReadOnlySequenceSegment_1<T>::__cordl_internal_set__Memory_k__BackingField(::System::ReadOnlyMemory_1<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Memory_k__BackingField = value;
}
template<typename T>
constexpr ::System::Buffers::ReadOnlySequenceSegment_1<T>*& System::Buffers::ReadOnlySequenceSegment_1<T>::__cordl_internal_get__Next_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Next_k__BackingField;
}
template<typename T>
constexpr ::System::Buffers::ReadOnlySequenceSegment_1<T>* const& System::Buffers::ReadOnlySequenceSegment_1<T>::__cordl_internal_get__Next_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Next_k__BackingField;
}
template<typename T>
constexpr void System::Buffers::ReadOnlySequenceSegment_1<T>::__cordl_internal_set__Next_k__BackingField(::System::Buffers::ReadOnlySequenceSegment_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Next_k__BackingField = value;
}
template<typename T>
constexpr int64_t& System::Buffers::ReadOnlySequenceSegment_1<T>::__cordl_internal_get__RunningIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RunningIndex_k__BackingField;
}
template<typename T>
constexpr int64_t const& System::Buffers::ReadOnlySequenceSegment_1<T>::__cordl_internal_get__RunningIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RunningIndex_k__BackingField;
}
template<typename T>
constexpr void System::Buffers::ReadOnlySequenceSegment_1<T>::__cordl_internal_set__RunningIndex_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RunningIndex_k__BackingField = value;
}
template<typename T>
inline ::System::ReadOnlyMemory_1<T> System::Buffers::ReadOnlySequenceSegment_1<T>::get_Memory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequenceSegment_1<T>*>(),
                        {"get_Memory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlyMemory_1<T>>(this, ___internal_method);
}
template<typename T>
inline void System::Buffers::ReadOnlySequenceSegment_1<T>::set_Memory(::System::ReadOnlyMemory_1<T>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequenceSegment_1<T>*>(),
                        {"set_Memory", {}, {::i2c::type_of<::System::ReadOnlyMemory_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::System::Buffers::ReadOnlySequenceSegment_1<T>* System::Buffers::ReadOnlySequenceSegment_1<T>::get_Next()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequenceSegment_1<T>*>(),
                        {"get_Next", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::ReadOnlySequenceSegment_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void System::Buffers::ReadOnlySequenceSegment_1<T>::set_Next(::System::Buffers::ReadOnlySequenceSegment_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequenceSegment_1<T>*>(),
                        {"set_Next", {}, {::i2c::type_of<::System::Buffers::ReadOnlySequenceSegment_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline int64_t System::Buffers::ReadOnlySequenceSegment_1<T>::get_RunningIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequenceSegment_1<T>*>(),
                        {"get_RunningIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
template<typename T>
inline void System::Buffers::ReadOnlySequenceSegment_1<T>::set_RunningIndex(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequenceSegment_1<T>*>(),
                        {"set_RunningIndex", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void System::Buffers::ReadOnlySequenceSegment_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::ReadOnlySequenceSegment_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Buffers::ReadOnlySequenceSegment_1<T>* System::Buffers::ReadOnlySequenceSegment_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Buffers::ReadOnlySequenceSegment_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Buffers::ReadOnlySequenceSegment_1<T>::ReadOnlySequenceSegment_1()   {
}
