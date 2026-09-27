#pragma once
// IWYU pragma private; include "Fusion/DrawIfAttribute.hpp"
#include "Fusion/zzzz__DoIfAttributeBase_impl.hpp"
#include "Fusion/zzzz__DrawIfMode_impl.hpp"
#include "Fusion/zzzz__DrawIfAttribute_def.hpp"
#include "Fusion/zzzz__CompareOperator_def.hpp"
#include "Fusion/zzzz__DrawIfMode_def.hpp"
//  Writing Method size for method: ::Fusion::DrawIfAttribute.set_Hide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DrawIfAttribute::*)(bool)>(&::Fusion::DrawIfAttribute::set_Hide)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f3d4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DrawIfAttribute*>(),
                        {"set_Hide", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DrawIfAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DrawIfAttribute::*)(::StringW, bool, ::Fusion::CompareOperator, ::Fusion::DrawIfMode)>(&::Fusion::DrawIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f3d4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DrawIfAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Fusion::CompareOperator>(), ::i2c::type_of<::Fusion::DrawIfMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DrawIfAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DrawIfAttribute::*)(::StringW, int64_t, ::Fusion::CompareOperator, ::Fusion::DrawIfMode)>(&::Fusion::DrawIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f3d560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DrawIfAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Fusion::CompareOperator>(), ::i2c::type_of<::Fusion::DrawIfMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DrawIfAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DrawIfAttribute::*)(::StringW)>(&::Fusion::DrawIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f3d5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DrawIfAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::DrawIfMode& Fusion::DrawIfAttribute::__cordl_internal_get_Mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mode;
}
constexpr ::Fusion::DrawIfMode const& Fusion::DrawIfAttribute::__cordl_internal_get_Mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mode;
}
constexpr void Fusion::DrawIfAttribute::__cordl_internal_set_Mode(::Fusion::DrawIfMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Mode = value;
}
inline void Fusion::DrawIfAttribute::set_Hide(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DrawIfAttribute*>(),
                        {"set_Hide", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::DrawIfAttribute::_ctor(::StringW  conditionMember, bool  compareToValue, ::Fusion::CompareOperator  compare, ::Fusion::DrawIfMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DrawIfAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Fusion::CompareOperator>(), ::i2c::type_of<::Fusion::DrawIfMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conditionMember, compareToValue, compare, mode);
}
inline void Fusion::DrawIfAttribute::_ctor(::StringW  conditionMember, int64_t  compareToValue, ::Fusion::CompareOperator  compare, ::Fusion::DrawIfMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DrawIfAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Fusion::CompareOperator>(), ::i2c::type_of<::Fusion::DrawIfMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conditionMember, compareToValue, compare, mode);
}
inline void Fusion::DrawIfAttribute::_ctor(::StringW  conditionMember)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DrawIfAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conditionMember);
}
inline ::Fusion::DrawIfAttribute* Fusion::DrawIfAttribute::New_ctor(::StringW  conditionMember, bool  compareToValue, ::Fusion::CompareOperator  compare, ::Fusion::DrawIfMode  mode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DrawIfAttribute*>(conditionMember, compareToValue, compare, mode));
}
inline ::Fusion::DrawIfAttribute* Fusion::DrawIfAttribute::New_ctor(::StringW  conditionMember, int64_t  compareToValue, ::Fusion::CompareOperator  compare, ::Fusion::DrawIfMode  mode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DrawIfAttribute*>(conditionMember, compareToValue, compare, mode));
}
inline ::Fusion::DrawIfAttribute* Fusion::DrawIfAttribute::New_ctor(::StringW  conditionMember)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DrawIfAttribute*>(conditionMember));
}
// Ctor Parameters []
constexpr ::Fusion::DrawIfAttribute::DrawIfAttribute()   {
}
