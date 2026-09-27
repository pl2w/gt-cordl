#pragma once
// IWYU pragma private; include "GorillaTagScripts/FlowersDataStruct.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@6_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FlowersDataStruct)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
template<typename T>
struct NetworkLinkedList_1;
}
namespace GorillaTagScripts {
class Flower;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaTagScripts {
struct FlowersDataStruct;
}
// Write type traits
MARK_VAL_T(::GorillaTagScripts::FlowersDataStruct);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::FlowersDataStruct, "GorillaTagScripts", "FlowersDataStruct");
// [NetworkStructWeaved(13)]
// Dependencies Fusion.CodeGen.FixedStorage@6
namespace GorillaTagScripts {
// Is value type: true
// CS Name: GorillaTagScripts.FlowersDataStruct
#pragma pack(push, 0)
struct CORDL_TYPE FlowersDataStruct {
public:
// Declarations
 __declspec(property(get=get_FlowerCount, put=set_FlowerCount)) int32_t  FlowerCount;

/// [Networked]
/// [NetworkedWeavedLinkedList(1, 1, typeof(Fusion.ElementReaderWriterInt32))]
/// @brief [NetworkedWeaved(7, 6)]
 __declspec(property(get=get_FlowerStateData)) ::Fusion::NetworkLinkedList_1<int32_t>  FlowerStateData;

/// [Networked]
/// [NetworkedWeavedLinkedList(1, 1, typeof(Fusion.ElementReaderWriterByte))]
/// @brief [NetworkedWeaved(1, 6)]
 __declspec(property(get=get_FlowerWateredData)) ::Fusion::NetworkLinkedList_1<uint8_t>  FlowerWateredData;

/// @brief Field <FlowerCount>k__BackingField, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__FlowerCount_k__BackingField, put=__cordl_internal_set__FlowerCount_k__BackingField)) int32_t  _FlowerCount_k__BackingField;

/// @brief Field _FlowerStateData, offset 0x1c, size 0x18 
 __declspec(property(get=__cordl_internal_get__FlowerStateData, put=__cordl_internal_set__FlowerStateData)) ::Fusion::CodeGen::FixedStorage@6  _FlowerStateData;

/// @brief Field _FlowerWateredData, offset 0x4, size 0x18 
 __declspec(property(get=__cordl_internal_get__FlowerWateredData, put=__cordl_internal_set__FlowerWateredData)) ::Fusion::CodeGen::FixedStorage@6  _FlowerWateredData;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr int32_t const& __cordl_internal_get__FlowerCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__FlowerCount_k__BackingField() ;

constexpr ::Fusion::CodeGen::FixedStorage@6 const& __cordl_internal_get__FlowerStateData() const;

constexpr ::Fusion::CodeGen::FixedStorage@6& __cordl_internal_get__FlowerStateData() ;

constexpr ::Fusion::CodeGen::FixedStorage@6 const& __cordl_internal_get__FlowerWateredData() const;

constexpr ::Fusion::CodeGen::FixedStorage@6& __cordl_internal_get__FlowerWateredData() ;

constexpr void __cordl_internal_set__FlowerCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__FlowerStateData(::Fusion::CodeGen::FixedStorage@6  value) ;

constexpr void __cordl_internal_set__FlowerWateredData(::Fusion::CodeGen::FixedStorage@6  value) ;

/// @brief Method .ctor, addr 0x5bbb5a4, size 0x1ec, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>*  allFlowers) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_FlowerCount, addr 0x5bbbe94, size 0x8, virtual false, abstract: false, final false
inline int32_t get_FlowerCount() ;

/// @brief Method get_FlowerStateData, addr 0x5bbbae4, size 0xe0, virtual false, abstract: false, final false
inline ::Fusion::NetworkLinkedList_1<int32_t> get_FlowerStateData() ;

/// @brief Method get_FlowerWateredData, addr 0x5bbba04, size 0xe0, virtual false, abstract: false, final false
inline ::Fusion::NetworkLinkedList_1<uint8_t> get_FlowerWateredData() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// [CompilerGenerated]
/// @brief Method set_FlowerCount, addr 0x5bbbe9c, size 0x8, virtual false, abstract: false, final false
inline void set_FlowerCount(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FlowersDataStruct() ;

// Ctor Parameters [CppParam { name: "_FlowerCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_FlowerWateredData", ty: "::Fusion::CodeGen::FixedStorage@6", modifiers: "", def_value: None, comment: None }, CppParam { name: "_FlowerStateData", ty: "::Fusion::CodeGen::FixedStorage@6", modifiers: "", def_value: None, comment: None }]
constexpr FlowersDataStruct(int32_t  _FlowerCount_k__BackingField, ::Fusion::CodeGen::FixedStorage@6  _FlowerWateredData, ::Fusion::CodeGen::FixedStorage@6  _FlowerStateData) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____FlowerCount_k__BackingField_padding[0x0];
/// [CompilerGenerated]
/// @brief Field <FlowerCount>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  ____FlowerCount_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____FlowerCount_k__BackingField_padding_forAlignment[0x0];
/// [CompilerGenerated]
/// @brief Field <FlowerCount>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  ____FlowerCount_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ____FlowerWateredData_padding[0x4];
/// [FixedBufferProperty(typeof(Fusion.NetworkLinkedList`1<T>), typeof(Fusion.CodeGen.UnityLinkedListSurrogate@ElementReaderWriterByte), 1, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _FlowerWateredData, offset: 0x4, size: 0x18, def value: None
 ::Fusion::CodeGen::FixedStorage@6  ____FlowerWateredData;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ____FlowerWateredData_padding_forAlignment[0x4];
/// [FixedBufferProperty(typeof(Fusion.NetworkLinkedList`1<T>), typeof(Fusion.CodeGen.UnityLinkedListSurrogate@ElementReaderWriterByte), 1, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _FlowerWateredData, offset: 0x4, size: 0x18, def value: None
 ::Fusion::CodeGen::FixedStorage@6  ____FlowerWateredData_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1c
 uint8_t  ____FlowerStateData_padding[0x1c];
/// [FixedBufferProperty(typeof(Fusion.NetworkLinkedList`1<T>), typeof(Fusion.CodeGen.UnityLinkedListSurrogate@ElementReaderWriterInt32), 1, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _FlowerStateData, offset: 0x1c, size: 0x18, def value: None
 ::Fusion::CodeGen::FixedStorage@6  ____FlowerStateData;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1c for alignment
 uint8_t  ____FlowerStateData_padding_forAlignment[0x1c];
/// [FixedBufferProperty(typeof(Fusion.NetworkLinkedList`1<T>), typeof(Fusion.CodeGen.UnityLinkedListSurrogate@ElementReaderWriterInt32), 1, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _FlowerStateData, offset: 0x1c, size: 0x18, def value: None
 ::Fusion::CodeGen::FixedStorage@6  ____FlowerStateData_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3976};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x34};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::FlowersDataStruct) == 0x34, "Size mismatch!");

} // namespace end def GorillaTagScripts
