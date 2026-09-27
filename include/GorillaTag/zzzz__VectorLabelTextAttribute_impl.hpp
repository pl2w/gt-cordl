#pragma once
// IWYU pragma private; include "GorillaTag/VectorLabelTextAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GorillaTag/zzzz__VectorLabelTextAttribute_def.hpp"
//  Writing Method size for method: ::GorillaTag::VectorLabelTextAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::VectorLabelTextAttribute::*)(::ArrayW<::StringW>)>(&::GorillaTag::VectorLabelTextAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1f790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::VectorLabelTextAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::VectorLabelTextAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::VectorLabelTextAttribute::*)(int32_t, ::ArrayW<::StringW>)>(&::GorillaTag::VectorLabelTextAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1f798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::VectorLabelTextAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::VectorLabelTextAttribute::_ctor(/* [ParamArray] */ ::ArrayW<::StringW>  labels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::VectorLabelTextAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, labels);
}
inline void GorillaTag::VectorLabelTextAttribute::_ctor(int32_t  width, /* [ParamArray] */ ::ArrayW<::StringW>  labels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::VectorLabelTextAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, labels);
}
inline ::GorillaTag::VectorLabelTextAttribute* GorillaTag::VectorLabelTextAttribute::New_ctor(/* [ParamArray] */ ::ArrayW<::StringW>  labels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::VectorLabelTextAttribute*>(labels));
}
inline ::GorillaTag::VectorLabelTextAttribute* GorillaTag::VectorLabelTextAttribute::New_ctor(int32_t  width, /* [ParamArray] */ ::ArrayW<::StringW>  labels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::VectorLabelTextAttribute*>(width, labels));
}
// Ctor Parameters []
constexpr ::GorillaTag::VectorLabelTextAttribute::VectorLabelTextAttribute()   {
}
