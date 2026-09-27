#pragma once
// IWYU pragma private; include "Unity/Collections/GenerateTestsForBurstCompatibilityAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "Unity/Collections/zzzz__GenerateTestsForBurstCompatibilityAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute.set_GenericTypeArguments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::*)(::ArrayW<::System::Type*>)>(&::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::set_GenericTypeArguments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf06a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute*>(),
                        {"set_GenericTypeArguments", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::*)()>(&::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf06a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*>& Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::__cordl_internal_get__GenericTypeArguments_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GenericTypeArguments_k__BackingField;
}
constexpr ::ArrayW<::System::Type*> const& Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::__cordl_internal_get__GenericTypeArguments_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GenericTypeArguments_k__BackingField;
}
constexpr void Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::__cordl_internal_set__GenericTypeArguments_k__BackingField(::ArrayW<::System::Type*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GenericTypeArguments_k__BackingField = value;
}
constexpr ::StringW& Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::__cordl_internal_get_RequiredUnityDefine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequiredUnityDefine;
}
constexpr ::StringW const& Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::__cordl_internal_get_RequiredUnityDefine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequiredUnityDefine;
}
constexpr void Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::__cordl_internal_set_RequiredUnityDefine(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RequiredUnityDefine = value;
}
inline void Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::set_GenericTypeArguments(::ArrayW<::System::Type*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute*>(),
                        {"set_GenericTypeArguments", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute* Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::GenerateTestsForBurstCompatibilityAttribute()   {
}
