#pragma once
// IWYU pragma private; include "Fusion/NetworkTRSPData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBehaviourId_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__Vector3Compressed_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkTRSPData)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
struct NetworkBehaviourId;
}
// Forward declare root types
namespace Fusion {
struct NetworkTRSPData;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkTRSPData);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkTRSPData, "Fusion", "NetworkTRSPData");
// [NetworkStructWeaved(14)]
// Dependencies Fusion.NetworkBehaviourId, Fusion.NetworkId, Fusion.Vector3Compressed, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkTRSPData
struct CORDL_TYPE NetworkTRSPData {
public:
// Declarations
/// @brief Field AreaOfInterestOverride, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_AreaOfInterestOverride, put=__cordl_internal_set_AreaOfInterestOverride)) ::Fusion::NetworkId  AreaOfInterestOverride;

/// @brief Field Parent, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Parent, put=__cordl_internal_set_Parent)) ::Fusion::NetworkBehaviourId  Parent;

/// @brief Field Position, offset 0x8, size 0xc 
 __declspec(property(get=__cordl_internal_get_Position, put=__cordl_internal_set_Position)) ::UnityEngine::Vector3  Position;

/// @brief Field Rotation, offset 0x14, size 0x10 
 __declspec(property(get=__cordl_internal_get_Rotation, put=__cordl_internal_set_Rotation)) ::UnityEngine::Quaternion  Rotation;

/// @brief Field Scale, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_Scale, put=__cordl_internal_set_Scale)) ::Fusion::Vector3Compressed  Scale;

/// @brief Field TeleportKey, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_TeleportKey, put=__cordl_internal_set_TeleportKey)) int32_t  TeleportKey;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr ::Fusion::NetworkId const& __cordl_internal_get_AreaOfInterestOverride() const;

constexpr ::Fusion::NetworkId& __cordl_internal_get_AreaOfInterestOverride() ;

constexpr ::Fusion::NetworkBehaviourId const& __cordl_internal_get_Parent() const;

constexpr ::Fusion::NetworkBehaviourId& __cordl_internal_get_Parent() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Position() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_Rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_Rotation() ;

constexpr ::Fusion::Vector3Compressed const& __cordl_internal_get_Scale() const;

constexpr ::Fusion::Vector3Compressed& __cordl_internal_get_Scale() ;

constexpr int32_t const& __cordl_internal_get_TeleportKey() const;

constexpr int32_t& __cordl_internal_get_TeleportKey() ;

constexpr void __cordl_internal_set_AreaOfInterestOverride(::Fusion::NetworkId  value) ;

constexpr void __cordl_internal_set_Parent(::Fusion::NetworkBehaviourId  value) ;

constexpr void __cordl_internal_set_Position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Rotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_Scale(::Fusion::Vector3Compressed  value) ;

constexpr void __cordl_internal_set_TeleportKey(int32_t  value) ;

/// @brief Method get_NonNetworkedParent, addr 0x5f8b654, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::NetworkBehaviourId get_NonNetworkedParent() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkTRSPData() ;

// Ctor Parameters [CppParam { name: "Parent", ty: "::Fusion::NetworkBehaviourId", modifiers: "", def_value: None, comment: None }, CppParam { name: "Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "Scale", ty: "::Fusion::Vector3Compressed", modifiers: "", def_value: None, comment: None }, CppParam { name: "TeleportKey", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AreaOfInterestOverride", ty: "::Fusion::NetworkId", modifiers: "", def_value: None, comment: None }]
constexpr NetworkTRSPData(::Fusion::NetworkBehaviourId  Parent, ::UnityEngine::Vector3  Position, ::UnityEngine::Quaternion  Rotation, ::Fusion::Vector3Compressed  Scale, int32_t  TeleportKey, ::Fusion::NetworkId  AreaOfInterestOverride) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Parent_padding[0x0];
/// @brief Field Parent, offset: 0x0, size: 0x8, def value: None
 ::Fusion::NetworkBehaviourId  ___Parent;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Parent_padding_forAlignment[0x0];
/// @brief Field Parent, offset: 0x0, size: 0x8, def value: None
 ::Fusion::NetworkBehaviourId  ___Parent_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___Position_padding[0x8];
/// @brief Field Position, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Position;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___Position_padding_forAlignment[0x8];
/// @brief Field Position, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Position_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x14
 uint8_t  ___Rotation_padding[0x14];
/// @brief Field Rotation, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___Rotation;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x14 for alignment
 uint8_t  ___Rotation_padding_forAlignment[0x14];
/// @brief Field Rotation, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___Rotation_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x24
 uint8_t  ___Scale_padding[0x24];
/// @brief Field Scale, offset: 0x24, size: 0xc, def value: None
 ::Fusion::Vector3Compressed  ___Scale;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x24 for alignment
 uint8_t  ___Scale_padding_forAlignment[0x24];
/// @brief Field Scale, offset: 0x24, size: 0xc, def value: None
 ::Fusion::Vector3Compressed  ___Scale_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x30
 uint8_t  ___TeleportKey_padding[0x30];
/// @brief Field TeleportKey, offset: 0x30, size: 0x4, def value: None
 int32_t  ___TeleportKey;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x30 for alignment
 uint8_t  ___TeleportKey_padding_forAlignment[0x30];
/// @brief Field TeleportKey, offset: 0x30, size: 0x4, def value: None
 int32_t  ___TeleportKey_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x34
 uint8_t  ___AreaOfInterestOverride_padding[0x34];
/// @brief Field AreaOfInterestOverride, offset: 0x34, size: 0x4, def value: None
 ::Fusion::NetworkId  ___AreaOfInterestOverride;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x34 for alignment
 uint8_t  ___AreaOfInterestOverride_padding_forAlignment[0x34];
/// @brief Field AreaOfInterestOverride, offset: 0x34, size: 0x4, def value: None
 ::Fusion::NetworkId  ___AreaOfInterestOverride_forAlignment;
};
};
public:

/// @brief Field POSITION_OFFSET offset 0xffffffff size 0x4
static constexpr int32_t  POSITION_OFFSET{static_cast<int32_t>(0x2)};

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x38)};

/// @brief Field WORDS offset 0xffffffff size 0x4
static constexpr int32_t  WORDS{static_cast<int32_t>(0xe)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18936};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkTRSPData) == 0x38, "Size mismatch!");

} // namespace end def Fusion
