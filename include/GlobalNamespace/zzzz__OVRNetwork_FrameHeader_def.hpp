#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRNetwork_FrameHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRNetwork_FrameHeader)
// Forward declare root types
namespace GlobalNamespace {
struct OVRNetwork_FrameHeader;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRNetwork_FrameHeader);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRNetwork_FrameHeader, "", "OVRNetwork/FrameHeader");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRNetwork/FrameHeader
#pragma pack(push, 1)
struct CORDL_TYPE OVRNetwork_FrameHeader {
public:
// Declarations
/// @brief Method FromBytes, addr 0xa66b38c, size 0x130, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRNetwork_FrameHeader FromBytes(::ArrayW<uint8_t>  arr) ;

/// @brief Method ToBytes, addr 0xa66b26c, size 0x120, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToBytes() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRNetwork_FrameHeader() ;

// Ctor Parameters [CppParam { name: "protocolIdentifier", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "payloadType", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "payloadLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRNetwork_FrameHeader(uint32_t  protocolIdentifier, int32_t  payloadType, int32_t  payloadLength) noexcept;

/// @brief Field StructSize offset 0xffffffff size 0x4
static constexpr int32_t  StructSize{static_cast<int32_t>(0xc)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12676};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field protocolIdentifier, offset: 0x0, size: 0x4, def value: None
 uint32_t  protocolIdentifier;

/// @brief Field payloadType, offset: 0x4, size: 0x4, def value: None
 int32_t  payloadType;

/// @brief Field payloadLength, offset: 0x8, size: 0x4, def value: None
 int32_t  payloadLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRNetwork_FrameHeader, protocolIdentifier) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRNetwork_FrameHeader, payloadType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRNetwork_FrameHeader, payloadLength) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRNetwork_FrameHeader) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
