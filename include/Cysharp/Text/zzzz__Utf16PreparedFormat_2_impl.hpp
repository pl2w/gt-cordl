#pragma once
// IWYU pragma private; include "Cysharp/Text/Utf16PreparedFormat_2.hpp"
#include "Cysharp/Text/zzzz__Utf16FormatSegment_impl.hpp"
#include "System/Buffers/zzzz__IBufferWriter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Text/zzzz__Utf16PreparedFormat_2_def.hpp"
template<typename T1,typename T2>
constexpr ::StringW& Cysharp::Text::Utf16PreparedFormat_2<T1,T2>::__cordl_internal_get__FormatString_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FormatString_k__BackingField;
}
template<typename T1,typename T2>
constexpr ::StringW const& Cysharp::Text::Utf16PreparedFormat_2<T1,T2>::__cordl_internal_get__FormatString_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FormatString_k__BackingField;
}
template<typename T1,typename T2>
constexpr void Cysharp::Text::Utf16PreparedFormat_2<T1,T2>::__cordl_internal_set__FormatString_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FormatString_k__BackingField = value;
}
template<typename T1,typename T2>
constexpr int32_t& Cysharp::Text::Utf16PreparedFormat_2<T1,T2>::__cordl_internal_get__MinSize_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinSize_k__BackingField;
}
template<typename T1,typename T2>
constexpr int32_t const& Cysharp::Text::Utf16PreparedFormat_2<T1,T2>::__cordl_internal_get__MinSize_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinSize_k__BackingField;
}
template<typename T1,typename T2>
constexpr void Cysharp::Text::Utf16PreparedFormat_2<T1,T2>::__cordl_internal_set__MinSize_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MinSize_k__BackingField = value;
}
template<typename T1,typename T2>
constexpr ::ArrayW<::Cysharp::Text::Utf16FormatSegment>& Cysharp::Text::Utf16PreparedFormat_2<T1,T2>::__cordl_internal_get_segments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segments;
}
template<typename T1,typename T2>
constexpr ::ArrayW<::Cysharp::Text::Utf16FormatSegment> const& Cysharp::Text::Utf16PreparedFormat_2<T1,T2>::__cordl_internal_get_segments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segments;
}
template<typename T1,typename T2>
constexpr void Cysharp::Text::Utf16PreparedFormat_2<T1,T2>::__cordl_internal_set_segments(::ArrayW<::Cysharp::Text::Utf16FormatSegment>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___segments = value;
}
template<typename T1,typename T2>
inline ::StringW Cysharp::Text::Utf16PreparedFormat_2<T1,T2>::get_FormatString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf16PreparedFormat_2<T1,T2>*>(),
                        {"get_FormatString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T1,typename T2>
inline int32_t Cysharp::Text::Utf16PreparedFormat_2<T1,T2>::get_MinSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf16PreparedFormat_2<T1,T2>*>(),
                        {"get_MinSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T1,typename T2>
inline void Cysharp::Text::Utf16PreparedFormat_2<T1,T2>::_ctor(::StringW  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf16PreparedFormat_2<T1,T2>*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format);
}
template<typename T1,typename T2>
inline ::StringW Cysharp::Text::Utf16PreparedFormat_2<T1,T2>::Format(T1  arg1, T2  arg2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf16PreparedFormat_2<T1,T2>*>(),
                        {"Format", {}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, arg1, arg2);
}
template<typename T1,typename T2>
template<typename TBufferWriter>
requires(::cordl_internals::type_constraint<TBufferWriter, ::System::Buffers::IBufferWriter_1<char16_t>*>)
inline void Cysharp::Text::Utf16PreparedFormat_2<T1,T2>::FormatTo(::by_ref<TBufferWriter>  sb, T1  arg1, T2  arg2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf16PreparedFormat_2<T1,T2>*>(),
                    {"FormatTo", {::i2c::class_of<TBufferWriter>()}, {::i2c::type_of<::by_ref<TBufferWriter>>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TBufferWriter>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb, arg1, arg2);
}
template<typename T1,typename T2>
inline ::Cysharp::Text::Utf16PreparedFormat_2<T1,T2>* Cysharp::Text::Utf16PreparedFormat_2<T1,T2>::New_ctor(::StringW  format)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Text::Utf16PreparedFormat_2<T1,T2>*>(format));
}
// Ctor Parameters []
template<typename T1,typename T2>
constexpr ::Cysharp::Text::Utf16PreparedFormat_2<T1,T2>::Utf16PreparedFormat_2()   {
}
