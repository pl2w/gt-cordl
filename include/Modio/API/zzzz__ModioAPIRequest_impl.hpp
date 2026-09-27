#pragma once
// IWYU pragma private; include "Modio/API/ModioAPIRequest.hpp"
#include "Modio/API/zzzz__ModioAPIRequestContentType_impl.hpp"
#include "Modio/API/zzzz__ModioAPIRequestMethod_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/API/zzzz__ModioAPIRequest_def.hpp"
#include "Modio/API/zzzz__ModioAPIRequestContentType_def.hpp"
#include "Modio/API/zzzz__ModioAPIRequestMethod_def.hpp"
#include "Modio/API/zzzz__ModioAPIRequestOptions_def.hpp"
#include "Modio/API/zzzz__ModioAPIRequest_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Modio::API::ModioAPIRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIRequest::*)()>(&::Modio::API::ModioAPIRequest::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9fdd2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequest.get_Uri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::API::ModioAPIRequest::*)()>(&::Modio::API::ModioAPIRequest::get_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdd490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"get_Uri", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequest.set_Uri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIRequest::*)(::StringW)>(&::Modio::API::ModioAPIRequest::set_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdd498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"set_Uri", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequest.get_Options
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::API::ModioAPIRequestOptions* (::Modio::API::ModioAPIRequest::*)()>(&::Modio::API::ModioAPIRequest::get_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdd4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"get_Options", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequest.get_Method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::API::ModioAPIRequestMethod (::Modio::API::ModioAPIRequest::*)()>(&::Modio::API::ModioAPIRequest::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdd4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"get_Method", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequest.set_Method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIRequest::*)(::Modio::API::ModioAPIRequestMethod)>(&::Modio::API::ModioAPIRequest::set_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdd4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"set_Method", {}, {::i2c::type_of<::Modio::API::ModioAPIRequestMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequest.get_ContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::API::ModioAPIRequestContentType (::Modio::API::ModioAPIRequest::*)()>(&::Modio::API::ModioAPIRequest::get_ContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdd4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"get_ContentType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequest.set_ContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIRequest::*)(::Modio::API::ModioAPIRequestContentType)>(&::Modio::API::ModioAPIRequest::set_ContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdd4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"set_ContentType", {}, {::i2c::type_of<::Modio::API::ModioAPIRequestContentType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequest.get_ContentTypeHint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::API::ModioAPIRequest::*)()>(&::Modio::API::ModioAPIRequest::get_ContentTypeHint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdd4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"get_ContentTypeHint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequest.set_ContentTypeHint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIRequest::*)(::StringW)>(&::Modio::API::ModioAPIRequest::set_ContentTypeHint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdd4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"set_ContentTypeHint", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequest.New
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::API::ModioAPIRequest* (*)(::StringW, ::Modio::API::ModioAPIRequestMethod, ::Modio::API::ModioAPIRequestContentType, ::StringW)>(&::Modio::API::ModioAPIRequest::New)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x9fdd4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"New", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Modio::API::ModioAPIRequestMethod>(), ::i2c::type_of<::Modio::API::ModioAPIRequestContentType>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequest.GetUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::API::ModioAPIRequest::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::Modio::API::ModioAPIRequest::GetUri)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x9fdd720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"GetUri", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequest.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIRequest::*)()>(&::Modio::API::ModioAPIRequest::Dispose)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x9fdd9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::API::ModioAPIRequest::__cordl_internal_get__Uri_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Uri_k__BackingField;
}
constexpr ::StringW const& Modio::API::ModioAPIRequest::__cordl_internal_get__Uri_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Uri_k__BackingField;
}
constexpr void Modio::API::ModioAPIRequest::__cordl_internal_set__Uri_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Uri_k__BackingField = value;
}
constexpr ::Modio::API::ModioAPIRequestOptions*& Modio::API::ModioAPIRequest::__cordl_internal_get__Options_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Options_k__BackingField;
}
constexpr ::Modio::API::ModioAPIRequestOptions* const& Modio::API::ModioAPIRequest::__cordl_internal_get__Options_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Options_k__BackingField;
}
constexpr void Modio::API::ModioAPIRequest::__cordl_internal_set__Options_k__BackingField(::Modio::API::ModioAPIRequestOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Options_k__BackingField = value;
}
constexpr ::Modio::API::ModioAPIRequestMethod& Modio::API::ModioAPIRequest::__cordl_internal_get__Method_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Method_k__BackingField;
}
constexpr ::Modio::API::ModioAPIRequestMethod const& Modio::API::ModioAPIRequest::__cordl_internal_get__Method_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Method_k__BackingField;
}
constexpr void Modio::API::ModioAPIRequest::__cordl_internal_set__Method_k__BackingField(::Modio::API::ModioAPIRequestMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Method_k__BackingField = value;
}
constexpr ::Modio::API::ModioAPIRequestContentType& Modio::API::ModioAPIRequest::__cordl_internal_get__ContentType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ContentType_k__BackingField;
}
constexpr ::Modio::API::ModioAPIRequestContentType const& Modio::API::ModioAPIRequest::__cordl_internal_get__ContentType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ContentType_k__BackingField;
}
constexpr void Modio::API::ModioAPIRequest::__cordl_internal_set__ContentType_k__BackingField(::Modio::API::ModioAPIRequestContentType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ContentType_k__BackingField = value;
}
constexpr ::StringW& Modio::API::ModioAPIRequest::__cordl_internal_get__ContentTypeHint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ContentTypeHint_k__BackingField;
}
constexpr ::StringW const& Modio::API::ModioAPIRequest::__cordl_internal_get__ContentTypeHint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ContentTypeHint_k__BackingField;
}
constexpr void Modio::API::ModioAPIRequest::__cordl_internal_set__ContentTypeHint_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ContentTypeHint_k__BackingField = value;
}
inline void Modio::API::ModioAPIRequest::setStaticF_Pool(::System::Collections::Generic::List_1<::Modio::API::ModioAPIRequest*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Modio::API::ModioAPIRequest*>*, "Pool", ::Modio::API::ModioAPIRequest*>(std::forward<::System::Collections::Generic::List_1<::Modio::API::ModioAPIRequest*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Modio::API::ModioAPIRequest*>* Modio::API::ModioAPIRequest::getStaticF_Pool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Modio::API::ModioAPIRequest*>*, "Pool", ::Modio::API::ModioAPIRequest*>();
}
inline void Modio::API::ModioAPIRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Modio::API::ModioAPIRequest::get_Uri()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"get_Uri", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::API::ModioAPIRequest::set_Uri(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"set_Uri", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::API::ModioAPIRequestOptions* Modio::API::ModioAPIRequest::get_Options()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"get_Options", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::API::ModioAPIRequestOptions*>(this, ___internal_method);
}
inline ::Modio::API::ModioAPIRequestMethod Modio::API::ModioAPIRequest::get_Method()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"get_Method", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::API::ModioAPIRequestMethod>(this, ___internal_method);
}
inline void Modio::API::ModioAPIRequest::set_Method(::Modio::API::ModioAPIRequestMethod  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"set_Method", {}, {::i2c::type_of<::Modio::API::ModioAPIRequestMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::API::ModioAPIRequestContentType Modio::API::ModioAPIRequest::get_ContentType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"get_ContentType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::API::ModioAPIRequestContentType>(this, ___internal_method);
}
inline void Modio::API::ModioAPIRequest::set_ContentType(::Modio::API::ModioAPIRequestContentType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"set_ContentType", {}, {::i2c::type_of<::Modio::API::ModioAPIRequestContentType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::API::ModioAPIRequest::get_ContentTypeHint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"get_ContentTypeHint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::API::ModioAPIRequest::set_ContentTypeHint(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"set_ContentTypeHint", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::API::ModioAPIRequest* Modio::API::ModioAPIRequest::New(::StringW  uri, ::Modio::API::ModioAPIRequestMethod  method, ::Modio::API::ModioAPIRequestContentType  contentType, ::StringW  contentTypeHint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"New", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Modio::API::ModioAPIRequestMethod>(), ::i2c::type_of<::Modio::API::ModioAPIRequestContentType>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::API::ModioAPIRequest*>(nullptr, ___internal_method, uri, method, contentType, contentTypeHint);
}
inline ::StringW Modio::API::ModioAPIRequest::GetUri(::System::Collections::Generic::List_1<::StringW>*  defaultParameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"GetUri", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, defaultParameters);
}
inline void Modio::API::ModioAPIRequest::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::API::ModioAPIRequest* Modio::API::ModioAPIRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::API::ModioAPIRequest*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Modio::API::ModioAPIRequest::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Modio::API::ModioAPIRequest::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::API::ModioAPIRequest::ModioAPIRequest()   {
}
//  Writing Method size for method: ::Modio::API::ModioAPIRequest___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIRequest___c::*)()>(&::Modio::API::ModioAPIRequest___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fddd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequest___c._GetUri_b__22_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::API::ModioAPIRequest___c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>)>(&::Modio::API::ModioAPIRequest___c::_GetUri_b__22_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9fddd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest___c*>(),
                        {"<GetUri>b__22_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::ModioAPIRequest___c::setStaticF___9(::Modio::API::ModioAPIRequest___c*  value)  {
::cordl_internals::setStaticField<::Modio::API::ModioAPIRequest___c*, "<>9", ::Modio::API::ModioAPIRequest___c*>(std::forward<::Modio::API::ModioAPIRequest___c*>(value));
}
inline ::Modio::API::ModioAPIRequest___c* Modio::API::ModioAPIRequest___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::API::ModioAPIRequest___c*, "<>9", ::Modio::API::ModioAPIRequest___c*>();
}
inline void Modio::API::ModioAPIRequest___c::setStaticF___9__22_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*, "<>9__22_0", ::Modio::API::ModioAPIRequest___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>* Modio::API::ModioAPIRequest___c::getStaticF___9__22_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*, "<>9__22_0", ::Modio::API::ModioAPIRequest___c*>();
}
inline void Modio::API::ModioAPIRequest___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Modio::API::ModioAPIRequest___c::_GetUri_b__22_0(::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequest___c*>(),
                        {"<GetUri>b__22_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key);
}
inline ::Modio::API::ModioAPIRequest___c* Modio::API::ModioAPIRequest___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::API::ModioAPIRequest___c*>());
}
// Ctor Parameters []
constexpr ::Modio::API::ModioAPIRequest___c::ModioAPIRequest___c()   {
}
