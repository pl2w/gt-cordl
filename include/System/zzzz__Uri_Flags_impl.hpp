#pragma once
// IWYU pragma private; include "System/Uri_Flags.hpp"
#include "System/zzzz__Uri_Flags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Uri_Flags::Uri_Flags(uint64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Uri_Flags::Uri_Flags()   {
}
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::Zero{static_cast<uint64_t>(0x0u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::SchemeNotCanonical{static_cast<uint64_t>(0x1u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::UserNotCanonical{static_cast<uint64_t>(0x2u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::HostNotCanonical{static_cast<uint64_t>(0x4u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::PortNotCanonical{static_cast<uint64_t>(0x8u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::PathNotCanonical{static_cast<uint64_t>(0x10u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::QueryNotCanonical{static_cast<uint64_t>(0x20u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::FragmentNotCanonical{static_cast<uint64_t>(0x40u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::CannotDisplayCanonical{static_cast<uint64_t>(0x7fu)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::E_UserNotCanonical{static_cast<uint64_t>(0x80u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::E_HostNotCanonical{static_cast<uint64_t>(0x100u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::E_PortNotCanonical{static_cast<uint64_t>(0x200u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::E_PathNotCanonical{static_cast<uint64_t>(0x400u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::E_QueryNotCanonical{static_cast<uint64_t>(0x800u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::E_FragmentNotCanonical{static_cast<uint64_t>(0x1000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::E_CannotDisplayCanonical{static_cast<uint64_t>(0x1f80u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::ShouldBeCompressed{static_cast<uint64_t>(0x2000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::FirstSlashAbsent{static_cast<uint64_t>(0x4000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::BackslashInPath{static_cast<uint64_t>(0x8000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::IndexMask{static_cast<uint64_t>(0xffffu)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::HostTypeMask{static_cast<uint64_t>(0x70000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::HostNotParsed{static_cast<uint64_t>(0x0u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::IPv6HostType{static_cast<uint64_t>(0x10000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::IPv4HostType{static_cast<uint64_t>(0x20000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::DnsHostType{static_cast<uint64_t>(0x30000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::UncHostType{static_cast<uint64_t>(0x40000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::BasicHostType{static_cast<uint64_t>(0x50000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::UnusedHostType{static_cast<uint64_t>(0x60000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::UnknownHostType{static_cast<uint64_t>(0x70000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::UserEscaped{static_cast<uint64_t>(0x80000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::AuthorityFound{static_cast<uint64_t>(0x100000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::HasUserInfo{static_cast<uint64_t>(0x200000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::LoopbackHost{static_cast<uint64_t>(0x400000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::NotDefaultPort{static_cast<uint64_t>(0x800000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::UserDrivenParsing{static_cast<uint64_t>(0x1000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::CanonicalDnsHost{static_cast<uint64_t>(0x2000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::ErrorOrParsingRecursion{static_cast<uint64_t>(0x4000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::DosPath{static_cast<uint64_t>(0x8000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::UncPath{static_cast<uint64_t>(0x10000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::ImplicitFile{static_cast<uint64_t>(0x20000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::MinimalUriInfoSet{static_cast<uint64_t>(0x40000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::AllUriInfoSet{static_cast<uint64_t>(0x80000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::IdnHost{static_cast<uint64_t>(0x100000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::HasUnicode{static_cast<uint64_t>(0x200000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::HostUnicodeNormalized{static_cast<uint64_t>(0x400000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::RestUnicodeNormalized{static_cast<uint64_t>(0x800000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::UnicodeHost{static_cast<uint64_t>(0x1000000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::IntranetUri{static_cast<uint64_t>(0x2000000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::UseOrigUncdStrOffset{static_cast<uint64_t>(0x4000000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::UserIriCanonical{static_cast<uint64_t>(0x8000000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::PathIriCanonical{static_cast<uint64_t>(0x10000000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::QueryIriCanonical{static_cast<uint64_t>(0x20000000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::FragmentIriCanonical{static_cast<uint64_t>(0x40000000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::IriCanonical{static_cast<uint64_t>(0x78000000000u)};
constexpr ::GlobalNamespace::Uri_Flags  GlobalNamespace::Uri_Flags::CompressedSlashes{static_cast<uint64_t>(0x100000000000u)};
