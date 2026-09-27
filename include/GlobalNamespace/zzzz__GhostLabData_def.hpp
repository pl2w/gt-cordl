#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostLabData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@20_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostLabData)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
template<typename T>
struct NetworkArray_1;
}
namespace Fusion {
struct NetworkBool;
}
// Forward declare root types
namespace GlobalNamespace {
struct GhostLabData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GhostLabData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostLabData, "", "GhostLabData");
// [NetworkStructWeaved(21)]
// Dependencies Fusion.CodeGen.FixedStorage@20
namespace GlobalNamespace {
// Is value type: true
// CS Name: GhostLabData
#pragma pack(push, 0)
struct CORDL_TYPE GhostLabData {
public:
// Declarations
 __declspec(property(get=get_DoorState, put=set_DoorState)) int32_t  DoorState;

/// [Networked]
/// [Capacity(20)]
/// [NetworkedWeavedArray(20, 1, typeof(Fusion.ElementReaderWriterNetworkBool))]
/// @brief [NetworkedWeaved(1, 20)]
 __declspec(property(get=get_OpenDoors)) ::Fusion::NetworkArray_1<::Fusion::NetworkBool>  OpenDoors;

/// @brief Field <DoorState>k__BackingField, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__DoorState_k__BackingField, put=__cordl_internal_set__DoorState_k__BackingField)) int32_t  _DoorState_k__BackingField;

/// @brief Field _OpenDoors, offset 0x4, size 0x50 
 __declspec(property(get=__cordl_internal_get__OpenDoors, put=__cordl_internal_set__OpenDoors)) ::Fusion::CodeGen::FixedStorage@20  _OpenDoors;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr int32_t const& __cordl_internal_get__DoorState_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__DoorState_k__BackingField() ;

constexpr ::Fusion::CodeGen::FixedStorage@20 const& __cordl_internal_get__OpenDoors() const;

constexpr ::Fusion::CodeGen::FixedStorage@20& __cordl_internal_get__OpenDoors() ;

constexpr void __cordl_internal_set__DoorState_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__OpenDoors(::Fusion::CodeGen::FixedStorage@20  value) ;

/// @brief Method .ctor, addr 0x5d0b284, size 0xe8, virtual false, abstract: false, final false
inline void _ctor(int32_t  state, ::ArrayW<bool>  openDoors) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_DoorState, addr 0x5d0b194, size 0x8, virtual false, abstract: false, final false
inline int32_t get_DoorState() ;

/// @brief Method get_OpenDoors, addr 0x5d0b1a4, size 0xe0, virtual false, abstract: false, final false
inline ::Fusion::NetworkArray_1<::Fusion::NetworkBool> get_OpenDoors() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// [CompilerGenerated]
/// @brief Method set_DoorState, addr 0x5d0b19c, size 0x8, virtual false, abstract: false, final false
inline void set_DoorState(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GhostLabData() ;

// Ctor Parameters [CppParam { name: "_DoorState_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_OpenDoors", ty: "::Fusion::CodeGen::FixedStorage@20", modifiers: "", def_value: None, comment: None }]
constexpr GhostLabData(int32_t  _DoorState_k__BackingField, ::Fusion::CodeGen::FixedStorage@20  _OpenDoors) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____DoorState_k__BackingField_padding[0x0];
/// [CompilerGenerated]
/// @brief Field <DoorState>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  ____DoorState_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____DoorState_k__BackingField_padding_forAlignment[0x0];
/// [CompilerGenerated]
/// @brief Field <DoorState>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  ____DoorState_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ____OpenDoors_padding[0x4];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterNetworkBool), 20, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _OpenDoors, offset: 0x4, size: 0x50, def value: None
 ::Fusion::CodeGen::FixedStorage@20  ____OpenDoors;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ____OpenDoors_padding_forAlignment[0x4];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterNetworkBool), 20, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _OpenDoors, offset: 0x4, size: 0x50, def value: None
 ::Fusion::CodeGen::FixedStorage@20  ____OpenDoors_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{459};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x54};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GhostLabData) == 0x54, "Size mismatch!");

} // namespace end def GlobalNamespace
