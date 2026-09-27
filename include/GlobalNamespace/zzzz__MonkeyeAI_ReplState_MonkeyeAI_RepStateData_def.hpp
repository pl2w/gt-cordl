#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeyeAI_ReplState_MonkeyeAI_RepStateData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@1_def.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@33_def.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@3_def.hpp"
#include "Fusion/zzzz__NetworkBool_def.hpp"
#include "GlobalNamespace/zzzz__MonkeyeAI_ReplState_EStates_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MonkeyeAI_ReplState_MonkeyeAI_RepStateData)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
struct NetworkBool;
}
namespace Fusion {
template<typename TSize>
struct NetworkString_1;
}
namespace Fusion {
struct _32;
}
namespace GlobalNamespace {
struct MonkeyeAI_ReplState_EStates;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct MonkeyeAI_ReplState_MonkeyeAI_RepStateData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData, "", "MonkeyeAI_ReplState/MonkeyeAI_RepStateData");
// [NetworkStructWeaved(42)]
// Dependencies Fusion.CodeGen.FixedStorage@1, Fusion.CodeGen.FixedStorage@3, Fusion.CodeGen.FixedStorage@33, Fusion.NetworkBool, MonkeyeAI_ReplState::EStates
namespace GlobalNamespace {
// Is value type: true
// CS Name: MonkeyeAI_ReplState/MonkeyeAI_RepStateData
#pragma pack(push, 0)
struct CORDL_TYPE MonkeyeAI_ReplState_MonkeyeAI_RepStateData {
public:
// Declarations
/// [Networked]
/// @brief [NetworkedWeaved(40, 1)]
 __declspec(property(get=get_Alpha, put=set_Alpha)) float_t  Alpha;

/// [Networked]
/// @brief [NetworkedWeaved(33, 3)]
 __declspec(property(get=get_AttackPos, put=set_AttackPos)) ::UnityEngine::Vector3  AttackPos;

 __declspec(property(get=get_FloorEnabled, put=set_FloorEnabled)) ::Fusion::NetworkBool  FloorEnabled;

 __declspec(property(get=get_FreezePlayer, put=set_FreezePlayer)) ::Fusion::NetworkBool  FreezePlayer;

 __declspec(property(get=get_PortalEnabled, put=set_PortalEnabled)) ::Fusion::NetworkBool  PortalEnabled;

 __declspec(property(get=get_State, put=set_State)) ::GlobalNamespace::MonkeyeAI_ReplState_EStates  State;

/// [Networked]
/// @brief [NetworkedWeaved(36, 1)]
 __declspec(property(get=get_Timer, put=set_Timer)) float_t  Timer;

/// [Networked]
/// @brief [NetworkedWeaved(0, 33)]
 __declspec(property(get=get_UserId, put=set_UserId)) ::Fusion::NetworkString_1<::Fusion::_32>  UserId;

/// @brief Field _Alpha, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__Alpha, put=__cordl_internal_set__Alpha)) ::Fusion::CodeGen::FixedStorage@1  _Alpha;

/// @brief Field _AttackPos, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get__AttackPos, put=__cordl_internal_set__AttackPos)) ::Fusion::CodeGen::FixedStorage@3  _AttackPos;

/// @brief Field <FloorEnabled>k__BackingField, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__FloorEnabled_k__BackingField, put=__cordl_internal_set__FloorEnabled_k__BackingField)) ::Fusion::NetworkBool  _FloorEnabled_k__BackingField;

/// @brief Field <FreezePlayer>k__BackingField, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__FreezePlayer_k__BackingField, put=__cordl_internal_set__FreezePlayer_k__BackingField)) ::Fusion::NetworkBool  _FreezePlayer_k__BackingField;

/// @brief Field <PortalEnabled>k__BackingField, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__PortalEnabled_k__BackingField, put=__cordl_internal_set__PortalEnabled_k__BackingField)) ::Fusion::NetworkBool  _PortalEnabled_k__BackingField;

/// @brief Field <State>k__BackingField, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__State_k__BackingField, put=__cordl_internal_set__State_k__BackingField)) ::GlobalNamespace::MonkeyeAI_ReplState_EStates  _State_k__BackingField;

/// @brief Field _Timer, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__Timer, put=__cordl_internal_set__Timer)) ::Fusion::CodeGen::FixedStorage@1  _Timer;

/// @brief Field _UserId, offset 0x0, size 0x84 
 __declspec(property(get=__cordl_internal_get__UserId, put=__cordl_internal_set__UserId)) ::Fusion::CodeGen::FixedStorage@33  _UserId;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr ::Fusion::CodeGen::FixedStorage@1 const& __cordl_internal_get__Alpha() const;

constexpr ::Fusion::CodeGen::FixedStorage@1& __cordl_internal_get__Alpha() ;

constexpr ::Fusion::CodeGen::FixedStorage@3 const& __cordl_internal_get__AttackPos() const;

constexpr ::Fusion::CodeGen::FixedStorage@3& __cordl_internal_get__AttackPos() ;

constexpr ::Fusion::NetworkBool const& __cordl_internal_get__FloorEnabled_k__BackingField() const;

constexpr ::Fusion::NetworkBool& __cordl_internal_get__FloorEnabled_k__BackingField() ;

constexpr ::Fusion::NetworkBool const& __cordl_internal_get__FreezePlayer_k__BackingField() const;

constexpr ::Fusion::NetworkBool& __cordl_internal_get__FreezePlayer_k__BackingField() ;

constexpr ::Fusion::NetworkBool const& __cordl_internal_get__PortalEnabled_k__BackingField() const;

constexpr ::Fusion::NetworkBool& __cordl_internal_get__PortalEnabled_k__BackingField() ;

constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates const& __cordl_internal_get__State_k__BackingField() const;

constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates& __cordl_internal_get__State_k__BackingField() ;

constexpr ::Fusion::CodeGen::FixedStorage@1 const& __cordl_internal_get__Timer() const;

constexpr ::Fusion::CodeGen::FixedStorage@1& __cordl_internal_get__Timer() ;

constexpr ::Fusion::CodeGen::FixedStorage@33 const& __cordl_internal_get__UserId() const;

constexpr ::Fusion::CodeGen::FixedStorage@33& __cordl_internal_get__UserId() ;

constexpr void __cordl_internal_set__Alpha(::Fusion::CodeGen::FixedStorage@1  value) ;

constexpr void __cordl_internal_set__AttackPos(::Fusion::CodeGen::FixedStorage@3  value) ;

constexpr void __cordl_internal_set__FloorEnabled_k__BackingField(::Fusion::NetworkBool  value) ;

constexpr void __cordl_internal_set__FreezePlayer_k__BackingField(::Fusion::NetworkBool  value) ;

constexpr void __cordl_internal_set__PortalEnabled_k__BackingField(::Fusion::NetworkBool  value) ;

constexpr void __cordl_internal_set__State_k__BackingField(::GlobalNamespace::MonkeyeAI_ReplState_EStates  value) ;

constexpr void __cordl_internal_set__Timer(::Fusion::CodeGen::FixedStorage@1  value) ;

constexpr void __cordl_internal_set__UserId(::Fusion::CodeGen::FixedStorage@33  value) ;

/// @brief Method .ctor, addr 0x5c05ccc, size 0x1bc, virtual false, abstract: false, final false
inline void _ctor(::StringW  id, ::UnityEngine::Vector3  atPos, float_t  timer, bool  floorOn, bool  portalOn, bool  freezePlayer, float_t  alpha, ::GlobalNamespace::MonkeyeAI_ReplState_EStates  state) ;

/// [IsReadOnly]
/// @brief Method get_Alpha, addr 0x5c061c4, size 0x3c, virtual false, abstract: false, final false
inline float_t get_Alpha() ;

/// [IsReadOnly]
/// @brief Method get_AttackPos, addr 0x5c06148, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_AttackPos() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_FloorEnabled, addr 0x5c06918, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::NetworkBool get_FloorEnabled() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_FreezePlayer, addr 0x5c06938, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::NetworkBool get_FreezePlayer() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_PortalEnabled, addr 0x5c06928, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::NetworkBool get_PortalEnabled() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_State, addr 0x5c06990, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MonkeyeAI_ReplState_EStates get_State() ;

/// [IsReadOnly]
/// @brief Method get_Timer, addr 0x5c06188, size 0x3c, virtual false, abstract: false, final false
inline float_t get_Timer() ;

/// [IsReadOnly]
/// @brief Method get_UserId, addr 0x5c06100, size 0x48, virtual false, abstract: false, final false
inline ::Fusion::NetworkString_1<::Fusion::_32> get_UserId() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Method set_Alpha, addr 0x5c06948, size 0x48, virtual false, abstract: false, final false
inline void set_Alpha(float_t  value) ;

/// @brief Method set_AttackPos, addr 0x5c06874, size 0x5c, virtual false, abstract: false, final false
inline void set_AttackPos(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_FloorEnabled, addr 0x5c06920, size 0x8, virtual false, abstract: false, final false
inline void set_FloorEnabled(::Fusion::NetworkBool  value) ;

/// [CompilerGenerated]
/// @brief Method set_FreezePlayer, addr 0x5c06940, size 0x8, virtual false, abstract: false, final false
inline void set_FreezePlayer(::Fusion::NetworkBool  value) ;

/// [CompilerGenerated]
/// @brief Method set_PortalEnabled, addr 0x5c06930, size 0x8, virtual false, abstract: false, final false
inline void set_PortalEnabled(::Fusion::NetworkBool  value) ;

/// [CompilerGenerated]
/// @brief Method set_State, addr 0x5c06998, size 0x8, virtual false, abstract: false, final false
inline void set_State(::GlobalNamespace::MonkeyeAI_ReplState_EStates  value) ;

/// @brief Method set_Timer, addr 0x5c068d0, size 0x48, virtual false, abstract: false, final false
inline void set_Timer(float_t  value) ;

/// @brief Method set_UserId, addr 0x5c0682c, size 0x48, virtual false, abstract: false, final false
inline void set_UserId(::Fusion::NetworkString_1<::Fusion::_32>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr MonkeyeAI_ReplState_MonkeyeAI_RepStateData() ;

// Ctor Parameters [CppParam { name: "_UserId", ty: "::Fusion::CodeGen::FixedStorage@33", modifiers: "", def_value: None, comment: None }, CppParam { name: "_AttackPos", ty: "::Fusion::CodeGen::FixedStorage@3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Timer", ty: "::Fusion::CodeGen::FixedStorage@1", modifiers: "", def_value: None, comment: None }, CppParam { name: "_FloorEnabled_k__BackingField", ty: "::Fusion::NetworkBool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_PortalEnabled_k__BackingField", ty: "::Fusion::NetworkBool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_FreezePlayer_k__BackingField", ty: "::Fusion::NetworkBool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Alpha", ty: "::Fusion::CodeGen::FixedStorage@1", modifiers: "", def_value: None, comment: None }, CppParam { name: "_State_k__BackingField", ty: "::GlobalNamespace::MonkeyeAI_ReplState_EStates", modifiers: "", def_value: None, comment: None }]
constexpr MonkeyeAI_ReplState_MonkeyeAI_RepStateData(::Fusion::CodeGen::FixedStorage@33  _UserId, ::Fusion::CodeGen::FixedStorage@3  _AttackPos, ::Fusion::CodeGen::FixedStorage@1  _Timer, ::Fusion::NetworkBool  _FloorEnabled_k__BackingField, ::Fusion::NetworkBool  _PortalEnabled_k__BackingField, ::Fusion::NetworkBool  _FreezePlayer_k__BackingField, ::Fusion::CodeGen::FixedStorage@1  _Alpha, ::GlobalNamespace::MonkeyeAI_ReplState_EStates  _State_k__BackingField) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____UserId_padding[0x0];
/// [FixedBufferProperty(typeof(Fusion.NetworkString`1<TSize>), typeof(Fusion.CodeGen.UnityValueSurrogate@ReaderWriter@Fusion_NetworkString`1<Fusion__32>), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _UserId, offset: 0x0, size: 0x84, def value: None
 ::Fusion::CodeGen::FixedStorage@33  ____UserId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____UserId_padding_forAlignment[0x0];
/// [FixedBufferProperty(typeof(Fusion.NetworkString`1<TSize>), typeof(Fusion.CodeGen.UnityValueSurrogate@ReaderWriter@Fusion_NetworkString`1<Fusion__32>), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _UserId, offset: 0x0, size: 0x84, def value: None
 ::Fusion::CodeGen::FixedStorage@33  ____UserId_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x84
 uint8_t  ____AttackPos_padding[0x84];
/// [FixedBufferProperty(typeof(UnityEngine.Vector3), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterVector3), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _AttackPos, offset: 0x84, size: 0xc, def value: None
 ::Fusion::CodeGen::FixedStorage@3  ____AttackPos;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x84 for alignment
 uint8_t  ____AttackPos_padding_forAlignment[0x84];
/// [FixedBufferProperty(typeof(UnityEngine.Vector3), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterVector3), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _AttackPos, offset: 0x84, size: 0xc, def value: None
 ::Fusion::CodeGen::FixedStorage@3  ____AttackPos_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x90
 uint8_t  ____Timer_padding[0x90];
/// [FixedBufferProperty(typeof(System.Single), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterSingle), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _Timer, offset: 0x90, size: 0x4, def value: None
 ::Fusion::CodeGen::FixedStorage@1  ____Timer;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x90 for alignment
 uint8_t  ____Timer_padding_forAlignment[0x90];
/// [FixedBufferProperty(typeof(System.Single), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterSingle), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _Timer, offset: 0x90, size: 0x4, def value: None
 ::Fusion::CodeGen::FixedStorage@1  ____Timer_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x94
 uint8_t  ____FloorEnabled_k__BackingField_padding[0x94];
/// [CompilerGenerated]
/// @brief Field <FloorEnabled>k__BackingField, offset: 0x94, size: 0x4, def value: None
 ::Fusion::NetworkBool  ____FloorEnabled_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x94 for alignment
 uint8_t  ____FloorEnabled_k__BackingField_padding_forAlignment[0x94];
/// [CompilerGenerated]
/// @brief Field <FloorEnabled>k__BackingField, offset: 0x94, size: 0x4, def value: None
 ::Fusion::NetworkBool  ____FloorEnabled_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x98
 uint8_t  ____PortalEnabled_k__BackingField_padding[0x98];
/// [CompilerGenerated]
/// @brief Field <PortalEnabled>k__BackingField, offset: 0x98, size: 0x4, def value: None
 ::Fusion::NetworkBool  ____PortalEnabled_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x98 for alignment
 uint8_t  ____PortalEnabled_k__BackingField_padding_forAlignment[0x98];
/// [CompilerGenerated]
/// @brief Field <PortalEnabled>k__BackingField, offset: 0x98, size: 0x4, def value: None
 ::Fusion::NetworkBool  ____PortalEnabled_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x9c
 uint8_t  ____FreezePlayer_k__BackingField_padding[0x9c];
/// [CompilerGenerated]
/// @brief Field <FreezePlayer>k__BackingField, offset: 0x9c, size: 0x4, def value: None
 ::Fusion::NetworkBool  ____FreezePlayer_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x9c for alignment
 uint8_t  ____FreezePlayer_k__BackingField_padding_forAlignment[0x9c];
/// [CompilerGenerated]
/// @brief Field <FreezePlayer>k__BackingField, offset: 0x9c, size: 0x4, def value: None
 ::Fusion::NetworkBool  ____FreezePlayer_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xa0
 uint8_t  ____Alpha_padding[0xa0];
/// [FixedBufferProperty(typeof(System.Single), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterSingle), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _Alpha, offset: 0xa0, size: 0x4, def value: None
 ::Fusion::CodeGen::FixedStorage@1  ____Alpha;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xa0 for alignment
 uint8_t  ____Alpha_padding_forAlignment[0xa0];
/// [FixedBufferProperty(typeof(System.Single), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterSingle), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _Alpha, offset: 0xa0, size: 0x4, def value: None
 ::Fusion::CodeGen::FixedStorage@1  ____Alpha_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xa4
 uint8_t  ____State_k__BackingField_padding[0xa4];
/// [CompilerGenerated]
/// @brief Field <State>k__BackingField, offset: 0xa4, size: 0x4, def value: None
 ::GlobalNamespace::MonkeyeAI_ReplState_EStates  ____State_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xa4 for alignment
 uint8_t  ____State_k__BackingField_padding_forAlignment[0xa4];
/// [CompilerGenerated]
/// @brief Field <State>k__BackingField, offset: 0xa4, size: 0x4, def value: None
 ::GlobalNamespace::MonkeyeAI_ReplState_EStates  ____State_k__BackingField_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{425};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
