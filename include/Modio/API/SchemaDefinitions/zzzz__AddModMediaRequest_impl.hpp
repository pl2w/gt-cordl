#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AddModMediaRequest.hpp"
#include "Modio/API/zzzz__ModioAPIFileParameter_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__AddModMediaRequest_def.hpp"
#include "Modio/API/zzzz__IApiRequest_def.hpp"
#include "Modio/API/zzzz__ModioAPIFileParameter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::AddModMediaRequest.get_GallerySync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::API::SchemaDefinitions::AddModMediaRequest::*)()>(&::Modio::API::SchemaDefinitions::AddModMediaRequest::get_GallerySync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fe46bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddModMediaRequest>(),
                        {"get_GallerySync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::AddModMediaRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::AddModMediaRequest::*)(::Modio::API::ModioAPIFileParameter, bool)>(&::Modio::API::SchemaDefinitions::AddModMediaRequest::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9fe46c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddModMediaRequest>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::ModioAPIFileParameter>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::AddModMediaRequest.GetBodyParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* (::Modio::API::SchemaDefinitions::AddModMediaRequest::*)()>(&::Modio::API::SchemaDefinitions::AddModMediaRequest::GetBodyParameters)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9fe46fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddModMediaRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::AddModMediaRequest::setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::AddModMediaRequest>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::AddModMediaRequest::getStaticF__bodyParameters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::AddModMediaRequest>();
}
inline bool Modio::API::SchemaDefinitions::AddModMediaRequest::get_GallerySync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddModMediaRequest>(),
                        {"get_GallerySync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Modio::API::SchemaDefinitions::AddModMediaRequest::_ctor(::Modio::API::ModioAPIFileParameter  media, bool  gallerySync)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddModMediaRequest>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::ModioAPIFileParameter>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, media, gallerySync);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::AddModMediaRequest::GetBodyParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddModMediaRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr  Modio::API::SchemaDefinitions::AddModMediaRequest::operator ::Modio::API::IApiRequest*()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* Modio::API::SchemaDefinitions::AddModMediaRequest::i___Modio__API__IApiRequest()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_media", ty: "::Modio::API::ModioAPIFileParameter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_GallerySync_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::AddModMediaRequest::AddModMediaRequest(::Modio::API::ModioAPIFileParameter  _media, bool  _GallerySync_k__BackingField) noexcept  {
this->_media = _media;
this->_GallerySync_k__BackingField = _GallerySync_k__BackingField;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::AddModMediaRequest::AddModMediaRequest()   {
}
