#pragma once
// IWYU pragma private; include "GlobalNamespace/HalloweenGhostChaser_GhostData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@1_def.hpp"
#include "Fusion/zzzz__NetworkBool_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HalloweenGhostChaser_GhostData)
namespace Fusion {
class INetworkStruct;
}
// Forward declare root types
namespace GlobalNamespace {
struct HalloweenGhostChaser_GhostData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HalloweenGhostChaser_GhostData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HalloweenGhostChaser_GhostData, "", "HalloweenGhostChaser/GhostData");
// [NetworkStructWeaved(5)]
// Dependencies Fusion.CodeGen.FixedStorage@1, Fusion.NetworkBool
namespace GlobalNamespace {
// Is value type: true
// CS Name: HalloweenGhostChaser/GhostData
#pragma pack(push, 0)
struct CORDL_TYPE HalloweenGhostChaser_GhostData {
public:
// Declarations
/// [Networked]
/// @brief [NetworkedWeaved(3, 1)]
 __declspec(property(get=get_CurrentSpeed, put=set_CurrentSpeed)) float_t  CurrentSpeed;

/// @brief Field CurrentState, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentState, put=__cordl_internal_set_CurrentState)) int32_t  CurrentState;

/// @brief Field IsSummoned, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_IsSummoned, put=__cordl_internal_set_IsSummoned)) ::Fusion::NetworkBool  IsSummoned;

/// @brief Field SpawnIndex, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_SpawnIndex, put=__cordl_internal_set_SpawnIndex)) int32_t  SpawnIndex;

/// @brief Field TargetActorNumber, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_TargetActorNumber, put=__cordl_internal_set_TargetActorNumber)) int32_t  TargetActorNumber;

/// @brief Field _CurrentSpeed, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentSpeed, put=__cordl_internal_set__CurrentSpeed)) ::Fusion::CodeGen::FixedStorage@1  _CurrentSpeed;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr int32_t const& __cordl_internal_get_CurrentState() const;

constexpr int32_t& __cordl_internal_get_CurrentState() ;

constexpr ::Fusion::NetworkBool const& __cordl_internal_get_IsSummoned() const;

constexpr ::Fusion::NetworkBool& __cordl_internal_get_IsSummoned() ;

constexpr int32_t const& __cordl_internal_get_SpawnIndex() const;

constexpr int32_t& __cordl_internal_get_SpawnIndex() ;

constexpr int32_t const& __cordl_internal_get_TargetActorNumber() const;

constexpr int32_t& __cordl_internal_get_TargetActorNumber() ;

constexpr ::Fusion::CodeGen::FixedStorage@1 const& __cordl_internal_get__CurrentSpeed() const;

constexpr ::Fusion::CodeGen::FixedStorage@1& __cordl_internal_get__CurrentSpeed() ;

constexpr void __cordl_internal_set_CurrentState(int32_t  value) ;

constexpr void __cordl_internal_set_IsSummoned(::Fusion::NetworkBool  value) ;

constexpr void __cordl_internal_set_SpawnIndex(int32_t  value) ;

constexpr void __cordl_internal_set_TargetActorNumber(int32_t  value) ;

constexpr void __cordl_internal_set__CurrentSpeed(::Fusion::CodeGen::FixedStorage@1  value) ;

/// [IsReadOnly]
/// @brief Method get_CurrentSpeed, addr 0x594ee5c, size 0x3c, virtual false, abstract: false, final false
inline float_t get_CurrentSpeed() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Method set_CurrentSpeed, addr 0x594ee98, size 0x48, virtual false, abstract: false, final false
inline void set_CurrentSpeed(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr HalloweenGhostChaser_GhostData() ;

// Ctor Parameters [CppParam { name: "TargetActorNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CurrentState", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SpawnIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CurrentSpeed", ty: "::Fusion::CodeGen::FixedStorage@1", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsSummoned", ty: "::Fusion::NetworkBool", modifiers: "", def_value: None, comment: None }]
constexpr HalloweenGhostChaser_GhostData(int32_t  TargetActorNumber, int32_t  CurrentState, int32_t  SpawnIndex, ::Fusion::CodeGen::FixedStorage@1  _CurrentSpeed, ::Fusion::NetworkBool  IsSummoned) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___TargetActorNumber_padding[0x0];
/// @brief Field TargetActorNumber, offset: 0x0, size: 0x4, def value: None
 int32_t  ___TargetActorNumber;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___TargetActorNumber_padding_forAlignment[0x0];
/// @brief Field TargetActorNumber, offset: 0x0, size: 0x4, def value: None
 int32_t  ___TargetActorNumber_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___CurrentState_padding[0x4];
/// @brief Field CurrentState, offset: 0x4, size: 0x4, def value: None
 int32_t  ___CurrentState;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___CurrentState_padding_forAlignment[0x4];
/// @brief Field CurrentState, offset: 0x4, size: 0x4, def value: None
 int32_t  ___CurrentState_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___SpawnIndex_padding[0x8];
/// @brief Field SpawnIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  ___SpawnIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___SpawnIndex_padding_forAlignment[0x8];
/// @brief Field SpawnIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  ___SpawnIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ____CurrentSpeed_padding[0xc];
/// [FixedBufferProperty(typeof(System.Single), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterSingle), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _CurrentSpeed, offset: 0xc, size: 0x4, def value: None
 ::Fusion::CodeGen::FixedStorage@1  ____CurrentSpeed;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ____CurrentSpeed_padding_forAlignment[0xc];
/// [FixedBufferProperty(typeof(System.Single), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterSingle), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _CurrentSpeed, offset: 0xc, size: 0x4, def value: None
 ::Fusion::CodeGen::FixedStorage@1  ____CurrentSpeed_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___IsSummoned_padding[0x10];
/// @brief Field IsSummoned, offset: 0x10, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___IsSummoned;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___IsSummoned_padding_forAlignment[0x10];
/// @brief Field IsSummoned, offset: 0x10, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___IsSummoned_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2294};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HalloweenGhostChaser_GhostData) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
