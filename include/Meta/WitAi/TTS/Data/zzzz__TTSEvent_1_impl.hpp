#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSEvent_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSEvent_1_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__ITTSEvent_def.hpp"
template<typename TData>
constexpr ::StringW& Meta::WitAi::TTS::Data::TTSEvent_1<TData>::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
template<typename TData>
constexpr ::StringW const& Meta::WitAi::TTS::Data::TTSEvent_1<TData>::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
template<typename TData>
constexpr void Meta::WitAi::TTS::Data::TTSEvent_1<TData>::__cordl_internal_set_type(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
template<typename TData>
constexpr int32_t& Meta::WitAi::TTS::Data::TTSEvent_1<TData>::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
template<typename TData>
constexpr int32_t const& Meta::WitAi::TTS::Data::TTSEvent_1<TData>::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
template<typename TData>
constexpr void Meta::WitAi::TTS::Data::TTSEvent_1<TData>::__cordl_internal_set_offset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
template<typename TData>
constexpr TData& Meta::WitAi::TTS::Data::TTSEvent_1<TData>::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
template<typename TData>
constexpr TData const& Meta::WitAi::TTS::Data::TTSEvent_1<TData>::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
template<typename TData>
constexpr void Meta::WitAi::TTS::Data::TTSEvent_1<TData>::__cordl_internal_set_data(TData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
template<typename TData>
inline int32_t Meta::WitAi::TTS::Data::TTSEvent_1<TData>::get_SampleOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEvent_1<TData>*>(),
                        {"get_SampleOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TData>
inline TData Meta::WitAi::TTS::Data::TTSEvent_1<TData>::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEvent_1<TData>*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TData>(this, ___internal_method);
}
template<typename TData>
inline void Meta::WitAi::TTS::Data::TTSEvent_1<TData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEvent_1<TData>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline ::Meta::WitAi::TTS::Data::TTSEvent_1<TData>* Meta::WitAi::TTS::Data::TTSEvent_1<TData>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Data::TTSEvent_1<TData>*>());
}
/// @brief Convert operator to "::Meta::WitAi::TTS::Data::ITTSEvent"
template<typename TData>
constexpr  Meta::WitAi::TTS::Data::TTSEvent_1<TData>::operator ::Meta::WitAi::TTS::Data::ITTSEvent*() noexcept {
return static_cast<::Meta::WitAi::TTS::Data::ITTSEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::TTS::Data::ITTSEvent"
template<typename TData>
constexpr ::Meta::WitAi::TTS::Data::ITTSEvent* Meta::WitAi::TTS::Data::TTSEvent_1<TData>::i___Meta__WitAi__TTS__Data__ITTSEvent() noexcept {
return static_cast<::Meta::WitAi::TTS::Data::ITTSEvent*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TData>
constexpr ::Meta::WitAi::TTS::Data::TTSEvent_1<TData>::TTSEvent_1()   {
}
