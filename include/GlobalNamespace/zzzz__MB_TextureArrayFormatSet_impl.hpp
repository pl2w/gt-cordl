#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_TextureArrayFormatSet.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TextureCompressionQuality_impl.hpp"
#include "GlobalNamespace/zzzz__MB_TextureArrayFormat_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TextureFormat_impl.hpp"
#include "GlobalNamespace/zzzz__MB_TextureArrayFormatSet_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_EditorMethodsInterface_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TextureCompressionQuality_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_TextureArrayFormatSet.ValidateTextureImporterFormatsExistsForTextureFormats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB_TextureArrayFormatSet::*)(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, int32_t)>(&::GlobalNamespace::MB_TextureArrayFormatSet::ValidateTextureImporterFormatsExistsForTextureFormats)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x9d72ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureArrayFormatSet*>(),
                        {"ValidateTextureImporterFormatsExistsForTextureFormats", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_TextureArrayFormatSet.GetFormatForProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextureFormat (::GlobalNamespace::MB_TextureArrayFormatSet::*)(::StringW, ::by_ref<::DigitalOpus::MB::Core::MB_TextureCompressionQuality>)>(&::GlobalNamespace::MB_TextureArrayFormatSet::GetFormatForProperty)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9d72eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureArrayFormatSet*>(),
                        {"GetFormatForProperty", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::MB_TextureCompressionQuality>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_TextureArrayFormatSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_TextureArrayFormatSet::*)()>(&::GlobalNamespace::MB_TextureArrayFormatSet::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d72f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureArrayFormatSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MB_TextureArrayFormatSet::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& GlobalNamespace::MB_TextureArrayFormatSet::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void GlobalNamespace::MB_TextureArrayFormatSet::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::UnityEngine::TextureFormat& GlobalNamespace::MB_TextureArrayFormatSet::__cordl_internal_get_defaultFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultFormat;
}
constexpr ::UnityEngine::TextureFormat const& GlobalNamespace::MB_TextureArrayFormatSet::__cordl_internal_get_defaultFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultFormat;
}
constexpr void GlobalNamespace::MB_TextureArrayFormatSet::__cordl_internal_set_defaultFormat(::UnityEngine::TextureFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultFormat = value;
}
constexpr ::DigitalOpus::MB::Core::MB_TextureCompressionQuality& GlobalNamespace::MB_TextureArrayFormatSet::__cordl_internal_get_defaultCompressionQuality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultCompressionQuality;
}
constexpr ::DigitalOpus::MB::Core::MB_TextureCompressionQuality const& GlobalNamespace::MB_TextureArrayFormatSet::__cordl_internal_get_defaultCompressionQuality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultCompressionQuality;
}
constexpr void GlobalNamespace::MB_TextureArrayFormatSet::__cordl_internal_set_defaultCompressionQuality(::DigitalOpus::MB::Core::MB_TextureCompressionQuality  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultCompressionQuality = value;
}
constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayFormat*>& GlobalNamespace::MB_TextureArrayFormatSet::__cordl_internal_get_formatOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formatOverrides;
}
constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayFormat*> const& GlobalNamespace::MB_TextureArrayFormatSet::__cordl_internal_get_formatOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formatOverrides;
}
constexpr void GlobalNamespace::MB_TextureArrayFormatSet::__cordl_internal_set_formatOverrides(::ArrayW<::GlobalNamespace::MB_TextureArrayFormat*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___formatOverrides = value;
}
inline bool GlobalNamespace::MB_TextureArrayFormatSet::ValidateTextureImporterFormatsExistsForTextureFormats(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods, int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureArrayFormatSet*>(),
                        {"ValidateTextureImporterFormatsExistsForTextureFormats", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, editorMethods, idx);
}
inline ::UnityEngine::TextureFormat GlobalNamespace::MB_TextureArrayFormatSet::GetFormatForProperty(::StringW  propName, ::by_ref<::DigitalOpus::MB::Core::MB_TextureCompressionQuality>  compressionQuality)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureArrayFormatSet*>(),
                        {"GetFormatForProperty", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::MB_TextureCompressionQuality>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextureFormat>(this, ___internal_method, propName, compressionQuality);
}
inline void GlobalNamespace::MB_TextureArrayFormatSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureArrayFormatSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_TextureArrayFormatSet* GlobalNamespace::MB_TextureArrayFormatSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_TextureArrayFormatSet*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_TextureArrayFormatSet::MB_TextureArrayFormatSet()   {
}
