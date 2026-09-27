#pragma once
// IWYU pragma private; include "GlobalNamespace/BeeSwarmData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeeSwarmData)
namespace Fusion {
class INetworkStruct;
}
// Forward declare root types
namespace GlobalNamespace {
struct BeeSwarmData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeeSwarmData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeeSwarmData, "", "BeeSwarmData");
// [NetworkStructWeaved(3)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeeSwarmData
#pragma pack(push, 0)
struct CORDL_TYPE BeeSwarmData {
public:
// Declarations
 __declspec(property(get=get_CurrentSpeed, put=set_CurrentSpeed)) float_t  CurrentSpeed;

 __declspec(property(get=get_CurrentState, put=set_CurrentState)) int32_t  CurrentState;

 __declspec(property(get=get_TargetActorNumber, put=set_TargetActorNumber)) int32_t  TargetActorNumber;

/// @brief Field <CurrentSpeed>k__BackingField, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentSpeed_k__BackingField, put=__cordl_internal_set__CurrentSpeed_k__BackingField)) float_t  _CurrentSpeed_k__BackingField;

/// @brief Field <CurrentState>k__BackingField, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentState_k__BackingField, put=__cordl_internal_set__CurrentState_k__BackingField)) int32_t  _CurrentState_k__BackingField;

/// @brief Field <TargetActorNumber>k__BackingField, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__TargetActorNumber_k__BackingField, put=__cordl_internal_set__TargetActorNumber_k__BackingField)) int32_t  _TargetActorNumber_k__BackingField;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr float_t const& __cordl_internal_get__CurrentSpeed_k__BackingField() const;

constexpr float_t& __cordl_internal_get__CurrentSpeed_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__CurrentState_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CurrentState_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__TargetActorNumber_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__TargetActorNumber_k__BackingField() ;

constexpr void __cordl_internal_set__CurrentSpeed_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__CurrentState_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__TargetActorNumber_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x56109ec, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  actorNr, int32_t  state, float_t  speed) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CurrentSpeed, addr 0x56109dc, size 0x8, virtual false, abstract: false, final false
inline float_t get_CurrentSpeed() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CurrentState, addr 0x56109cc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentState() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_TargetActorNumber, addr 0x56109bc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TargetActorNumber() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// [CompilerGenerated]
/// @brief Method set_CurrentSpeed, addr 0x56109e4, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentSpeed(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentState, addr 0x56109d4, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentState(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_TargetActorNumber, addr 0x56109c4, size 0x8, virtual false, abstract: false, final false
inline void set_TargetActorNumber(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BeeSwarmData() ;

// Ctor Parameters [CppParam { name: "_TargetActorNumber_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CurrentState_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CurrentSpeed_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr BeeSwarmData(int32_t  _TargetActorNumber_k__BackingField, int32_t  _CurrentState_k__BackingField, float_t  _CurrentSpeed_k__BackingField) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____TargetActorNumber_k__BackingField_padding[0x0];
/// [CompilerGenerated]
/// @brief Field <TargetActorNumber>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  ____TargetActorNumber_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____TargetActorNumber_k__BackingField_padding_forAlignment[0x0];
/// [CompilerGenerated]
/// @brief Field <TargetActorNumber>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  ____TargetActorNumber_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ____CurrentState_k__BackingField_padding[0x4];
/// [CompilerGenerated]
/// @brief Field <CurrentState>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  ____CurrentState_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ____CurrentState_k__BackingField_padding_forAlignment[0x4];
/// [CompilerGenerated]
/// @brief Field <CurrentState>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  ____CurrentState_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ____CurrentSpeed_k__BackingField_padding[0x8];
/// [CompilerGenerated]
/// @brief Field <CurrentSpeed>k__BackingField, offset: 0x8, size: 0x4, def value: None
 float_t  ____CurrentSpeed_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ____CurrentSpeed_k__BackingField_padding_forAlignment[0x8];
/// [CompilerGenerated]
/// @brief Field <CurrentSpeed>k__BackingField, offset: 0x8, size: 0x4, def value: None
 float_t  ____CurrentSpeed_k__BackingField_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{543};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeeSwarmData) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
