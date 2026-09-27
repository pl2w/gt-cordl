#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/AssetTypeMetadata.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__SharedTableCollectionMetadata_impl.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__AssetTypeMetadata_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::AssetTypeMetadata.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::Localization::Metadata::AssetTypeMetadata::*)()>(&::UnityEngine::Localization::Metadata::AssetTypeMetadata::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04f648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::AssetTypeMetadata*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::AssetTypeMetadata.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::AssetTypeMetadata::*)(::System::Type*)>(&::UnityEngine::Localization::Metadata::AssetTypeMetadata::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04f650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::AssetTypeMetadata*>(),
                        {"set_Type", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::AssetTypeMetadata.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::AssetTypeMetadata::*)()>(&::UnityEngine::Localization::Metadata::AssetTypeMetadata::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb04f658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Metadata::AssetTypeMetadata*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Metadata::AssetTypeMetadata*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::AssetTypeMetadata.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::AssetTypeMetadata::*)()>(&::UnityEngine::Localization::Metadata::AssetTypeMetadata::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb04f924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Metadata::AssetTypeMetadata*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Metadata::AssetTypeMetadata*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::AssetTypeMetadata._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::AssetTypeMetadata::*)()>(&::UnityEngine::Localization::Metadata::AssetTypeMetadata::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb04fbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::AssetTypeMetadata*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Localization::Metadata::AssetTypeMetadata::__cordl_internal_get_m_TypeString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TypeString;
}
constexpr ::StringW const& UnityEngine::Localization::Metadata::AssetTypeMetadata::__cordl_internal_get_m_TypeString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TypeString;
}
constexpr void UnityEngine::Localization::Metadata::AssetTypeMetadata::__cordl_internal_set_m_TypeString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TypeString = value;
}
constexpr ::System::Type*& UnityEngine::Localization::Metadata::AssetTypeMetadata::__cordl_internal_get__Type_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr ::System::Type* const& UnityEngine::Localization::Metadata::AssetTypeMetadata::__cordl_internal_get__Type_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr void UnityEngine::Localization::Metadata::AssetTypeMetadata::__cordl_internal_set__Type_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Type_k__BackingField = value;
}
inline ::System::Type* UnityEngine::Localization::Metadata::AssetTypeMetadata::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::AssetTypeMetadata*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::AssetTypeMetadata::set_Type(::System::Type*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::AssetTypeMetadata*>(),
                        {"set_Type", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::Metadata::AssetTypeMetadata::OnBeforeSerialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Metadata::AssetTypeMetadata*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::AssetTypeMetadata::OnAfterDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Metadata::AssetTypeMetadata*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::AssetTypeMetadata::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::AssetTypeMetadata*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Metadata::AssetTypeMetadata* UnityEngine::Localization::Metadata::AssetTypeMetadata::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Metadata::AssetTypeMetadata*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Metadata::AssetTypeMetadata::AssetTypeMetadata()   {
}
