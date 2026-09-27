#pragma once
// IWYU pragma private; include "System/Net/Security/NegotiateStreamPal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Security/zzzz__NegotiateStreamPal_def.hpp"
#include "GlobalNamespace/zzzz__Interop_NetSecurityNative_GssFlags_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeGssContextHandle_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeGssCredHandle_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeGssNameHandle_def.hpp"
#include "System/ComponentModel/zzzz__Win32Exception_def.hpp"
#include "System/Net/Security/zzzz__SafeDeleteContext_def.hpp"
#include "System/Net/Security/zzzz__SafeFreeCredentials_def.hpp"
#include "System/Net/Security/zzzz__SafeFreeNegoCredentials_def.hpp"
#include "System/Net/Security/zzzz__SecurityBuffer_def.hpp"
#include "System/Net/zzzz__ContextFlagsPal_def.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
#include "System/Net/zzzz__SecurityStatusPal_def.hpp"
//  Writing Method size for method: ::System::Net::Security::NegotiateStreamPal.QueryContextClientSpecifiedSpn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Net::Security::SafeDeleteContext*)>(&::System::Net::Security::NegotiateStreamPal::QueryContextClientSpecifiedSpn)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xacf2f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"QueryContextClientSpecifiedSpn", {}, {::i2c::type_of<::System::Net::Security::SafeDeleteContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::NegotiateStreamPal.QueryContextAuthenticationPackage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Net::Security::SafeDeleteContext*)>(&::System::Net::Security::NegotiateStreamPal::QueryContextAuthenticationPackage)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xacf2f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"QueryContextAuthenticationPackage", {}, {::i2c::type_of<::System::Net::Security::SafeDeleteContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::NegotiateStreamPal.GssWrap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Microsoft::Win32::SafeHandles::SafeGssContextHandle*, bool, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::Security::NegotiateStreamPal::GssWrap)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xacf3034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"GssWrap", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::NegotiateStreamPal.GssUnwrap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Microsoft::Win32::SafeHandles::SafeGssContextHandle*, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::Security::NegotiateStreamPal::GssUnwrap)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xacf3148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"GssUnwrap", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::NegotiateStreamPal.GssInitSecurityContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>, ::Microsoft::Win32::SafeHandles::SafeGssCredHandle*, bool, ::Microsoft::Win32::SafeHandles::SafeGssNameHandle*, ::GlobalNamespace::NetSecurityNative_Interop_GssFlags, ::ArrayW<uint8_t>, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<uint32_t>, ::by_ref<int32_t>)>(&::System::Net::Security::NegotiateStreamPal::GssInitSecurityContext)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xacf3264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"GssInitSecurityContext", {}, {::i2c::type_of<::by_ref<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeGssCredHandle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeGssNameHandle*>(), ::i2c::type_of<::GlobalNamespace::NetSecurityNative_Interop_GssFlags>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::NegotiateStreamPal.EstablishSecurityContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::SecurityStatusPal (*)(::System::Net::Security::SafeFreeNegoCredentials*, ::by_ref<::System::Net::Security::SafeDeleteContext*>, ::StringW, ::System::Net::ContextFlagsPal, ::System::Net::Security::SecurityBuffer*, ::System::Net::Security::SecurityBuffer*, ::by_ref<::System::Net::ContextFlagsPal>)>(&::System::Net::Security::NegotiateStreamPal::EstablishSecurityContext)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0xacf344c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"EstablishSecurityContext", {}, {::i2c::type_of<::System::Net::Security::SafeFreeNegoCredentials*>(), ::i2c::type_of<::by_ref<::System::Net::Security::SafeDeleteContext*>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::ContextFlagsPal>(), ::i2c::type_of<::System::Net::Security::SecurityBuffer*>(), ::i2c::type_of<::System::Net::Security::SecurityBuffer*>(), ::i2c::type_of<::by_ref<::System::Net::ContextFlagsPal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::NegotiateStreamPal.InitializeSecurityContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::SecurityStatusPal (*)(::System::Net::Security::SafeFreeCredentials*, ::by_ref<::System::Net::Security::SafeDeleteContext*>, ::StringW, ::System::Net::ContextFlagsPal, ::ArrayW<::System::Net::Security::SecurityBuffer*>, ::System::Net::Security::SecurityBuffer*, ::by_ref<::System::Net::ContextFlagsPal>)>(&::System::Net::Security::NegotiateStreamPal::InitializeSecurityContext)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xacf3894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"InitializeSecurityContext", {}, {::i2c::type_of<::System::Net::Security::SafeFreeCredentials*>(), ::i2c::type_of<::by_ref<::System::Net::Security::SafeDeleteContext*>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::ContextFlagsPal>(), ::i2c::type_of<::ArrayW<::System::Net::Security::SecurityBuffer*>>(), ::i2c::type_of<::System::Net::Security::SecurityBuffer*>(), ::i2c::type_of<::by_ref<::System::Net::ContextFlagsPal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::NegotiateStreamPal.AcceptSecurityContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::SecurityStatusPal (*)(::System::Net::Security::SafeFreeCredentials*, ::by_ref<::System::Net::Security::SafeDeleteContext*>, ::System::Net::ContextFlagsPal, ::ArrayW<::System::Net::Security::SecurityBuffer*>, ::System::Net::Security::SecurityBuffer*, ::by_ref<::System::Net::ContextFlagsPal>)>(&::System::Net::Security::NegotiateStreamPal::AcceptSecurityContext)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xacf3a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"AcceptSecurityContext", {}, {::i2c::type_of<::System::Net::Security::SafeFreeCredentials*>(), ::i2c::type_of<::by_ref<::System::Net::Security::SafeDeleteContext*>>(), ::i2c::type_of<::System::Net::ContextFlagsPal>(), ::i2c::type_of<::ArrayW<::System::Net::Security::SecurityBuffer*>>(), ::i2c::type_of<::System::Net::Security::SecurityBuffer*>(), ::i2c::type_of<::by_ref<::System::Net::ContextFlagsPal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::NegotiateStreamPal.CreateExceptionFromError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::Win32Exception* (*)(::System::Net::SecurityStatusPal)>(&::System::Net::Security::NegotiateStreamPal::CreateExceptionFromError)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xacf3a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"CreateExceptionFromError", {}, {::i2c::type_of<::System::Net::SecurityStatusPal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::NegotiateStreamPal.QueryMaxTokenSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::System::Net::Security::NegotiateStreamPal::QueryMaxTokenSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacf3b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"QueryMaxTokenSize", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::NegotiateStreamPal.AcquireDefaultCredential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::SafeFreeCredentials* (*)(::StringW, bool)>(&::System::Net::Security::NegotiateStreamPal::AcquireDefaultCredential)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xacf3b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"AcquireDefaultCredential", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::NegotiateStreamPal.AcquireCredentialsHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::SafeFreeCredentials* (*)(::StringW, bool, ::System::Net::NetworkCredential*)>(&::System::Net::Security::NegotiateStreamPal::AcquireCredentialsHandle)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xacf3bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"AcquireCredentialsHandle", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Net::NetworkCredential*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::NegotiateStreamPal.CompleteAuthToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::SecurityStatusPal (*)(::by_ref<::System::Net::Security::SafeDeleteContext*>, ::ArrayW<::System::Net::Security::SecurityBuffer*>)>(&::System::Net::Security::NegotiateStreamPal::CompleteAuthToken)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xacf4054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"CompleteAuthToken", {}, {::i2c::type_of<::by_ref<::System::Net::Security::SafeDeleteContext*>>(), ::i2c::type_of<::ArrayW<::System::Net::Security::SecurityBuffer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::NegotiateStreamPal.VerifySignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Net::Security::SafeDeleteContext*, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::Security::NegotiateStreamPal::VerifySignature)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xacf4084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"VerifySignature", {}, {::i2c::type_of<::System::Net::Security::SafeDeleteContext*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::NegotiateStreamPal.MakeSignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Net::Security::SafeDeleteContext*, ::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<::ArrayW<uint8_t>>)>(&::System::Net::Security::NegotiateStreamPal::MakeSignature)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xacf422c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"MakeSignature", {}, {::i2c::type_of<::System::Net::Security::SafeDeleteContext*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW System::Net::Security::NegotiateStreamPal::QueryContextClientSpecifiedSpn(::System::Net::Security::SafeDeleteContext*  securityContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"QueryContextClientSpecifiedSpn", {}, {::i2c::type_of<::System::Net::Security::SafeDeleteContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, securityContext);
}
inline ::StringW System::Net::Security::NegotiateStreamPal::QueryContextAuthenticationPackage(::System::Net::Security::SafeDeleteContext*  securityContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"QueryContextAuthenticationPackage", {}, {::i2c::type_of<::System::Net::Security::SafeDeleteContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, securityContext);
}
inline ::ArrayW<uint8_t> System::Net::Security::NegotiateStreamPal::GssWrap(::Microsoft::Win32::SafeHandles::SafeGssContextHandle*  context, bool  encrypt, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"GssWrap", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, context, encrypt, buffer, offset, count);
}
inline int32_t System::Net::Security::NegotiateStreamPal::GssUnwrap(::Microsoft::Win32::SafeHandles::SafeGssContextHandle*  context, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"GssUnwrap", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, buffer, offset, count);
}
inline bool System::Net::Security::NegotiateStreamPal::GssInitSecurityContext(::by_ref<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>  context, ::Microsoft::Win32::SafeHandles::SafeGssCredHandle*  credential, bool  isNtlm, ::Microsoft::Win32::SafeHandles::SafeGssNameHandle*  targetName, ::GlobalNamespace::NetSecurityNative_Interop_GssFlags  inFlags, ::ArrayW<uint8_t>  buffer, ::by_ref<::ArrayW<uint8_t>>  outputBuffer, ::by_ref<uint32_t>  outFlags, ::by_ref<int32_t>  isNtlmUsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"GssInitSecurityContext", {}, {::i2c::type_of<::by_ref<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeGssCredHandle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeGssNameHandle*>(), ::i2c::type_of<::GlobalNamespace::NetSecurityNative_Interop_GssFlags>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, context, credential, isNtlm, targetName, inFlags, buffer, outputBuffer, outFlags, isNtlmUsed);
}
inline ::System::Net::SecurityStatusPal System::Net::Security::NegotiateStreamPal::EstablishSecurityContext(::System::Net::Security::SafeFreeNegoCredentials*  credential, ::by_ref<::System::Net::Security::SafeDeleteContext*>  context, ::StringW  targetName, ::System::Net::ContextFlagsPal  inFlags, ::System::Net::Security::SecurityBuffer*  inputBuffer, ::System::Net::Security::SecurityBuffer*  outputBuffer, ::by_ref<::System::Net::ContextFlagsPal>  outFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"EstablishSecurityContext", {}, {::i2c::type_of<::System::Net::Security::SafeFreeNegoCredentials*>(), ::i2c::type_of<::by_ref<::System::Net::Security::SafeDeleteContext*>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::ContextFlagsPal>(), ::i2c::type_of<::System::Net::Security::SecurityBuffer*>(), ::i2c::type_of<::System::Net::Security::SecurityBuffer*>(), ::i2c::type_of<::by_ref<::System::Net::ContextFlagsPal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::SecurityStatusPal>(nullptr, ___internal_method, credential, context, targetName, inFlags, inputBuffer, outputBuffer, outFlags);
}
inline ::System::Net::SecurityStatusPal System::Net::Security::NegotiateStreamPal::InitializeSecurityContext(::System::Net::Security::SafeFreeCredentials*  credentialsHandle, ::by_ref<::System::Net::Security::SafeDeleteContext*>  securityContext, ::StringW  spn, ::System::Net::ContextFlagsPal  requestedContextFlags, ::ArrayW<::System::Net::Security::SecurityBuffer*>  inSecurityBufferArray, ::System::Net::Security::SecurityBuffer*  outSecurityBuffer, ::by_ref<::System::Net::ContextFlagsPal>  contextFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"InitializeSecurityContext", {}, {::i2c::type_of<::System::Net::Security::SafeFreeCredentials*>(), ::i2c::type_of<::by_ref<::System::Net::Security::SafeDeleteContext*>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::ContextFlagsPal>(), ::i2c::type_of<::ArrayW<::System::Net::Security::SecurityBuffer*>>(), ::i2c::type_of<::System::Net::Security::SecurityBuffer*>(), ::i2c::type_of<::by_ref<::System::Net::ContextFlagsPal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::SecurityStatusPal>(nullptr, ___internal_method, credentialsHandle, securityContext, spn, requestedContextFlags, inSecurityBufferArray, outSecurityBuffer, contextFlags);
}
inline ::System::Net::SecurityStatusPal System::Net::Security::NegotiateStreamPal::AcceptSecurityContext(::System::Net::Security::SafeFreeCredentials*  credentialsHandle, ::by_ref<::System::Net::Security::SafeDeleteContext*>  securityContext, ::System::Net::ContextFlagsPal  requestedContextFlags, ::ArrayW<::System::Net::Security::SecurityBuffer*>  inSecurityBufferArray, ::System::Net::Security::SecurityBuffer*  outSecurityBuffer, ::by_ref<::System::Net::ContextFlagsPal>  contextFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"AcceptSecurityContext", {}, {::i2c::type_of<::System::Net::Security::SafeFreeCredentials*>(), ::i2c::type_of<::by_ref<::System::Net::Security::SafeDeleteContext*>>(), ::i2c::type_of<::System::Net::ContextFlagsPal>(), ::i2c::type_of<::ArrayW<::System::Net::Security::SecurityBuffer*>>(), ::i2c::type_of<::System::Net::Security::SecurityBuffer*>(), ::i2c::type_of<::by_ref<::System::Net::ContextFlagsPal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::SecurityStatusPal>(nullptr, ___internal_method, credentialsHandle, securityContext, requestedContextFlags, inSecurityBufferArray, outSecurityBuffer, contextFlags);
}
inline ::System::ComponentModel::Win32Exception* System::Net::Security::NegotiateStreamPal::CreateExceptionFromError(::System::Net::SecurityStatusPal  statusCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"CreateExceptionFromError", {}, {::i2c::type_of<::System::Net::SecurityStatusPal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::Win32Exception*>(nullptr, ___internal_method, statusCode);
}
inline int32_t System::Net::Security::NegotiateStreamPal::QueryMaxTokenSize(::StringW  package)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"QueryMaxTokenSize", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, package);
}
inline ::System::Net::Security::SafeFreeCredentials* System::Net::Security::NegotiateStreamPal::AcquireDefaultCredential(::StringW  package, bool  isServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"AcquireDefaultCredential", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Security::SafeFreeCredentials*>(nullptr, ___internal_method, package, isServer);
}
inline ::System::Net::Security::SafeFreeCredentials* System::Net::Security::NegotiateStreamPal::AcquireCredentialsHandle(::StringW  package, bool  isServer, ::System::Net::NetworkCredential*  credential)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"AcquireCredentialsHandle", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Net::NetworkCredential*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Security::SafeFreeCredentials*>(nullptr, ___internal_method, package, isServer, credential);
}
inline ::System::Net::SecurityStatusPal System::Net::Security::NegotiateStreamPal::CompleteAuthToken(::by_ref<::System::Net::Security::SafeDeleteContext*>  securityContext, ::ArrayW<::System::Net::Security::SecurityBuffer*>  inSecurityBufferArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"CompleteAuthToken", {}, {::i2c::type_of<::by_ref<::System::Net::Security::SafeDeleteContext*>>(), ::i2c::type_of<::ArrayW<::System::Net::Security::SecurityBuffer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::SecurityStatusPal>(nullptr, ___internal_method, securityContext, inSecurityBufferArray);
}
inline int32_t System::Net::Security::NegotiateStreamPal::VerifySignature(::System::Net::Security::SafeDeleteContext*  securityContext, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"VerifySignature", {}, {::i2c::type_of<::System::Net::Security::SafeDeleteContext*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, securityContext, buffer, offset, count);
}
inline int32_t System::Net::Security::NegotiateStreamPal::MakeSignature(::System::Net::Security::SafeDeleteContext*  securityContext, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::by_ref<::ArrayW<uint8_t>>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::NegotiateStreamPal*>(),
                        {"MakeSignature", {}, {::i2c::type_of<::System::Net::Security::SafeDeleteContext*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, securityContext, buffer, offset, count, output);
}
// Ctor Parameters []
constexpr ::System::Net::Security::NegotiateStreamPal::NegotiateStreamPal()   {
}
