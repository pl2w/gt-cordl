#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "System/Net/Security/AuthenticatedStream.hpp"
#include "System/Net/Security/AuthenticationLevel.hpp"
#include "System/Net/Security/CertificateHelper.hpp"
#include "System/Net/Security/EncryptionPolicy.hpp"
#include "System/Net/Security/LocalCertSelectionCallback.hpp"
#include "System/Net/Security/LocalCertificateSelectionCallback.hpp"
#include "System/Net/Security/NegotiateStreamPal.hpp"
#include "System/Net/Security/RemoteCertificateValidationCallback.hpp"
#include "System/Net/Security/SSPIHandleCache.hpp"
#include "System/Net/Security/SafeCredentialReference.hpp"
#include "System/Net/Security/SafeDeleteContext.hpp"
#include "System/Net/Security/SafeDeleteNegoContext.hpp"
#include "System/Net/Security/SafeFreeCredentials.hpp"
#include "System/Net/Security/SafeFreeNegoCredentials.hpp"
#include "System/Net/Security/SecurityBuffer.hpp"
#include "System/Net/Security/SecurityBufferType.hpp"
#include "System/Net/Security/ServerCertSelectionCallback.hpp"
#include "System/Net/Security/SslClientAuthenticationOptions.hpp"
#include "System/Net/Security/SslPolicyErrors.hpp"
#include "System/Net/Security/SslServerAuthenticationOptions.hpp"
#include "System/Net/Security/SslStream.hpp"
#ifdef __cpp_modules
                    export module Security;
                    #endif
                
