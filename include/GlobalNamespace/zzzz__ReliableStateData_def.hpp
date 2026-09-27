#pragma once
// IWYU pragma private; include "GlobalNamespace/ReliableStateData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@10_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReliableStateData)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
template<typename T>
struct NetworkArray_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct ReliableStateData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ReliableStateData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ReliableStateData, "", "ReliableStateData");
// [NetworkStructWeaved(21)]
// Dependencies Fusion.CodeGen.FixedStorage@10
namespace GlobalNamespace {
// Is value type: true
// CS Name: ReliableStateData
#pragma pack(push, 0)
struct CORDL_TYPE ReliableStateData {
public:
// Declarations
 __declspec(property(get=get_Header, put=set_Header)) int64_t  Header;

 __declspec(property(get=get_LThrowableProjectileIndex, put=set_LThrowableProjectileIndex)) int32_t  LThrowableProjectileIndex;

 __declspec(property(get=get_PackedBeads, put=set_PackedBeads)) int64_t  PackedBeads;

 __declspec(property(get=get_PackedBeadsMoreThan6, put=set_PackedBeadsMoreThan6)) int64_t  PackedBeadsMoreThan6;

 __declspec(property(get=get_RThrowableProjectileIndex, put=set_RThrowableProjectileIndex)) int32_t  RThrowableProjectileIndex;

 __declspec(property(get=get_RandomThrowableIndex, put=set_RandomThrowableIndex)) int32_t  RandomThrowableIndex;

 __declspec(property(get=get_SizeLayerMask, put=set_SizeLayerMask)) int32_t  SizeLayerMask;

/// [Networked]
/// [Capacity(5)]
/// [NetworkedWeavedArray(5, 2, typeof(Fusion.ElementReaderWriterInt64))]
/// @brief [NetworkedWeaved(11, 10)]
 __declspec(property(get=get_TransferrableStates)) ::Fusion::NetworkArray_1<int64_t>  TransferrableStates;

 __declspec(property(get=get_WearablesPackedState, put=set_WearablesPackedState)) int32_t  WearablesPackedState;

/// @brief Field <Header>k__BackingField, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Header_k__BackingField, put=__cordl_internal_set__Header_k__BackingField)) int64_t  _Header_k__BackingField;

/// @brief Field <LThrowableProjectileIndex>k__BackingField, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get__LThrowableProjectileIndex_k__BackingField, put=__cordl_internal_set__LThrowableProjectileIndex_k__BackingField)) int32_t  _LThrowableProjectileIndex_k__BackingField;

/// @brief Field <PackedBeadsMoreThan6>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__PackedBeadsMoreThan6_k__BackingField, put=__cordl_internal_set__PackedBeadsMoreThan6_k__BackingField)) int64_t  _PackedBeadsMoreThan6_k__BackingField;

/// @brief Field <PackedBeads>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__PackedBeads_k__BackingField, put=__cordl_internal_set__PackedBeads_k__BackingField)) int64_t  _PackedBeads_k__BackingField;

/// @brief Field <RThrowableProjectileIndex>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__RThrowableProjectileIndex_k__BackingField, put=__cordl_internal_set__RThrowableProjectileIndex_k__BackingField)) int32_t  _RThrowableProjectileIndex_k__BackingField;

/// @brief Field <RandomThrowableIndex>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__RandomThrowableIndex_k__BackingField, put=__cordl_internal_set__RandomThrowableIndex_k__BackingField)) int32_t  _RandomThrowableIndex_k__BackingField;

/// @brief Field <SizeLayerMask>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__SizeLayerMask_k__BackingField, put=__cordl_internal_set__SizeLayerMask_k__BackingField)) int32_t  _SizeLayerMask_k__BackingField;

/// @brief Field _TransferrableStates, offset 0x2c, size 0x28 
 __declspec(property(get=__cordl_internal_get__TransferrableStates, put=__cordl_internal_set__TransferrableStates)) ::Fusion::CodeGen::FixedStorage@10  _TransferrableStates;

/// @brief Field <WearablesPackedState>k__BackingField, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get__WearablesPackedState_k__BackingField, put=__cordl_internal_set__WearablesPackedState_k__BackingField)) int32_t  _WearablesPackedState_k__BackingField;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr int64_t const& __cordl_internal_get__Header_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__Header_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__LThrowableProjectileIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__LThrowableProjectileIndex_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__PackedBeadsMoreThan6_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__PackedBeadsMoreThan6_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__PackedBeads_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__PackedBeads_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__RThrowableProjectileIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__RThrowableProjectileIndex_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__RandomThrowableIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__RandomThrowableIndex_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__SizeLayerMask_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__SizeLayerMask_k__BackingField() ;

constexpr ::Fusion::CodeGen::FixedStorage@10 const& __cordl_internal_get__TransferrableStates() const;

constexpr ::Fusion::CodeGen::FixedStorage@10& __cordl_internal_get__TransferrableStates() ;

constexpr int32_t const& __cordl_internal_get__WearablesPackedState_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__WearablesPackedState_k__BackingField() ;

constexpr void __cordl_internal_set__Header_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__LThrowableProjectileIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__PackedBeadsMoreThan6_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__PackedBeads_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__RThrowableProjectileIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__RandomThrowableIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__SizeLayerMask_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__TransferrableStates(::Fusion::CodeGen::FixedStorage@10  value) ;

constexpr void __cordl_internal_set__WearablesPackedState_k__BackingField(int32_t  value) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Header, addr 0x5748314, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Header() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_LThrowableProjectileIndex, addr 0x5748414, size 0x8, virtual false, abstract: false, final false
inline int32_t get_LThrowableProjectileIndex() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_PackedBeads, addr 0x5748454, size 0x8, virtual false, abstract: false, final false
inline int64_t get_PackedBeads() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_PackedBeadsMoreThan6, addr 0x5748464, size 0x8, virtual false, abstract: false, final false
inline int64_t get_PackedBeadsMoreThan6() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_RThrowableProjectileIndex, addr 0x5748424, size 0x8, virtual false, abstract: false, final false
inline int32_t get_RThrowableProjectileIndex() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_RandomThrowableIndex, addr 0x5748444, size 0x8, virtual false, abstract: false, final false
inline int32_t get_RandomThrowableIndex() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_SizeLayerMask, addr 0x5748434, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SizeLayerMask() ;

/// @brief Method get_TransferrableStates, addr 0x5748324, size 0xe0, virtual false, abstract: false, final false
inline ::Fusion::NetworkArray_1<int64_t> get_TransferrableStates() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_WearablesPackedState, addr 0x5748404, size 0x8, virtual false, abstract: false, final false
inline int32_t get_WearablesPackedState() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// [CompilerGenerated]
/// @brief Method set_Header, addr 0x574831c, size 0x8, virtual false, abstract: false, final false
inline void set_Header(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_LThrowableProjectileIndex, addr 0x574841c, size 0x8, virtual false, abstract: false, final false
inline void set_LThrowableProjectileIndex(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_PackedBeads, addr 0x574845c, size 0x8, virtual false, abstract: false, final false
inline void set_PackedBeads(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_PackedBeadsMoreThan6, addr 0x574846c, size 0x8, virtual false, abstract: false, final false
inline void set_PackedBeadsMoreThan6(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_RThrowableProjectileIndex, addr 0x574842c, size 0x8, virtual false, abstract: false, final false
inline void set_RThrowableProjectileIndex(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_RandomThrowableIndex, addr 0x574844c, size 0x8, virtual false, abstract: false, final false
inline void set_RandomThrowableIndex(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_SizeLayerMask, addr 0x574843c, size 0x8, virtual false, abstract: false, final false
inline void set_SizeLayerMask(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_WearablesPackedState, addr 0x574840c, size 0x8, virtual false, abstract: false, final false
inline void set_WearablesPackedState(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReliableStateData() ;

// Ctor Parameters [CppParam { name: "_Header_k__BackingField", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WearablesPackedState_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LThrowableProjectileIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_RThrowableProjectileIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SizeLayerMask_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_RandomThrowableIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_PackedBeads_k__BackingField", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_PackedBeadsMoreThan6_k__BackingField", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_TransferrableStates", ty: "::Fusion::CodeGen::FixedStorage@10", modifiers: "", def_value: None, comment: None }]
constexpr ReliableStateData(int64_t  _Header_k__BackingField, int32_t  _WearablesPackedState_k__BackingField, int32_t  _LThrowableProjectileIndex_k__BackingField, int32_t  _RThrowableProjectileIndex_k__BackingField, int32_t  _SizeLayerMask_k__BackingField, int32_t  _RandomThrowableIndex_k__BackingField, int64_t  _PackedBeads_k__BackingField, int64_t  _PackedBeadsMoreThan6_k__BackingField, ::Fusion::CodeGen::FixedStorage@10  _TransferrableStates) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____Header_k__BackingField_padding[0x0];
/// [CompilerGenerated]
/// @brief Field <Header>k__BackingField, offset: 0x0, size: 0x8, def value: None
 int64_t  ____Header_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____Header_k__BackingField_padding_forAlignment[0x0];
/// [CompilerGenerated]
/// @brief Field <Header>k__BackingField, offset: 0x0, size: 0x8, def value: None
 int64_t  ____Header_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ____WearablesPackedState_k__BackingField_padding[0x8];
/// [CompilerGenerated]
/// @brief Field <WearablesPackedState>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  ____WearablesPackedState_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ____WearablesPackedState_k__BackingField_padding_forAlignment[0x8];
/// [CompilerGenerated]
/// @brief Field <WearablesPackedState>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  ____WearablesPackedState_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ____LThrowableProjectileIndex_k__BackingField_padding[0xc];
/// [CompilerGenerated]
/// @brief Field <LThrowableProjectileIndex>k__BackingField, offset: 0xc, size: 0x4, def value: None
 int32_t  ____LThrowableProjectileIndex_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ____LThrowableProjectileIndex_k__BackingField_padding_forAlignment[0xc];
/// [CompilerGenerated]
/// @brief Field <LThrowableProjectileIndex>k__BackingField, offset: 0xc, size: 0x4, def value: None
 int32_t  ____LThrowableProjectileIndex_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ____RThrowableProjectileIndex_k__BackingField_padding[0x10];
/// [CompilerGenerated]
/// @brief Field <RThrowableProjectileIndex>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____RThrowableProjectileIndex_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ____RThrowableProjectileIndex_k__BackingField_padding_forAlignment[0x10];
/// [CompilerGenerated]
/// @brief Field <RThrowableProjectileIndex>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____RThrowableProjectileIndex_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x14
 uint8_t  ____SizeLayerMask_k__BackingField_padding[0x14];
/// [CompilerGenerated]
/// @brief Field <SizeLayerMask>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____SizeLayerMask_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x14 for alignment
 uint8_t  ____SizeLayerMask_k__BackingField_padding_forAlignment[0x14];
/// [CompilerGenerated]
/// @brief Field <SizeLayerMask>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____SizeLayerMask_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ____RandomThrowableIndex_k__BackingField_padding[0x18];
/// [CompilerGenerated]
/// @brief Field <RandomThrowableIndex>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____RandomThrowableIndex_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ____RandomThrowableIndex_k__BackingField_padding_forAlignment[0x18];
/// [CompilerGenerated]
/// @brief Field <RandomThrowableIndex>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____RandomThrowableIndex_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x20
 uint8_t  ____PackedBeads_k__BackingField_padding[0x20];
/// [CompilerGenerated]
/// @brief Field <PackedBeads>k__BackingField, offset: 0x20, size: 0x8, def value: None
 int64_t  ____PackedBeads_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x20 for alignment
 uint8_t  ____PackedBeads_k__BackingField_padding_forAlignment[0x20];
/// [CompilerGenerated]
/// @brief Field <PackedBeads>k__BackingField, offset: 0x20, size: 0x8, def value: None
 int64_t  ____PackedBeads_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x28
 uint8_t  ____PackedBeadsMoreThan6_k__BackingField_padding[0x28];
/// [CompilerGenerated]
/// @brief Field <PackedBeadsMoreThan6>k__BackingField, offset: 0x28, size: 0x8, def value: None
 int64_t  ____PackedBeadsMoreThan6_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x28 for alignment
 uint8_t  ____PackedBeadsMoreThan6_k__BackingField_padding_forAlignment[0x28];
/// [CompilerGenerated]
/// @brief Field <PackedBeadsMoreThan6>k__BackingField, offset: 0x28, size: 0x8, def value: None
 int64_t  ____PackedBeadsMoreThan6_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2c
 uint8_t  ____TransferrableStates_padding[0x2c];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterInt64), 5, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _TransferrableStates, offset: 0x2c, size: 0x28, def value: None
 ::Fusion::CodeGen::FixedStorage@10  ____TransferrableStates;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2c for alignment
 uint8_t  ____TransferrableStates_padding_forAlignment[0x2c];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterInt64), 5, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _TransferrableStates, offset: 0x2c, size: 0x28, def value: None
 ::Fusion::CodeGen::FixedStorage@10  ____TransferrableStates_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1281};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x54};

/// @brief Size padding 0x54 - 0x58 = 0x4, packed as 0x4
 uint8_t  _cordl_size_padding[0x4];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ReliableStateData) == 0x54, "Size mismatch!");

} // namespace end def GlobalNamespace
