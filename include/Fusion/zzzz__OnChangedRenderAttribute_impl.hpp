#pragma once
// IWYU pragma private; include "Fusion/OnChangedRenderAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__OnChangedRenderAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::OnChangedRenderAttribute.get_MethodName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::OnChangedRenderAttribute::*)()>(&::Fusion::OnChangedRenderAttribute::get_MethodName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f700b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::OnChangedRenderAttribute*>(),
                        {"get_MethodName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::OnChangedRenderAttribute.set_MethodName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::OnChangedRenderAttribute::*)(::StringW)>(&::Fusion::OnChangedRenderAttribute::set_MethodName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f700bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::OnChangedRenderAttribute*>(),
                        {"set_MethodName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::OnChangedRenderAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::OnChangedRenderAttribute::*)(::StringW)>(&::Fusion::OnChangedRenderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f700c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::OnChangedRenderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::OnChangedRenderAttribute::__cordl_internal_get__MethodName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MethodName_k__BackingField;
}
constexpr ::StringW const& Fusion::OnChangedRenderAttribute::__cordl_internal_get__MethodName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MethodName_k__BackingField;
}
constexpr void Fusion::OnChangedRenderAttribute::__cordl_internal_set__MethodName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MethodName_k__BackingField = value;
}
inline ::StringW Fusion::OnChangedRenderAttribute::get_MethodName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::OnChangedRenderAttribute*>(),
                        {"get_MethodName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::OnChangedRenderAttribute::set_MethodName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::OnChangedRenderAttribute*>(),
                        {"set_MethodName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::OnChangedRenderAttribute::_ctor(::StringW  methodName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::OnChangedRenderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName);
}
inline ::Fusion::OnChangedRenderAttribute* Fusion::OnChangedRenderAttribute::New_ctor(::StringW  methodName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::OnChangedRenderAttribute*>(methodName));
}
// Ctor Parameters []
constexpr ::Fusion::OnChangedRenderAttribute::OnChangedRenderAttribute()   {
}
