#pragma once
// IWYU pragma private; include "Fusion/FixedBufferPropertyAttribute.hpp"
#include "Fusion/zzzz__PropertyAttribute_impl.hpp"
#include "Fusion/zzzz__FixedBufferPropertyAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::FixedBufferPropertyAttribute.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Fusion::FixedBufferPropertyAttribute::*)()>(&::Fusion::FixedBufferPropertyAttribute::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6ffe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedBufferPropertyAttribute*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FixedBufferPropertyAttribute.get_SurrogateType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Fusion::FixedBufferPropertyAttribute::*)()>(&::Fusion::FixedBufferPropertyAttribute::get_SurrogateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6ffec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedBufferPropertyAttribute*>(),
                        {"get_SurrogateType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FixedBufferPropertyAttribute.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::FixedBufferPropertyAttribute::*)()>(&::Fusion::FixedBufferPropertyAttribute::get_Capacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6fff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedBufferPropertyAttribute*>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FixedBufferPropertyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FixedBufferPropertyAttribute::*)(::System::Type*, ::System::Type*, int32_t)>(&::Fusion::FixedBufferPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f6fffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedBufferPropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Fusion::FixedBufferPropertyAttribute::__cordl_internal_get__Type_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr ::System::Type* const& Fusion::FixedBufferPropertyAttribute::__cordl_internal_get__Type_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr void Fusion::FixedBufferPropertyAttribute::__cordl_internal_set__Type_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Type_k__BackingField = value;
}
constexpr ::System::Type*& Fusion::FixedBufferPropertyAttribute::__cordl_internal_get__SurrogateType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SurrogateType_k__BackingField;
}
constexpr ::System::Type* const& Fusion::FixedBufferPropertyAttribute::__cordl_internal_get__SurrogateType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SurrogateType_k__BackingField;
}
constexpr void Fusion::FixedBufferPropertyAttribute::__cordl_internal_set__SurrogateType_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SurrogateType_k__BackingField = value;
}
constexpr int32_t& Fusion::FixedBufferPropertyAttribute::__cordl_internal_get__Capacity_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Capacity_k__BackingField;
}
constexpr int32_t const& Fusion::FixedBufferPropertyAttribute::__cordl_internal_get__Capacity_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Capacity_k__BackingField;
}
constexpr void Fusion::FixedBufferPropertyAttribute::__cordl_internal_set__Capacity_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Capacity_k__BackingField = value;
}
inline ::System::Type* Fusion::FixedBufferPropertyAttribute::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedBufferPropertyAttribute*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* Fusion::FixedBufferPropertyAttribute::get_SurrogateType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedBufferPropertyAttribute*>(),
                        {"get_SurrogateType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline int32_t Fusion::FixedBufferPropertyAttribute::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedBufferPropertyAttribute*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::FixedBufferPropertyAttribute::_ctor(::System::Type*  fieldType, ::System::Type*  surrogateType, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedBufferPropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fieldType, surrogateType, capacity);
}
inline ::Fusion::FixedBufferPropertyAttribute* Fusion::FixedBufferPropertyAttribute::New_ctor(::System::Type*  fieldType, ::System::Type*  surrogateType, int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FixedBufferPropertyAttribute*>(fieldType, surrogateType, capacity));
}
// Ctor Parameters []
constexpr ::Fusion::FixedBufferPropertyAttribute::FixedBufferPropertyAttribute()   {
}
