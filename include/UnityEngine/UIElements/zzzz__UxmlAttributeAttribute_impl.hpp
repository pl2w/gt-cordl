#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlAttributeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeAttribute::*)()>(&::UnityEngine::UIElements::UxmlAttributeAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb7b70f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeAttribute::*)(::StringW)>(&::UnityEngine::UIElements::UxmlAttributeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7b7148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeAttribute::*)(::StringW, ::ArrayW<::StringW>)>(&::UnityEngine::UIElements::UxmlAttributeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb7b7104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::UxmlAttributeAttribute::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& UnityEngine::UIElements::UxmlAttributeAttribute::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void UnityEngine::UIElements::UxmlAttributeAttribute::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::ArrayW<::StringW>& UnityEngine::UIElements::UxmlAttributeAttribute::__cordl_internal_get_obsoleteNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obsoleteNames;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::UIElements::UxmlAttributeAttribute::__cordl_internal_get_obsoleteNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obsoleteNames;
}
constexpr void UnityEngine::UIElements::UxmlAttributeAttribute::__cordl_internal_set_obsoleteNames(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___obsoleteNames = value;
}
inline void UnityEngine::UIElements::UxmlAttributeAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlAttributeAttribute::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::UIElements::UxmlAttributeAttribute::_ctor(::StringW  name, /* [ParamArray] */ ::ArrayW<::StringW>  obsoleteNames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, obsoleteNames);
}
inline ::UnityEngine::UIElements::UxmlAttributeAttribute* UnityEngine::UIElements::UxmlAttributeAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlAttributeAttribute*>());
}
inline ::UnityEngine::UIElements::UxmlAttributeAttribute* UnityEngine::UIElements::UxmlAttributeAttribute::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlAttributeAttribute*>(name));
}
inline ::UnityEngine::UIElements::UxmlAttributeAttribute* UnityEngine::UIElements::UxmlAttributeAttribute::New_ctor(::StringW  name, /* [ParamArray] */ ::ArrayW<::StringW>  obsoleteNames)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlAttributeAttribute*>(name, obsoleteNames));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlAttributeAttribute::UxmlAttributeAttribute()   {
}
