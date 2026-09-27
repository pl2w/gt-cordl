#pragma once
// IWYU pragma private; include "VYaml/Internal/ExpandBuffer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Internal/zzzz__ExpandBuffer_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
template<typename T>
constexpr int32_t& VYaml::Internal::ExpandBuffer_1<T>::__cordl_internal_get__Length_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Length_k__BackingField;
}
template<typename T>
constexpr int32_t const& VYaml::Internal::ExpandBuffer_1<T>::__cordl_internal_get__Length_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Length_k__BackingField;
}
template<typename T>
constexpr void VYaml::Internal::ExpandBuffer_1<T>::__cordl_internal_set__Length_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Length_k__BackingField = value;
}
template<typename T>
constexpr ::ArrayW<T>& VYaml::Internal::ExpandBuffer_1<T>::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
template<typename T>
constexpr ::ArrayW<T> const& VYaml::Internal::ExpandBuffer_1<T>::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
template<typename T>
constexpr void VYaml::Internal::ExpandBuffer_1<T>::__cordl_internal_set_buffer(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
template<typename T>
inline int32_t VYaml::Internal::ExpandBuffer_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ExpandBuffer_1<T>*>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void VYaml::Internal::ExpandBuffer_1<T>::set_Length(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ExpandBuffer_1<T>*>(),
                        {"set_Length", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void VYaml::Internal::ExpandBuffer_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ExpandBuffer_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline ::by_ref<T> VYaml::Internal::ExpandBuffer_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ExpandBuffer_1<T>*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(this, ___internal_method, index);
}
template<typename T>
inline ::System::Span_1<T> VYaml::Internal::ExpandBuffer_1<T>::AsSpan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ExpandBuffer_1<T>*>(),
                        {"AsSpan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(this, ___internal_method);
}
template<typename T>
inline ::System::Span_1<T> VYaml::Internal::ExpandBuffer_1<T>::AsSpan(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ExpandBuffer_1<T>*>(),
                        {"AsSpan", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(this, ___internal_method, length);
}
template<typename T>
inline void VYaml::Internal::ExpandBuffer_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ExpandBuffer_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::by_ref<T> VYaml::Internal::ExpandBuffer_1<T>::Peek()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ExpandBuffer_1<T>*>(),
                        {"Peek", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(this, ___internal_method);
}
template<typename T>
inline ::by_ref<T> VYaml::Internal::ExpandBuffer_1<T>::Pop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ExpandBuffer_1<T>*>(),
                        {"Pop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(this, ___internal_method);
}
template<typename T>
inline bool VYaml::Internal::ExpandBuffer_1<T>::TryPop(::by_ref<T>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ExpandBuffer_1<T>*>(),
                        {"TryPop", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template<typename T>
inline void VYaml::Internal::ExpandBuffer_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ExpandBuffer_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline void VYaml::Internal::ExpandBuffer_1<T>::SetCapacity(int32_t  newCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ExpandBuffer_1<T>*>(),
                        {"SetCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newCapacity);
}
template<typename T>
inline void VYaml::Internal::ExpandBuffer_1<T>::Grow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ExpandBuffer_1<T>*>(),
                        {"Grow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::VYaml::Internal::ExpandBuffer_1<T>* VYaml::Internal::ExpandBuffer_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Internal::ExpandBuffer_1<T>*>(capacity));
}
// Ctor Parameters []
template<typename T>
constexpr ::VYaml::Internal::ExpandBuffer_1<T>::ExpandBuffer_1()   {
}
