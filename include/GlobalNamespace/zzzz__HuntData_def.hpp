#pragma once
// IWYU pragma private; include "GlobalNamespace/HuntData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@20_def.hpp"
#include "Fusion/zzzz__NetworkBool_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HuntData)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
template<typename T>
struct NetworkArray_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct HuntData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HuntData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HuntData, "", "HuntData");
// [NetworkStructWeaved(43)]
// Dependencies Fusion.CodeGen.FixedStorage@20, Fusion.NetworkBool
namespace GlobalNamespace {
// Is value type: true
// CS Name: HuntData
#pragma pack(push, 0)
struct CORDL_TYPE HuntData {
public:
// Declarations
/// @brief Field _currentHuntedArray, offset 0xc, size 0x50 
 __declspec(property(get=__cordl_internal_get__currentHuntedArray, put=__cordl_internal_set__currentHuntedArray)) ::Fusion::CodeGen::FixedStorage@20  _currentHuntedArray;

/// @brief Field _currentTargetArray, offset 0x5c, size 0x50 
 __declspec(property(get=__cordl_internal_get__currentTargetArray, put=__cordl_internal_set__currentTargetArray)) ::Fusion::CodeGen::FixedStorage@20  _currentTargetArray;

/// @brief Field countDownTime, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_countDownTime, put=__cordl_internal_set_countDownTime)) int32_t  countDownTime;

/// [Networked]
/// [Capacity(20)]
/// [NetworkedWeavedArray(20, 1, typeof(Fusion.ElementReaderWriterInt32))]
/// @brief [NetworkedWeaved(3, 20)]
 __declspec(property(get=get_currentHuntedArray)) ::Fusion::NetworkArray_1<int32_t>  currentHuntedArray;

/// [Networked]
/// [Capacity(20)]
/// [NetworkedWeavedArray(20, 1, typeof(Fusion.ElementReaderWriterInt32))]
/// @brief [NetworkedWeaved(23, 20)]
 __declspec(property(get=get_currentTargetArray)) ::Fusion::NetworkArray_1<int32_t>  currentTargetArray;

/// @brief Field huntStarted, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_huntStarted, put=__cordl_internal_set_huntStarted)) ::Fusion::NetworkBool  huntStarted;

/// @brief Field waitingToStartNextHuntGame, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_waitingToStartNextHuntGame, put=__cordl_internal_set_waitingToStartNextHuntGame)) ::Fusion::NetworkBool  waitingToStartNextHuntGame;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr ::Fusion::CodeGen::FixedStorage@20 const& __cordl_internal_get__currentHuntedArray() const;

constexpr ::Fusion::CodeGen::FixedStorage@20& __cordl_internal_get__currentHuntedArray() ;

constexpr ::Fusion::CodeGen::FixedStorage@20 const& __cordl_internal_get__currentTargetArray() const;

constexpr ::Fusion::CodeGen::FixedStorage@20& __cordl_internal_get__currentTargetArray() ;

constexpr int32_t const& __cordl_internal_get_countDownTime() const;

constexpr int32_t& __cordl_internal_get_countDownTime() ;

constexpr ::Fusion::NetworkBool const& __cordl_internal_get_huntStarted() const;

constexpr ::Fusion::NetworkBool& __cordl_internal_get_huntStarted() ;

constexpr ::Fusion::NetworkBool const& __cordl_internal_get_waitingToStartNextHuntGame() const;

constexpr ::Fusion::NetworkBool& __cordl_internal_get_waitingToStartNextHuntGame() ;

constexpr void __cordl_internal_set__currentHuntedArray(::Fusion::CodeGen::FixedStorage@20  value) ;

constexpr void __cordl_internal_set__currentTargetArray(::Fusion::CodeGen::FixedStorage@20  value) ;

constexpr void __cordl_internal_set_countDownTime(int32_t  value) ;

constexpr void __cordl_internal_set_huntStarted(::Fusion::NetworkBool  value) ;

constexpr void __cordl_internal_set_waitingToStartNextHuntGame(::Fusion::NetworkBool  value) ;

/// @brief Method get_currentHuntedArray, addr 0x579bf48, size 0xe0, virtual false, abstract: false, final false
inline ::Fusion::NetworkArray_1<int32_t> get_currentHuntedArray() ;

/// @brief Method get_currentTargetArray, addr 0x579c028, size 0xe0, virtual false, abstract: false, final false
inline ::Fusion::NetworkArray_1<int32_t> get_currentTargetArray() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr HuntData() ;

// Ctor Parameters [CppParam { name: "huntStarted", ty: "::Fusion::NetworkBool", modifiers: "", def_value: None, comment: None }, CppParam { name: "waitingToStartNextHuntGame", ty: "::Fusion::NetworkBool", modifiers: "", def_value: None, comment: None }, CppParam { name: "countDownTime", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_currentHuntedArray", ty: "::Fusion::CodeGen::FixedStorage@20", modifiers: "", def_value: None, comment: None }, CppParam { name: "_currentTargetArray", ty: "::Fusion::CodeGen::FixedStorage@20", modifiers: "", def_value: None, comment: None }]
constexpr HuntData(::Fusion::NetworkBool  huntStarted, ::Fusion::NetworkBool  waitingToStartNextHuntGame, int32_t  countDownTime, ::Fusion::CodeGen::FixedStorage@20  _currentHuntedArray, ::Fusion::CodeGen::FixedStorage@20  _currentTargetArray) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___huntStarted_padding[0x0];
/// @brief Field huntStarted, offset: 0x0, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___huntStarted;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___huntStarted_padding_forAlignment[0x0];
/// @brief Field huntStarted, offset: 0x0, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___huntStarted_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___waitingToStartNextHuntGame_padding[0x4];
/// @brief Field waitingToStartNextHuntGame, offset: 0x4, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___waitingToStartNextHuntGame;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___waitingToStartNextHuntGame_padding_forAlignment[0x4];
/// @brief Field waitingToStartNextHuntGame, offset: 0x4, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___waitingToStartNextHuntGame_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___countDownTime_padding[0x8];
/// @brief Field countDownTime, offset: 0x8, size: 0x4, def value: None
 int32_t  ___countDownTime;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___countDownTime_padding_forAlignment[0x8];
/// @brief Field countDownTime, offset: 0x8, size: 0x4, def value: None
 int32_t  ___countDownTime_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ____currentHuntedArray_padding[0xc];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterInt32), 20, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _currentHuntedArray, offset: 0xc, size: 0x50, def value: None
 ::Fusion::CodeGen::FixedStorage@20  ____currentHuntedArray;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ____currentHuntedArray_padding_forAlignment[0xc];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterInt32), 20, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _currentHuntedArray, offset: 0xc, size: 0x50, def value: None
 ::Fusion::CodeGen::FixedStorage@20  ____currentHuntedArray_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x5c
 uint8_t  ____currentTargetArray_padding[0x5c];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterInt32), 20, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _currentTargetArray, offset: 0x5c, size: 0x50, def value: None
 ::Fusion::CodeGen::FixedStorage@20  ____currentTargetArray;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x5c for alignment
 uint8_t  ____currentTargetArray_padding_forAlignment[0x5c];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterInt32), 20, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _currentTargetArray, offset: 0x5c, size: 0x50, def value: None
 ::Fusion::CodeGen::FixedStorage@20  ____currentTargetArray_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1488};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xac};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HuntData) == 0xac, "Size mismatch!");

} // namespace end def GlobalNamespace
