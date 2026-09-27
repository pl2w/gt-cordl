#pragma once
// IWYU pragma private; include "GlobalNamespace/TagData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@20_def.hpp"
#include "Fusion/zzzz__NetworkBool_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TagData)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
template<typename T>
struct NetworkArray_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct TagData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TagData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TagData, "", "TagData");
// [NetworkStructWeaved(22)]
// Dependencies Fusion.CodeGen.FixedStorage@20, Fusion.NetworkBool
namespace GlobalNamespace {
// Is value type: true
// CS Name: TagData
#pragma pack(push, 0)
struct CORDL_TYPE TagData {
public:
// Declarations
/// @brief Field <currentItID>k__BackingField, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentItID_k__BackingField, put=__cordl_internal_set__currentItID_k__BackingField)) int32_t  _currentItID_k__BackingField;

/// @brief Field _infectedPlayerList, offset 0x8, size 0x50 
 __declspec(property(get=__cordl_internal_get__infectedPlayerList, put=__cordl_internal_set__infectedPlayerList)) ::Fusion::CodeGen::FixedStorage@20  _infectedPlayerList;

 __declspec(property(get=get_currentItID, put=set_currentItID)) int32_t  currentItID;

/// [Networked]
/// [Capacity(20)]
/// [NetworkedWeavedArray(20, 1, typeof(Fusion.ElementReaderWriterInt32))]
/// @brief [NetworkedWeaved(2, 20)]
 __declspec(property(get=get_infectedPlayerList)) ::Fusion::NetworkArray_1<int32_t>  infectedPlayerList;

/// @brief Field isCurrentlyTag, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_isCurrentlyTag, put=__cordl_internal_set_isCurrentlyTag)) ::Fusion::NetworkBool  isCurrentlyTag;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr int32_t const& __cordl_internal_get__currentItID_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__currentItID_k__BackingField() ;

constexpr ::Fusion::CodeGen::FixedStorage@20 const& __cordl_internal_get__infectedPlayerList() const;

constexpr ::Fusion::CodeGen::FixedStorage@20& __cordl_internal_get__infectedPlayerList() ;

constexpr ::Fusion::NetworkBool const& __cordl_internal_get_isCurrentlyTag() const;

constexpr ::Fusion::NetworkBool& __cordl_internal_get_isCurrentlyTag() ;

constexpr void __cordl_internal_set__currentItID_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__infectedPlayerList(::Fusion::CodeGen::FixedStorage@20  value) ;

constexpr void __cordl_internal_set_isCurrentlyTag(::Fusion::NetworkBool  value) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_currentItID, addr 0x579c4c8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_currentItID() ;

/// @brief Method get_infectedPlayerList, addr 0x579c3e8, size 0xe0, virtual false, abstract: false, final false
inline ::Fusion::NetworkArray_1<int32_t> get_infectedPlayerList() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// [CompilerGenerated]
/// @brief Method set_currentItID, addr 0x579c4d0, size 0x8, virtual false, abstract: false, final false
inline void set_currentItID(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TagData() ;

// Ctor Parameters [CppParam { name: "_currentItID_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isCurrentlyTag", ty: "::Fusion::NetworkBool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_infectedPlayerList", ty: "::Fusion::CodeGen::FixedStorage@20", modifiers: "", def_value: None, comment: None }]
constexpr TagData(int32_t  _currentItID_k__BackingField, ::Fusion::NetworkBool  isCurrentlyTag, ::Fusion::CodeGen::FixedStorage@20  _infectedPlayerList) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____currentItID_k__BackingField_padding[0x0];
/// [CompilerGenerated]
/// @brief Field <currentItID>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  ____currentItID_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____currentItID_k__BackingField_padding_forAlignment[0x0];
/// [CompilerGenerated]
/// @brief Field <currentItID>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  ____currentItID_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___isCurrentlyTag_padding[0x4];
/// @brief Field isCurrentlyTag, offset: 0x4, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___isCurrentlyTag;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___isCurrentlyTag_padding_forAlignment[0x4];
/// @brief Field isCurrentlyTag, offset: 0x4, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___isCurrentlyTag_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ____infectedPlayerList_padding[0x8];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterInt32), 20, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _infectedPlayerList, offset: 0x8, size: 0x50, def value: None
 ::Fusion::CodeGen::FixedStorage@20  ____infectedPlayerList;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ____infectedPlayerList_padding_forAlignment[0x8];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterInt32), 20, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _infectedPlayerList, offset: 0x8, size: 0x50, def value: None
 ::Fusion::CodeGen::FixedStorage@20  ____infectedPlayerList_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1490};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TagData) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
