#pragma once
// IWYU pragma private; include "GlobalNamespace/SkeletonNetData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@3_def.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SkeletonNetData)
namespace Fusion {
class INetworkStruct;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct SkeletonNetData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SkeletonNetData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SkeletonNetData, "", "SkeletonNetData");
// [NetworkStructWeaved(11)]
// Dependencies Fusion.CodeGen.FixedStorage@3, Fusion.CodeGen.FixedStorage@4
namespace GlobalNamespace {
// Is value type: true
// CS Name: SkeletonNetData
#pragma pack(push, 0)
struct CORDL_TYPE SkeletonNetData {
public:
// Declarations
 __declspec(property(get=get_AngerPoint, put=set_AngerPoint)) int32_t  AngerPoint;

 __declspec(property(get=get_CurrentNode, put=set_CurrentNode)) int32_t  CurrentNode;

 __declspec(property(get=get_CurrentState, put=set_CurrentState)) int32_t  CurrentState;

 __declspec(property(get=get_NextNode, put=set_NextNode)) int32_t  NextNode;

/// [Networked]
/// @brief [NetworkedWeaved(1, 3)]
 __declspec(property(get=get_Position, put=set_Position)) ::UnityEngine::Vector3  Position;

/// [Networked]
/// @brief [NetworkedWeaved(4, 4)]
 __declspec(property(get=get_Rotation, put=set_Rotation)) ::UnityEngine::Quaternion  Rotation;

/// @brief Field <AngerPoint>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__AngerPoint_k__BackingField, put=__cordl_internal_set__AngerPoint_k__BackingField)) int32_t  _AngerPoint_k__BackingField;

/// @brief Field <CurrentNode>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentNode_k__BackingField, put=__cordl_internal_set__CurrentNode_k__BackingField)) int32_t  _CurrentNode_k__BackingField;

/// @brief Field <CurrentState>k__BackingField, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentState_k__BackingField, put=__cordl_internal_set__CurrentState_k__BackingField)) int32_t  _CurrentState_k__BackingField;

/// @brief Field <NextNode>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__NextNode_k__BackingField, put=__cordl_internal_set__NextNode_k__BackingField)) int32_t  _NextNode_k__BackingField;

/// @brief Field _Position, offset 0x4, size 0xc 
 __declspec(property(get=__cordl_internal_get__Position, put=__cordl_internal_set__Position)) ::Fusion::CodeGen::FixedStorage@3  _Position;

/// @brief Field _Rotation, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__Rotation, put=__cordl_internal_set__Rotation)) ::Fusion::CodeGen::FixedStorage@4  _Rotation;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr int32_t const& __cordl_internal_get__AngerPoint_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__AngerPoint_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__CurrentNode_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CurrentNode_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__CurrentState_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CurrentState_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__NextNode_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__NextNode_k__BackingField() ;

constexpr ::Fusion::CodeGen::FixedStorage@3 const& __cordl_internal_get__Position() const;

constexpr ::Fusion::CodeGen::FixedStorage@3& __cordl_internal_get__Position() ;

constexpr ::Fusion::CodeGen::FixedStorage@4 const& __cordl_internal_get__Rotation() const;

constexpr ::Fusion::CodeGen::FixedStorage@4& __cordl_internal_get__Rotation() ;

constexpr void __cordl_internal_set__AngerPoint_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__CurrentNode_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__CurrentState_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__NextNode_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Position(::Fusion::CodeGen::FixedStorage@3  value) ;

constexpr void __cordl_internal_set__Rotation(::Fusion::CodeGen::FixedStorage@4  value) ;

/// @brief Method .ctor, addr 0x5d10500, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(int32_t  state, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot, int32_t  cNode, int32_t  nNode, int32_t  angerPoint) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_AngerPoint, addr 0x5d104f0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_AngerPoint() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CurrentNode, addr 0x5d104d0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentNode() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CurrentState, addr 0x5d10384, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentState() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_NextNode, addr 0x5d104e0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_NextNode() ;

/// [IsReadOnly]
/// @brief Method get_Position, addr 0x5d10394, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Position() ;

/// [IsReadOnly]
/// @brief Method get_Rotation, addr 0x5d10430, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_Rotation() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// [CompilerGenerated]
/// @brief Method set_AngerPoint, addr 0x5d104f8, size 0x8, virtual false, abstract: false, final false
inline void set_AngerPoint(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentNode, addr 0x5d104d8, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentNode(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentState, addr 0x5d1038c, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentState(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_NextNode, addr 0x5d104e8, size 0x8, virtual false, abstract: false, final false
inline void set_NextNode(int32_t  value) ;

/// @brief Method set_Position, addr 0x5d103d4, size 0x5c, virtual false, abstract: false, final false
inline void set_Position(::UnityEngine::Vector3  value) ;

/// @brief Method set_Rotation, addr 0x5d10470, size 0x60, virtual false, abstract: false, final false
inline void set_Rotation(::UnityEngine::Quaternion  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SkeletonNetData() ;

// Ctor Parameters [CppParam { name: "_CurrentState_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Position", ty: "::Fusion::CodeGen::FixedStorage@3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Rotation", ty: "::Fusion::CodeGen::FixedStorage@4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CurrentNode_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_NextNode_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_AngerPoint_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SkeletonNetData(int32_t  _CurrentState_k__BackingField, ::Fusion::CodeGen::FixedStorage@3  _Position, ::Fusion::CodeGen::FixedStorage@4  _Rotation, int32_t  _CurrentNode_k__BackingField, int32_t  _NextNode_k__BackingField, int32_t  _AngerPoint_k__BackingField) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____CurrentState_k__BackingField_padding[0x0];
/// [CompilerGenerated]
/// @brief Field <CurrentState>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  ____CurrentState_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____CurrentState_k__BackingField_padding_forAlignment[0x0];
/// [CompilerGenerated]
/// @brief Field <CurrentState>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  ____CurrentState_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ____Position_padding[0x4];
/// [FixedBufferProperty(typeof(UnityEngine.Vector3), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterVector3), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _Position, offset: 0x4, size: 0xc, def value: None
 ::Fusion::CodeGen::FixedStorage@3  ____Position;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ____Position_padding_forAlignment[0x4];
/// [FixedBufferProperty(typeof(UnityEngine.Vector3), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterVector3), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _Position, offset: 0x4, size: 0xc, def value: None
 ::Fusion::CodeGen::FixedStorage@3  ____Position_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ____Rotation_padding[0x10];
/// [FixedBufferProperty(typeof(UnityEngine.Quaternion), typeof(Fusion.CodeGen.UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _Rotation, offset: 0x10, size: 0x10, def value: None
 ::Fusion::CodeGen::FixedStorage@4  ____Rotation;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ____Rotation_padding_forAlignment[0x10];
/// [FixedBufferProperty(typeof(UnityEngine.Quaternion), typeof(Fusion.CodeGen.UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _Rotation, offset: 0x10, size: 0x10, def value: None
 ::Fusion::CodeGen::FixedStorage@4  ____Rotation_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x20
 uint8_t  ____CurrentNode_k__BackingField_padding[0x20];
/// [CompilerGenerated]
/// @brief Field <CurrentNode>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____CurrentNode_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x20 for alignment
 uint8_t  ____CurrentNode_k__BackingField_padding_forAlignment[0x20];
/// [CompilerGenerated]
/// @brief Field <CurrentNode>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____CurrentNode_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x24
 uint8_t  ____NextNode_k__BackingField_padding[0x24];
/// [CompilerGenerated]
/// @brief Field <NextNode>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  ____NextNode_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x24 for alignment
 uint8_t  ____NextNode_k__BackingField_padding_forAlignment[0x24];
/// [CompilerGenerated]
/// @brief Field <NextNode>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  ____NextNode_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x28
 uint8_t  ____AngerPoint_k__BackingField_padding[0x28];
/// [CompilerGenerated]
/// @brief Field <AngerPoint>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____AngerPoint_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x28 for alignment
 uint8_t  ____AngerPoint_k__BackingField_padding_forAlignment[0x28];
/// [CompilerGenerated]
/// @brief Field <AngerPoint>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____AngerPoint_k__BackingField_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{467};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SkeletonNetData) == 0x2c, "Size mismatch!");

} // namespace end def GlobalNamespace
