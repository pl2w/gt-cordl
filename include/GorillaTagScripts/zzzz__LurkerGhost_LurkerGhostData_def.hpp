#pragma once
// IWYU pragma private; include "GorillaTagScripts/LurkerGhost_LurkerGhostData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@3_def.hpp"
#include "GorillaTagScripts/zzzz__LurkerGhost_ghostState_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LurkerGhost_LurkerGhostData)
namespace Fusion {
class INetworkStruct;
}
namespace GlobalNamespace {
struct LurkerGhost_ghostState;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct LurkerGhost_LurkerGhostData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LurkerGhost_LurkerGhostData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LurkerGhost_LurkerGhostData, "GorillaTagScripts", "LurkerGhost/LurkerGhostData");
// [NetworkStructWeaved(6)]
// Dependencies Fusion.CodeGen.FixedStorage@3, GorillaTagScripts.LurkerGhost::ghostState
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.LurkerGhost/LurkerGhostData
#pragma pack(push, 0)
struct CORDL_TYPE LurkerGhost_LurkerGhostData {
public:
// Declarations
 __declspec(property(get=get_CurrentIndex, put=set_CurrentIndex)) int32_t  CurrentIndex;

 __declspec(property(get=get_CurrentState, put=set_CurrentState)) ::GlobalNamespace::LurkerGhost_ghostState  CurrentState;

 __declspec(property(get=get_TargetActor, put=set_TargetActor)) int32_t  TargetActor;

/// [Networked]
/// @brief [NetworkedWeaved(3, 3)]
 __declspec(property(get=get_TargetPos, put=set_TargetPos)) ::UnityEngine::Vector3  TargetPos;

/// @brief Field <CurrentIndex>k__BackingField, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentIndex_k__BackingField, put=__cordl_internal_set__CurrentIndex_k__BackingField)) int32_t  _CurrentIndex_k__BackingField;

/// @brief Field <CurrentState>k__BackingField, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentState_k__BackingField, put=__cordl_internal_set__CurrentState_k__BackingField)) ::GlobalNamespace::LurkerGhost_ghostState  _CurrentState_k__BackingField;

/// @brief Field <TargetActor>k__BackingField, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get__TargetActor_k__BackingField, put=__cordl_internal_set__TargetActor_k__BackingField)) int32_t  _TargetActor_k__BackingField;

/// @brief Field _TargetPos, offset 0xc, size 0xc 
 __declspec(property(get=__cordl_internal_get__TargetPos, put=__cordl_internal_set__TargetPos)) ::Fusion::CodeGen::FixedStorage@3  _TargetPos;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr int32_t const& __cordl_internal_get__CurrentIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CurrentIndex_k__BackingField() ;

constexpr ::GlobalNamespace::LurkerGhost_ghostState const& __cordl_internal_get__CurrentState_k__BackingField() const;

constexpr ::GlobalNamespace::LurkerGhost_ghostState& __cordl_internal_get__CurrentState_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__TargetActor_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__TargetActor_k__BackingField() ;

constexpr ::Fusion::CodeGen::FixedStorage@3 const& __cordl_internal_get__TargetPos() const;

constexpr ::Fusion::CodeGen::FixedStorage@3& __cordl_internal_get__TargetPos() ;

constexpr void __cordl_internal_set__CurrentIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__CurrentState_k__BackingField(::GlobalNamespace::LurkerGhost_ghostState  value) ;

constexpr void __cordl_internal_set__TargetActor_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__TargetPos(::Fusion::CodeGen::FixedStorage@3  value) ;

/// @brief Method .ctor, addr 0x5bcea44, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::LurkerGhost_ghostState  state, int32_t  index, int32_t  actor, ::UnityEngine::Vector3  pos) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CurrentIndex, addr 0x5bcf3a4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentIndex() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CurrentState, addr 0x5bcf394, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::LurkerGhost_ghostState get_CurrentState() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_TargetActor, addr 0x5bcf3b4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TargetActor() ;

/// [IsReadOnly]
/// @brief Method get_TargetPos, addr 0x5bceb84, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_TargetPos() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// [CompilerGenerated]
/// @brief Method set_CurrentIndex, addr 0x5bcf3ac, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentIndex(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentState, addr 0x5bcf39c, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentState(::GlobalNamespace::LurkerGhost_ghostState  value) ;

/// [CompilerGenerated]
/// @brief Method set_TargetActor, addr 0x5bcf3bc, size 0x8, virtual false, abstract: false, final false
inline void set_TargetActor(int32_t  value) ;

/// @brief Method set_TargetPos, addr 0x5bcf3c4, size 0x5c, virtual false, abstract: false, final false
inline void set_TargetPos(::UnityEngine::Vector3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LurkerGhost_LurkerGhostData() ;

// Ctor Parameters [CppParam { name: "_CurrentState_k__BackingField", ty: "::GlobalNamespace::LurkerGhost_ghostState", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CurrentIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_TargetActor_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_TargetPos", ty: "::Fusion::CodeGen::FixedStorage@3", modifiers: "", def_value: None, comment: None }]
constexpr LurkerGhost_LurkerGhostData(::GlobalNamespace::LurkerGhost_ghostState  _CurrentState_k__BackingField, int32_t  _CurrentIndex_k__BackingField, int32_t  _TargetActor_k__BackingField, ::Fusion::CodeGen::FixedStorage@3  _TargetPos) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____CurrentState_k__BackingField_padding[0x0];
/// [CompilerGenerated]
/// @brief Field <CurrentState>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::LurkerGhost_ghostState  ____CurrentState_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____CurrentState_k__BackingField_padding_forAlignment[0x0];
/// [CompilerGenerated]
/// @brief Field <CurrentState>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::LurkerGhost_ghostState  ____CurrentState_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ____CurrentIndex_k__BackingField_padding[0x4];
/// [CompilerGenerated]
/// @brief Field <CurrentIndex>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  ____CurrentIndex_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ____CurrentIndex_k__BackingField_padding_forAlignment[0x4];
/// [CompilerGenerated]
/// @brief Field <CurrentIndex>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  ____CurrentIndex_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ____TargetActor_k__BackingField_padding[0x8];
/// [CompilerGenerated]
/// @brief Field <TargetActor>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  ____TargetActor_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ____TargetActor_k__BackingField_padding_forAlignment[0x8];
/// [CompilerGenerated]
/// @brief Field <TargetActor>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  ____TargetActor_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ____TargetPos_padding[0xc];
/// [FixedBufferProperty(typeof(UnityEngine.Vector3), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterVector3), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _TargetPos, offset: 0xc, size: 0xc, def value: None
 ::Fusion::CodeGen::FixedStorage@3  ____TargetPos;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ____TargetPos_padding_forAlignment[0xc];
/// [FixedBufferProperty(typeof(UnityEngine.Vector3), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterVector3), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _TargetPos, offset: 0xc, size: 0xc, def value: None
 ::Fusion::CodeGen::FixedStorage@3  ____TargetPos_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3998};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LurkerGhost_LurkerGhostData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
