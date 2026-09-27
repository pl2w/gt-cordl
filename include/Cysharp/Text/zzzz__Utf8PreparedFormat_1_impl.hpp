#pragma once
// IWYU pragma private; include "Cysharp/Text/Utf8PreparedFormat_1.hpp"
#include "Cysharp/Text/zzzz__Utf8FormatSegment_impl.hpp"
#include "System/Buffers/zzzz__IBufferWriter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Text/zzzz__Utf8PreparedFormat_1_def.hpp"
template<typename T1>
constexpr ::StringW& Cysharp::Text::Utf8PreparedFormat_1<T1>::__cordl_internal_get__FormatString_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FormatString_k__BackingField;
}
template<typename T1>
constexpr ::StringW const& Cysharp::Text::Utf8PreparedFormat_1<T1>::__cordl_internal_get__FormatString_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FormatString_k__BackingField;
}
template<typename T1>
constexpr void Cysharp::Text::Utf8PreparedFormat_1<T1>::__cordl_internal_set__FormatString_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FormatString_k__BackingField = value;
}
template<typename T1>
constexpr int32_t& Cysharp::Text::Utf8PreparedFormat_1<T1>::__cordl_internal_get__MinSize_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinSize_k__BackingField;
}
template<typename T1>
constexpr int32_t const& Cysharp::Text::Utf8PreparedFormat_1<T1>::__cordl_internal_get__MinSize_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinSize_k__BackingField;
}
template<typename T1>
constexpr void Cysharp::Text::Utf8PreparedFormat_1<T1>::__cordl_internal_set__MinSize_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MinSize_k__BackingField = value;
}
template<typename T1>
constexpr ::ArrayW<::Cysharp::Text::Utf8FormatSegment>& Cysharp::Text::Utf8PreparedFormat_1<T1>::__cordl_internal_get_segments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segments;
}
template<typename T1>
constexpr ::ArrayW<::Cysharp::Text::Utf8FormatSegment> const& Cysharp::Text::Utf8PreparedFormat_1<T1>::__cordl_internal_get_segments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segments;
}
template<typename T1>
constexpr void Cysharp::Text::Utf8PreparedFormat_1<T1>::__cordl_internal_set_segments(::ArrayW<::Cysharp::Text::Utf8FormatSegment>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___segments = value;
}
template<typename T1>
constexpr ::ArrayW<uint8_t>& Cysharp::Text::Utf8PreparedFormat_1<T1>::__cordl_internal_get_utf8PreEncodedbuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___utf8PreEncodedbuffer;
}
template<typename T1>
constexpr ::ArrayW<uint8_t> const& Cysharp::Text::Utf8PreparedFormat_1<T1>::__cordl_internal_get_utf8PreEncodedbuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___utf8PreEncodedbuffer;
}
template<typename T1>
constexpr void Cysharp::Text::Utf8PreparedFormat_1<T1>::__cordl_internal_set_utf8PreEncodedbuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___utf8PreEncodedbuffer = value;
}
template<typename T1>
inline ::StringW Cysharp::Text::Utf8PreparedFormat_1<T1>::get_FormatString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8PreparedFormat_1<T1>*>(),
                        {"get_FormatString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T1>
inline int32_t Cysharp::Text::Utf8PreparedFormat_1<T1>::get_MinSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8PreparedFormat_1<T1>*>(),
                        {"get_MinSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T1>
inline void Cysharp::Text::Utf8PreparedFormat_1<T1>::_ctor(::StringW  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8PreparedFormat_1<T1>*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format);
}
template<typename T1>
inline ::StringW Cysharp::Text::Utf8PreparedFormat_1<T1>::Format(T1  arg1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8PreparedFormat_1<T1>*>(),
                        {"Format", {}, {::i2c::type_of<T1>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, arg1);
}
template<typename T1>
template<typename TBufferWriter>
requires(::cordl_internals::type_constraint<TBufferWriter, ::System::Buffers::IBufferWriter_1<uint8_t>*>)
inline void Cysharp::Text::Utf8PreparedFormat_1<T1>::FormatTo(::by_ref<TBufferWriter>  sb, T1  arg1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8PreparedFormat_1<T1>*>(),
                    {"FormatTo", {::i2c::class_of<TBufferWriter>()}, {::i2c::type_of<::by_ref<TBufferWriter>>(), ::i2c::type_of<T1>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TBufferWriter>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb, arg1);
}
template<typename T1>
inline ::Cysharp::Text::Utf8PreparedFormat_1<T1>* Cysharp::Text::Utf8PreparedFormat_1<T1>::New_ctor(::StringW  format)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Text::Utf8PreparedFormat_1<T1>*>(format));
}
// Ctor Parameters []
template<typename T1>
constexpr ::Cysharp::Text::Utf8PreparedFormat_1<T1>::Utf8PreparedFormat_1()   {
}
