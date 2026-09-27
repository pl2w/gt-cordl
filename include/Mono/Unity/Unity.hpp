#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Mono/Unity/CertHelper.hpp"
#include "Mono/Unity/Debug.hpp"
#include "Mono/Unity/UnityTls.hpp"
#include "Mono/Unity/UnityTlsContext.hpp"
#include "Mono/Unity/UnityTlsConversions.hpp"
#include "Mono/Unity/UnityTlsProvider.hpp"
#include "Mono/Unity/UnityTlsStream.hpp"
#include "Mono/Unity/UnityTls_unitytls_ciphersuite.hpp"
#include "Mono/Unity/UnityTls_unitytls_error_code.hpp"
#include "Mono/Unity/UnityTls_unitytls_errorstate.hpp"
#include "Mono/Unity/UnityTls_unitytls_key.hpp"
#include "Mono/Unity/UnityTls_unitytls_key_ref.hpp"
#include "Mono/Unity/UnityTls_unitytls_log_level.hpp"
#include "Mono/Unity/UnityTls_unitytls_protocol.hpp"
#include "Mono/Unity/UnityTls_unitytls_tlsctx.hpp"
#include "Mono/Unity/UnityTls_unitytls_tlsctx_callbacks.hpp"
#include "Mono/Unity/UnityTls_unitytls_tlsctx_protocolrange.hpp"
#include "Mono/Unity/UnityTls_unitytls_x509_ref.hpp"
#include "Mono/Unity/UnityTls_unitytls_x509list.hpp"
#include "Mono/Unity/UnityTls_unitytls_x509list_ref.hpp"
#include "Mono/Unity/UnityTls_unitytls_x509name.hpp"
#include "Mono/Unity/UnityTls_unitytls_x509verify_result.hpp"
#include "Mono/Unity/X509ChainImplUnityTls.hpp"
#ifdef __cpp_modules
                    export module Unity;
                    #endif
                
