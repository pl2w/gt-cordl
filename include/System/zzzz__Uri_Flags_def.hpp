#pragma once
// IWYU pragma private; include "System/Uri_Flags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Uri_Flags)
// Forward declare root types
namespace GlobalNamespace {
struct Uri_Flags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Uri_Flags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Uri_Flags, "System", "Uri/Flags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Uri/Flags
struct CORDL_TYPE Uri_Flags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint64_t;

/// @brief Nested struct __Uri_Flags_Unwrapped
enum struct __Uri_Flags_Unwrapped : uint64_t {
__E_Zero = static_cast<uint64_t>(0x0u),
__E_SchemeNotCanonical = static_cast<uint64_t>(0x1u),
__E_UserNotCanonical = static_cast<uint64_t>(0x2u),
__E_HostNotCanonical = static_cast<uint64_t>(0x4u),
__E_PortNotCanonical = static_cast<uint64_t>(0x8u),
__E_PathNotCanonical = static_cast<uint64_t>(0x10u),
__E_QueryNotCanonical = static_cast<uint64_t>(0x20u),
__E_FragmentNotCanonical = static_cast<uint64_t>(0x40u),
__E_CannotDisplayCanonical = static_cast<uint64_t>(0x7fu),
__E_E_UserNotCanonical = static_cast<uint64_t>(0x80u),
__E_E_HostNotCanonical = static_cast<uint64_t>(0x100u),
__E_E_PortNotCanonical = static_cast<uint64_t>(0x200u),
__E_E_PathNotCanonical = static_cast<uint64_t>(0x400u),
__E_E_QueryNotCanonical = static_cast<uint64_t>(0x800u),
__E_E_FragmentNotCanonical = static_cast<uint64_t>(0x1000u),
__E_E_CannotDisplayCanonical = static_cast<uint64_t>(0x1f80u),
__E_ShouldBeCompressed = static_cast<uint64_t>(0x2000u),
__E_FirstSlashAbsent = static_cast<uint64_t>(0x4000u),
__E_BackslashInPath = static_cast<uint64_t>(0x8000u),
__E_IndexMask = static_cast<uint64_t>(0xffffu),
__E_HostTypeMask = static_cast<uint64_t>(0x70000u),
__E_HostNotParsed = static_cast<uint64_t>(0x0u),
__E_IPv6HostType = static_cast<uint64_t>(0x10000u),
__E_IPv4HostType = static_cast<uint64_t>(0x20000u),
__E_DnsHostType = static_cast<uint64_t>(0x30000u),
__E_UncHostType = static_cast<uint64_t>(0x40000u),
__E_BasicHostType = static_cast<uint64_t>(0x50000u),
__E_UnusedHostType = static_cast<uint64_t>(0x60000u),
__E_UnknownHostType = static_cast<uint64_t>(0x70000u),
__E_UserEscaped = static_cast<uint64_t>(0x80000u),
__E_AuthorityFound = static_cast<uint64_t>(0x100000u),
__E_HasUserInfo = static_cast<uint64_t>(0x200000u),
__E_LoopbackHost = static_cast<uint64_t>(0x400000u),
__E_NotDefaultPort = static_cast<uint64_t>(0x800000u),
__E_UserDrivenParsing = static_cast<uint64_t>(0x1000000u),
__E_CanonicalDnsHost = static_cast<uint64_t>(0x2000000u),
__E_ErrorOrParsingRecursion = static_cast<uint64_t>(0x4000000u),
__E_DosPath = static_cast<uint64_t>(0x8000000u),
__E_UncPath = static_cast<uint64_t>(0x10000000u),
__E_ImplicitFile = static_cast<uint64_t>(0x20000000u),
__E_MinimalUriInfoSet = static_cast<uint64_t>(0x40000000u),
__E_AllUriInfoSet = static_cast<uint64_t>(0x80000000u),
__E_IdnHost = static_cast<uint64_t>(0x100000000u),
__E_HasUnicode = static_cast<uint64_t>(0x200000000u),
__E_HostUnicodeNormalized = static_cast<uint64_t>(0x400000000u),
__E_RestUnicodeNormalized = static_cast<uint64_t>(0x800000000u),
__E_UnicodeHost = static_cast<uint64_t>(0x1000000000u),
__E_IntranetUri = static_cast<uint64_t>(0x2000000000u),
__E_UseOrigUncdStrOffset = static_cast<uint64_t>(0x4000000000u),
__E_UserIriCanonical = static_cast<uint64_t>(0x8000000000u),
__E_PathIriCanonical = static_cast<uint64_t>(0x10000000000u),
__E_QueryIriCanonical = static_cast<uint64_t>(0x20000000000u),
__E_FragmentIriCanonical = static_cast<uint64_t>(0x40000000000u),
__E_IriCanonical = static_cast<uint64_t>(0x78000000000u),
__E_CompressedSlashes = static_cast<uint64_t>(0x100000000000u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Uri_Flags_Unwrapped () const noexcept {
return static_cast<__Uri_Flags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint64_t () const noexcept {
return static_cast<uint64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Uri_Flags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr Uri_Flags(uint64_t  value__) noexcept;

/// @brief Field AllUriInfoSet value: U64(2147483648)
static ::GlobalNamespace::Uri_Flags const AllUriInfoSet;

/// @brief Field AuthorityFound value: U64(1048576)
static ::GlobalNamespace::Uri_Flags const AuthorityFound;

/// @brief Field BackslashInPath value: U64(32768)
static ::GlobalNamespace::Uri_Flags const BackslashInPath;

/// @brief Field BasicHostType value: U64(327680)
static ::GlobalNamespace::Uri_Flags const BasicHostType;

/// @brief Field CannotDisplayCanonical value: U64(127)
static ::GlobalNamespace::Uri_Flags const CannotDisplayCanonical;

/// @brief Field CanonicalDnsHost value: U64(33554432)
static ::GlobalNamespace::Uri_Flags const CanonicalDnsHost;

/// @brief Field CompressedSlashes value: U64(17592186044416)
static ::GlobalNamespace::Uri_Flags const CompressedSlashes;

/// @brief Field DnsHostType value: U64(196608)
static ::GlobalNamespace::Uri_Flags const DnsHostType;

/// @brief Field DosPath value: U64(134217728)
static ::GlobalNamespace::Uri_Flags const DosPath;

/// @brief Field E_CannotDisplayCanonical value: U64(8064)
static ::GlobalNamespace::Uri_Flags const E_CannotDisplayCanonical;

/// @brief Field E_FragmentNotCanonical value: U64(4096)
static ::GlobalNamespace::Uri_Flags const E_FragmentNotCanonical;

/// @brief Field E_HostNotCanonical value: U64(256)
static ::GlobalNamespace::Uri_Flags const E_HostNotCanonical;

/// @brief Field E_PathNotCanonical value: U64(1024)
static ::GlobalNamespace::Uri_Flags const E_PathNotCanonical;

/// @brief Field E_PortNotCanonical value: U64(512)
static ::GlobalNamespace::Uri_Flags const E_PortNotCanonical;

/// @brief Field E_QueryNotCanonical value: U64(2048)
static ::GlobalNamespace::Uri_Flags const E_QueryNotCanonical;

/// @brief Field E_UserNotCanonical value: U64(128)
static ::GlobalNamespace::Uri_Flags const E_UserNotCanonical;

/// @brief Field ErrorOrParsingRecursion value: U64(67108864)
static ::GlobalNamespace::Uri_Flags const ErrorOrParsingRecursion;

/// @brief Field FirstSlashAbsent value: U64(16384)
static ::GlobalNamespace::Uri_Flags const FirstSlashAbsent;

/// @brief Field FragmentIriCanonical value: U64(4398046511104)
static ::GlobalNamespace::Uri_Flags const FragmentIriCanonical;

/// @brief Field FragmentNotCanonical value: U64(64)
static ::GlobalNamespace::Uri_Flags const FragmentNotCanonical;

/// @brief Field HasUnicode value: U64(8589934592)
static ::GlobalNamespace::Uri_Flags const HasUnicode;

/// @brief Field HasUserInfo value: U64(2097152)
static ::GlobalNamespace::Uri_Flags const HasUserInfo;

/// @brief Field HostNotCanonical value: U64(4)
static ::GlobalNamespace::Uri_Flags const HostNotCanonical;

/// @brief Field HostNotParsed value: U64(0)
static ::GlobalNamespace::Uri_Flags const HostNotParsed;

/// @brief Field HostTypeMask value: U64(458752)
static ::GlobalNamespace::Uri_Flags const HostTypeMask;

/// @brief Field HostUnicodeNormalized value: U64(17179869184)
static ::GlobalNamespace::Uri_Flags const HostUnicodeNormalized;

/// @brief Field IPv4HostType value: U64(131072)
static ::GlobalNamespace::Uri_Flags const IPv4HostType;

/// @brief Field IPv6HostType value: U64(65536)
static ::GlobalNamespace::Uri_Flags const IPv6HostType;

/// @brief Field IdnHost value: U64(4294967296)
static ::GlobalNamespace::Uri_Flags const IdnHost;

/// @brief Field ImplicitFile value: U64(536870912)
static ::GlobalNamespace::Uri_Flags const ImplicitFile;

/// @brief Field IndexMask value: U64(65535)
static ::GlobalNamespace::Uri_Flags const IndexMask;

/// @brief Field IntranetUri value: U64(137438953472)
static ::GlobalNamespace::Uri_Flags const IntranetUri;

/// @brief Field IriCanonical value: U64(8246337208320)
static ::GlobalNamespace::Uri_Flags const IriCanonical;

/// @brief Field LoopbackHost value: U64(4194304)
static ::GlobalNamespace::Uri_Flags const LoopbackHost;

/// @brief Field MinimalUriInfoSet value: U64(1073741824)
static ::GlobalNamespace::Uri_Flags const MinimalUriInfoSet;

/// @brief Field NotDefaultPort value: U64(8388608)
static ::GlobalNamespace::Uri_Flags const NotDefaultPort;

/// @brief Field PathIriCanonical value: U64(1099511627776)
static ::GlobalNamespace::Uri_Flags const PathIriCanonical;

/// @brief Field PathNotCanonical value: U64(16)
static ::GlobalNamespace::Uri_Flags const PathNotCanonical;

/// @brief Field PortNotCanonical value: U64(8)
static ::GlobalNamespace::Uri_Flags const PortNotCanonical;

/// @brief Field QueryIriCanonical value: U64(2199023255552)
static ::GlobalNamespace::Uri_Flags const QueryIriCanonical;

/// @brief Field QueryNotCanonical value: U64(32)
static ::GlobalNamespace::Uri_Flags const QueryNotCanonical;

/// @brief Field RestUnicodeNormalized value: U64(34359738368)
static ::GlobalNamespace::Uri_Flags const RestUnicodeNormalized;

/// @brief Field SchemeNotCanonical value: U64(1)
static ::GlobalNamespace::Uri_Flags const SchemeNotCanonical;

/// @brief Field ShouldBeCompressed value: U64(8192)
static ::GlobalNamespace::Uri_Flags const ShouldBeCompressed;

/// @brief Field UncHostType value: U64(262144)
static ::GlobalNamespace::Uri_Flags const UncHostType;

/// @brief Field UncPath value: U64(268435456)
static ::GlobalNamespace::Uri_Flags const UncPath;

/// @brief Field UnicodeHost value: U64(68719476736)
static ::GlobalNamespace::Uri_Flags const UnicodeHost;

/// @brief Field UnknownHostType value: U64(458752)
static ::GlobalNamespace::Uri_Flags const UnknownHostType;

/// @brief Field UnusedHostType value: U64(393216)
static ::GlobalNamespace::Uri_Flags const UnusedHostType;

/// @brief Field UseOrigUncdStrOffset value: U64(274877906944)
static ::GlobalNamespace::Uri_Flags const UseOrigUncdStrOffset;

/// @brief Field UserDrivenParsing value: U64(16777216)
static ::GlobalNamespace::Uri_Flags const UserDrivenParsing;

/// @brief Field UserEscaped value: U64(524288)
static ::GlobalNamespace::Uri_Flags const UserEscaped;

/// @brief Field UserIriCanonical value: U64(549755813888)
static ::GlobalNamespace::Uri_Flags const UserIriCanonical;

/// @brief Field UserNotCanonical value: U64(2)
static ::GlobalNamespace::Uri_Flags const UserNotCanonical;

/// @brief Field Zero value: U64(0)
static ::GlobalNamespace::Uri_Flags const Zero;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9926};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 uint64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Uri_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Uri_Flags) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
