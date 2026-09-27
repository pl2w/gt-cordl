#pragma once
// IWYU pragma private; include "Meta/Conduit/InvocationContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Conduit/zzzz__InvocationContext_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::Conduit::InvocationContext.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Meta::Conduit::InvocationContext::*)()>(&::Meta::Conduit::InvocationContext::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::InvocationContext.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::InvocationContext::*)(::System::Type*)>(&::Meta::Conduit::InvocationContext::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"set_Type", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::InvocationContext.get_MethodInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::Meta::Conduit::InvocationContext::*)()>(&::Meta::Conduit::InvocationContext::get_MethodInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"get_MethodInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::InvocationContext.set_MethodInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::InvocationContext::*)(::System::Reflection::MethodInfo*)>(&::Meta::Conduit::InvocationContext::set_MethodInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"set_MethodInfo", {}, {::i2c::type_of<::System::Reflection::MethodInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::InvocationContext.get_MinConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::Conduit::InvocationContext::*)()>(&::Meta::Conduit::InvocationContext::get_MinConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"get_MinConfidence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::InvocationContext.set_MinConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::InvocationContext::*)(float_t)>(&::Meta::Conduit::InvocationContext::set_MinConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"set_MinConfidence", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::InvocationContext.get_MaxConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::Conduit::InvocationContext::*)()>(&::Meta::Conduit::InvocationContext::get_MaxConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"get_MaxConfidence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::InvocationContext.set_MaxConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::InvocationContext::*)(float_t)>(&::Meta::Conduit::InvocationContext::set_MaxConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"set_MaxConfidence", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::InvocationContext.get_ValidatePartial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::InvocationContext::*)()>(&::Meta::Conduit::InvocationContext::get_ValidatePartial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"get_ValidatePartial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::InvocationContext.set_ValidatePartial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::InvocationContext::*)(bool)>(&::Meta::Conduit::InvocationContext::set_ValidatePartial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"set_ValidatePartial", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::InvocationContext.get_ParameterMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Meta::Conduit::InvocationContext::*)()>(&::Meta::Conduit::InvocationContext::get_ParameterMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"get_ParameterMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::InvocationContext.set_ParameterMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::InvocationContext::*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Meta::Conduit::InvocationContext::set_ParameterMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"set_ParameterMap", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::InvocationContext.get_CustomAttributeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Meta::Conduit::InvocationContext::*)()>(&::Meta::Conduit::InvocationContext::get_CustomAttributeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"get_CustomAttributeType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::InvocationContext.set_CustomAttributeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::InvocationContext::*)(::System::Type*)>(&::Meta::Conduit::InvocationContext::set_CustomAttributeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"set_CustomAttributeType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::InvocationContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::InvocationContext::*)()>(&::Meta::Conduit::InvocationContext::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e1f218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Meta::Conduit::InvocationContext::__cordl_internal_get__Type_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr ::System::Type* const& Meta::Conduit::InvocationContext::__cordl_internal_get__Type_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr void Meta::Conduit::InvocationContext::__cordl_internal_set__Type_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Type_k__BackingField = value;
}
constexpr ::System::Reflection::MethodInfo*& Meta::Conduit::InvocationContext::__cordl_internal_get__MethodInfo_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MethodInfo_k__BackingField;
}
constexpr ::System::Reflection::MethodInfo* const& Meta::Conduit::InvocationContext::__cordl_internal_get__MethodInfo_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MethodInfo_k__BackingField;
}
constexpr void Meta::Conduit::InvocationContext::__cordl_internal_set__MethodInfo_k__BackingField(::System::Reflection::MethodInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MethodInfo_k__BackingField = value;
}
constexpr float_t& Meta::Conduit::InvocationContext::__cordl_internal_get__MinConfidence_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinConfidence_k__BackingField;
}
constexpr float_t const& Meta::Conduit::InvocationContext::__cordl_internal_get__MinConfidence_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinConfidence_k__BackingField;
}
constexpr void Meta::Conduit::InvocationContext::__cordl_internal_set__MinConfidence_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MinConfidence_k__BackingField = value;
}
constexpr float_t& Meta::Conduit::InvocationContext::__cordl_internal_get__MaxConfidence_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxConfidence_k__BackingField;
}
constexpr float_t const& Meta::Conduit::InvocationContext::__cordl_internal_get__MaxConfidence_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxConfidence_k__BackingField;
}
constexpr void Meta::Conduit::InvocationContext::__cordl_internal_set__MaxConfidence_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaxConfidence_k__BackingField = value;
}
constexpr bool& Meta::Conduit::InvocationContext::__cordl_internal_get__ValidatePartial_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ValidatePartial_k__BackingField;
}
constexpr bool const& Meta::Conduit::InvocationContext::__cordl_internal_get__ValidatePartial_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ValidatePartial_k__BackingField;
}
constexpr void Meta::Conduit::InvocationContext::__cordl_internal_set__ValidatePartial_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ValidatePartial_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Meta::Conduit::InvocationContext::__cordl_internal_get__ParameterMap_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterMap_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Meta::Conduit::InvocationContext::__cordl_internal_get__ParameterMap_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterMap_k__BackingField;
}
constexpr void Meta::Conduit::InvocationContext::__cordl_internal_set__ParameterMap_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParameterMap_k__BackingField = value;
}
constexpr ::System::Type*& Meta::Conduit::InvocationContext::__cordl_internal_get__CustomAttributeType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CustomAttributeType_k__BackingField;
}
constexpr ::System::Type* const& Meta::Conduit::InvocationContext::__cordl_internal_get__CustomAttributeType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CustomAttributeType_k__BackingField;
}
constexpr void Meta::Conduit::InvocationContext::__cordl_internal_set__CustomAttributeType_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CustomAttributeType_k__BackingField = value;
}
inline ::System::Type* Meta::Conduit::InvocationContext::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Meta::Conduit::InvocationContext::set_Type(::System::Type*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"set_Type", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Reflection::MethodInfo* Meta::Conduit::InvocationContext::get_MethodInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"get_MethodInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline void Meta::Conduit::InvocationContext::set_MethodInfo(::System::Reflection::MethodInfo*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"set_MethodInfo", {}, {::i2c::type_of<::System::Reflection::MethodInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Meta::Conduit::InvocationContext::get_MinConfidence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"get_MinConfidence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Meta::Conduit::InvocationContext::set_MinConfidence(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"set_MinConfidence", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Meta::Conduit::InvocationContext::get_MaxConfidence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"get_MaxConfidence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Meta::Conduit::InvocationContext::set_MaxConfidence(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"set_MaxConfidence", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::Conduit::InvocationContext::get_ValidatePartial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"get_ValidatePartial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Conduit::InvocationContext::set_ValidatePartial(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"set_ValidatePartial", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Meta::Conduit::InvocationContext::get_ParameterMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"get_ParameterMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline void Meta::Conduit::InvocationContext::set_ParameterMap(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"set_ParameterMap", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* Meta::Conduit::InvocationContext::get_CustomAttributeType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"get_CustomAttributeType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Meta::Conduit::InvocationContext::set_CustomAttributeType(::System::Type*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {"set_CustomAttributeType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Conduit::InvocationContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Conduit::InvocationContext* Meta::Conduit::InvocationContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Conduit::InvocationContext*>());
}
// Ctor Parameters []
constexpr ::Meta::Conduit::InvocationContext::InvocationContext()   {
}
