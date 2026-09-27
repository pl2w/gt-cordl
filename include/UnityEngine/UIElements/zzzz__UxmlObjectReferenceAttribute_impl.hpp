#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlObjectReferenceAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectReferenceAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectReferenceAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlObjectReferenceAttribute::*)()>(&::UnityEngine::UIElements::UxmlObjectReferenceAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb7b7160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UxmlObjectReferenceAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectReferenceAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlObjectReferenceAttribute::*)(::StringW)>(&::UnityEngine::UIElements::UxmlObjectReferenceAttribute::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb7b71b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UxmlObjectReferenceAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectReferenceAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlObjectReferenceAttribute::*)(::StringW, ::ArrayW<::System::Type*>)>(&::UnityEngine::UIElements::UxmlObjectReferenceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb7b716c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UxmlObjectReferenceAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::UxmlObjectReferenceAttribute::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& UnityEngine::UIElements::UxmlObjectReferenceAttribute::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void UnityEngine::UIElements::UxmlObjectReferenceAttribute::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::ArrayW<::System::Type*>& UnityEngine::UIElements::UxmlObjectReferenceAttribute::__cordl_internal_get_types()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___types;
}
constexpr ::ArrayW<::System::Type*> const& UnityEngine::UIElements::UxmlObjectReferenceAttribute::__cordl_internal_get_types() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___types;
}
constexpr void UnityEngine::UIElements::UxmlObjectReferenceAttribute::__cordl_internal_set_types(::ArrayW<::System::Type*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___types = value;
}
inline void UnityEngine::UIElements::UxmlObjectReferenceAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UxmlObjectReferenceAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlObjectReferenceAttribute::_ctor(::StringW  uxmlName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UxmlObjectReferenceAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uxmlName);
}
inline void UnityEngine::UIElements::UxmlObjectReferenceAttribute::_ctor(::StringW  uxmlName, /* [ParamArray] */ ::ArrayW<::System::Type*>  acceptedTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UxmlObjectReferenceAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uxmlName, acceptedTypes);
}
inline ::UnityEngine::UIElements::UxmlObjectReferenceAttribute* UnityEngine::UIElements::UxmlObjectReferenceAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlObjectReferenceAttribute*>());
}
inline ::UnityEngine::UIElements::UxmlObjectReferenceAttribute* UnityEngine::UIElements::UxmlObjectReferenceAttribute::New_ctor(::StringW  uxmlName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlObjectReferenceAttribute*>(uxmlName));
}
inline ::UnityEngine::UIElements::UxmlObjectReferenceAttribute* UnityEngine::UIElements::UxmlObjectReferenceAttribute::New_ctor(::StringW  uxmlName, /* [ParamArray] */ ::ArrayW<::System::Type*>  acceptedTypes)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlObjectReferenceAttribute*>(uxmlName, acceptedTypes));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlObjectReferenceAttribute::UxmlObjectReferenceAttribute()   {
}
