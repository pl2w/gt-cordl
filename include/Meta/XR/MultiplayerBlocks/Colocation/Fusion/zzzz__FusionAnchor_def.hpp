#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/FusionAnchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBool_def.hpp"
#include "Fusion/zzzz__NetworkString_1_def.hpp"
#include "Fusion/zzzz___64_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionAnchor)
namespace Fusion {
class INetworkStruct;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct Anchor;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation::Fusion {
struct FusionAnchor;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor, "Meta.XR.MultiplayerBlocks.Colocation.Fusion", "FusionAnchor");
// [NetworkStructWeaved(70)]
// Dependencies Fusion.NetworkBool, Fusion.NetworkString`1<TSize>, Fusion._64
namespace Meta::XR::MultiplayerBlocks::Colocation::Fusion {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionAnchor
#pragma pack(push, 0)
struct CORDL_TYPE FusionAnchor {
public:
// Declarations
/// @brief Field automaticAnchorUuid, offset 0x14, size 0xc 
 __declspec(property(get=__cordl_internal_get_automaticAnchorUuid, put=__cordl_internal_set_automaticAnchorUuid)) ::Fusion::NetworkString_1<::Fusion::_64>  automaticAnchorUuid;

/// @brief Field colocationGroupId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_colocationGroupId, put=__cordl_internal_set_colocationGroupId)) uint32_t  colocationGroupId;

/// @brief Field isAlignmentAnchor, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_isAlignmentAnchor, put=__cordl_internal_set_isAlignmentAnchor)) ::Fusion::NetworkBool  isAlignmentAnchor;

/// @brief Field isAutomaticAnchor, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_isAutomaticAnchor, put=__cordl_internal_set_isAutomaticAnchor)) ::Fusion::NetworkBool  isAutomaticAnchor;

/// @brief Field ownerOculusId, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownerOculusId, put=__cordl_internal_set_ownerOculusId)) uint64_t  ownerOculusId;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>"
constexpr operator  ::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>*() ;

/// @brief Method Equals, addr 0x9f61ae0, size 0x70, virtual true, abstract: false, final true
inline bool Equals(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor  other) ;

/// @brief Method GetAnchor, addr 0x9f619fc, size 0xe4, virtual false, abstract: false, final false
inline ::Meta::XR::MultiplayerBlocks::Colocation::Anchor GetAnchor() ;

constexpr ::Fusion::NetworkString_1<::Fusion::_64> const& __cordl_internal_get_automaticAnchorUuid() const;

constexpr ::Fusion::NetworkString_1<::Fusion::_64>& __cordl_internal_get_automaticAnchorUuid() ;

constexpr uint32_t const& __cordl_internal_get_colocationGroupId() const;

constexpr uint32_t& __cordl_internal_get_colocationGroupId() ;

constexpr ::Fusion::NetworkBool const& __cordl_internal_get_isAlignmentAnchor() const;

constexpr ::Fusion::NetworkBool& __cordl_internal_get_isAlignmentAnchor() ;

constexpr ::Fusion::NetworkBool const& __cordl_internal_get_isAutomaticAnchor() const;

constexpr ::Fusion::NetworkBool& __cordl_internal_get_isAutomaticAnchor() ;

constexpr uint64_t const& __cordl_internal_get_ownerOculusId() const;

constexpr uint64_t& __cordl_internal_get_ownerOculusId() ;

constexpr void __cordl_internal_set_automaticAnchorUuid(::Fusion::NetworkString_1<::Fusion::_64>  value) ;

constexpr void __cordl_internal_set_colocationGroupId(uint32_t  value) ;

constexpr void __cordl_internal_set_isAlignmentAnchor(::Fusion::NetworkBool  value) ;

constexpr void __cordl_internal_set_isAutomaticAnchor(::Fusion::NetworkBool  value) ;

constexpr void __cordl_internal_set_ownerOculusId(uint64_t  value) ;

/// @brief Method .ctor, addr 0x9f61920, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(::Meta::XR::MultiplayerBlocks::Colocation::Anchor  anchor) ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>"
constexpr ::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>* i___System__IEquatable_1___Meta__XR__MultiplayerBlocks__Colocation__Fusion__FusionAnchor_() ;

// Ctor Parameters []
// @brief default ctor
constexpr FusionAnchor() ;

// Ctor Parameters [CppParam { name: "isAutomaticAnchor", ty: "::Fusion::NetworkBool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isAlignmentAnchor", ty: "::Fusion::NetworkBool", modifiers: "", def_value: None, comment: None }, CppParam { name: "ownerOculusId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "colocationGroupId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "automaticAnchorUuid", ty: "::Fusion::NetworkString_1<::Fusion::_64>", modifiers: "", def_value: None, comment: None }]
constexpr FusionAnchor(::Fusion::NetworkBool  isAutomaticAnchor, ::Fusion::NetworkBool  isAlignmentAnchor, uint64_t  ownerOculusId, uint32_t  colocationGroupId, ::Fusion::NetworkString_1<::Fusion::_64>  automaticAnchorUuid) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___isAutomaticAnchor_padding[0x0];
/// @brief Field isAutomaticAnchor, offset: 0x0, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___isAutomaticAnchor;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___isAutomaticAnchor_padding_forAlignment[0x0];
/// @brief Field isAutomaticAnchor, offset: 0x0, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___isAutomaticAnchor_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___isAlignmentAnchor_padding[0x4];
/// @brief Field isAlignmentAnchor, offset: 0x4, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___isAlignmentAnchor;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___isAlignmentAnchor_padding_forAlignment[0x4];
/// @brief Field isAlignmentAnchor, offset: 0x4, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___isAlignmentAnchor_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___ownerOculusId_padding[0x8];
/// @brief Field ownerOculusId, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___ownerOculusId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___ownerOculusId_padding_forAlignment[0x8];
/// @brief Field ownerOculusId, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___ownerOculusId_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___colocationGroupId_padding[0x10];
/// @brief Field colocationGroupId, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___colocationGroupId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___colocationGroupId_padding_forAlignment[0x10];
/// @brief Field colocationGroupId, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___colocationGroupId_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x14
 uint8_t  ___automaticAnchorUuid_padding[0x14];
/// @brief Field automaticAnchorUuid, offset: 0x14, size: 0xc, def value: None
 ::Fusion::NetworkString_1<::Fusion::_64>  ___automaticAnchorUuid;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x14 for alignment
 uint8_t  ___automaticAnchorUuid_padding_forAlignment[0x14];
/// @brief Field automaticAnchorUuid, offset: 0x14, size: 0xc, def value: None
 ::Fusion::NetworkString_1<::Fusion::_64>  ___automaticAnchorUuid_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31186};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x118};

/// @brief Size padding 0x118 - 0x20 = 0xf8, packed as 0xf8
 uint8_t  _cordl_size_padding[0xf8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor) == 0x118, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Colocation::Fusion
