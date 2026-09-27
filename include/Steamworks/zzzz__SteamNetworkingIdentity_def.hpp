#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingIdentity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__ESteamNetworkingIdentityType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetworkingIdentity)
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace Steamworks {
struct SteamNetworkingIdentity;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamNetworkingIdentity);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetworkingIdentity, "Steamworks", "SteamNetworkingIdentity");
// Dependencies Steamworks.ESteamNetworkingIdentityType
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamNetworkingIdentity
#pragma pack(push, 1)
struct CORDL_TYPE SteamNetworkingIdentity {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>"
constexpr operator  ::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>*() ;

/// @brief Method Equals, addr 0x5f33aec, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::SteamNetworkingIdentity  x) ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>"
constexpr ::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>* i___System__IEquatable_1___Steamworks__SteamNetworkingIdentity_() ;

// Ctor Parameters []
// @brief default ctor
constexpr SteamNetworkingIdentity() ;

// Ctor Parameters [CppParam { name: "m_eType", ty: "::Steamworks::ESteamNetworkingIdentityType", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_cbSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved0", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved1", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved2", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved3", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved4", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved5", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved6", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved7", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved8", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved9", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved10", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved11", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved12", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved13", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved14", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved15", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved16", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved17", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved18", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved19", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved20", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved21", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved22", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved23", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved24", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved25", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved26", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved27", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved28", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved29", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved30", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_reserved31", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr SteamNetworkingIdentity(::Steamworks::ESteamNetworkingIdentityType  m_eType, int32_t  m_cbSize, uint32_t  m_reserved0, uint32_t  m_reserved1, uint32_t  m_reserved2, uint32_t  m_reserved3, uint32_t  m_reserved4, uint32_t  m_reserved5, uint32_t  m_reserved6, uint32_t  m_reserved7, uint32_t  m_reserved8, uint32_t  m_reserved9, uint32_t  m_reserved10, uint32_t  m_reserved11, uint32_t  m_reserved12, uint32_t  m_reserved13, uint32_t  m_reserved14, uint32_t  m_reserved15, uint32_t  m_reserved16, uint32_t  m_reserved17, uint32_t  m_reserved18, uint32_t  m_reserved19, uint32_t  m_reserved20, uint32_t  m_reserved21, uint32_t  m_reserved22, uint32_t  m_reserved23, uint32_t  m_reserved24, uint32_t  m_reserved25, uint32_t  m_reserved26, uint32_t  m_reserved27, uint32_t  m_reserved28, uint32_t  m_reserved29, uint32_t  m_reserved30, uint32_t  m_reserved31) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32152};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

/// @brief Field m_eType, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::ESteamNetworkingIdentityType  m_eType;

/// @brief Field m_cbSize, offset: 0x4, size: 0x4, def value: None
 int32_t  m_cbSize;

/// @brief Field m_reserved0, offset: 0x8, size: 0x4, def value: None
 uint32_t  m_reserved0;

/// @brief Field m_reserved1, offset: 0xc, size: 0x4, def value: None
 uint32_t  m_reserved1;

/// @brief Field m_reserved2, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_reserved2;

/// @brief Field m_reserved3, offset: 0x14, size: 0x4, def value: None
 uint32_t  m_reserved3;

/// @brief Field m_reserved4, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_reserved4;

/// @brief Field m_reserved5, offset: 0x1c, size: 0x4, def value: None
 uint32_t  m_reserved5;

/// @brief Field m_reserved6, offset: 0x20, size: 0x4, def value: None
 uint32_t  m_reserved6;

/// @brief Field m_reserved7, offset: 0x24, size: 0x4, def value: None
 uint32_t  m_reserved7;

/// @brief Field m_reserved8, offset: 0x28, size: 0x4, def value: None
 uint32_t  m_reserved8;

/// @brief Field m_reserved9, offset: 0x2c, size: 0x4, def value: None
 uint32_t  m_reserved9;

/// @brief Field m_reserved10, offset: 0x30, size: 0x4, def value: None
 uint32_t  m_reserved10;

/// @brief Field m_reserved11, offset: 0x34, size: 0x4, def value: None
 uint32_t  m_reserved11;

/// @brief Field m_reserved12, offset: 0x38, size: 0x4, def value: None
 uint32_t  m_reserved12;

/// @brief Field m_reserved13, offset: 0x3c, size: 0x4, def value: None
 uint32_t  m_reserved13;

/// @brief Field m_reserved14, offset: 0x40, size: 0x4, def value: None
 uint32_t  m_reserved14;

/// @brief Field m_reserved15, offset: 0x44, size: 0x4, def value: None
 uint32_t  m_reserved15;

/// @brief Field m_reserved16, offset: 0x48, size: 0x4, def value: None
 uint32_t  m_reserved16;

/// @brief Field m_reserved17, offset: 0x4c, size: 0x4, def value: None
 uint32_t  m_reserved17;

/// @brief Field m_reserved18, offset: 0x50, size: 0x4, def value: None
 uint32_t  m_reserved18;

/// @brief Field m_reserved19, offset: 0x54, size: 0x4, def value: None
 uint32_t  m_reserved19;

/// @brief Field m_reserved20, offset: 0x58, size: 0x4, def value: None
 uint32_t  m_reserved20;

/// @brief Field m_reserved21, offset: 0x5c, size: 0x4, def value: None
 uint32_t  m_reserved21;

/// @brief Field m_reserved22, offset: 0x60, size: 0x4, def value: None
 uint32_t  m_reserved22;

/// @brief Field m_reserved23, offset: 0x64, size: 0x4, def value: None
 uint32_t  m_reserved23;

/// @brief Field m_reserved24, offset: 0x68, size: 0x4, def value: None
 uint32_t  m_reserved24;

/// @brief Field m_reserved25, offset: 0x6c, size: 0x4, def value: None
 uint32_t  m_reserved25;

/// @brief Field m_reserved26, offset: 0x70, size: 0x4, def value: None
 uint32_t  m_reserved26;

/// @brief Field m_reserved27, offset: 0x74, size: 0x4, def value: None
 uint32_t  m_reserved27;

/// @brief Field m_reserved28, offset: 0x78, size: 0x4, def value: None
 uint32_t  m_reserved28;

/// @brief Field m_reserved29, offset: 0x7c, size: 0x4, def value: None
 uint32_t  m_reserved29;

/// @brief Field m_reserved30, offset: 0x80, size: 0x4, def value: None
 uint32_t  m_reserved30;

/// @brief Field m_reserved31, offset: 0x84, size: 0x4, def value: None
 uint32_t  m_reserved31;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_eType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_cbSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved0) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved3) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved4) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved5) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved6) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved7) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved8) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved9) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved10) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved11) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved12) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved13) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved14) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved15) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved16) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved17) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved18) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved19) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved20) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved21) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved22) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved23) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved24) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved25) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved26) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved27) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved28) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved29) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved30) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved31) == 0x84, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamNetworkingIdentity) == 0x88, "Size mismatch!");

} // namespace end def Steamworks
