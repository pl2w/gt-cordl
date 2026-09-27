#pragma once
// IWYU pragma private; include "GlobalNamespace/FlockingData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@153_def.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@183_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FlockingData)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
template<typename T>
struct NetworkLinkedList_1;
}
namespace GlobalNamespace {
class Flocking;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct FlockingData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FlockingData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FlockingData, "", "FlockingData");
// [NetworkStructWeaved(337)]
// Dependencies Fusion.CodeGen.FixedStorage@153, Fusion.CodeGen.FixedStorage@183
namespace GlobalNamespace {
// Is value type: true
// CS Name: FlockingData
#pragma pack(push, 0)
struct CORDL_TYPE FlockingData {
public:
// Declarations
/// [Networked]
/// [Capacity(30)]
/// [NetworkedWeavedLinkedList(30, 3, typeof(Fusion.ElementReaderWriterVector3))]
/// @brief [NetworkedWeaved(1, 153)]
 __declspec(property(get=get_Positions)) ::Fusion::NetworkLinkedList_1<::UnityEngine::Vector3>  Positions;

/// [Networked]
/// [Capacity(30)]
/// [NetworkedWeavedLinkedList(30, 4, typeof(Fusion.CodeGen.ReaderWriter@UnityEngine_Quaternion))]
/// @brief [NetworkedWeaved(154, 183)]
 __declspec(property(get=get_Rotations)) ::Fusion::NetworkLinkedList_1<::UnityEngine::Quaternion>  Rotations;

/// @brief Field _Positions, offset 0x4, size 0x264 
 __declspec(property(get=__cordl_internal_get__Positions, put=__cordl_internal_set__Positions)) ::Fusion::CodeGen::FixedStorage@153  _Positions;

/// @brief Field _Rotations, offset 0x268, size 0x2dc 
 __declspec(property(get=__cordl_internal_get__Rotations, put=__cordl_internal_set__Rotations)) ::Fusion::CodeGen::FixedStorage@183  _Rotations;

/// @brief Field <count>k__BackingField, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__count_k__BackingField, put=__cordl_internal_set__count_k__BackingField)) int32_t  _count_k__BackingField;

 __declspec(property(get=get_count, put=set_count)) int32_t  count;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr ::Fusion::CodeGen::FixedStorage@153 const& __cordl_internal_get__Positions() const;

constexpr ::Fusion::CodeGen::FixedStorage@153& __cordl_internal_get__Positions() ;

constexpr ::Fusion::CodeGen::FixedStorage@183 const& __cordl_internal_get__Rotations() const;

constexpr ::Fusion::CodeGen::FixedStorage@183& __cordl_internal_get__Rotations() ;

constexpr int32_t const& __cordl_internal_get__count_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__count_k__BackingField() ;

constexpr void __cordl_internal_set__Positions(::Fusion::CodeGen::FixedStorage@153  value) ;

constexpr void __cordl_internal_set__Rotations(::Fusion::CodeGen::FixedStorage@183  value) ;

constexpr void __cordl_internal_set__count_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5809b84, size 0x1f4, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*  items) ;

/// @brief Method get_Positions, addr 0x5809fd0, size 0xe0, virtual false, abstract: false, final false
inline ::Fusion::NetworkLinkedList_1<::UnityEngine::Vector3> get_Positions() ;

/// @brief Method get_Rotations, addr 0x580a0b0, size 0x7c, virtual false, abstract: false, final false
inline ::Fusion::NetworkLinkedList_1<::UnityEngine::Quaternion> get_Rotations() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_count, addr 0x580a53c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_count() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// [CompilerGenerated]
/// @brief Method set_count, addr 0x580a544, size 0x8, virtual false, abstract: false, final false
inline void set_count(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FlockingData() ;

// Ctor Parameters [CppParam { name: "_count_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Positions", ty: "::Fusion::CodeGen::FixedStorage@153", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Rotations", ty: "::Fusion::CodeGen::FixedStorage@183", modifiers: "", def_value: None, comment: None }]
constexpr FlockingData(int32_t  _count_k__BackingField, ::Fusion::CodeGen::FixedStorage@153  _Positions, ::Fusion::CodeGen::FixedStorage@183  _Rotations) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____count_k__BackingField_padding[0x0];
/// [CompilerGenerated]
/// @brief Field <count>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  ____count_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____count_k__BackingField_padding_forAlignment[0x0];
/// [CompilerGenerated]
/// @brief Field <count>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  ____count_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ____Positions_padding[0x4];
/// [FixedBufferProperty(typeof(Fusion.NetworkLinkedList`1<T>), typeof(Fusion.CodeGen.UnityLinkedListSurrogate@ElementReaderWriterVector3), 30, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _Positions, offset: 0x4, size: 0x264, def value: None
 ::Fusion::CodeGen::FixedStorage@153  ____Positions;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ____Positions_padding_forAlignment[0x4];
/// [FixedBufferProperty(typeof(Fusion.NetworkLinkedList`1<T>), typeof(Fusion.CodeGen.UnityLinkedListSurrogate@ElementReaderWriterVector3), 30, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _Positions, offset: 0x4, size: 0x264, def value: None
 ::Fusion::CodeGen::FixedStorage@153  ____Positions_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x268
 uint8_t  ____Rotations_padding[0x268];
/// [FixedBufferProperty(typeof(Fusion.NetworkLinkedList`1<T>), typeof(Fusion.CodeGen.UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion), 30, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _Rotations, offset: 0x268, size: 0x2dc, def value: None
 ::Fusion::CodeGen::FixedStorage@183  ____Rotations;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x268 for alignment
 uint8_t  ____Rotations_padding_forAlignment[0x268];
/// [FixedBufferProperty(typeof(Fusion.NetworkLinkedList`1<T>), typeof(Fusion.CodeGen.UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion), 30, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _Rotations, offset: 0x268, size: 0x2dc, def value: None
 ::Fusion::CodeGen::FixedStorage@183  ____Rotations_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1701};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x544};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FlockingData) == 0x544, "Size mismatch!");

} // namespace end def GlobalNamespace
