#pragma once
// IWYU pragma private; include "LitJson/ObjectMetadata.hpp"
#include "LitJson/zzzz__ObjectMetadata_def.hpp"
#include "LitJson/zzzz__PropertyMetadata_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::LitJson::ObjectMetadata.get_ElementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::LitJson::ObjectMetadata::*)()>(&::LitJson::ObjectMetadata::get_ElementType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b5f88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ObjectMetadata>(),
                        {"get_ElementType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::ObjectMetadata.set_ElementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::ObjectMetadata::*)(::System::Type*)>(&::LitJson::ObjectMetadata::set_ElementType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5f928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ObjectMetadata>(),
                        {"set_ElementType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::ObjectMetadata.get_IsDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::ObjectMetadata::*)()>(&::LitJson::ObjectMetadata::get_IsDictionary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5f930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ObjectMetadata>(),
                        {"get_IsDictionary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::ObjectMetadata.set_IsDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::ObjectMetadata::*)(bool)>(&::LitJson::ObjectMetadata::set_IsDictionary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5f938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ObjectMetadata>(),
                        {"set_IsDictionary", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::ObjectMetadata.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::PropertyMetadata>* (::LitJson::ObjectMetadata::*)()>(&::LitJson::ObjectMetadata::get_Properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5f940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ObjectMetadata>(),
                        {"get_Properties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::ObjectMetadata.set_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::ObjectMetadata::*)(::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::PropertyMetadata>*)>(&::LitJson::ObjectMetadata::set_Properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5f948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ObjectMetadata>(),
                        {"set_Properties", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::PropertyMetadata>*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Type* LitJson::ObjectMetadata::get_ElementType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ObjectMetadata>(),
                        {"get_ElementType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method);
}
inline void LitJson::ObjectMetadata::set_ElementType(::System::Type*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ObjectMetadata>(),
                        {"set_ElementType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool LitJson::ObjectMetadata::get_IsDictionary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ObjectMetadata>(),
                        {"get_IsDictionary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void LitJson::ObjectMetadata::set_IsDictionary(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ObjectMetadata>(),
                        {"set_IsDictionary", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::PropertyMetadata>* LitJson::ObjectMetadata::get_Properties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ObjectMetadata>(),
                        {"get_Properties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::PropertyMetadata>*>(*this, ___internal_method);
}
inline void LitJson::ObjectMetadata::set_Properties(::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::PropertyMetadata>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ObjectMetadata>(),
                        {"set_Properties", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::PropertyMetadata>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "element_type", ty: "::System::Type*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "is_dictionary", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "properties", ty: "::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::PropertyMetadata>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::LitJson::ObjectMetadata::ObjectMetadata(::System::Type*  element_type, bool  is_dictionary, ::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::PropertyMetadata>*  properties) noexcept  {
this->element_type = element_type;
this->is_dictionary = is_dictionary;
this->properties = properties;
}
// Ctor Parameters []
constexpr ::LitJson::ObjectMetadata::ObjectMetadata()   {
}
