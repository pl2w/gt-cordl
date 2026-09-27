#pragma once
// IWYU pragma private; include "GlobalNamespace/BarrelCannon_BarrelCannonSyncedStateData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@1_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(BarrelCannon_BarrelCannonSyncedStateData)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
struct NetworkBool;
}
namespace GlobalNamespace {
struct BarrelCannon_BarrelCannonState;
}
namespace GlobalNamespace {
class BarrelCannon_BarrelCannonSyncedState;
}
// Forward declare root types
namespace GlobalNamespace {
struct BarrelCannon_BarrelCannonSyncedStateData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData, "", "BarrelCannon/BarrelCannonSyncedStateData");
// [NetworkStructWeaved(3)]
// Dependencies Fusion.CodeGen.FixedStorage@1
namespace GlobalNamespace {
// Is value type: true
// CS Name: BarrelCannon/BarrelCannonSyncedStateData
#pragma pack(push, 0)
struct CORDL_TYPE BarrelCannon_BarrelCannonSyncedStateData {
public:
// Declarations
/// [Networked]
/// @brief [NetworkedWeaved(0, 1)]
 __declspec(property(get=get_CurrentState, put=set_CurrentState)) ::GlobalNamespace::BarrelCannon_BarrelCannonState  CurrentState;

 __declspec(property(get=get_FiringPositionLerpValue, put=set_FiringPositionLerpValue)) float_t  FiringPositionLerpValue;

/// [Networked]
/// @brief [NetworkedWeaved(1, 1)]
 __declspec(property(get=get_HasAuthorityPassenger, put=set_HasAuthorityPassenger)) ::Fusion::NetworkBool  HasAuthorityPassenger;

/// @brief Field _CurrentState, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentState, put=__cordl_internal_set__CurrentState)) ::Fusion::CodeGen::FixedStorage@1  _CurrentState;

/// @brief Field <FiringPositionLerpValue>k__BackingField, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get__FiringPositionLerpValue_k__BackingField, put=__cordl_internal_set__FiringPositionLerpValue_k__BackingField)) float_t  _FiringPositionLerpValue_k__BackingField;

/// @brief Field _HasAuthorityPassenger, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get__HasAuthorityPassenger, put=__cordl_internal_set__HasAuthorityPassenger)) ::Fusion::CodeGen::FixedStorage@1  _HasAuthorityPassenger;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr ::Fusion::CodeGen::FixedStorage@1 const& __cordl_internal_get__CurrentState() const;

constexpr ::Fusion::CodeGen::FixedStorage@1& __cordl_internal_get__CurrentState() ;

constexpr float_t const& __cordl_internal_get__FiringPositionLerpValue_k__BackingField() const;

constexpr float_t& __cordl_internal_get__FiringPositionLerpValue_k__BackingField() ;

constexpr ::Fusion::CodeGen::FixedStorage@1 const& __cordl_internal_get__HasAuthorityPassenger() const;

constexpr ::Fusion::CodeGen::FixedStorage@1& __cordl_internal_get__HasAuthorityPassenger() ;

constexpr void __cordl_internal_set__CurrentState(::Fusion::CodeGen::FixedStorage@1  value) ;

constexpr void __cordl_internal_set__FiringPositionLerpValue_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__HasAuthorityPassenger(::Fusion::CodeGen::FixedStorage@1  value) ;

/// @brief Method .ctor, addr 0x5c01308, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::BarrelCannon_BarrelCannonState  state, bool  hasAuthPassenger, float_t  firingPosLerpVal) ;

/// [IsReadOnly]
/// @brief Method get_CurrentState, addr 0x5c00e9c, size 0x3c, virtual false, abstract: false, final false
inline ::GlobalNamespace::BarrelCannon_BarrelCannonState get_CurrentState() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_FiringPositionLerpValue, addr 0x5c012f8, size 0x8, virtual false, abstract: false, final false
inline float_t get_FiringPositionLerpValue() ;

/// [IsReadOnly]
/// @brief Method get_HasAuthorityPassenger, addr 0x5c00ed8, size 0x3c, virtual false, abstract: false, final false
inline ::Fusion::NetworkBool get_HasAuthorityPassenger() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Method op_Implicit, addr 0x5c00d8c, size 0x70, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData op_Implicit___GlobalNamespace__BarrelCannon_BarrelCannonSyncedStateData(::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState*  state) ;

/// @brief Method set_CurrentState, addr 0x5c01278, size 0x40, virtual false, abstract: false, final false
inline void set_CurrentState(::GlobalNamespace::BarrelCannon_BarrelCannonState  value) ;

/// [CompilerGenerated]
/// @brief Method set_FiringPositionLerpValue, addr 0x5c01300, size 0x8, virtual false, abstract: false, final false
inline void set_FiringPositionLerpValue(float_t  value) ;

/// @brief Method set_HasAuthorityPassenger, addr 0x5c012b8, size 0x40, virtual false, abstract: false, final false
inline void set_HasAuthorityPassenger(::Fusion::NetworkBool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BarrelCannon_BarrelCannonSyncedStateData() ;

// Ctor Parameters [CppParam { name: "_CurrentState", ty: "::Fusion::CodeGen::FixedStorage@1", modifiers: "", def_value: None, comment: None }, CppParam { name: "_HasAuthorityPassenger", ty: "::Fusion::CodeGen::FixedStorage@1", modifiers: "", def_value: None, comment: None }, CppParam { name: "_FiringPositionLerpValue_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr BarrelCannon_BarrelCannonSyncedStateData(::Fusion::CodeGen::FixedStorage@1  _CurrentState, ::Fusion::CodeGen::FixedStorage@1  _HasAuthorityPassenger, float_t  _FiringPositionLerpValue_k__BackingField) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____CurrentState_padding[0x0];
/// [FixedBufferProperty(typeof(BarrelCannon::BarrelCannonState), typeof(Fusion.CodeGen.UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _CurrentState, offset: 0x0, size: 0x4, def value: None
 ::Fusion::CodeGen::FixedStorage@1  ____CurrentState;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____CurrentState_padding_forAlignment[0x0];
/// [FixedBufferProperty(typeof(BarrelCannon::BarrelCannonState), typeof(Fusion.CodeGen.UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _CurrentState, offset: 0x0, size: 0x4, def value: None
 ::Fusion::CodeGen::FixedStorage@1  ____CurrentState_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ____HasAuthorityPassenger_padding[0x4];
/// [FixedBufferProperty(typeof(Fusion.NetworkBool), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterNetworkBool), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _HasAuthorityPassenger, offset: 0x4, size: 0x4, def value: None
 ::Fusion::CodeGen::FixedStorage@1  ____HasAuthorityPassenger;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ____HasAuthorityPassenger_padding_forAlignment[0x4];
/// [FixedBufferProperty(typeof(Fusion.NetworkBool), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterNetworkBool), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _HasAuthorityPassenger, offset: 0x4, size: 0x4, def value: None
 ::Fusion::CodeGen::FixedStorage@1  ____HasAuthorityPassenger_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ____FiringPositionLerpValue_k__BackingField_padding[0x8];
/// [CompilerGenerated]
/// @brief Field <FiringPositionLerpValue>k__BackingField, offset: 0x8, size: 0x4, def value: None
 float_t  ____FiringPositionLerpValue_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ____FiringPositionLerpValue_k__BackingField_padding_forAlignment[0x8];
/// [CompilerGenerated]
/// @brief Field <FiringPositionLerpValue>k__BackingField, offset: 0x8, size: 0x4, def value: None
 float_t  ____FiringPositionLerpValue_k__BackingField_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{418};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
