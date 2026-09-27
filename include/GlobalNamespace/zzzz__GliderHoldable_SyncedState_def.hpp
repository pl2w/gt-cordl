#pragma once
// IWYU pragma private; include "GlobalNamespace/GliderHoldable_SyncedState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBool_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GliderHoldable_SyncedState)
namespace Fusion {
class INetworkStruct;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct GliderHoldable_SyncedState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GliderHoldable_SyncedState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GliderHoldable_SyncedState, "", "GliderHoldable/SyncedState");
// [NetworkStructWeaved(11)]
// Dependencies Fusion.NetworkBool, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GliderHoldable/SyncedState
#pragma pack(push, 0)
struct CORDL_TYPE GliderHoldable_SyncedState {
public:
// Declarations
/// @brief Field audioLevel, offset 0x8, size 0x1 
 __declspec(property(get=__cordl_internal_get_audioLevel, put=__cordl_internal_set_audioLevel)) uint8_t  audioLevel;

/// @brief Field materialIndex, offset 0x4, size 0x1 
 __declspec(property(get=__cordl_internal_get_materialIndex, put=__cordl_internal_set_materialIndex)) uint8_t  materialIndex;

/// @brief Field position, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::UnityEngine::Vector3  position;

/// @brief Field riderId, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_riderId, put=__cordl_internal_set_riderId)) int32_t  riderId;

/// @brief Field rotation, offset 0x1c, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief Field tagged, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagged, put=__cordl_internal_set_tagged)) ::Fusion::NetworkBool  tagged;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Method Init, addr 0x5ab3590, size 0x24, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Vector3  defaultPosition, ::UnityEngine::Quaternion  defaultRotation) ;

constexpr uint8_t const& __cordl_internal_get_audioLevel() const;

constexpr uint8_t& __cordl_internal_get_audioLevel() ;

constexpr uint8_t const& __cordl_internal_get_materialIndex() const;

constexpr uint8_t& __cordl_internal_get_materialIndex() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_position() ;

constexpr int32_t const& __cordl_internal_get_riderId() const;

constexpr int32_t& __cordl_internal_get_riderId() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotation() ;

constexpr ::Fusion::NetworkBool const& __cordl_internal_get_tagged() const;

constexpr ::Fusion::NetworkBool& __cordl_internal_get_tagged() ;

constexpr void __cordl_internal_set_audioLevel(uint8_t  value) ;

constexpr void __cordl_internal_set_materialIndex(uint8_t  value) ;

constexpr void __cordl_internal_set_position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_riderId(int32_t  value) ;

constexpr void __cordl_internal_set_rotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_tagged(::Fusion::NetworkBool  value) ;

/// @brief Method .ctor, addr 0x5abb71c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(int32_t  id) ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr GliderHoldable_SyncedState() ;

// Ctor Parameters [CppParam { name: "riderId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "materialIndex", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "audioLevel", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "tagged", ty: "::Fusion::NetworkBool", modifiers: "", def_value: None, comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr GliderHoldable_SyncedState(int32_t  riderId, uint8_t  materialIndex, uint8_t  audioLevel, ::Fusion::NetworkBool  tagged, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___riderId_padding[0x0];
/// @brief Field riderId, offset: 0x0, size: 0x4, def value: None
 int32_t  ___riderId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___riderId_padding_forAlignment[0x0];
/// @brief Field riderId, offset: 0x0, size: 0x4, def value: None
 int32_t  ___riderId_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___materialIndex_padding[0x4];
/// @brief Field materialIndex, offset: 0x4, size: 0x1, def value: None
 uint8_t  ___materialIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___materialIndex_padding_forAlignment[0x4];
/// @brief Field materialIndex, offset: 0x4, size: 0x1, def value: None
 uint8_t  ___materialIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___audioLevel_padding[0x8];
/// @brief Field audioLevel, offset: 0x8, size: 0x1, def value: None
 uint8_t  ___audioLevel;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___audioLevel_padding_forAlignment[0x8];
/// @brief Field audioLevel, offset: 0x8, size: 0x1, def value: None
 uint8_t  ___audioLevel_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___tagged_padding[0xc];
/// @brief Field tagged, offset: 0xc, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___tagged;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___tagged_padding_forAlignment[0xc];
/// @brief Field tagged, offset: 0xc, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___tagged_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___position_padding[0x10];
/// @brief Field position, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___position;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___position_padding_forAlignment[0x10];
/// @brief Field position, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___position_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1c
 uint8_t  ___rotation_padding[0x1c];
/// @brief Field rotation, offset: 0x1c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotation;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1c for alignment
 uint8_t  ___rotation_padding_forAlignment[0x1c];
/// @brief Field rotation, offset: 0x1c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotation_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3303};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GliderHoldable_SyncedState) == 0x2c, "Size mismatch!");

} // namespace end def GlobalNamespace
