#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Datums/DatumProperty_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_def.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_def.hpp"
template<typename TValue,typename TDatum>
constexpr bool& Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::__cordl_internal_get_m_UseConstant()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseConstant;
}
template<typename TValue,typename TDatum>
constexpr bool const& Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::__cordl_internal_get_m_UseConstant() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseConstant;
}
template<typename TValue,typename TDatum>
constexpr void Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::__cordl_internal_set_m_UseConstant(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseConstant = value;
}
template<typename TValue,typename TDatum>
constexpr TValue& Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::__cordl_internal_get_m_ConstantValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConstantValue;
}
template<typename TValue,typename TDatum>
constexpr TValue const& Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::__cordl_internal_get_m_ConstantValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConstantValue;
}
template<typename TValue,typename TDatum>
constexpr void Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::__cordl_internal_set_m_ConstantValue(TValue  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ConstantValue = value;
}
template<typename TValue,typename TDatum>
constexpr TDatum& Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::__cordl_internal_get_m_Variable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Variable;
}
template<typename TValue,typename TDatum>
constexpr TDatum const& Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::__cordl_internal_get_m_Variable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Variable;
}
template<typename TValue,typename TDatum>
constexpr void Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::__cordl_internal_set_m_Variable(TDatum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Variable = value;
}
template<typename TValue,typename TDatum>
inline void Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TValue,typename TDatum>
inline void Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::_ctor(TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>*>(),
                        {".ctor", {}, {::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TValue,typename TDatum>
inline void Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::_ctor(TDatum  datum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>*>(),
                        {".ctor", {}, {::i2c::type_of<TDatum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, datum);
}
template<typename TValue,typename TDatum>
inline TValue Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template<typename TValue,typename TDatum>
inline void Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::set_Value(TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>*>(),
                        {"set_Value", {}, {::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TValue,typename TDatum>
inline ::UnityW<TValue> Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::get_Datum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>*>(),
                        {"get_Datum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<TValue>>(this, ___internal_method);
}
template<typename TValue,typename TDatum>
inline TValue Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::get_ConstantValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>*>(),
                        {"get_ConstantValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template<typename TValue,typename TDatum>
inline TValue Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::op_Implicit_TValue(::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>*  datumProperty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(nullptr, ___internal_method, datumProperty);
}
template<typename TValue,typename TDatum>
inline ::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>* Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>*>());
}
template<typename TValue,typename TDatum>
inline ::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>* Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::New_ctor(TValue  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>*>(value));
}
template<typename TValue,typename TDatum>
inline ::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>* Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::New_ctor(TDatum  datum)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>*>(datum));
}
// Ctor Parameters []
template<typename TValue,typename TDatum>
constexpr ::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue,TDatum>::DatumProperty_2()   {
}
