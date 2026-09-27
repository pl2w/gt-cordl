#pragma once
// IWYU pragma private; include "GlobalNamespace/FusionPlayerProperties_PlayerInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@207_def.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@33_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FusionPlayerProperties_PlayerInfo)
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
struct _32;
}
// Forward declare root types
namespace GlobalNamespace {
struct FusionPlayerProperties_PlayerInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FusionPlayerProperties_PlayerInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FusionPlayerProperties_PlayerInfo, "", "FusionPlayerProperties/PlayerInfo");
// [NetworkStructWeaved(240)]
// Dependencies Fusion.CodeGen.FixedStorage@207, Fusion.CodeGen.FixedStorage@33
namespace GlobalNamespace {
// Is value type: true
// CS Name: FusionPlayerProperties/PlayerInfo
#pragma pack(push, 0)
struct CORDL_TYPE FusionPlayerProperties_PlayerInfo {
public:
// Declarations
/// [Networked]
/// @brief [NetworkedWeaved(0, 33)]
 __declspec(property(get=get_NickName, put=set_NickName)) ::Fusion::NetworkString_1<::Fusion::_32>  NickName;

/// @brief Field _NickName, offset 0x0, size 0x84 
 __declspec(property(get=__cordl_internal_get__NickName, put=__cordl_internal_set__NickName)) ::Fusion::CodeGen::FixedStorage@33  _NickName;

/// @brief Field _properties, offset 0x84, size 0x33c 
 __declspec(property(get=__cordl_internal_get__properties, put=__cordl_internal_set__properties)) ::Fusion::CodeGen::FixedStorage@207  _properties;

/// [Networked]
/// [NetworkedWeavedDictionary(3, 33, 33, typeof(Fusion.CodeGen.ReaderWriter@Fusion_NetworkString`1<Fusion__32>), typeof(Fusion.CodeGen.ReaderWriter@Fusion_NetworkString`1<Fusion__32>))]
/// @brief [NetworkedWeaved(33, 207)]
 __declspec(property(get=get_properties)) ::Fusion::NetworkDictionary_2<::Fusion::NetworkString_1<::Fusion::_32>,::Fusion::NetworkString_1<::Fusion::_32>>  properties;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr ::Fusion::CodeGen::FixedStorage@33 const& __cordl_internal_get__NickName() const;

constexpr ::Fusion::CodeGen::FixedStorage@33& __cordl_internal_get__NickName() ;

constexpr ::Fusion::CodeGen::FixedStorage@207 const& __cordl_internal_get__properties() const;

constexpr ::Fusion::CodeGen::FixedStorage@207& __cordl_internal_get__properties() ;

constexpr void __cordl_internal_set__NickName(::Fusion::CodeGen::FixedStorage@33  value) ;

constexpr void __cordl_internal_set__properties(::Fusion::CodeGen::FixedStorage@207  value) ;

/// [IsReadOnly]
/// @brief Method get_NickName, addr 0x56d7cc8, size 0x48, virtual false, abstract: false, final false
inline ::Fusion::NetworkString_1<::Fusion::_32> get_NickName() ;

/// @brief Method get_properties, addr 0x56d81a4, size 0x90, virtual false, abstract: false, final false
inline ::Fusion::NetworkDictionary_2<::Fusion::NetworkString_1<::Fusion::_32>,::Fusion::NetworkString_1<::Fusion::_32>> get_properties() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Method set_NickName, addr 0x56d85cc, size 0x48, virtual false, abstract: false, final false
inline void set_NickName(::Fusion::NetworkString_1<::Fusion::_32>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FusionPlayerProperties_PlayerInfo() ;

// Ctor Parameters [CppParam { name: "_NickName", ty: "::Fusion::CodeGen::FixedStorage@33", modifiers: "", def_value: None, comment: None }, CppParam { name: "_properties", ty: "::Fusion::CodeGen::FixedStorage@207", modifiers: "", def_value: None, comment: None }]
constexpr FusionPlayerProperties_PlayerInfo(::Fusion::CodeGen::FixedStorage@33  _NickName, ::Fusion::CodeGen::FixedStorage@207  _properties) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____NickName_padding[0x0];
/// [FixedBufferProperty(typeof(Fusion.NetworkString`1<TSize>), typeof(Fusion.CodeGen.UnityValueSurrogate@ReaderWriter@Fusion_NetworkString`1<Fusion__32>), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _NickName, offset: 0x0, size: 0x84, def value: None
 ::Fusion::CodeGen::FixedStorage@33  ____NickName;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____NickName_padding_forAlignment[0x0];
/// [FixedBufferProperty(typeof(Fusion.NetworkString`1<TSize>), typeof(Fusion.CodeGen.UnityValueSurrogate@ReaderWriter@Fusion_NetworkString`1<Fusion__32>), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _NickName, offset: 0x0, size: 0x84, def value: None
 ::Fusion::CodeGen::FixedStorage@33  ____NickName_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x84
 uint8_t  ____properties_padding[0x84];
/// [FixedBufferProperty(typeof(Fusion.NetworkDictionary`2<K, V>), typeof(Fusion.CodeGen.UnityDictionarySurrogate@ReaderWriter@Fusion_NetworkString`1<Fusion__32>@ReaderWriter@Fusion_NetworkString`1<Fusion__32>), 3, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _properties, offset: 0x84, size: 0x33c, def value: None
 ::Fusion::CodeGen::FixedStorage@207  ____properties;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x84 for alignment
 uint8_t  ____properties_padding_forAlignment[0x84];
/// [FixedBufferProperty(typeof(Fusion.NetworkDictionary`2<K, V>), typeof(Fusion.CodeGen.UnityDictionarySurrogate@ReaderWriter@Fusion_NetworkString`1<Fusion__32>@ReaderWriter@Fusion_NetworkString`1<Fusion__32>), 3, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _properties, offset: 0x84, size: 0x33c, def value: None
 ::Fusion::CodeGen::FixedStorage@207  ____properties_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1080};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3c0};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FusionPlayerProperties_PlayerInfo) == 0x3c0, "Size mismatch!");

} // namespace end def GlobalNamespace
