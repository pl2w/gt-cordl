#pragma once
// IWYU pragma private; include "Fusion/DefaultForPropertyAttribute.hpp"
#include "Fusion/zzzz__PropertyAttribute_impl.hpp"
#include "Fusion/zzzz__DefaultForPropertyAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::DefaultForPropertyAttribute.get_PropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::DefaultForPropertyAttribute::*)()>(&::Fusion::DefaultForPropertyAttribute::get_PropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6ff84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DefaultForPropertyAttribute*>(),
                        {"get_PropertyName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DefaultForPropertyAttribute.get_WordOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::DefaultForPropertyAttribute::*)()>(&::Fusion::DefaultForPropertyAttribute::get_WordOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6ff8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DefaultForPropertyAttribute*>(),
                        {"get_WordOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DefaultForPropertyAttribute.get_WordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::DefaultForPropertyAttribute::*)()>(&::Fusion::DefaultForPropertyAttribute::get_WordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6ff94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DefaultForPropertyAttribute*>(),
                        {"get_WordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DefaultForPropertyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DefaultForPropertyAttribute::*)(::StringW, int32_t, int32_t)>(&::Fusion::DefaultForPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f6ff9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DefaultForPropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::DefaultForPropertyAttribute::__cordl_internal_get__PropertyName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyName_k__BackingField;
}
constexpr ::StringW const& Fusion::DefaultForPropertyAttribute::__cordl_internal_get__PropertyName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyName_k__BackingField;
}
constexpr void Fusion::DefaultForPropertyAttribute::__cordl_internal_set__PropertyName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PropertyName_k__BackingField = value;
}
constexpr int32_t& Fusion::DefaultForPropertyAttribute::__cordl_internal_get__WordOffset_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WordOffset_k__BackingField;
}
constexpr int32_t const& Fusion::DefaultForPropertyAttribute::__cordl_internal_get__WordOffset_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WordOffset_k__BackingField;
}
constexpr void Fusion::DefaultForPropertyAttribute::__cordl_internal_set__WordOffset_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WordOffset_k__BackingField = value;
}
constexpr int32_t& Fusion::DefaultForPropertyAttribute::__cordl_internal_get__WordCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WordCount_k__BackingField;
}
constexpr int32_t const& Fusion::DefaultForPropertyAttribute::__cordl_internal_get__WordCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WordCount_k__BackingField;
}
constexpr void Fusion::DefaultForPropertyAttribute::__cordl_internal_set__WordCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WordCount_k__BackingField = value;
}
inline ::StringW Fusion::DefaultForPropertyAttribute::get_PropertyName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DefaultForPropertyAttribute*>(),
                        {"get_PropertyName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Fusion::DefaultForPropertyAttribute::get_WordOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DefaultForPropertyAttribute*>(),
                        {"get_WordOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::DefaultForPropertyAttribute::get_WordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DefaultForPropertyAttribute*>(),
                        {"get_WordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::DefaultForPropertyAttribute::_ctor(::StringW  propertyName, int32_t  wordOffset, int32_t  wordCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DefaultForPropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, wordOffset, wordCount);
}
inline ::Fusion::DefaultForPropertyAttribute* Fusion::DefaultForPropertyAttribute::New_ctor(::StringW  propertyName, int32_t  wordOffset, int32_t  wordCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DefaultForPropertyAttribute*>(propertyName, wordOffset, wordCount));
}
// Ctor Parameters []
constexpr ::Fusion::DefaultForPropertyAttribute::DefaultForPropertyAttribute()   {
}
