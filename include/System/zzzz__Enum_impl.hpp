#pragma once
// IWYU pragma private; include "System/Enum.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Enum_EnumResult_def.hpp"
#include "System/zzzz__Enum_ParseFailureKind_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Enum_ValuesAndNames._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Enum_ValuesAndNames::*)(::ArrayW<uint64_t>, ::ArrayW<::StringW>)>(&::System::Enum_ValuesAndNames::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa312f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Enum_ValuesAndNames*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint64_t>& System::Enum_ValuesAndNames::__cordl_internal_get_Values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Values;
}
constexpr ::ArrayW<uint64_t> const& System::Enum_ValuesAndNames::__cordl_internal_get_Values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Values;
}
constexpr void System::Enum_ValuesAndNames::__cordl_internal_set_Values(::ArrayW<uint64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Values = value;
}
constexpr ::ArrayW<::StringW>& System::Enum_ValuesAndNames::__cordl_internal_get_Names()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Names;
}
constexpr ::ArrayW<::StringW> const& System::Enum_ValuesAndNames::__cordl_internal_get_Names() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Names;
}
constexpr void System::Enum_ValuesAndNames::__cordl_internal_set_Names(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Names = value;
}
inline void System::Enum_ValuesAndNames::_ctor(::ArrayW<uint64_t>  values, ::ArrayW<::StringW>  names)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Enum_ValuesAndNames*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values, names);
}
inline ::System::Enum_ValuesAndNames* System::Enum_ValuesAndNames::New_ctor(::ArrayW<uint64_t>  values, ::ArrayW<::StringW>  names)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Enum_ValuesAndNames*>(values, names));
}
// Ctor Parameters []
constexpr ::System::Enum_ValuesAndNames::Enum_ValuesAndNames()   {
}
