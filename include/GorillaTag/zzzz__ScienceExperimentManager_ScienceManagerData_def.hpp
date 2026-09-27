#pragma once
// IWYU pragma private; include "GorillaTag/ScienceExperimentManager_ScienceManagerData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@10_def.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@18_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScienceExperimentManager_ScienceManagerData)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
template<typename T>
struct NetworkArray_1;
}
namespace Fusion {
template<typename T>
struct NetworkLinkedList_1;
}
namespace GlobalNamespace {
struct ScienceExperimentManager_PlayerGameState;
}
namespace GlobalNamespace {
struct ScienceExperimentManager_RotatingRingState;
}
// Forward declare root types
namespace GlobalNamespace {
struct ScienceExperimentManager_ScienceManagerData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScienceExperimentManager_ScienceManagerData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScienceExperimentManager_ScienceManagerData, "GorillaTag", "ScienceExperimentManager/ScienceManagerData");
// [NetworkStructWeaved(76)]
// Dependencies Fusion.CodeGen.FixedStorage@10, Fusion.CodeGen.FixedStorage@18
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.ScienceExperimentManager/ScienceManagerData
#pragma pack(push, 0)
struct CORDL_TYPE ScienceExperimentManager_ScienceManagerData {
public:
// Declarations
/// @brief Field _initialAngleArray, offset 0xa0, size 0x48 
 __declspec(property(get=__cordl_internal_get__initialAngleArray, put=__cordl_internal_set__initialAngleArray)) ::Fusion::CodeGen::FixedStorage@18  _initialAngleArray;

/// @brief Field _playerIdArray, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get__playerIdArray, put=__cordl_internal_set__playerIdArray)) ::Fusion::CodeGen::FixedStorage@10  _playerIdArray;

/// @brief Field _resultingAngleArray, offset 0xe8, size 0x48 
 __declspec(property(get=__cordl_internal_get__resultingAngleArray, put=__cordl_internal_set__resultingAngleArray)) ::Fusion::CodeGen::FixedStorage@18  _resultingAngleArray;

/// @brief Field _touchedLiquidArray, offset 0x50, size 0x28 
 __declspec(property(get=__cordl_internal_get__touchedLiquidArray, put=__cordl_internal_set__touchedLiquidArray)) ::Fusion::CodeGen::FixedStorage@10  _touchedLiquidArray;

/// @brief Field _touchedLiquidAtProgressArray, offset 0x78, size 0x28 
 __declspec(property(get=__cordl_internal_get__touchedLiquidAtProgressArray, put=__cordl_internal_set__touchedLiquidAtProgressArray)) ::Fusion::CodeGen::FixedStorage@10  _touchedLiquidAtProgressArray;

/// @brief Field activationProgress, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_activationProgress, put=__cordl_internal_set_activationProgress)) double_t  activationProgress;

/// @brief Field inGamePlayerCount, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_inGamePlayerCount, put=__cordl_internal_set_inGamePlayerCount)) int32_t  inGamePlayerCount;

/// [Networked]
/// [Capacity(5)]
/// [NetworkedWeavedLinkedList(5, 1, typeof(Fusion.ElementReaderWriterSingle))]
/// @brief [NetworkedWeaved(40, 18)]
 __declspec(property(get=get_initialAngleArray)) ::Fusion::NetworkLinkedList_1<float_t>  initialAngleArray;

/// @brief Field lastWinnerId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastWinnerId, put=__cordl_internal_set_lastWinnerId)) int32_t  lastWinnerId;

/// @brief Field nextRoundRiseSpeed, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextRoundRiseSpeed, put=__cordl_internal_set_nextRoundRiseSpeed)) int32_t  nextRoundRiseSpeed;

/// [Networked]
/// [Capacity(10)]
/// [NetworkedWeavedArray(10, 1, typeof(Fusion.ElementReaderWriterInt32))]
/// @brief [NetworkedWeaved(10, 10)]
 __declspec(property(get=get_playerIdArray)) ::Fusion::NetworkArray_1<int32_t>  playerIdArray;

/// @brief Field reliableState, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_reliableState, put=__cordl_internal_set_reliableState)) int32_t  reliableState;

/// [Networked]
/// [Capacity(5)]
/// [NetworkedWeavedLinkedList(5, 1, typeof(Fusion.ElementReaderWriterSingle))]
/// @brief [NetworkedWeaved(58, 18)]
 __declspec(property(get=get_resultingAngleArray)) ::Fusion::NetworkLinkedList_1<float_t>  resultingAngleArray;

/// @brief Field riseTime, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_riseTime, put=__cordl_internal_set_riseTime)) float_t  riseTime;

/// @brief Field stateStartLiquidProgressLinear, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_stateStartLiquidProgressLinear, put=__cordl_internal_set_stateStartLiquidProgressLinear)) float_t  stateStartLiquidProgressLinear;

/// @brief Field stateStartTime, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateStartTime, put=__cordl_internal_set_stateStartTime)) double_t  stateStartTime;

/// [Networked]
/// [Capacity(10)]
/// [NetworkedWeavedArray(10, 1, typeof(ElementReaderWriterBoolean))]
/// @brief [NetworkedWeaved(20, 10)]
 __declspec(property(get=get_touchedLiquidArray)) ::Fusion::NetworkArray_1<bool>  touchedLiquidArray;

/// [Networked]
/// [Capacity(10)]
/// [NetworkedWeavedArray(10, 1, typeof(Fusion.ElementReaderWriterSingle))]
/// @brief [NetworkedWeaved(30, 10)]
 __declspec(property(get=get_touchedLiquidAtProgressArray)) ::Fusion::NetworkArray_1<float_t>  touchedLiquidAtProgressArray;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr ::Fusion::CodeGen::FixedStorage@18 const& __cordl_internal_get__initialAngleArray() const;

constexpr ::Fusion::CodeGen::FixedStorage@18& __cordl_internal_get__initialAngleArray() ;

constexpr ::Fusion::CodeGen::FixedStorage@10 const& __cordl_internal_get__playerIdArray() const;

constexpr ::Fusion::CodeGen::FixedStorage@10& __cordl_internal_get__playerIdArray() ;

constexpr ::Fusion::CodeGen::FixedStorage@18 const& __cordl_internal_get__resultingAngleArray() const;

constexpr ::Fusion::CodeGen::FixedStorage@18& __cordl_internal_get__resultingAngleArray() ;

constexpr ::Fusion::CodeGen::FixedStorage@10 const& __cordl_internal_get__touchedLiquidArray() const;

constexpr ::Fusion::CodeGen::FixedStorage@10& __cordl_internal_get__touchedLiquidArray() ;

constexpr ::Fusion::CodeGen::FixedStorage@10 const& __cordl_internal_get__touchedLiquidAtProgressArray() const;

constexpr ::Fusion::CodeGen::FixedStorage@10& __cordl_internal_get__touchedLiquidAtProgressArray() ;

constexpr double_t const& __cordl_internal_get_activationProgress() const;

constexpr double_t& __cordl_internal_get_activationProgress() ;

constexpr int32_t const& __cordl_internal_get_inGamePlayerCount() const;

constexpr int32_t& __cordl_internal_get_inGamePlayerCount() ;

constexpr int32_t const& __cordl_internal_get_lastWinnerId() const;

constexpr int32_t& __cordl_internal_get_lastWinnerId() ;

constexpr int32_t const& __cordl_internal_get_nextRoundRiseSpeed() const;

constexpr int32_t& __cordl_internal_get_nextRoundRiseSpeed() ;

constexpr int32_t const& __cordl_internal_get_reliableState() const;

constexpr int32_t& __cordl_internal_get_reliableState() ;

constexpr float_t const& __cordl_internal_get_riseTime() const;

constexpr float_t& __cordl_internal_get_riseTime() ;

constexpr float_t const& __cordl_internal_get_stateStartLiquidProgressLinear() const;

constexpr float_t& __cordl_internal_get_stateStartLiquidProgressLinear() ;

constexpr double_t const& __cordl_internal_get_stateStartTime() const;

constexpr double_t& __cordl_internal_get_stateStartTime() ;

constexpr void __cordl_internal_set__initialAngleArray(::Fusion::CodeGen::FixedStorage@18  value) ;

constexpr void __cordl_internal_set__playerIdArray(::Fusion::CodeGen::FixedStorage@10  value) ;

constexpr void __cordl_internal_set__resultingAngleArray(::Fusion::CodeGen::FixedStorage@18  value) ;

constexpr void __cordl_internal_set__touchedLiquidArray(::Fusion::CodeGen::FixedStorage@10  value) ;

constexpr void __cordl_internal_set__touchedLiquidAtProgressArray(::Fusion::CodeGen::FixedStorage@10  value) ;

constexpr void __cordl_internal_set_activationProgress(double_t  value) ;

constexpr void __cordl_internal_set_inGamePlayerCount(int32_t  value) ;

constexpr void __cordl_internal_set_lastWinnerId(int32_t  value) ;

constexpr void __cordl_internal_set_nextRoundRiseSpeed(int32_t  value) ;

constexpr void __cordl_internal_set_reliableState(int32_t  value) ;

constexpr void __cordl_internal_set_riseTime(float_t  value) ;

constexpr void __cordl_internal_set_stateStartLiquidProgressLinear(float_t  value) ;

constexpr void __cordl_internal_set_stateStartTime(double_t  value) ;

/// @brief Method .ctor, addr 0x5d31bd8, size 0x348, virtual false, abstract: false, final false
inline void _ctor(int32_t  reliableState, double_t  stateStartTime, float_t  stateStartLiquidProgressLinear, double_t  activationProgress, int32_t  nextRoundRiseSpeed, float_t  riseTime, int32_t  lastWinnerId, int32_t  inGamePlayerCount, ::ArrayW<::GlobalNamespace::ScienceExperimentManager_PlayerGameState>  playerStates, ::ArrayW<::GlobalNamespace::ScienceExperimentManager_RotatingRingState>  rings) ;

/// @brief Method get_initialAngleArray, addr 0x5d31a18, size 0xe0, virtual false, abstract: false, final false
inline ::Fusion::NetworkLinkedList_1<float_t> get_initialAngleArray() ;

/// @brief Method get_playerIdArray, addr 0x5d31778, size 0xe0, virtual false, abstract: false, final false
inline ::Fusion::NetworkArray_1<int32_t> get_playerIdArray() ;

/// @brief Method get_resultingAngleArray, addr 0x5d31af8, size 0xe0, virtual false, abstract: false, final false
inline ::Fusion::NetworkLinkedList_1<float_t> get_resultingAngleArray() ;

/// @brief Method get_touchedLiquidArray, addr 0x5d31858, size 0xe0, virtual false, abstract: false, final false
inline ::Fusion::NetworkArray_1<bool> get_touchedLiquidArray() ;

/// @brief Method get_touchedLiquidAtProgressArray, addr 0x5d31938, size 0xe0, virtual false, abstract: false, final false
inline ::Fusion::NetworkArray_1<float_t> get_touchedLiquidAtProgressArray() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr ScienceExperimentManager_ScienceManagerData() ;

// Ctor Parameters [CppParam { name: "reliableState", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "stateStartTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "stateStartLiquidProgressLinear", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "activationProgress", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "nextRoundRiseSpeed", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "riseTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastWinnerId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "inGamePlayerCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_playerIdArray", ty: "::Fusion::CodeGen::FixedStorage@10", modifiers: "", def_value: None, comment: None }, CppParam { name: "_touchedLiquidArray", ty: "::Fusion::CodeGen::FixedStorage@10", modifiers: "", def_value: None, comment: None }, CppParam { name: "_touchedLiquidAtProgressArray", ty: "::Fusion::CodeGen::FixedStorage@10", modifiers: "", def_value: None, comment: None }, CppParam { name: "_initialAngleArray", ty: "::Fusion::CodeGen::FixedStorage@18", modifiers: "", def_value: None, comment: None }, CppParam { name: "_resultingAngleArray", ty: "::Fusion::CodeGen::FixedStorage@18", modifiers: "", def_value: None, comment: None }]
constexpr ScienceExperimentManager_ScienceManagerData(int32_t  reliableState, double_t  stateStartTime, float_t  stateStartLiquidProgressLinear, double_t  activationProgress, int32_t  nextRoundRiseSpeed, float_t  riseTime, int32_t  lastWinnerId, int32_t  inGamePlayerCount, ::Fusion::CodeGen::FixedStorage@10  _playerIdArray, ::Fusion::CodeGen::FixedStorage@10  _touchedLiquidArray, ::Fusion::CodeGen::FixedStorage@10  _touchedLiquidAtProgressArray, ::Fusion::CodeGen::FixedStorage@18  _initialAngleArray, ::Fusion::CodeGen::FixedStorage@18  _resultingAngleArray) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___reliableState_padding[0x0];
/// @brief Field reliableState, offset: 0x0, size: 0x4, def value: None
 int32_t  ___reliableState;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___reliableState_padding_forAlignment[0x0];
/// @brief Field reliableState, offset: 0x0, size: 0x4, def value: None
 int32_t  ___reliableState_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___stateStartTime_padding[0x8];
/// @brief Field stateStartTime, offset: 0x8, size: 0x8, def value: None
 double_t  ___stateStartTime;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___stateStartTime_padding_forAlignment[0x8];
/// @brief Field stateStartTime, offset: 0x8, size: 0x8, def value: None
 double_t  ___stateStartTime_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___stateStartLiquidProgressLinear_padding[0xc];
/// @brief Field stateStartLiquidProgressLinear, offset: 0xc, size: 0x4, def value: None
 float_t  ___stateStartLiquidProgressLinear;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___stateStartLiquidProgressLinear_padding_forAlignment[0xc];
/// @brief Field stateStartLiquidProgressLinear, offset: 0xc, size: 0x4, def value: None
 float_t  ___stateStartLiquidProgressLinear_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___activationProgress_padding[0x10];
/// @brief Field activationProgress, offset: 0x10, size: 0x8, def value: None
 double_t  ___activationProgress;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___activationProgress_padding_forAlignment[0x10];
/// @brief Field activationProgress, offset: 0x10, size: 0x8, def value: None
 double_t  ___activationProgress_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ___nextRoundRiseSpeed_padding[0x18];
/// @brief Field nextRoundRiseSpeed, offset: 0x18, size: 0x4, def value: None
 int32_t  ___nextRoundRiseSpeed;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ___nextRoundRiseSpeed_padding_forAlignment[0x18];
/// @brief Field nextRoundRiseSpeed, offset: 0x18, size: 0x4, def value: None
 int32_t  ___nextRoundRiseSpeed_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1c
 uint8_t  ___riseTime_padding[0x1c];
/// @brief Field riseTime, offset: 0x1c, size: 0x4, def value: None
 float_t  ___riseTime;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1c for alignment
 uint8_t  ___riseTime_padding_forAlignment[0x1c];
/// @brief Field riseTime, offset: 0x1c, size: 0x4, def value: None
 float_t  ___riseTime_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x20
 uint8_t  ___lastWinnerId_padding[0x20];
/// @brief Field lastWinnerId, offset: 0x20, size: 0x4, def value: None
 int32_t  ___lastWinnerId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x20 for alignment
 uint8_t  ___lastWinnerId_padding_forAlignment[0x20];
/// @brief Field lastWinnerId, offset: 0x20, size: 0x4, def value: None
 int32_t  ___lastWinnerId_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x24
 uint8_t  ___inGamePlayerCount_padding[0x24];
/// @brief Field inGamePlayerCount, offset: 0x24, size: 0x4, def value: None
 int32_t  ___inGamePlayerCount;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x24 for alignment
 uint8_t  ___inGamePlayerCount_padding_forAlignment[0x24];
/// @brief Field inGamePlayerCount, offset: 0x24, size: 0x4, def value: None
 int32_t  ___inGamePlayerCount_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x28
 uint8_t  ____playerIdArray_padding[0x28];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterInt32), 10, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _playerIdArray, offset: 0x28, size: 0x28, def value: None
 ::Fusion::CodeGen::FixedStorage@10  ____playerIdArray;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x28 for alignment
 uint8_t  ____playerIdArray_padding_forAlignment[0x28];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterInt32), 10, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _playerIdArray, offset: 0x28, size: 0x28, def value: None
 ::Fusion::CodeGen::FixedStorage@10  ____playerIdArray_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x50
 uint8_t  ____touchedLiquidArray_padding[0x50];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterBoolean), 10, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _touchedLiquidArray, offset: 0x50, size: 0x28, def value: None
 ::Fusion::CodeGen::FixedStorage@10  ____touchedLiquidArray;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x50 for alignment
 uint8_t  ____touchedLiquidArray_padding_forAlignment[0x50];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterBoolean), 10, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _touchedLiquidArray, offset: 0x50, size: 0x28, def value: None
 ::Fusion::CodeGen::FixedStorage@10  ____touchedLiquidArray_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x78
 uint8_t  ____touchedLiquidAtProgressArray_padding[0x78];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterSingle), 10, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _touchedLiquidAtProgressArray, offset: 0x78, size: 0x28, def value: None
 ::Fusion::CodeGen::FixedStorage@10  ____touchedLiquidAtProgressArray;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x78 for alignment
 uint8_t  ____touchedLiquidAtProgressArray_padding_forAlignment[0x78];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterSingle), 10, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _touchedLiquidAtProgressArray, offset: 0x78, size: 0x28, def value: None
 ::Fusion::CodeGen::FixedStorage@10  ____touchedLiquidAtProgressArray_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xa0
 uint8_t  ____initialAngleArray_padding[0xa0];
/// [FixedBufferProperty(typeof(Fusion.NetworkLinkedList`1<T>), typeof(Fusion.CodeGen.UnityLinkedListSurrogate@ElementReaderWriterSingle), 5, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _initialAngleArray, offset: 0xa0, size: 0x48, def value: None
 ::Fusion::CodeGen::FixedStorage@18  ____initialAngleArray;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xa0 for alignment
 uint8_t  ____initialAngleArray_padding_forAlignment[0xa0];
/// [FixedBufferProperty(typeof(Fusion.NetworkLinkedList`1<T>), typeof(Fusion.CodeGen.UnityLinkedListSurrogate@ElementReaderWriterSingle), 5, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _initialAngleArray, offset: 0xa0, size: 0x48, def value: None
 ::Fusion::CodeGen::FixedStorage@18  ____initialAngleArray_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xe8
 uint8_t  ____resultingAngleArray_padding[0xe8];
/// [FixedBufferProperty(typeof(Fusion.NetworkLinkedList`1<T>), typeof(Fusion.CodeGen.UnityLinkedListSurrogate@ElementReaderWriterSingle), 5, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _resultingAngleArray, offset: 0xe8, size: 0x48, def value: None
 ::Fusion::CodeGen::FixedStorage@18  ____resultingAngleArray;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xe8 for alignment
 uint8_t  ____resultingAngleArray_padding_forAlignment[0xe8];
/// [FixedBufferProperty(typeof(Fusion.NetworkLinkedList`1<T>), typeof(Fusion.CodeGen.UnityLinkedListSurrogate@ElementReaderWriterSingle), 5, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _resultingAngleArray, offset: 0xe8, size: 0x48, def value: None
 ::Fusion::CodeGen::FixedStorage@18  ____resultingAngleArray_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4641};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x130};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ScienceExperimentManager_ScienceManagerData) == 0x130, "Size mismatch!");

} // namespace end def GlobalNamespace
