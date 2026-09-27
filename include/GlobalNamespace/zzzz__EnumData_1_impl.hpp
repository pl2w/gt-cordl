#pragma once
// IWYU pragma private; include "GlobalNamespace/EnumData_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EnumData_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
template<typename TEnum>
constexpr ::ArrayW<::StringW>& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_Names()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Names;
}
template<typename TEnum>
constexpr ::ArrayW<::StringW> const& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_Names() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Names;
}
template<typename TEnum>
constexpr void GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_set_Names(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Names = value;
}
template<typename TEnum>
constexpr ::ArrayW<TEnum>& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_Values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Values;
}
template<typename TEnum>
constexpr ::ArrayW<TEnum> const& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_Values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Values;
}
template<typename TEnum>
constexpr void GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_set_Values(::ArrayW<TEnum>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Values = value;
}
template<typename TEnum>
constexpr ::ArrayW<int64_t>& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_LongValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LongValues;
}
template<typename TEnum>
constexpr ::ArrayW<int64_t> const& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_LongValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LongValues;
}
template<typename TEnum>
constexpr void GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_set_LongValues(::ArrayW<int64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LongValues = value;
}
template<typename TEnum>
constexpr bool& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_IsBitMaskCompatible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsBitMaskCompatible;
}
template<typename TEnum>
constexpr bool const& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_IsBitMaskCompatible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsBitMaskCompatible;
}
template<typename TEnum>
constexpr void GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_set_IsBitMaskCompatible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsBitMaskCompatible = value;
}
template<typename TEnum>
constexpr ::System::Collections::Generic::Dictionary_2<TEnum,::StringW>*& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_EnumToName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnumToName;
}
template<typename TEnum>
constexpr ::System::Collections::Generic::Dictionary_2<TEnum,::StringW>* const& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_EnumToName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnumToName;
}
template<typename TEnum>
constexpr void GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_set_EnumToName(::System::Collections::Generic::Dictionary_2<TEnum,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnumToName = value;
}
template<typename TEnum>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,TEnum>*& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_NameToEnum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NameToEnum;
}
template<typename TEnum>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,TEnum>* const& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_NameToEnum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NameToEnum;
}
template<typename TEnum>
constexpr void GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_set_NameToEnum(::System::Collections::Generic::Dictionary_2<::StringW,TEnum>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NameToEnum = value;
}
template<typename TEnum>
constexpr ::System::Collections::Generic::Dictionary_2<TEnum,int32_t>*& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_EnumToIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnumToIndex;
}
template<typename TEnum>
constexpr ::System::Collections::Generic::Dictionary_2<TEnum,int32_t>* const& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_EnumToIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnumToIndex;
}
template<typename TEnum>
constexpr void GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_set_EnumToIndex(::System::Collections::Generic::Dictionary_2<TEnum,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnumToIndex = value;
}
template<typename TEnum>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,TEnum>*& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_IndexToEnum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IndexToEnum;
}
template<typename TEnum>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,TEnum>* const& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_IndexToEnum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IndexToEnum;
}
template<typename TEnum>
constexpr void GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_set_IndexToEnum(::System::Collections::Generic::Dictionary_2<int32_t,TEnum>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IndexToEnum = value;
}
template<typename TEnum>
constexpr ::System::Collections::Generic::Dictionary_2<TEnum,int64_t>*& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_EnumToLong()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnumToLong;
}
template<typename TEnum>
constexpr ::System::Collections::Generic::Dictionary_2<TEnum,int64_t>* const& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_EnumToLong() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnumToLong;
}
template<typename TEnum>
constexpr void GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_set_EnumToLong(::System::Collections::Generic::Dictionary_2<TEnum,int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnumToLong = value;
}
template<typename TEnum>
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,TEnum>*& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_LongToEnum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LongToEnum;
}
template<typename TEnum>
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,TEnum>* const& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_LongToEnum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LongToEnum;
}
template<typename TEnum>
constexpr void GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_set_LongToEnum(::System::Collections::Generic::Dictionary_2<int64_t,TEnum>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LongToEnum = value;
}
template<typename TEnum>
constexpr TEnum& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_MinValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinValue;
}
template<typename TEnum>
constexpr TEnum const& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_MinValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinValue;
}
template<typename TEnum>
constexpr void GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_set_MinValue(TEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinValue = value;
}
template<typename TEnum>
constexpr TEnum& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_MaxValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxValue;
}
template<typename TEnum>
constexpr TEnum const& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_MaxValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxValue;
}
template<typename TEnum>
constexpr void GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_set_MaxValue(TEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxValue = value;
}
template<typename TEnum>
constexpr int32_t& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_MinInt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinInt;
}
template<typename TEnum>
constexpr int32_t const& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_MinInt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinInt;
}
template<typename TEnum>
constexpr void GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_set_MinInt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinInt = value;
}
template<typename TEnum>
constexpr int32_t& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_MaxInt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxInt;
}
template<typename TEnum>
constexpr int32_t const& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_MaxInt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxInt;
}
template<typename TEnum>
constexpr void GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_set_MaxInt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxInt = value;
}
template<typename TEnum>
constexpr int64_t& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_MinLong()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinLong;
}
template<typename TEnum>
constexpr int64_t const& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_MinLong() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinLong;
}
template<typename TEnum>
constexpr void GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_set_MinLong(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinLong = value;
}
template<typename TEnum>
constexpr int64_t& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_MaxLong()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxLong;
}
template<typename TEnum>
constexpr int64_t const& GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_get_MaxLong() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxLong;
}
template<typename TEnum>
constexpr void GlobalNamespace::EnumData_1<TEnum>::__cordl_internal_set_MaxLong(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxLong = value;
}
template<typename TEnum>
inline void GlobalNamespace::EnumData_1<TEnum>::setStaticF__Shared_k__BackingField(::GlobalNamespace::EnumData_1<TEnum>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::EnumData_1<TEnum>*, "<Shared>k__BackingField", ::GlobalNamespace::EnumData_1<TEnum>*>(std::forward<::GlobalNamespace::EnumData_1<TEnum>*>(value));
}
template<typename TEnum>
inline ::GlobalNamespace::EnumData_1<TEnum>* GlobalNamespace::EnumData_1<TEnum>::getStaticF__Shared_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::EnumData_1<TEnum>*, "<Shared>k__BackingField", ::GlobalNamespace::EnumData_1<TEnum>*>();
}
template<typename TEnum>
inline ::GlobalNamespace::EnumData_1<TEnum>* GlobalNamespace::EnumData_1<TEnum>::get_Shared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnumData_1<TEnum>*>(),
                        {"get_Shared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnumData_1<TEnum>*>(nullptr, ___internal_method);
}
template<typename TEnum>
inline void GlobalNamespace::EnumData_1<TEnum>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnumData_1<TEnum>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEnum>
inline ::GlobalNamespace::EnumData_1<TEnum>* GlobalNamespace::EnumData_1<TEnum>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnumData_1<TEnum>*>());
}
// Ctor Parameters []
template<typename TEnum>
constexpr ::GlobalNamespace::EnumData_1<TEnum>::EnumData_1()   {
}
