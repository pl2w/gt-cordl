#pragma once
// IWYU pragma private; include "GorillaTagScripts/WhackAMole_WhackAMoleData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@129_def.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@71_def.hpp"
#include "GorillaTagScripts/zzzz__WhackAMole_GameState_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WhackAMole_WhackAMoleData)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
template<typename K,typename V>
struct NetworkDictionary_2;
}
namespace Fusion {
template<typename TSize>
struct NetworkString_1;
}
namespace Fusion {
struct _128;
}
namespace GlobalNamespace {
struct WhackAMole_GameState;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct WhackAMole_WhackAMoleData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WhackAMole_WhackAMoleData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WhackAMole_WhackAMoleData, "GorillaTagScripts", "WhackAMole/WhackAMoleData");
// [NetworkStructWeaved(210)]
// Dependencies Fusion.CodeGen.FixedStorage@129, Fusion.CodeGen.FixedStorage@71, GorillaTagScripts.WhackAMole::GameState
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.WhackAMole/WhackAMoleData
#pragma pack(push, 0)
struct CORDL_TYPE WhackAMole_WhackAMoleData {
public:
// Declarations
 __declspec(property(get=get_BestScore, put=set_BestScore)) int32_t  BestScore;

 __declspec(property(get=get_CurrentLevelIndex, put=set_CurrentLevelIndex)) int32_t  CurrentLevelIndex;

 __declspec(property(get=get_CurrentScore, put=set_CurrentScore)) int32_t  CurrentScore;

 __declspec(property(get=get_CurrentState, put=set_CurrentState)) ::GlobalNamespace::WhackAMole_GameState  CurrentState;

 __declspec(property(get=get_GameEndedTime, put=set_GameEndedTime)) float_t  GameEndedTime;

 __declspec(property(get=get_GameId, put=set_GameId)) int32_t  GameId;

/// [Networked]
/// @brief [NetworkedWeaved(6, 129)]
 __declspec(property(get=get_HighScorePlayerName, put=set_HighScorePlayerName)) ::Fusion::NetworkString_1<::Fusion::_128>  HighScorePlayerName;

/// [Networked]
/// [Capacity(10)]
/// [NetworkedWeavedDictionary(17, 1, 1, typeof(Fusion.ElementReaderWriterInt32), typeof(Fusion.ElementReaderWriterInt32))]
/// @brief [NetworkedWeaved(139, 71)]
 __declspec(property(get=get_PickedMolesIndex)) ::Fusion::NetworkDictionary_2<int32_t,int32_t>  PickedMolesIndex;

 __declspec(property(get=get_PickedMolesIndexCount, put=set_PickedMolesIndexCount)) int32_t  PickedMolesIndexCount;

 __declspec(property(get=get_RemainingTime, put=set_RemainingTime)) float_t  RemainingTime;

 __declspec(property(get=get_RightPlayerScore, put=set_RightPlayerScore)) int32_t  RightPlayerScore;

 __declspec(property(get=get_TotalScore, put=set_TotalScore)) int32_t  TotalScore;

/// @brief Field <BestScore>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__BestScore_k__BackingField, put=__cordl_internal_set__BestScore_k__BackingField)) int32_t  _BestScore_k__BackingField;

/// @brief Field <CurrentLevelIndex>k__BackingField, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentLevelIndex_k__BackingField, put=__cordl_internal_set__CurrentLevelIndex_k__BackingField)) int32_t  _CurrentLevelIndex_k__BackingField;

/// @brief Field <CurrentScore>k__BackingField, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentScore_k__BackingField, put=__cordl_internal_set__CurrentScore_k__BackingField)) int32_t  _CurrentScore_k__BackingField;

/// @brief Field <CurrentState>k__BackingField, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentState_k__BackingField, put=__cordl_internal_set__CurrentState_k__BackingField)) ::GlobalNamespace::WhackAMole_GameState  _CurrentState_k__BackingField;

/// @brief Field <GameEndedTime>k__BackingField, offset 0x220, size 0x4 
 __declspec(property(get=__cordl_internal_get__GameEndedTime_k__BackingField, put=__cordl_internal_set__GameEndedTime_k__BackingField)) float_t  _GameEndedTime_k__BackingField;

/// @brief Field <GameId>k__BackingField, offset 0x224, size 0x4 
 __declspec(property(get=__cordl_internal_get__GameId_k__BackingField, put=__cordl_internal_set__GameId_k__BackingField)) int32_t  _GameId_k__BackingField;

/// @brief Field _HighScorePlayerName, offset 0x18, size 0x204 
 __declspec(property(get=__cordl_internal_get__HighScorePlayerName, put=__cordl_internal_set__HighScorePlayerName)) ::Fusion::CodeGen::FixedStorage@129  _HighScorePlayerName;

/// @brief Field _PickedMolesIndex, offset 0x22c, size 0x11c 
 __declspec(property(get=__cordl_internal_get__PickedMolesIndex, put=__cordl_internal_set__PickedMolesIndex)) ::Fusion::CodeGen::FixedStorage@71  _PickedMolesIndex;

/// @brief Field <PickedMolesIndexCount>k__BackingField, offset 0x228, size 0x4 
 __declspec(property(get=__cordl_internal_get__PickedMolesIndexCount_k__BackingField, put=__cordl_internal_set__PickedMolesIndexCount_k__BackingField)) int32_t  _PickedMolesIndexCount_k__BackingField;

/// @brief Field <RemainingTime>k__BackingField, offset 0x21c, size 0x4 
 __declspec(property(get=__cordl_internal_get__RemainingTime_k__BackingField, put=__cordl_internal_set__RemainingTime_k__BackingField)) float_t  _RemainingTime_k__BackingField;

/// @brief Field <RightPlayerScore>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__RightPlayerScore_k__BackingField, put=__cordl_internal_set__RightPlayerScore_k__BackingField)) int32_t  _RightPlayerScore_k__BackingField;

/// @brief Field <TotalScore>k__BackingField, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get__TotalScore_k__BackingField, put=__cordl_internal_set__TotalScore_k__BackingField)) int32_t  _TotalScore_k__BackingField;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr int32_t const& __cordl_internal_get__BestScore_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__BestScore_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__CurrentLevelIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CurrentLevelIndex_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__CurrentScore_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CurrentScore_k__BackingField() ;

constexpr ::GlobalNamespace::WhackAMole_GameState const& __cordl_internal_get__CurrentState_k__BackingField() const;

constexpr ::GlobalNamespace::WhackAMole_GameState& __cordl_internal_get__CurrentState_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__GameEndedTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__GameEndedTime_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__GameId_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__GameId_k__BackingField() ;

constexpr ::Fusion::CodeGen::FixedStorage@129 const& __cordl_internal_get__HighScorePlayerName() const;

constexpr ::Fusion::CodeGen::FixedStorage@129& __cordl_internal_get__HighScorePlayerName() ;

constexpr ::Fusion::CodeGen::FixedStorage@71 const& __cordl_internal_get__PickedMolesIndex() const;

constexpr ::Fusion::CodeGen::FixedStorage@71& __cordl_internal_get__PickedMolesIndex() ;

constexpr int32_t const& __cordl_internal_get__PickedMolesIndexCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__PickedMolesIndexCount_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__RemainingTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__RemainingTime_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__RightPlayerScore_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__RightPlayerScore_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__TotalScore_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__TotalScore_k__BackingField() ;

constexpr void __cordl_internal_set__BestScore_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__CurrentLevelIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__CurrentScore_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__CurrentState_k__BackingField(::GlobalNamespace::WhackAMole_GameState  value) ;

constexpr void __cordl_internal_set__GameEndedTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__GameId_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__HighScorePlayerName(::Fusion::CodeGen::FixedStorage@129  value) ;

constexpr void __cordl_internal_set__PickedMolesIndex(::Fusion::CodeGen::FixedStorage@71  value) ;

constexpr void __cordl_internal_set__PickedMolesIndexCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__RemainingTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__RightPlayerScore_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__TotalScore_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5b7f7f0, size 0x2cc, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::WhackAMole_GameState  state, int32_t  currentLevelIndex, int32_t  cScore, int32_t  tScore, int32_t  bScore, int32_t  rPScore, ::StringW  hScorePName, float_t  remainingTime, float_t  endedTime, int32_t  gameId, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  moleIndexs) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_BestScore, addr 0x5b80740, size 0x8, virtual false, abstract: false, final false
inline int32_t get_BestScore() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CurrentLevelIndex, addr 0x5b80710, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentLevelIndex() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CurrentScore, addr 0x5b80720, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentScore() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CurrentState, addr 0x5b80700, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::WhackAMole_GameState get_CurrentState() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_GameEndedTime, addr 0x5b807b8, size 0x8, virtual false, abstract: false, final false
inline float_t get_GameEndedTime() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_GameId, addr 0x5b807c8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_GameId() ;

/// [IsReadOnly]
/// @brief Method get_HighScorePlayerName, addr 0x5b7fe14, size 0x48, virtual false, abstract: false, final false
inline ::Fusion::NetworkString_1<::Fusion::_128> get_HighScorePlayerName() ;

/// @brief Method get_PickedMolesIndex, addr 0x5b80150, size 0x14c, virtual false, abstract: false, final false
inline ::Fusion::NetworkDictionary_2<int32_t,int32_t> get_PickedMolesIndex() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_PickedMolesIndexCount, addr 0x5b807d8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PickedMolesIndexCount() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_RemainingTime, addr 0x5b807a8, size 0x8, virtual false, abstract: false, final false
inline float_t get_RemainingTime() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_RightPlayerScore, addr 0x5b80750, size 0x8, virtual false, abstract: false, final false
inline int32_t get_RightPlayerScore() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_TotalScore, addr 0x5b80730, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TotalScore() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// [CompilerGenerated]
/// @brief Method set_BestScore, addr 0x5b80748, size 0x8, virtual false, abstract: false, final false
inline void set_BestScore(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentLevelIndex, addr 0x5b80718, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentLevelIndex(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentScore, addr 0x5b80728, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentScore(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentState, addr 0x5b80708, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentState(::GlobalNamespace::WhackAMole_GameState  value) ;

/// [CompilerGenerated]
/// @brief Method set_GameEndedTime, addr 0x5b807c0, size 0x8, virtual false, abstract: false, final false
inline void set_GameEndedTime(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_GameId, addr 0x5b807d0, size 0x8, virtual false, abstract: false, final false
inline void set_GameId(int32_t  value) ;

/// @brief Method set_HighScorePlayerName, addr 0x5b80760, size 0x48, virtual false, abstract: false, final false
inline void set_HighScorePlayerName(::Fusion::NetworkString_1<::Fusion::_128>  value) ;

/// [CompilerGenerated]
/// @brief Method set_PickedMolesIndexCount, addr 0x5b807e0, size 0x8, virtual false, abstract: false, final false
inline void set_PickedMolesIndexCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_RemainingTime, addr 0x5b807b0, size 0x8, virtual false, abstract: false, final false
inline void set_RemainingTime(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_RightPlayerScore, addr 0x5b80758, size 0x8, virtual false, abstract: false, final false
inline void set_RightPlayerScore(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_TotalScore, addr 0x5b80738, size 0x8, virtual false, abstract: false, final false
inline void set_TotalScore(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr WhackAMole_WhackAMoleData() ;

// Ctor Parameters [CppParam { name: "_CurrentState_k__BackingField", ty: "::GlobalNamespace::WhackAMole_GameState", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CurrentLevelIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CurrentScore_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_TotalScore_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BestScore_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_RightPlayerScore_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_HighScorePlayerName", ty: "::Fusion::CodeGen::FixedStorage@129", modifiers: "", def_value: None, comment: None }, CppParam { name: "_RemainingTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GameEndedTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GameId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_PickedMolesIndexCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_PickedMolesIndex", ty: "::Fusion::CodeGen::FixedStorage@71", modifiers: "", def_value: None, comment: None }]
constexpr WhackAMole_WhackAMoleData(::GlobalNamespace::WhackAMole_GameState  _CurrentState_k__BackingField, int32_t  _CurrentLevelIndex_k__BackingField, int32_t  _CurrentScore_k__BackingField, int32_t  _TotalScore_k__BackingField, int32_t  _BestScore_k__BackingField, int32_t  _RightPlayerScore_k__BackingField, ::Fusion::CodeGen::FixedStorage@129  _HighScorePlayerName, float_t  _RemainingTime_k__BackingField, float_t  _GameEndedTime_k__BackingField, int32_t  _GameId_k__BackingField, int32_t  _PickedMolesIndexCount_k__BackingField, ::Fusion::CodeGen::FixedStorage@71  _PickedMolesIndex) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____CurrentState_k__BackingField_padding[0x0];
/// [CompilerGenerated]
/// @brief Field <CurrentState>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::WhackAMole_GameState  ____CurrentState_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____CurrentState_k__BackingField_padding_forAlignment[0x0];
/// [CompilerGenerated]
/// @brief Field <CurrentState>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::WhackAMole_GameState  ____CurrentState_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ____CurrentLevelIndex_k__BackingField_padding[0x4];
/// [CompilerGenerated]
/// @brief Field <CurrentLevelIndex>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  ____CurrentLevelIndex_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ____CurrentLevelIndex_k__BackingField_padding_forAlignment[0x4];
/// [CompilerGenerated]
/// @brief Field <CurrentLevelIndex>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  ____CurrentLevelIndex_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ____CurrentScore_k__BackingField_padding[0x8];
/// [CompilerGenerated]
/// @brief Field <CurrentScore>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  ____CurrentScore_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ____CurrentScore_k__BackingField_padding_forAlignment[0x8];
/// [CompilerGenerated]
/// @brief Field <CurrentScore>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  ____CurrentScore_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ____TotalScore_k__BackingField_padding[0xc];
/// [CompilerGenerated]
/// @brief Field <TotalScore>k__BackingField, offset: 0xc, size: 0x4, def value: None
 int32_t  ____TotalScore_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ____TotalScore_k__BackingField_padding_forAlignment[0xc];
/// [CompilerGenerated]
/// @brief Field <TotalScore>k__BackingField, offset: 0xc, size: 0x4, def value: None
 int32_t  ____TotalScore_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ____BestScore_k__BackingField_padding[0x10];
/// [CompilerGenerated]
/// @brief Field <BestScore>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____BestScore_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ____BestScore_k__BackingField_padding_forAlignment[0x10];
/// [CompilerGenerated]
/// @brief Field <BestScore>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____BestScore_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x14
 uint8_t  ____RightPlayerScore_k__BackingField_padding[0x14];
/// [CompilerGenerated]
/// @brief Field <RightPlayerScore>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____RightPlayerScore_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x14 for alignment
 uint8_t  ____RightPlayerScore_k__BackingField_padding_forAlignment[0x14];
/// [CompilerGenerated]
/// @brief Field <RightPlayerScore>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____RightPlayerScore_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ____HighScorePlayerName_padding[0x18];
/// [FixedBufferProperty(typeof(Fusion.NetworkString`1<TSize>), typeof(Fusion.CodeGen.UnityValueSurrogate@ReaderWriter@Fusion_NetworkString`1<Fusion__128>), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _HighScorePlayerName, offset: 0x18, size: 0x204, def value: None
 ::Fusion::CodeGen::FixedStorage@129  ____HighScorePlayerName;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ____HighScorePlayerName_padding_forAlignment[0x18];
/// [FixedBufferProperty(typeof(Fusion.NetworkString`1<TSize>), typeof(Fusion.CodeGen.UnityValueSurrogate@ReaderWriter@Fusion_NetworkString`1<Fusion__128>), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _HighScorePlayerName, offset: 0x18, size: 0x204, def value: None
 ::Fusion::CodeGen::FixedStorage@129  ____HighScorePlayerName_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x21c
 uint8_t  ____RemainingTime_k__BackingField_padding[0x21c];
/// [CompilerGenerated]
/// @brief Field <RemainingTime>k__BackingField, offset: 0x21c, size: 0x4, def value: None
 float_t  ____RemainingTime_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x21c for alignment
 uint8_t  ____RemainingTime_k__BackingField_padding_forAlignment[0x21c];
/// [CompilerGenerated]
/// @brief Field <RemainingTime>k__BackingField, offset: 0x21c, size: 0x4, def value: None
 float_t  ____RemainingTime_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x220
 uint8_t  ____GameEndedTime_k__BackingField_padding[0x220];
/// [CompilerGenerated]
/// @brief Field <GameEndedTime>k__BackingField, offset: 0x220, size: 0x4, def value: None
 float_t  ____GameEndedTime_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x220 for alignment
 uint8_t  ____GameEndedTime_k__BackingField_padding_forAlignment[0x220];
/// [CompilerGenerated]
/// @brief Field <GameEndedTime>k__BackingField, offset: 0x220, size: 0x4, def value: None
 float_t  ____GameEndedTime_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x224
 uint8_t  ____GameId_k__BackingField_padding[0x224];
/// [CompilerGenerated]
/// @brief Field <GameId>k__BackingField, offset: 0x224, size: 0x4, def value: None
 int32_t  ____GameId_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x224 for alignment
 uint8_t  ____GameId_k__BackingField_padding_forAlignment[0x224];
/// [CompilerGenerated]
/// @brief Field <GameId>k__BackingField, offset: 0x224, size: 0x4, def value: None
 int32_t  ____GameId_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x228
 uint8_t  ____PickedMolesIndexCount_k__BackingField_padding[0x228];
/// [CompilerGenerated]
/// @brief Field <PickedMolesIndexCount>k__BackingField, offset: 0x228, size: 0x4, def value: None
 int32_t  ____PickedMolesIndexCount_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x228 for alignment
 uint8_t  ____PickedMolesIndexCount_k__BackingField_padding_forAlignment[0x228];
/// [CompilerGenerated]
/// @brief Field <PickedMolesIndexCount>k__BackingField, offset: 0x228, size: 0x4, def value: None
 int32_t  ____PickedMolesIndexCount_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x22c
 uint8_t  ____PickedMolesIndex_padding[0x22c];
/// [FixedBufferProperty(typeof(Fusion.NetworkDictionary`2<K, V>), typeof(Fusion.CodeGen.UnityDictionarySurrogate@ElementReaderWriterInt32@ElementReaderWriterInt32), 17, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _PickedMolesIndex, offset: 0x22c, size: 0x11c, def value: None
 ::Fusion::CodeGen::FixedStorage@71  ____PickedMolesIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x22c for alignment
 uint8_t  ____PickedMolesIndex_padding_forAlignment[0x22c];
/// [FixedBufferProperty(typeof(Fusion.NetworkDictionary`2<K, V>), typeof(Fusion.CodeGen.UnityDictionarySurrogate@ElementReaderWriterInt32@ElementReaderWriterInt32), 17, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _PickedMolesIndex, offset: 0x22c, size: 0x11c, def value: None
 ::Fusion::CodeGen::FixedStorage@71  ____PickedMolesIndex_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3911};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x348};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::WhackAMole_WhackAMoleData) == 0x348, "Size mismatch!");

} // namespace end def GlobalNamespace
