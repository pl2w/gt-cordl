#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTls.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Unity/zzzz__UnityTls_unitytls_tlsctx_protocolrange_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityTls)
namespace GlobalNamespace {
struct UnityTls_unitytls_ciphersuite;
}
namespace GlobalNamespace {
struct UnityTls_unitytls_error_code;
}
namespace GlobalNamespace {
struct UnityTls_unitytls_errorstate;
}
namespace GlobalNamespace {
struct UnityTls_unitytls_key;
}
namespace GlobalNamespace {
struct UnityTls_unitytls_key_ref;
}
namespace GlobalNamespace {
struct UnityTls_unitytls_log_level;
}
namespace GlobalNamespace {
struct UnityTls_unitytls_protocol;
}
namespace GlobalNamespace {
struct UnityTls_unitytls_tlsctx;
}
namespace GlobalNamespace {
struct UnityTls_unitytls_tlsctx_callbacks;
}
namespace GlobalNamespace {
struct UnityTls_unitytls_tlsctx_protocolrange;
}
namespace GlobalNamespace {
struct UnityTls_unitytls_x509_ref;
}
namespace GlobalNamespace {
struct UnityTls_unitytls_x509list;
}
namespace GlobalNamespace {
struct UnityTls_unitytls_x509list_ref;
}
namespace GlobalNamespace {
struct UnityTls_unitytls_x509name;
}
namespace GlobalNamespace {
struct UnityTls_unitytls_x509verify_result;
}
namespace Mono::Unity {
class UnityTls_unitytls_interface_struct;
}
namespace Mono::Unity {
class UnityTls_unitytls_tlsctx_certificate_callback;
}
namespace Mono::Unity {
class UnityTls_unitytls_tlsctx_read_callback;
}
namespace Mono::Unity {
class UnityTls_unitytls_tlsctx_trace_callback;
}
namespace Mono::Unity {
class UnityTls_unitytls_tlsctx_write_callback;
}
namespace Mono::Unity {
class UnityTls_unitytls_tlsctx_x509verify_callback;
}
namespace Mono::Unity {
class UnityTls_unitytls_x509verify_callback;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_key_free_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509list_append_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509list_create_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509list_free_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Unity {
class UnityTls;
}
namespace Mono::Unity {
class UnityTls_unitytls_interface_struct;
}
namespace Mono::Unity {
class UnityTls_unitytls_tlsctx_certificate_callback;
}
namespace Mono::Unity {
class UnityTls_unitytls_tlsctx_read_callback;
}
namespace Mono::Unity {
class UnityTls_unitytls_tlsctx_trace_callback;
}
namespace Mono::Unity {
class UnityTls_unitytls_tlsctx_write_callback;
}
namespace Mono::Unity {
class UnityTls_unitytls_tlsctx_x509verify_callback;
}
namespace Mono::Unity {
class UnityTls_unitytls_x509verify_callback;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_key_free_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509list_append_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509list_create_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509list_free_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t;
}
namespace Mono::Unity {
class unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t;
}
// Write type traits
MARK_REF_T(::Mono::Unity::UnityTls*);
MARK_REF_T(::Mono::Unity::UnityTls_unitytls_interface_struct*);
MARK_REF_T(::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*);
MARK_REF_T(::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*);
MARK_REF_T(::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*);
MARK_REF_T(::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*);
MARK_REF_T(::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*);
MARK_REF_T(::Mono::Unity::UnityTls_unitytls_x509verify_callback*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*);
MARK_REF_T(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t*);
DEFINE_IL2CPP_CLASS(::Mono::Unity::UnityTls*, "Mono.Unity", "UnityTls");
DEFINE_IL2CPP_CLASS(::Mono::Unity::UnityTls_unitytls_interface_struct*, "Mono.Unity", "UnityTls/unitytls_interface_struct");
DEFINE_IL2CPP_CLASS(::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*, "Mono.Unity", "UnityTls/unitytls_tlsctx_certificate_callback");
DEFINE_IL2CPP_CLASS(::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*, "Mono.Unity", "UnityTls/unitytls_tlsctx_read_callback");
DEFINE_IL2CPP_CLASS(::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*, "Mono.Unity", "UnityTls/unitytls_tlsctx_trace_callback");
DEFINE_IL2CPP_CLASS(::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*, "Mono.Unity", "UnityTls/unitytls_tlsctx_write_callback");
DEFINE_IL2CPP_CLASS(::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*, "Mono.Unity", "UnityTls/unitytls_tlsctx_x509verify_callback");
DEFINE_IL2CPP_CLASS(::Mono::Unity::UnityTls_unitytls_x509verify_callback*, "Mono.Unity", "UnityTls/unitytls_x509verify_callback");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_key_free_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_level_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509list_append_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509list_create_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509list_free_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t");
DEFINE_IL2CPP_CLASS(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509verify_result_to_string_t");
// Dependencies System.Object
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls
class CORDL_TYPE UnityTls : public ::System::Object {
public:
// Declarations
using unitytls_ciphersuite = ::GlobalNamespace::UnityTls_unitytls_ciphersuite;

using unitytls_error_code = ::GlobalNamespace::UnityTls_unitytls_error_code;

using unitytls_errorstate = ::GlobalNamespace::UnityTls_unitytls_errorstate;

using unitytls_key = ::GlobalNamespace::UnityTls_unitytls_key;

using unitytls_key_ref = ::GlobalNamespace::UnityTls_unitytls_key_ref;

using unitytls_log_level = ::GlobalNamespace::UnityTls_unitytls_log_level;

using unitytls_protocol = ::GlobalNamespace::UnityTls_unitytls_protocol;

using unitytls_tlsctx = ::GlobalNamespace::UnityTls_unitytls_tlsctx;

using unitytls_tlsctx_callbacks = ::GlobalNamespace::UnityTls_unitytls_tlsctx_callbacks;

using unitytls_tlsctx_protocolrange = ::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange;

using unitytls_x509_ref = ::GlobalNamespace::UnityTls_unitytls_x509_ref;

using unitytls_x509list = ::GlobalNamespace::UnityTls_unitytls_x509list;

using unitytls_x509list_ref = ::GlobalNamespace::UnityTls_unitytls_x509list_ref;

using unitytls_x509name = ::GlobalNamespace::UnityTls_unitytls_x509name;

using unitytls_x509verify_result = ::GlobalNamespace::UnityTls_unitytls_x509verify_result;

using unitytls_interface_struct = ::Mono::Unity::UnityTls_unitytls_interface_struct;

using unitytls_tlsctx_certificate_callback = ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback;

using unitytls_tlsctx_read_callback = ::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback;

using unitytls_tlsctx_trace_callback = ::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback;

using unitytls_tlsctx_write_callback = ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback;

using unitytls_tlsctx_x509verify_callback = ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback;

using unitytls_x509verify_callback = ::Mono::Unity::UnityTls_unitytls_x509verify_callback;

/// @brief Field marshalledInterface, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_marshalledInterface, put=setStaticF_marshalledInterface)) ::Mono::Unity::UnityTls_unitytls_interface_struct*  marshalledInterface;

/// @brief Method GetUnityTlsInterface, addr 0xa8ce2d4, size 0x4, virtual false, abstract: false, final false
static inline ::System::IntPtr GetUnityTlsInterface() ;

static inline ::Mono::Unity::UnityTls_unitytls_interface_struct* getStaticF_marshalledInterface() ;

/// @brief Method get_IsSupported, addr 0xa8ce2d8, size 0x18, virtual false, abstract: false, final false
static inline bool get_IsSupported() ;

/// @brief Method get_NativeInterface, addr 0xa8ce054, size 0xc4, virtual false, abstract: false, final false
static inline ::Mono::Unity::UnityTls_unitytls_interface_struct* get_NativeInterface() ;

static inline void setStaticF_marshalledInterface(::Mono::Unity::UnityTls_unitytls_interface_struct*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityTls() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityTls", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityTls(UnityTls && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityTls", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityTls(UnityTls const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9861};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::UnityTls) == 0x10, "Size mismatch!");

} // namespace end def Mono::Unity
// Dependencies Mono.Unity.UnityTls::unitytls_tlsctx_protocolrange, System.Object
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct
class CORDL_TYPE UnityTls_unitytls_interface_struct : public ::System::Object {
public:
// Declarations
using unitytls_errorstate_create_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t;

using unitytls_errorstate_raise_error_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t;

using unitytls_key_free_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t;

using unitytls_key_get_ref_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t;

using unitytls_key_parse_der_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t;

using unitytls_key_parse_pem_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t;

using unitytls_random_generate_bytes_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t;

using unitytls_tlsctx_create_client_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t;

using unitytls_tlsctx_create_server_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t;

using unitytls_tlsctx_free_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t;

using unitytls_tlsctx_get_ciphersuite_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t;

using unitytls_tlsctx_get_protocol_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t;

using unitytls_tlsctx_notify_close_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t;

using unitytls_tlsctx_process_handshake_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t;

using unitytls_tlsctx_read_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t;

using unitytls_tlsctx_server_require_client_authentication_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t;

using unitytls_tlsctx_set_certificate_callback_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t;

using unitytls_tlsctx_set_supported_ciphersuites_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t;

using unitytls_tlsctx_set_trace_callback_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t;

using unitytls_tlsctx_set_trace_level_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t;

using unitytls_tlsctx_set_x509verify_callback_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t;

using unitytls_tlsctx_write_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t;

using unitytls_x509_export_der_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t;

using unitytls_x509list_append_der_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t;

using unitytls_x509list_append_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t;

using unitytls_x509list_create_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t;

using unitytls_x509list_free_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t;

using unitytls_x509list_get_ref_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t;

using unitytls_x509list_get_x509_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t;

using unitytls_x509verify_default_ca_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t;

using unitytls_x509verify_explicit_ca_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t;

using unitytls_x509verify_result_to_string_t = ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t;

/// @brief Field UNITYTLS_INVALID_HANDLE, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_UNITYTLS_INVALID_HANDLE, put=__cordl_internal_set_UNITYTLS_INVALID_HANDLE)) uint64_t  UNITYTLS_INVALID_HANDLE;

/// @brief Field UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT, put=__cordl_internal_set_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT)) ::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange  UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT;

/// @brief Field unitytls_errorstate_create, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_errorstate_create, put=__cordl_internal_set_unitytls_errorstate_create)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*  unitytls_errorstate_create;

/// @brief Field unitytls_errorstate_raise_error, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_errorstate_raise_error, put=__cordl_internal_set_unitytls_errorstate_raise_error)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*  unitytls_errorstate_raise_error;

/// @brief Field unitytls_key_free, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_key_free, put=__cordl_internal_set_unitytls_key_free)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*  unitytls_key_free;

/// @brief Field unitytls_key_get_ref, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_key_get_ref, put=__cordl_internal_set_unitytls_key_get_ref)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*  unitytls_key_get_ref;

/// @brief Field unitytls_key_parse_der, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_key_parse_der, put=__cordl_internal_set_unitytls_key_parse_der)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*  unitytls_key_parse_der;

/// @brief Field unitytls_key_parse_pem, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_key_parse_pem, put=__cordl_internal_set_unitytls_key_parse_pem)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*  unitytls_key_parse_pem;

/// @brief Field unitytls_random_generate_bytes, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_random_generate_bytes, put=__cordl_internal_set_unitytls_random_generate_bytes)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*  unitytls_random_generate_bytes;

/// @brief Field unitytls_tlsctx_create_client, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_tlsctx_create_client, put=__cordl_internal_set_unitytls_tlsctx_create_client)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*  unitytls_tlsctx_create_client;

/// @brief Field unitytls_tlsctx_create_server, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_tlsctx_create_server, put=__cordl_internal_set_unitytls_tlsctx_create_server)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*  unitytls_tlsctx_create_server;

/// @brief Field unitytls_tlsctx_free, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_tlsctx_free, put=__cordl_internal_set_unitytls_tlsctx_free)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*  unitytls_tlsctx_free;

/// @brief Field unitytls_tlsctx_get_ciphersuite, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_tlsctx_get_ciphersuite, put=__cordl_internal_set_unitytls_tlsctx_get_ciphersuite)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*  unitytls_tlsctx_get_ciphersuite;

/// @brief Field unitytls_tlsctx_get_protocol, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_tlsctx_get_protocol, put=__cordl_internal_set_unitytls_tlsctx_get_protocol)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*  unitytls_tlsctx_get_protocol;

/// @brief Field unitytls_tlsctx_notify_close, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_tlsctx_notify_close, put=__cordl_internal_set_unitytls_tlsctx_notify_close)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*  unitytls_tlsctx_notify_close;

/// @brief Field unitytls_tlsctx_process_handshake, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_tlsctx_process_handshake, put=__cordl_internal_set_unitytls_tlsctx_process_handshake)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*  unitytls_tlsctx_process_handshake;

/// @brief Field unitytls_tlsctx_read, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_tlsctx_read, put=__cordl_internal_set_unitytls_tlsctx_read)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*  unitytls_tlsctx_read;

/// @brief Field unitytls_tlsctx_server_require_client_authentication, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_tlsctx_server_require_client_authentication, put=__cordl_internal_set_unitytls_tlsctx_server_require_client_authentication)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*  unitytls_tlsctx_server_require_client_authentication;

/// @brief Field unitytls_tlsctx_set_certificate_callback, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_tlsctx_set_certificate_callback, put=__cordl_internal_set_unitytls_tlsctx_set_certificate_callback)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*  unitytls_tlsctx_set_certificate_callback;

/// @brief Field unitytls_tlsctx_set_supported_ciphersuites, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_tlsctx_set_supported_ciphersuites, put=__cordl_internal_set_unitytls_tlsctx_set_supported_ciphersuites)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*  unitytls_tlsctx_set_supported_ciphersuites;

/// @brief Field unitytls_tlsctx_set_trace_callback, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_tlsctx_set_trace_callback, put=__cordl_internal_set_unitytls_tlsctx_set_trace_callback)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*  unitytls_tlsctx_set_trace_callback;

/// @brief Field unitytls_tlsctx_set_trace_level, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_tlsctx_set_trace_level, put=__cordl_internal_set_unitytls_tlsctx_set_trace_level)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t*  unitytls_tlsctx_set_trace_level;

/// @brief Field unitytls_tlsctx_set_x509verify_callback, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_tlsctx_set_x509verify_callback, put=__cordl_internal_set_unitytls_tlsctx_set_x509verify_callback)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*  unitytls_tlsctx_set_x509verify_callback;

/// @brief Field unitytls_tlsctx_write, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_tlsctx_write, put=__cordl_internal_set_unitytls_tlsctx_write)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*  unitytls_tlsctx_write;

/// @brief Field unitytls_x509_export_der, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_x509_export_der, put=__cordl_internal_set_unitytls_x509_export_der)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*  unitytls_x509_export_der;

/// @brief Field unitytls_x509list_append, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_x509list_append, put=__cordl_internal_set_unitytls_x509list_append)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*  unitytls_x509list_append;

/// @brief Field unitytls_x509list_append_der, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_x509list_append_der, put=__cordl_internal_set_unitytls_x509list_append_der)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*  unitytls_x509list_append_der;

/// @brief Field unitytls_x509list_append_pem, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_x509list_append_pem, put=__cordl_internal_set_unitytls_x509list_append_pem)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*  unitytls_x509list_append_pem;

/// @brief Field unitytls_x509list_create, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_x509list_create, put=__cordl_internal_set_unitytls_x509list_create)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*  unitytls_x509list_create;

/// @brief Field unitytls_x509list_free, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_x509list_free, put=__cordl_internal_set_unitytls_x509list_free)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*  unitytls_x509list_free;

/// @brief Field unitytls_x509list_get_ref, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_x509list_get_ref, put=__cordl_internal_set_unitytls_x509list_get_ref)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*  unitytls_x509list_get_ref;

/// @brief Field unitytls_x509list_get_x509, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_x509list_get_x509, put=__cordl_internal_set_unitytls_x509list_get_x509)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*  unitytls_x509list_get_x509;

/// @brief Field unitytls_x509verify_default_ca, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_x509verify_default_ca, put=__cordl_internal_set_unitytls_x509verify_default_ca)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*  unitytls_x509verify_default_ca;

/// @brief Field unitytls_x509verify_explicit_ca, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_x509verify_explicit_ca, put=__cordl_internal_set_unitytls_x509verify_explicit_ca)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*  unitytls_x509verify_explicit_ca;

/// @brief Field unitytls_x509verify_result_to_string, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitytls_x509verify_result_to_string, put=__cordl_internal_set_unitytls_x509verify_result_to_string)) ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t*  unitytls_x509verify_result_to_string;

static inline ::Mono::Unity::UnityTls_unitytls_interface_struct* New_ctor() ;

constexpr uint64_t const& __cordl_internal_get_UNITYTLS_INVALID_HANDLE() const;

constexpr uint64_t& __cordl_internal_get_UNITYTLS_INVALID_HANDLE() ;

constexpr ::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange const& __cordl_internal_get_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT() const;

constexpr ::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange& __cordl_internal_get_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t* const& __cordl_internal_get_unitytls_errorstate_create() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*& __cordl_internal_get_unitytls_errorstate_create() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t* const& __cordl_internal_get_unitytls_errorstate_raise_error() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*& __cordl_internal_get_unitytls_errorstate_raise_error() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t* const& __cordl_internal_get_unitytls_key_free() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*& __cordl_internal_get_unitytls_key_free() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t* const& __cordl_internal_get_unitytls_key_get_ref() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*& __cordl_internal_get_unitytls_key_get_ref() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t* const& __cordl_internal_get_unitytls_key_parse_der() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*& __cordl_internal_get_unitytls_key_parse_der() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t* const& __cordl_internal_get_unitytls_key_parse_pem() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*& __cordl_internal_get_unitytls_key_parse_pem() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t* const& __cordl_internal_get_unitytls_random_generate_bytes() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*& __cordl_internal_get_unitytls_random_generate_bytes() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t* const& __cordl_internal_get_unitytls_tlsctx_create_client() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*& __cordl_internal_get_unitytls_tlsctx_create_client() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t* const& __cordl_internal_get_unitytls_tlsctx_create_server() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*& __cordl_internal_get_unitytls_tlsctx_create_server() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t* const& __cordl_internal_get_unitytls_tlsctx_free() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*& __cordl_internal_get_unitytls_tlsctx_free() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t* const& __cordl_internal_get_unitytls_tlsctx_get_ciphersuite() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*& __cordl_internal_get_unitytls_tlsctx_get_ciphersuite() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t* const& __cordl_internal_get_unitytls_tlsctx_get_protocol() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*& __cordl_internal_get_unitytls_tlsctx_get_protocol() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t* const& __cordl_internal_get_unitytls_tlsctx_notify_close() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*& __cordl_internal_get_unitytls_tlsctx_notify_close() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t* const& __cordl_internal_get_unitytls_tlsctx_process_handshake() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*& __cordl_internal_get_unitytls_tlsctx_process_handshake() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t* const& __cordl_internal_get_unitytls_tlsctx_read() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*& __cordl_internal_get_unitytls_tlsctx_read() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t* const& __cordl_internal_get_unitytls_tlsctx_server_require_client_authentication() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*& __cordl_internal_get_unitytls_tlsctx_server_require_client_authentication() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t* const& __cordl_internal_get_unitytls_tlsctx_set_certificate_callback() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*& __cordl_internal_get_unitytls_tlsctx_set_certificate_callback() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t* const& __cordl_internal_get_unitytls_tlsctx_set_supported_ciphersuites() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*& __cordl_internal_get_unitytls_tlsctx_set_supported_ciphersuites() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t* const& __cordl_internal_get_unitytls_tlsctx_set_trace_callback() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*& __cordl_internal_get_unitytls_tlsctx_set_trace_callback() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t* const& __cordl_internal_get_unitytls_tlsctx_set_trace_level() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t*& __cordl_internal_get_unitytls_tlsctx_set_trace_level() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t* const& __cordl_internal_get_unitytls_tlsctx_set_x509verify_callback() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*& __cordl_internal_get_unitytls_tlsctx_set_x509verify_callback() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t* const& __cordl_internal_get_unitytls_tlsctx_write() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*& __cordl_internal_get_unitytls_tlsctx_write() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t* const& __cordl_internal_get_unitytls_x509_export_der() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*& __cordl_internal_get_unitytls_x509_export_der() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t* const& __cordl_internal_get_unitytls_x509list_append() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*& __cordl_internal_get_unitytls_x509list_append() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t* const& __cordl_internal_get_unitytls_x509list_append_der() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*& __cordl_internal_get_unitytls_x509list_append_der() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t* const& __cordl_internal_get_unitytls_x509list_append_pem() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*& __cordl_internal_get_unitytls_x509list_append_pem() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t* const& __cordl_internal_get_unitytls_x509list_create() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*& __cordl_internal_get_unitytls_x509list_create() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t* const& __cordl_internal_get_unitytls_x509list_free() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*& __cordl_internal_get_unitytls_x509list_free() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t* const& __cordl_internal_get_unitytls_x509list_get_ref() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*& __cordl_internal_get_unitytls_x509list_get_ref() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t* const& __cordl_internal_get_unitytls_x509list_get_x509() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*& __cordl_internal_get_unitytls_x509list_get_x509() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t* const& __cordl_internal_get_unitytls_x509verify_default_ca() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*& __cordl_internal_get_unitytls_x509verify_default_ca() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t* const& __cordl_internal_get_unitytls_x509verify_explicit_ca() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*& __cordl_internal_get_unitytls_x509verify_explicit_ca() ;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t* const& __cordl_internal_get_unitytls_x509verify_result_to_string() const;

constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t*& __cordl_internal_get_unitytls_x509verify_result_to_string() ;

constexpr void __cordl_internal_set_UNITYTLS_INVALID_HANDLE(uint64_t  value) ;

constexpr void __cordl_internal_set_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT(::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange  value) ;

constexpr void __cordl_internal_set_unitytls_errorstate_create(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*  value) ;

constexpr void __cordl_internal_set_unitytls_errorstate_raise_error(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*  value) ;

constexpr void __cordl_internal_set_unitytls_key_free(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*  value) ;

constexpr void __cordl_internal_set_unitytls_key_get_ref(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*  value) ;

constexpr void __cordl_internal_set_unitytls_key_parse_der(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*  value) ;

constexpr void __cordl_internal_set_unitytls_key_parse_pem(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*  value) ;

constexpr void __cordl_internal_set_unitytls_random_generate_bytes(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*  value) ;

constexpr void __cordl_internal_set_unitytls_tlsctx_create_client(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*  value) ;

constexpr void __cordl_internal_set_unitytls_tlsctx_create_server(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*  value) ;

constexpr void __cordl_internal_set_unitytls_tlsctx_free(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*  value) ;

constexpr void __cordl_internal_set_unitytls_tlsctx_get_ciphersuite(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*  value) ;

constexpr void __cordl_internal_set_unitytls_tlsctx_get_protocol(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*  value) ;

constexpr void __cordl_internal_set_unitytls_tlsctx_notify_close(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*  value) ;

constexpr void __cordl_internal_set_unitytls_tlsctx_process_handshake(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*  value) ;

constexpr void __cordl_internal_set_unitytls_tlsctx_read(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*  value) ;

constexpr void __cordl_internal_set_unitytls_tlsctx_server_require_client_authentication(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*  value) ;

constexpr void __cordl_internal_set_unitytls_tlsctx_set_certificate_callback(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*  value) ;

constexpr void __cordl_internal_set_unitytls_tlsctx_set_supported_ciphersuites(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*  value) ;

constexpr void __cordl_internal_set_unitytls_tlsctx_set_trace_callback(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*  value) ;

constexpr void __cordl_internal_set_unitytls_tlsctx_set_trace_level(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t*  value) ;

constexpr void __cordl_internal_set_unitytls_tlsctx_set_x509verify_callback(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*  value) ;

constexpr void __cordl_internal_set_unitytls_tlsctx_write(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*  value) ;

constexpr void __cordl_internal_set_unitytls_x509_export_der(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*  value) ;

constexpr void __cordl_internal_set_unitytls_x509list_append(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*  value) ;

constexpr void __cordl_internal_set_unitytls_x509list_append_der(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*  value) ;

constexpr void __cordl_internal_set_unitytls_x509list_append_pem(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*  value) ;

constexpr void __cordl_internal_set_unitytls_x509list_create(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*  value) ;

constexpr void __cordl_internal_set_unitytls_x509list_free(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*  value) ;

constexpr void __cordl_internal_set_unitytls_x509list_get_ref(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*  value) ;

constexpr void __cordl_internal_set_unitytls_x509list_get_x509(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*  value) ;

constexpr void __cordl_internal_set_unitytls_x509verify_default_ca(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*  value) ;

constexpr void __cordl_internal_set_unitytls_x509verify_explicit_ca(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*  value) ;

constexpr void __cordl_internal_set_unitytls_x509verify_result_to_string(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t*  value) ;

/// @brief Method .ctor, addr 0xa8ce7ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityTls_unitytls_interface_struct() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityTls_unitytls_interface_struct", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityTls_unitytls_interface_struct(UnityTls_unitytls_interface_struct && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityTls_unitytls_interface_struct", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityTls_unitytls_interface_struct(UnityTls_unitytls_interface_struct const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9860};

/// @brief Field UNITYTLS_INVALID_HANDLE, offset: 0x10, size: 0x8, def value: None
 uint64_t  ___UNITYTLS_INVALID_HANDLE;

/// @brief Field UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange  ___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT;

/// @brief Field unitytls_errorstate_create, offset: 0x20, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*  ___unitytls_errorstate_create;

/// @brief Field unitytls_errorstate_raise_error, offset: 0x28, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*  ___unitytls_errorstate_raise_error;

/// @brief Field unitytls_key_get_ref, offset: 0x30, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*  ___unitytls_key_get_ref;

/// @brief Field unitytls_key_parse_der, offset: 0x38, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*  ___unitytls_key_parse_der;

/// @brief Field unitytls_key_parse_pem, offset: 0x40, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*  ___unitytls_key_parse_pem;

/// @brief Field unitytls_key_free, offset: 0x48, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*  ___unitytls_key_free;

/// @brief Field unitytls_x509_export_der, offset: 0x50, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*  ___unitytls_x509_export_der;

/// @brief Field unitytls_x509list_get_ref, offset: 0x58, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*  ___unitytls_x509list_get_ref;

/// @brief Field unitytls_x509list_get_x509, offset: 0x60, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*  ___unitytls_x509list_get_x509;

/// @brief Field unitytls_x509list_create, offset: 0x68, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*  ___unitytls_x509list_create;

/// @brief Field unitytls_x509list_append, offset: 0x70, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*  ___unitytls_x509list_append;

/// @brief Field unitytls_x509list_append_der, offset: 0x78, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*  ___unitytls_x509list_append_der;

/// @brief Field unitytls_x509list_append_pem, offset: 0x80, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*  ___unitytls_x509list_append_pem;

/// @brief Field unitytls_x509list_free, offset: 0x88, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*  ___unitytls_x509list_free;

/// @brief Field unitytls_x509verify_default_ca, offset: 0x90, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*  ___unitytls_x509verify_default_ca;

/// @brief Field unitytls_x509verify_explicit_ca, offset: 0x98, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*  ___unitytls_x509verify_explicit_ca;

/// @brief Field unitytls_tlsctx_create_server, offset: 0xa0, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*  ___unitytls_tlsctx_create_server;

/// @brief Field unitytls_tlsctx_create_client, offset: 0xa8, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*  ___unitytls_tlsctx_create_client;

/// @brief Field unitytls_tlsctx_server_require_client_authentication, offset: 0xb0, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*  ___unitytls_tlsctx_server_require_client_authentication;

/// @brief Field unitytls_tlsctx_set_certificate_callback, offset: 0xb8, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*  ___unitytls_tlsctx_set_certificate_callback;

/// @brief Field unitytls_tlsctx_set_trace_callback, offset: 0xc0, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*  ___unitytls_tlsctx_set_trace_callback;

/// @brief Field unitytls_tlsctx_set_x509verify_callback, offset: 0xc8, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*  ___unitytls_tlsctx_set_x509verify_callback;

/// @brief Field unitytls_tlsctx_set_supported_ciphersuites, offset: 0xd0, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*  ___unitytls_tlsctx_set_supported_ciphersuites;

/// @brief Field unitytls_tlsctx_get_ciphersuite, offset: 0xd8, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*  ___unitytls_tlsctx_get_ciphersuite;

/// @brief Field unitytls_tlsctx_get_protocol, offset: 0xe0, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*  ___unitytls_tlsctx_get_protocol;

/// @brief Field unitytls_tlsctx_process_handshake, offset: 0xe8, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*  ___unitytls_tlsctx_process_handshake;

/// @brief Field unitytls_tlsctx_read, offset: 0xf0, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*  ___unitytls_tlsctx_read;

/// @brief Field unitytls_tlsctx_write, offset: 0xf8, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*  ___unitytls_tlsctx_write;

/// @brief Field unitytls_tlsctx_notify_close, offset: 0x100, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*  ___unitytls_tlsctx_notify_close;

/// @brief Field unitytls_tlsctx_free, offset: 0x108, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*  ___unitytls_tlsctx_free;

/// @brief Field unitytls_random_generate_bytes, offset: 0x110, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*  ___unitytls_random_generate_bytes;

/// @brief Field unitytls_x509verify_result_to_string, offset: 0x118, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t*  ___unitytls_x509verify_result_to_string;

/// @brief Field unitytls_tlsctx_set_trace_level, offset: 0x120, size: 0x8, def value: None
 ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t*  ___unitytls_tlsctx_set_trace_level;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___UNITYTLS_INVALID_HANDLE) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_errorstate_create) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_errorstate_raise_error) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_key_get_ref) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_key_parse_der) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_key_parse_pem) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_key_free) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_x509_export_der) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_x509list_get_ref) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_x509list_get_x509) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_x509list_create) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_x509list_append) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_x509list_append_der) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_x509list_append_pem) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_x509list_free) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_x509verify_default_ca) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_x509verify_explicit_ca) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_tlsctx_create_server) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_tlsctx_create_client) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_tlsctx_server_require_client_authentication) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_tlsctx_set_certificate_callback) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_tlsctx_set_trace_callback) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_tlsctx_set_x509verify_callback) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_tlsctx_set_supported_ciphersuites) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_tlsctx_get_ciphersuite) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_tlsctx_get_protocol) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_tlsctx_process_handshake) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_tlsctx_read) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_tlsctx_write) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_tlsctx_notify_close) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_tlsctx_free) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_random_generate_bytes) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_x509verify_result_to_string) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::UnityTls_unitytls_interface_struct, ___unitytls_tlsctx_set_trace_level) == 0x120, "Offset mismatch!");

static_assert(sizeof(::Mono::Unity::UnityTls_unitytls_interface_struct) == 0x128, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_level_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8d0040, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::GlobalNamespace::UnityTls_unitytls_log_level  level) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cff8c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9859};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_level_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_result_to_string_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cff78, size 0x14, virtual true, abstract: false, final false
inline char16_t* Invoke(::GlobalNamespace::UnityTls_unitytls_x509verify_result  v) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cfed8, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t(unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t(unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9858};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_result_to_string_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cfec4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(uint8_t*  buffer, ::System::IntPtr  bufferLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cfe10, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t(unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t(unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9857};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cfdfc, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cfd4c, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9856};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cfd38, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cfc84, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9855};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cfc70, size 0x14, virtual true, abstract: false, final false
inline ::System::IntPtr Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, uint8_t*  data, ::System::IntPtr  bufferLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cfbbc, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9854};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cfba8, size 0x14, virtual true, abstract: false, final false
inline ::System::IntPtr Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, uint8_t*  buffer, ::System::IntPtr  bufferLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cfaf4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9853};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cfae0, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::UnityTls_unitytls_x509verify_result Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cfa2c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9852};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cfa18, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::UnityTls_unitytls_protocol Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cf964, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9851};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cf950, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::UnityTls_unitytls_ciphersuite Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cf89c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9850};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cf888, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::GlobalNamespace::UnityTls_unitytls_ciphersuite*  supportedCiphersuites, ::System::IntPtr  supportedCiphersuitesLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cf7d4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9849};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cf7c0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*  cb, void*  userData, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cf70c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9848};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cf6f8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*  cb, void*  userData, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cf644, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9847};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cf630, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*  cb, void*  userData, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cf57c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9846};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cf568, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, ::GlobalNamespace::UnityTls_unitytls_x509list_ref  clientAuthCAList, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cf4b4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9845};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cf478, size 0x3c, virtual true, abstract: false, final false
inline ::GlobalNamespace::UnityTls_unitytls_tlsctx* Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange  supportedProtocols, ::GlobalNamespace::UnityTls_unitytls_tlsctx_callbacks  callbacks, uint8_t*  cn, ::System::IntPtr  cnLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cf3d8, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9844};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cf39c, size 0x3c, virtual true, abstract: false, final false
inline ::GlobalNamespace::UnityTls_unitytls_tlsctx* Invoke(::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange  supportedProtocols, ::GlobalNamespace::UnityTls_unitytls_tlsctx_callbacks  callbacks, uint64_t  certChain, uint64_t  leafCertificateKey, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cf2fc, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t(unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9843};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cf2e4, size 0x18, virtual true, abstract: false, final false
inline ::GlobalNamespace::UnityTls_unitytls_x509verify_result Invoke(::GlobalNamespace::UnityTls_unitytls_x509list_ref  chain, ::GlobalNamespace::UnityTls_unitytls_x509list_ref  trustCA, uint8_t*  cn, ::System::IntPtr  cnLen, ::Mono::Unity::UnityTls_unitytls_x509verify_callback*  cb, void*  userData, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cf244, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t(unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t(unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9842};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cf230, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::UnityTls_unitytls_x509verify_result Invoke(::GlobalNamespace::UnityTls_unitytls_x509list_ref  chain, uint8_t*  cn, ::System::IntPtr  cnLen, ::Mono::Unity::UnityTls_unitytls_x509verify_callback*  cb, void*  userData, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cf190, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t(unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t(unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9841};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_x509list_free_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cf17c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::UnityTls_unitytls_x509list*  list) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cf0cc, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_x509list_free_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509list_free_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_x509list_free_t(unitytls_interface_struct_UnityTls_unitytls_x509list_free_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509list_free_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_x509list_free_t(unitytls_interface_struct_UnityTls_unitytls_x509list_free_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9840};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cf0b8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::UnityTls_unitytls_x509list*  list, uint8_t*  buffer, ::System::IntPtr  bufferLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cf004, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t(unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t(unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9839};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_x509list_append_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8ceff0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::UnityTls_unitytls_x509list*  list, ::GlobalNamespace::UnityTls_unitytls_x509_ref  cert, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cef3c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_x509list_append_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509list_append_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_x509list_append_t(unitytls_interface_struct_UnityTls_unitytls_x509list_append_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509list_append_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_x509list_append_t(unitytls_interface_struct_UnityTls_unitytls_x509list_append_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9838};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_x509list_create_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cef28, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::UnityTls_unitytls_x509list* Invoke(::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cee78, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_x509list_create_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509list_create_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_x509list_create_t(unitytls_interface_struct_UnityTls_unitytls_x509list_create_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509list_create_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_x509list_create_t(unitytls_interface_struct_UnityTls_unitytls_x509list_create_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9837};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cee64, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::UnityTls_unitytls_x509_ref Invoke(::GlobalNamespace::UnityTls_unitytls_x509list_ref  list, ::System::IntPtr  index, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cedc4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t(unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t(unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9836};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cedb0, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::UnityTls_unitytls_x509list_ref Invoke(::GlobalNamespace::UnityTls_unitytls_x509list*  list, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cecfc, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t(unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t(unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9835};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cece8, size 0x14, virtual true, abstract: false, final false
inline ::System::IntPtr Invoke(::GlobalNamespace::UnityTls_unitytls_x509_ref  cert, uint8_t*  buffer, ::System::IntPtr  bufferLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8cec48, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t(unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t(unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9834};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_key_free_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8cec34, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::UnityTls_unitytls_key*  key) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8ceb84, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_key_free_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_key_free_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_key_free_t(unitytls_interface_struct_UnityTls_unitytls_key_free_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_key_free_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_key_free_t(unitytls_interface_struct_UnityTls_unitytls_key_free_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9833};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8ceb70, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::UnityTls_unitytls_key* Invoke(uint8_t*  buffer, ::System::IntPtr  bufferLen, uint8_t*  password, ::System::IntPtr  passwordLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8ceabc, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t(unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t(unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9832};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8ceaa8, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::UnityTls_unitytls_key* Invoke(uint8_t*  buffer, ::System::IntPtr  bufferLen, uint8_t*  password, ::System::IntPtr  passwordLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8ce9f4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t(unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t(unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9831};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8ce9e0, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::UnityTls_unitytls_key_ref Invoke(::GlobalNamespace::UnityTls_unitytls_key*  key, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8ce92c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t(unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t(unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9830};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8ce918, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState, ::GlobalNamespace::UnityTls_unitytls_error_code  errorCode) ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8ce864, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t(unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t(unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9829};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t
class CORDL_TYPE unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8ce850, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::UnityTls_unitytls_errorstate Invoke() ;

static inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8ce7b4, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t(unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t(unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9828};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback
class CORDL_TYPE UnityTls_unitytls_tlsctx_x509verify_callback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8ce798, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::UnityTls_unitytls_x509verify_result Invoke(void*  userData, ::GlobalNamespace::UnityTls_unitytls_x509list_ref  chain, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8ce6e4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityTls_unitytls_tlsctx_x509verify_callback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityTls_unitytls_tlsctx_x509verify_callback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityTls_unitytls_tlsctx_x509verify_callback(UnityTls_unitytls_tlsctx_x509verify_callback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityTls_unitytls_tlsctx_x509verify_callback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityTls_unitytls_tlsctx_x509verify_callback(UnityTls_unitytls_tlsctx_x509verify_callback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9826};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback
class CORDL_TYPE UnityTls_unitytls_tlsctx_certificate_callback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8ce6c4, size 0x20, virtual true, abstract: false, final false
inline void Invoke(void*  userData, ::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, uint8_t*  cn, ::System::IntPtr  cnLen, ::GlobalNamespace::UnityTls_unitytls_x509name*  caList, ::System::IntPtr  caListLen, ::GlobalNamespace::UnityTls_unitytls_x509list_ref*  chain, ::GlobalNamespace::UnityTls_unitytls_key_ref*  key, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8ce610, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityTls_unitytls_tlsctx_certificate_callback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityTls_unitytls_tlsctx_certificate_callback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityTls_unitytls_tlsctx_certificate_callback(UnityTls_unitytls_tlsctx_certificate_callback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityTls_unitytls_tlsctx_certificate_callback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityTls_unitytls_tlsctx_certificate_callback(UnityTls_unitytls_tlsctx_certificate_callback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9825};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback
class CORDL_TYPE UnityTls_unitytls_tlsctx_trace_callback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8ce5fc, size 0x14, virtual true, abstract: false, final false
inline void Invoke(void*  userData, ::GlobalNamespace::UnityTls_unitytls_tlsctx*  ctx, uint8_t*  traceMessage, ::System::IntPtr  traceMessageLen) ;

static inline ::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8ce548, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityTls_unitytls_tlsctx_trace_callback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityTls_unitytls_tlsctx_trace_callback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityTls_unitytls_tlsctx_trace_callback(UnityTls_unitytls_tlsctx_trace_callback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityTls_unitytls_tlsctx_trace_callback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityTls_unitytls_tlsctx_trace_callback(UnityTls_unitytls_tlsctx_trace_callback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9824};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_tlsctx_read_callback
class CORDL_TYPE UnityTls_unitytls_tlsctx_read_callback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8ce534, size 0x14, virtual true, abstract: false, final false
inline ::System::IntPtr Invoke(void*  userData, uint8_t*  buffer, ::System::IntPtr  bufferLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8ce480, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityTls_unitytls_tlsctx_read_callback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityTls_unitytls_tlsctx_read_callback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityTls_unitytls_tlsctx_read_callback(UnityTls_unitytls_tlsctx_read_callback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityTls_unitytls_tlsctx_read_callback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityTls_unitytls_tlsctx_read_callback(UnityTls_unitytls_tlsctx_read_callback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9823};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_tlsctx_write_callback
class CORDL_TYPE UnityTls_unitytls_tlsctx_write_callback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8ce46c, size 0x14, virtual true, abstract: false, final false
inline ::System::IntPtr Invoke(void*  userData, uint8_t*  data, ::System::IntPtr  bufferLen, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8ce3b8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityTls_unitytls_tlsctx_write_callback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityTls_unitytls_tlsctx_write_callback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityTls_unitytls_tlsctx_write_callback(UnityTls_unitytls_tlsctx_write_callback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityTls_unitytls_tlsctx_write_callback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityTls_unitytls_tlsctx_write_callback(UnityTls_unitytls_tlsctx_write_callback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9822};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTls/unitytls_x509verify_callback
class CORDL_TYPE UnityTls_unitytls_x509verify_callback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa8ce3a4, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::UnityTls_unitytls_x509verify_result Invoke(void*  userData, ::GlobalNamespace::UnityTls_unitytls_x509_ref  cert, ::GlobalNamespace::UnityTls_unitytls_x509verify_result  result, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState) ;

static inline ::Mono::Unity::UnityTls_unitytls_x509verify_callback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa8ce2f0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityTls_unitytls_x509verify_callback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityTls_unitytls_x509verify_callback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityTls_unitytls_x509verify_callback(UnityTls_unitytls_x509verify_callback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityTls_unitytls_x509verify_callback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityTls_unitytls_x509verify_callback(UnityTls_unitytls_x509verify_callback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9816};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::UnityTls_unitytls_x509verify_callback) == 0x80, "Size mismatch!");

} // namespace end def Mono::Unity
