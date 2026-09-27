#pragma once
// IWYU pragma private; include "LitJson/ArrayMetadata.hpp"
#include "LitJson/zzzz__ArrayMetadata_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::LitJson::ArrayMetadata.get_ElementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::LitJson::ArrayMetadata::*)()>(&::LitJson::ArrayMetadata::get_ElementType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b5f7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ArrayMetadata>(),
                        {"get_ElementType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::ArrayMetadata.set_ElementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::ArrayMetadata::*)(::System::Type*)>(&::LitJson::ArrayMetadata::set_ElementType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5f864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ArrayMetadata>(),
                        {"set_ElementType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::ArrayMetadata.get_IsArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::ArrayMetadata::*)()>(&::LitJson::ArrayMetadata::get_IsArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5f86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ArrayMetadata>(),
                        {"get_IsArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::ArrayMetadata.set_IsArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::ArrayMetadata::*)(bool)>(&::LitJson::ArrayMetadata::set_IsArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5f874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ArrayMetadata>(),
                        {"set_IsArray", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::ArrayMetadata.get_IsList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::ArrayMetadata::*)()>(&::LitJson::ArrayMetadata::get_IsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5f87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ArrayMetadata>(),
                        {"get_IsList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::ArrayMetadata.set_IsList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::ArrayMetadata::*)(bool)>(&::LitJson::ArrayMetadata::set_IsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5f884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ArrayMetadata>(),
                        {"set_IsList", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Type* LitJson::ArrayMetadata::get_ElementType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ArrayMetadata>(),
                        {"get_ElementType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method);
}
inline void LitJson::ArrayMetadata::set_ElementType(::System::Type*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ArrayMetadata>(),
                        {"set_ElementType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool LitJson::ArrayMetadata::get_IsArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ArrayMetadata>(),
                        {"get_IsArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void LitJson::ArrayMetadata::set_IsArray(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ArrayMetadata>(),
                        {"set_IsArray", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool LitJson::ArrayMetadata::get_IsList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ArrayMetadata>(),
                        {"get_IsList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void LitJson::ArrayMetadata::set_IsList(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::ArrayMetadata>(),
                        {"set_IsList", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "element_type", ty: "::System::Type*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "is_array", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "is_list", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::LitJson::ArrayMetadata::ArrayMetadata(::System::Type*  element_type, bool  is_array, bool  is_list) noexcept  {
this->element_type = element_type;
this->is_array = is_array;
this->is_list = is_list;
}
// Ctor Parameters []
constexpr ::LitJson::ArrayMetadata::ArrayMetadata()   {
}
