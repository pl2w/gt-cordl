#pragma once
// IWYU pragma private; include "BoingKit/ConditionalFieldAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "BoingKit/zzzz__ConditionalFieldAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::BoingKit::ConditionalFieldAttribute.get_ShowRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BoingKit::ConditionalFieldAttribute::*)()>(&::BoingKit::ConditionalFieldAttribute::get_ShowRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e2b9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::ConditionalFieldAttribute*>(),
                        {"get_ShowRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::ConditionalFieldAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::ConditionalFieldAttribute::*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*)>(&::BoingKit::ConditionalFieldAttribute::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5e2b9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::ConditionalFieldAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_PropertyToCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PropertyToCheck;
}
constexpr ::StringW const& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_PropertyToCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PropertyToCheck;
}
constexpr void BoingKit::ConditionalFieldAttribute::__cordl_internal_set_PropertyToCheck(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PropertyToCheck = value;
}
constexpr ::System::Object*& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_CompareValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompareValue;
}
constexpr ::System::Object* const& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_CompareValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompareValue;
}
constexpr void BoingKit::ConditionalFieldAttribute::__cordl_internal_set_CompareValue(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CompareValue = value;
}
constexpr ::System::Object*& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_CompareValue2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompareValue2;
}
constexpr ::System::Object* const& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_CompareValue2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompareValue2;
}
constexpr void BoingKit::ConditionalFieldAttribute::__cordl_internal_set_CompareValue2(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CompareValue2 = value;
}
constexpr ::System::Object*& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_CompareValue3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompareValue3;
}
constexpr ::System::Object* const& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_CompareValue3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompareValue3;
}
constexpr void BoingKit::ConditionalFieldAttribute::__cordl_internal_set_CompareValue3(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CompareValue3 = value;
}
constexpr ::System::Object*& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_CompareValue4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompareValue4;
}
constexpr ::System::Object* const& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_CompareValue4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompareValue4;
}
constexpr void BoingKit::ConditionalFieldAttribute::__cordl_internal_set_CompareValue4(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CompareValue4 = value;
}
constexpr ::System::Object*& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_CompareValue5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompareValue5;
}
constexpr ::System::Object* const& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_CompareValue5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompareValue5;
}
constexpr void BoingKit::ConditionalFieldAttribute::__cordl_internal_set_CompareValue5(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CompareValue5 = value;
}
constexpr ::System::Object*& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_CompareValue6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompareValue6;
}
constexpr ::System::Object* const& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_CompareValue6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompareValue6;
}
constexpr void BoingKit::ConditionalFieldAttribute::__cordl_internal_set_CompareValue6(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CompareValue6 = value;
}
constexpr ::StringW& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_Label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Label;
}
constexpr ::StringW const& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_Label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Label;
}
constexpr void BoingKit::ConditionalFieldAttribute::__cordl_internal_set_Label(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Label = value;
}
constexpr ::StringW& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_Tooltip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tooltip;
}
constexpr ::StringW const& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_Tooltip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tooltip;
}
constexpr void BoingKit::ConditionalFieldAttribute::__cordl_internal_set_Tooltip(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tooltip = value;
}
constexpr float_t& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_Min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Min;
}
constexpr float_t const& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_Min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Min;
}
constexpr void BoingKit::ConditionalFieldAttribute::__cordl_internal_set_Min(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Min = value;
}
constexpr float_t& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_Max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Max;
}
constexpr float_t const& BoingKit::ConditionalFieldAttribute::__cordl_internal_get_Max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Max;
}
constexpr void BoingKit::ConditionalFieldAttribute::__cordl_internal_set_Max(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Max = value;
}
inline bool BoingKit::ConditionalFieldAttribute::get_ShowRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::ConditionalFieldAttribute*>(),
                        {"get_ShowRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void BoingKit::ConditionalFieldAttribute::_ctor(::StringW  propertyToCheck, ::System::Object*  compareValue, ::System::Object*  compareValue2, ::System::Object*  compareValue3, ::System::Object*  compareValue4, ::System::Object*  compareValue5, ::System::Object*  compareValue6)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::ConditionalFieldAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyToCheck, compareValue, compareValue2, compareValue3, compareValue4, compareValue5, compareValue6);
}
inline ::BoingKit::ConditionalFieldAttribute* BoingKit::ConditionalFieldAttribute::New_ctor(::StringW  propertyToCheck, ::System::Object*  compareValue, ::System::Object*  compareValue2, ::System::Object*  compareValue3, ::System::Object*  compareValue4, ::System::Object*  compareValue5, ::System::Object*  compareValue6)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::ConditionalFieldAttribute*>(propertyToCheck, compareValue, compareValue2, compareValue3, compareValue4, compareValue5, compareValue6));
}
// Ctor Parameters []
constexpr ::BoingKit::ConditionalFieldAttribute::ConditionalFieldAttribute()   {
}
