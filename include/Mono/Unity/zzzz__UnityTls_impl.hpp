#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTls.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_tlsctx_protocolrange_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_ciphersuite_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_error_code_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_errorstate_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_key_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_key_ref_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_log_level_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_protocol_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_tlsctx_callbacks_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_tlsctx_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_tlsctx_protocolrange_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_x509_ref_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_x509list_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_x509list_ref_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_x509name_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_x509verify_result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Unity::UnityTls.GetUnityTlsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Mono::Unity::UnityTls::GetUnityTlsInterface)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa8ce2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls*>(),
                        {"GetUnityTlsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTls.get_IsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Mono::Unity::UnityTls::get_IsSupported)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa8ce2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls*>(),
                        {"get_IsSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTls.get_NativeInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Unity::UnityTls_unitytls_interface_struct* (*)()>(&::Mono::Unity::UnityTls::get_NativeInterface)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa8ce054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls*>(),
                        {"get_NativeInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Unity::UnityTls::setStaticF_marshalledInterface(::Mono::Unity::UnityTls_unitytls_interface_struct*  value)  {
::cordl_internals::setStaticField<::Mono::Unity::UnityTls_unitytls_interface_struct*, "marshalledInterface", ::Mono::Unity::UnityTls*>(std::forward<::Mono::Unity::UnityTls_unitytls_interface_struct*>(value));
}
inline ::Mono::Unity::UnityTls_unitytls_interface_struct* Mono::Unity::UnityTls::getStaticF_marshalledInterface()  {
return ::cordl_internals::getStaticField<::Mono::Unity::UnityTls_unitytls_interface_struct*, "marshalledInterface", ::Mono::Unity::UnityTls*>();
}
inline ::System::IntPtr Mono::Unity::UnityTls::GetUnityTlsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls*>(),
                        {"GetUnityTlsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline bool Mono::Unity::UnityTls::get_IsSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls*>(),
                        {"get_IsSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Mono::Unity::UnityTls_unitytls_interface_struct* Mono::Unity::UnityTls::get_NativeInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls*>(),
                        {"get_NativeInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_interface_struct*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls::UnityTls()   {
}
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_interface_struct._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::UnityTls_unitytls_interface_struct::*)()>(&::Mono::Unity::UnityTls_unitytls_interface_struct::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8ce7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_interface_struct*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint64_t& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_UNITYTLS_INVALID_HANDLE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UNITYTLS_INVALID_HANDLE;
}
constexpr uint64_t const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_UNITYTLS_INVALID_HANDLE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UNITYTLS_INVALID_HANDLE;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_UNITYTLS_INVALID_HANDLE(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UNITYTLS_INVALID_HANDLE = value;
}
constexpr ::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT;
}
constexpr ::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT(::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_errorstate_create()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_errorstate_create;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_errorstate_create() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_errorstate_create;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_errorstate_create(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_errorstate_create = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_errorstate_raise_error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_errorstate_raise_error;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_errorstate_raise_error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_errorstate_raise_error;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_errorstate_raise_error(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_errorstate_raise_error = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_key_get_ref()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_key_get_ref;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_key_get_ref() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_key_get_ref;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_key_get_ref(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_key_get_ref = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_key_parse_der()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_key_parse_der;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_key_parse_der() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_key_parse_der;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_key_parse_der(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_key_parse_der = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_key_parse_pem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_key_parse_pem;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_key_parse_pem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_key_parse_pem;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_key_parse_pem(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_key_parse_pem = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_key_free()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_key_free;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_key_free() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_key_free;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_key_free(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_key_free = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509_export_der()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509_export_der;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509_export_der() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509_export_der;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509_export_der(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_x509_export_der = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_get_ref()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509list_get_ref;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_get_ref() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509list_get_ref;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509list_get_ref(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_x509list_get_ref = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_get_x509()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509list_get_x509;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_get_x509() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509list_get_x509;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509list_get_x509(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_x509list_get_x509 = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_create()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509list_create;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_create() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509list_create;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509list_create(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_x509list_create = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_append()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509list_append;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_append() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509list_append;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509list_append(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_x509list_append = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_append_der()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509list_append_der;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_append_der() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509list_append_der;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509list_append_der(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_x509list_append_der = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_append_pem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509list_append_pem;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_append_pem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509list_append_pem;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509list_append_pem(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_x509list_append_pem = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_free()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509list_free;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_free() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509list_free;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509list_free(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_x509list_free = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509verify_default_ca()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509verify_default_ca;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509verify_default_ca() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509verify_default_ca;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509verify_default_ca(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_x509verify_default_ca = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509verify_explicit_ca()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509verify_explicit_ca;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509verify_explicit_ca() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509verify_explicit_ca;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509verify_explicit_ca(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_x509verify_explicit_ca = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_create_server()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_create_server;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_create_server() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_create_server;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_create_server(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_tlsctx_create_server = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_create_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_create_client;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_create_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_create_client;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_create_client(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_tlsctx_create_client = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_server_require_client_authentication()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_server_require_client_authentication;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_server_require_client_authentication() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_server_require_client_authentication;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_server_require_client_authentication(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_tlsctx_server_require_client_authentication = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_set_certificate_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_set_certificate_callback;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_set_certificate_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_set_certificate_callback;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_set_certificate_callback(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_tlsctx_set_certificate_callback = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_set_trace_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_set_trace_callback;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_set_trace_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_set_trace_callback;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_set_trace_callback(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_tlsctx_set_trace_callback = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_set_x509verify_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_set_x509verify_callback;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_set_x509verify_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_set_x509verify_callback;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_set_x509verify_callback(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_tlsctx_set_x509verify_callback = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_set_supported_ciphersuites()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_set_supported_ciphersuites;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_set_supported_ciphersuites() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_set_supported_ciphersuites;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_set_supported_ciphersuites(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_tlsctx_set_supported_ciphersuites = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_get_ciphersuite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_get_ciphersuite;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_get_ciphersuite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_get_ciphersuite;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_get_ciphersuite(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_tlsctx_get_ciphersuite = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_get_protocol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_get_protocol;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_get_protocol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_get_protocol;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_get_protocol(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_tlsctx_get_protocol = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_process_handshake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_process_handshake;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_process_handshake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_process_handshake;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_process_handshake(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_tlsctx_process_handshake = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_read()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_read;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_read() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_read;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_read(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_tlsctx_read = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_write()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_write;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_write() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_write;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_write(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_tlsctx_write = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_notify_close()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_notify_close;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_notify_close() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_notify_close;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_notify_close(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_tlsctx_notify_close = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_free()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_free;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_free() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_free;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_free(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_tlsctx_free = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_random_generate_bytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_random_generate_bytes;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_random_generate_bytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_random_generate_bytes;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_random_generate_bytes(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_random_generate_bytes = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509verify_result_to_string()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509verify_result_to_string;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509verify_result_to_string() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_x509verify_result_to_string;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509verify_result_to_string(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_x509verify_result_to_string = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_set_trace_level()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_set_trace_level;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_set_trace_level() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitytls_tlsctx_set_trace_level;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_set_trace_level(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitytls_tlsctx_set_trace_level = value;
}
inline void Mono::Unity::UnityTls_unitytls_interface_struct::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_interface_struct*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Unity::UnityTls_unitytls_interface_struct* Mono::Unity::UnityTls_unitytls_interface_struct::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::UnityTls_unitytls_interface_struct*>());
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_interface_struct::UnityTls_unitytls_interface_struct()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8cff8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t::*)(::GlobalNamespace::UnityTls_unitytls_tlsctx*, ::GlobalNamespace::UnityTls_unitytls_log_level)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8d0040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t::Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::GlobalNamespace::UnityTls_unitytls_log_level  level)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx, level);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa8cfed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t* (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t::*)(::GlobalNamespace::UnityTls_unitytls_x509verify_result)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cff78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline char16_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t::Invoke(::GlobalNamespace::UnityTls_unitytls_x509verify_result  v)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t*>(this, ___internal_method, v);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8cfe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t::*)(uint8_t*, ::System::IntPtr, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cfec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t::Invoke(uint8_t*  buffer, ::System::IntPtr  bufferLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, bufferLen, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa8cfd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t::*)(::GlobalNamespace::UnityTls_unitytls_tlsctx*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cfdfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t::Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8cfc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t::*)(::GlobalNamespace::UnityTls_unitytls_tlsctx*, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cfd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t::Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8cfbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t::*)(::GlobalNamespace::UnityTls_unitytls_tlsctx*, uint8_t*, ::System::IntPtr, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cfc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t::Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, uint8_t*  data, ::System::IntPtr  bufferLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, ctx, data, bufferLen, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8cfaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t::*)(::GlobalNamespace::UnityTls_unitytls_tlsctx*, uint8_t*, ::System::IntPtr, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cfba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t::Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, uint8_t*  buffer, ::System::IntPtr  bufferLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, ctx, buffer, bufferLen, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8cfa2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityTls_unitytls_x509verify_result (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t::*)(::GlobalNamespace::UnityTls_unitytls_tlsctx*, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cfae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::UnityTls_unitytls_x509verify_result Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t::Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityTls_unitytls_x509verify_result>(this, ___internal_method, ctx, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8cf964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityTls_unitytls_protocol (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t::*)(::GlobalNamespace::UnityTls_unitytls_tlsctx*, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cfa18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::UnityTls_unitytls_protocol Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t::Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityTls_unitytls_protocol>(this, ___internal_method, ctx, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8cf89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityTls_unitytls_ciphersuite (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t::*)(::GlobalNamespace::UnityTls_unitytls_tlsctx*, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cf950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::UnityTls_unitytls_ciphersuite Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t::Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityTls_unitytls_ciphersuite>(this, ___internal_method, ctx, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8cf7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t::*)(::GlobalNamespace::UnityTls_unitytls_tlsctx*, ::GlobalNamespace::UnityTls_unitytls_ciphersuite*, ::System::IntPtr, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cf888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t::Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::GlobalNamespace::UnityTls_unitytls_ciphersuite*  supportedCiphersuites, ::System::IntPtr  supportedCiphersuitesLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx, supportedCiphersuites, supportedCiphersuitesLen, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8cf70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t::*)(::GlobalNamespace::UnityTls_unitytls_tlsctx*, ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*, void*, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cf7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t::Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*  cb, void*  userData, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx, cb, userData, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8cf644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t::*)(::GlobalNamespace::UnityTls_unitytls_tlsctx*, ::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*, void*, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cf6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t::Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*  cb, void*  userData, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx, cb, userData, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8cf57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t::*)(::GlobalNamespace::UnityTls_unitytls_tlsctx*, ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*, void*, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cf630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t::Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*  cb, void*  userData, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx, cb, userData, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8cf4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t::*)(::GlobalNamespace::UnityTls_unitytls_tlsctx*, ::GlobalNamespace::UnityTls_unitytls_x509list_ref, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cf568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t::Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::GlobalNamespace::UnityTls_unitytls_x509list_ref  clientAuthCAList, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx, clientAuthCAList, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa8cf3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityTls_unitytls_tlsctx* (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t::*)(::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange, ::GlobalNamespace::UnityTls_unitytls_tlsctx_callbacks, uint8_t*, ::System::IntPtr, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa8cf478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::UnityTls_unitytls_tlsctx* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t::Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange  supportedProtocols, ::GlobalNamespace::UnityTls_unitytls_tlsctx_callbacks  callbacks, uint8_t*  cn, ::System::IntPtr  cnLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityTls_unitytls_tlsctx*>(this, ___internal_method, supportedProtocols, callbacks, cn, cnLen, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa8cf2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityTls_unitytls_tlsctx* (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t::*)(::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange, ::GlobalNamespace::UnityTls_unitytls_tlsctx_callbacks, uint64_t, uint64_t, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa8cf39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::UnityTls_unitytls_tlsctx* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t::Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange  supportedProtocols, ::GlobalNamespace::UnityTls_unitytls_tlsctx_callbacks  callbacks, uint64_t  certChain, uint64_t  leafCertificateKey, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityTls_unitytls_tlsctx*>(this, ___internal_method, supportedProtocols, callbacks, certChain, leafCertificateKey, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa8cf244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityTls_unitytls_x509verify_result (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t::*)(::GlobalNamespace::UnityTls_unitytls_x509list_ref, ::GlobalNamespace::UnityTls_unitytls_x509list_ref, uint8_t*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509verify_callback*, void*, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa8cf2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::UnityTls_unitytls_x509verify_result Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t::Invoke(::GlobalNamespace::UnityTls_unitytls_x509list_ref  chain, ::GlobalNamespace::UnityTls_unitytls_x509list_ref  trustCA, uint8_t*  cn, ::System::IntPtr  cnLen, ::Mono::Unity::UnityTls_unitytls_x509verify_callback*  cb, void*  userData, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityTls_unitytls_x509verify_result>(this, ___internal_method, chain, trustCA, cn, cnLen, cb, userData, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa8cf190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityTls_unitytls_x509verify_result (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t::*)(::GlobalNamespace::UnityTls_unitytls_x509list_ref, uint8_t*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509verify_callback*, void*, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cf230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::UnityTls_unitytls_x509verify_result Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t::Invoke(::GlobalNamespace::UnityTls_unitytls_x509list_ref  chain, uint8_t*  cn, ::System::IntPtr  cnLen, ::Mono::Unity::UnityTls_unitytls_x509verify_callback*  cb, void*  userData, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityTls_unitytls_x509verify_result>(this, ___internal_method, chain, cn, cnLen, cb, userData, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa8cf0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t::*)(::GlobalNamespace::UnityTls_unitytls_x509list*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cf17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t::Invoke(::GlobalNamespace::UnityTls_unitytls_x509list*  list)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8cf004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t::*)(::GlobalNamespace::UnityTls_unitytls_x509list*, uint8_t*, ::System::IntPtr, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cf0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t::Invoke(::GlobalNamespace::UnityTls_unitytls_x509list*  list, uint8_t*  buffer, ::System::IntPtr  bufferLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list, buffer, bufferLen, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8cef3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t::*)(::GlobalNamespace::UnityTls_unitytls_x509list*, ::GlobalNamespace::UnityTls_unitytls_x509_ref, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8ceff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t::Invoke(::GlobalNamespace::UnityTls_unitytls_x509list*  list, ::GlobalNamespace::UnityTls_unitytls_x509_ref  cert, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list, cert, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa8cee78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityTls_unitytls_x509list* (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t::*)(::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cef28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::UnityTls_unitytls_x509list* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t::Invoke(::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityTls_unitytls_x509list*>(this, ___internal_method, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa8cedc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityTls_unitytls_x509_ref (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t::*)(::GlobalNamespace::UnityTls_unitytls_x509list_ref, ::System::IntPtr, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cee64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::UnityTls_unitytls_x509_ref Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t::Invoke(::GlobalNamespace::UnityTls_unitytls_x509list_ref  list, ::System::IntPtr  index, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityTls_unitytls_x509_ref>(this, ___internal_method, list, index, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8cecfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityTls_unitytls_x509list_ref (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t::*)(::GlobalNamespace::UnityTls_unitytls_x509list*, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cedb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::UnityTls_unitytls_x509list_ref Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t::Invoke(::GlobalNamespace::UnityTls_unitytls_x509list*  list, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityTls_unitytls_x509list_ref>(this, ___internal_method, list, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa8cec48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t::*)(::GlobalNamespace::UnityTls_unitytls_x509_ref, uint8_t*, ::System::IntPtr, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cece8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t::Invoke(::GlobalNamespace::UnityTls_unitytls_x509_ref  cert, uint8_t*  buffer, ::System::IntPtr  bufferLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, cert, buffer, bufferLen, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa8ceb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t::*)(::GlobalNamespace::UnityTls_unitytls_key*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8cec34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t::Invoke(::GlobalNamespace::UnityTls_unitytls_key*  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t::unitytls_interface_struct_UnityTls_unitytls_key_free_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8ceabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityTls_unitytls_key* (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t::*)(uint8_t*, ::System::IntPtr, uint8_t*, ::System::IntPtr, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8ceb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::UnityTls_unitytls_key* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t::Invoke(uint8_t*  buffer, ::System::IntPtr  bufferLen, uint8_t*  password, ::System::IntPtr  passwordLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityTls_unitytls_key*>(this, ___internal_method, buffer, bufferLen, password, passwordLen, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8ce9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityTls_unitytls_key* (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t::*)(uint8_t*, ::System::IntPtr, uint8_t*, ::System::IntPtr, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8ceaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::UnityTls_unitytls_key* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t::Invoke(uint8_t*  buffer, ::System::IntPtr  bufferLen, uint8_t*  password, ::System::IntPtr  passwordLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityTls_unitytls_key*>(this, ___internal_method, buffer, bufferLen, password, passwordLen, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8ce92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityTls_unitytls_key_ref (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t::*)(::GlobalNamespace::UnityTls_unitytls_key*, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8ce9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::UnityTls_unitytls_key_ref Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t::Invoke(::GlobalNamespace::UnityTls_unitytls_key*  key, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityTls_unitytls_key_ref>(this, ___internal_method, key, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8ce864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t::*)(::GlobalNamespace::UnityTls_unitytls_errorstate*, ::GlobalNamespace::UnityTls_unitytls_error_code)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8ce918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t::Invoke(::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState, ::GlobalNamespace::UnityTls_unitytls_error_code  errorCode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorState, errorCode);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t()   {
}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa8ce7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityTls_unitytls_errorstate (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t::*)()>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8ce850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*>(),
                    {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::UnityTls_unitytls_errorstate Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityTls_unitytls_errorstate>(this, ___internal_method);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t()   {
}
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8ce6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityTls_unitytls_x509verify_result (::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback::*)(void*, ::GlobalNamespace::UnityTls_unitytls_x509list_ref, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8ce798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*>(),
                    {::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback::Invoke(void*  userData, ::GlobalNamespace::UnityTls_unitytls_x509list_ref  chain, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityTls_unitytls_x509verify_result>(this, ___internal_method, userData, chain, errorState);
}
inline ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback* Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback::UnityTls_unitytls_tlsctx_x509verify_callback()   {
}
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8ce610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::*)(void*, ::GlobalNamespace::UnityTls_unitytls_tlsctx*, uint8_t*, ::System::IntPtr, ::GlobalNamespace::UnityTls_unitytls_x509name*, ::System::IntPtr, ::GlobalNamespace::UnityTls_unitytls_x509list_ref*, ::GlobalNamespace::UnityTls_unitytls_key_ref*, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::Invoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa8ce6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*>(),
                    {::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::Invoke(void*  userData, ::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, uint8_t*  cn, ::System::IntPtr  cnLen, ::GlobalNamespace::UnityTls_unitytls_x509name*  caList, ::System::IntPtr  caListLen, ::GlobalNamespace::UnityTls_unitytls_x509list_ref*  chain, ::GlobalNamespace::UnityTls_unitytls_key_ref*  key, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userData, ctx, cn, cnLen, caList, caListLen, chain, key, errorState);
}
inline ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback* Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::UnityTls_unitytls_tlsctx_certificate_callback()   {
}
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8ce548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::*)(void*, ::GlobalNamespace::UnityTls_unitytls_tlsctx*, uint8_t*, ::System::IntPtr)>(&::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8ce5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*>(),
                    {::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::Invoke(void*  userData, ::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, uint8_t*  traceMessage, ::System::IntPtr  traceMessageLen)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userData, ctx, traceMessage, traceMessageLen);
}
inline ::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback* Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::UnityTls_unitytls_tlsctx_trace_callback()   {
}
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8ce480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback::*)(void*, uint8_t*, ::System::IntPtr, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8ce534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*>(),
                    {::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::UnityTls_unitytls_tlsctx_read_callback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr Mono::Unity::UnityTls_unitytls_tlsctx_read_callback::Invoke(void*  userData, uint8_t*  buffer, ::System::IntPtr  bufferLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, userData, buffer, bufferLen, errorState);
}
inline ::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback* Mono::Unity::UnityTls_unitytls_tlsctx_read_callback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback::UnityTls_unitytls_tlsctx_read_callback()   {
}
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8ce3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback::*)(void*, uint8_t*, ::System::IntPtr, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8ce46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*>(),
                    {::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::UnityTls_unitytls_tlsctx_write_callback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr Mono::Unity::UnityTls_unitytls_tlsctx_write_callback::Invoke(void*  userData, uint8_t*  data, ::System::IntPtr  bufferLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, userData, data, bufferLen, errorState);
}
inline ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback* Mono::Unity::UnityTls_unitytls_tlsctx_write_callback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback::UnityTls_unitytls_tlsctx_write_callback()   {
}
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_x509verify_callback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::UnityTls_unitytls_x509verify_callback::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Unity::UnityTls_unitytls_x509verify_callback::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa8ce2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_x509verify_callback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_x509verify_callback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityTls_unitytls_x509verify_result (::Mono::Unity::UnityTls_unitytls_x509verify_callback::*)(void*, ::GlobalNamespace::UnityTls_unitytls_x509_ref, ::GlobalNamespace::UnityTls_unitytls_x509verify_result, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::UnityTls_unitytls_x509verify_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa8ce3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_x509verify_callback*>(),
                    {::i2c::class_of<::Mono::Unity::UnityTls_unitytls_x509verify_callback*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Mono::Unity::UnityTls_unitytls_x509verify_callback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::UnityTls_unitytls_x509verify_callback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTls_unitytls_x509verify_callback::Invoke(void*  userData, ::GlobalNamespace::UnityTls_unitytls_x509_ref  cert, ::GlobalNamespace::UnityTls_unitytls_x509verify_result  result, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Unity::UnityTls_unitytls_x509verify_callback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityTls_unitytls_x509verify_result>(this, ___internal_method, userData, cert, result, errorState);
}
inline ::Mono::Unity::UnityTls_unitytls_x509verify_callback* Mono::Unity::UnityTls_unitytls_x509verify_callback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::UnityTls_unitytls_x509verify_callback*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_callback::UnityTls_unitytls_x509verify_callback()   {
}
