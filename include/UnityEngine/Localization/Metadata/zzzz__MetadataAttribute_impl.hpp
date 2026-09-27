#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/MetadataAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__MetadataType_impl.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__MetadataAttribute_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__MetadataType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::MetadataAttribute.get_MenuItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Metadata::MetadataAttribute::*)()>(&::UnityEngine::Localization::Metadata::MetadataAttribute::get_MenuItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04f600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataAttribute*>(),
                        {"get_MenuItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::MetadataAttribute.set_MenuItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::MetadataAttribute::*)(::StringW)>(&::UnityEngine::Localization::Metadata::MetadataAttribute::set_MenuItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04f608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataAttribute*>(),
                        {"set_MenuItem", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::MetadataAttribute.get_AllowMultiple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Metadata::MetadataAttribute::*)()>(&::UnityEngine::Localization::Metadata::MetadataAttribute::get_AllowMultiple)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04f610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataAttribute*>(),
                        {"get_AllowMultiple", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::MetadataAttribute.set_AllowMultiple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::MetadataAttribute::*)(bool)>(&::UnityEngine::Localization::Metadata::MetadataAttribute::set_AllowMultiple)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04f618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataAttribute*>(),
                        {"set_AllowMultiple", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::MetadataAttribute.get_AllowedTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Metadata::MetadataType (::UnityEngine::Localization::Metadata::MetadataAttribute::*)()>(&::UnityEngine::Localization::Metadata::MetadataAttribute::get_AllowedTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04f620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataAttribute*>(),
                        {"get_AllowedTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::MetadataAttribute.set_AllowedTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::MetadataAttribute::*)(::UnityEngine::Localization::Metadata::MetadataType)>(&::UnityEngine::Localization::Metadata::MetadataAttribute::set_AllowedTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04f628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataAttribute*>(),
                        {"set_AllowedTypes", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::MetadataType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::MetadataAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::MetadataAttribute::*)()>(&::UnityEngine::Localization::Metadata::MetadataAttribute::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb04f630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Localization::Metadata::MetadataAttribute::__cordl_internal_get__MenuItem_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MenuItem_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Localization::Metadata::MetadataAttribute::__cordl_internal_get__MenuItem_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MenuItem_k__BackingField;
}
constexpr void UnityEngine::Localization::Metadata::MetadataAttribute::__cordl_internal_set__MenuItem_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MenuItem_k__BackingField = value;
}
constexpr bool& UnityEngine::Localization::Metadata::MetadataAttribute::__cordl_internal_get__AllowMultiple_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowMultiple_k__BackingField;
}
constexpr bool const& UnityEngine::Localization::Metadata::MetadataAttribute::__cordl_internal_get__AllowMultiple_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowMultiple_k__BackingField;
}
constexpr void UnityEngine::Localization::Metadata::MetadataAttribute::__cordl_internal_set__AllowMultiple_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllowMultiple_k__BackingField = value;
}
constexpr ::UnityEngine::Localization::Metadata::MetadataType& UnityEngine::Localization::Metadata::MetadataAttribute::__cordl_internal_get__AllowedTypes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowedTypes_k__BackingField;
}
constexpr ::UnityEngine::Localization::Metadata::MetadataType const& UnityEngine::Localization::Metadata::MetadataAttribute::__cordl_internal_get__AllowedTypes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowedTypes_k__BackingField;
}
constexpr void UnityEngine::Localization::Metadata::MetadataAttribute::__cordl_internal_set__AllowedTypes_k__BackingField(::UnityEngine::Localization::Metadata::MetadataType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllowedTypes_k__BackingField = value;
}
inline ::StringW UnityEngine::Localization::Metadata::MetadataAttribute::get_MenuItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataAttribute*>(),
                        {"get_MenuItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::MetadataAttribute::set_MenuItem(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataAttribute*>(),
                        {"set_MenuItem", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Localization::Metadata::MetadataAttribute::get_AllowMultiple()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataAttribute*>(),
                        {"get_AllowMultiple", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::MetadataAttribute::set_AllowMultiple(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataAttribute*>(),
                        {"set_AllowMultiple", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::Metadata::MetadataType UnityEngine::Localization::Metadata::MetadataAttribute::get_AllowedTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataAttribute*>(),
                        {"get_AllowedTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Metadata::MetadataType>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::MetadataAttribute::set_AllowedTypes(::UnityEngine::Localization::Metadata::MetadataType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataAttribute*>(),
                        {"set_AllowedTypes", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::MetadataType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::Metadata::MetadataAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Metadata::MetadataAttribute* UnityEngine::Localization::Metadata::MetadataAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Metadata::MetadataAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Metadata::MetadataAttribute::MetadataAttribute()   {
}
