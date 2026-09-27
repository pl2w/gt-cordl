#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderFlags_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_PlayerUniqueData_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeader___reserved_e__FixedBuffer_def.hpp"
#include "Fusion/zzzz__NetworkObjectNestingKey_def.hpp"
#include "Fusion/zzzz__NetworkObjectTypeId_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectHeader)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
struct NetworkId;
}
namespace Fusion {
struct NetworkObjectHeaderFlags;
}
namespace Fusion {
struct NetworkObjectNestingKey;
}
namespace Fusion {
struct NetworkObjectTypeId;
}
namespace Fusion {
struct NetworkTRSPData;
}
namespace GlobalNamespace {
struct NetworkObjectHeader_PlayerUniqueDataChanges;
}
namespace GlobalNamespace {
struct NetworkObjectHeader_PlayerUniqueData;
}
namespace GlobalNamespace {
struct NetworkObjectHeader___reserved_e__FixedBuffer;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
struct NetworkObjectHeader;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkObjectHeader);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectHeader, "Fusion", "NetworkObjectHeader");
// [InlineHelp]
// [NetworkStructWeaved(20)]
// Dependencies Fusion.NetworkId, Fusion.NetworkObjectHeader::<_reserved>e__FixedBuffer, Fusion.NetworkObjectHeader::PlayerUniqueData, Fusion.NetworkObjectHeaderFlags, Fusion.NetworkObjectNestingKey, Fusion.NetworkObjectTypeId, Fusion.PlayerRef
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkObjectHeader
struct CORDL_TYPE NetworkObjectHeader {
public:
// Declarations
using PlayerUniqueData = ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData;

using PlayerUniqueDataChanges = ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges;

using __reserved_e__FixedBuffer = ::GlobalNamespace::NetworkObjectHeader___reserved_e__FixedBuffer;

/// @brief Field BehaviourCount, offset 0x6, size 0x2 
 __declspec(property(get=__cordl_internal_get_BehaviourCount, put=__cordl_internal_set_BehaviourCount)) int16_t  BehaviourCount;

 __declspec(property(get=get_ByteCount)) int32_t  ByteCount;

/// @brief Field Flags, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Flags, put=__cordl_internal_set_Flags)) ::Fusion::NetworkObjectHeaderFlags  Flags;

/// @brief Field Id, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) ::Fusion::NetworkId  Id;

/// @brief Field InputAuthority, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_InputAuthority, put=__cordl_internal_set_InputAuthority)) ::Fusion::PlayerRef  InputAuthority;

/// @brief Field NestingKey, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_NestingKey, put=__cordl_internal_set_NestingKey)) ::Fusion::NetworkObjectNestingKey  NestingKey;

/// @brief Field NestingRoot, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_NestingRoot, put=__cordl_internal_set_NestingRoot)) ::Fusion::NetworkId  NestingRoot;

/// @brief Field PlayerData, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlayerData, put=__cordl_internal_set_PlayerData)) ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData  PlayerData;

/// @brief Field StateAuthority, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_StateAuthority, put=__cordl_internal_set_StateAuthority)) ::Fusion::PlayerRef  StateAuthority;

/// @brief Field Type, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::Fusion::NetworkObjectTypeId  Type;

/// @brief Field WordCount, offset 0x4, size 0x2 
 __declspec(property(get=__cordl_internal_get_WordCount, put=__cordl_internal_set_WordCount)) int16_t  WordCount;

/// @brief Field _reserved, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get__reserved, put=__cordl_internal_set__reserved)) ::GlobalNamespace::NetworkObjectHeader___reserved_e__FixedBuffer  _reserved;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkObjectHeader>"
constexpr operator  ::System::IEquatable_1<::Fusion::NetworkObjectHeader>*() ;

/// @brief Method Equals, addr 0x5fabafc, size 0xe4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5faba60, size 0x7c, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkObjectHeader  other) ;

/// [Obsolete("Use NetworkObjectMeta instead")]
/// @brief Method GetBehaviourChangedTickArray, addr 0x5fab334, size 0x20, virtual false, abstract: false, final false
static inline int32_t* GetBehaviourChangedTickArray(::Fusion::NetworkObjectHeader*  header) ;

/// [Obsolete("Use NetworkObjectMeta instead")]
/// @brief Method GetDataPointer, addr 0x5fab30c, size 0x8, virtual false, abstract: false, final false
static inline int32_t* GetDataPointer(::Fusion::NetworkObjectHeader*  header) ;

/// [Obsolete("Use NetworkObjectMeta instead")]
/// @brief Method GetDataWordCount, addr 0x5fab314, size 0x20, virtual false, abstract: false, final false
static inline int32_t GetDataWordCount(::Fusion::NetworkObjectHeader*  header) ;

/// @brief Method GetHashCode, addr 0x5fabbe0, size 0x190, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// [Obsolete("Use NetworkObjectMeta instead")]
/// @brief Method GetMainNetworkTRSPData, addr 0x5fab36c, size 0x20, virtual false, abstract: false, final false
static inline ::Fusion::NetworkTRSPData* GetMainNetworkTRSPData(::Fusion::NetworkObjectHeader*  header) ;

/// [Obsolete("Use NetworkObjectMeta instead")]
/// @brief Method HasMainNetworkTRSP, addr 0x5fab354, size 0x18, virtual false, abstract: false, final false
static inline bool HasMainNetworkTRSP(::Fusion::NetworkObjectHeader*  header) ;

/// @brief Method ToString, addr 0x5fab38c, size 0x6d4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int16_t const& __cordl_internal_get_BehaviourCount() const;

constexpr int16_t& __cordl_internal_get_BehaviourCount() ;

constexpr ::Fusion::NetworkObjectHeaderFlags const& __cordl_internal_get_Flags() const;

constexpr ::Fusion::NetworkObjectHeaderFlags& __cordl_internal_get_Flags() ;

constexpr ::Fusion::NetworkId const& __cordl_internal_get_Id() const;

constexpr ::Fusion::NetworkId& __cordl_internal_get_Id() ;

constexpr ::Fusion::PlayerRef const& __cordl_internal_get_InputAuthority() const;

constexpr ::Fusion::PlayerRef& __cordl_internal_get_InputAuthority() ;

constexpr ::Fusion::NetworkObjectNestingKey const& __cordl_internal_get_NestingKey() const;

constexpr ::Fusion::NetworkObjectNestingKey& __cordl_internal_get_NestingKey() ;

constexpr ::Fusion::NetworkId const& __cordl_internal_get_NestingRoot() const;

constexpr ::Fusion::NetworkId& __cordl_internal_get_NestingRoot() ;

constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData const& __cordl_internal_get_PlayerData() const;

constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData& __cordl_internal_get_PlayerData() ;

constexpr ::Fusion::PlayerRef const& __cordl_internal_get_StateAuthority() const;

constexpr ::Fusion::PlayerRef& __cordl_internal_get_StateAuthority() ;

constexpr ::Fusion::NetworkObjectTypeId const& __cordl_internal_get_Type() const;

constexpr ::Fusion::NetworkObjectTypeId& __cordl_internal_get_Type() ;

constexpr int16_t const& __cordl_internal_get_WordCount() const;

constexpr int16_t& __cordl_internal_get_WordCount() ;

constexpr ::GlobalNamespace::NetworkObjectHeader___reserved_e__FixedBuffer const& __cordl_internal_get__reserved() const;

constexpr ::GlobalNamespace::NetworkObjectHeader___reserved_e__FixedBuffer& __cordl_internal_get__reserved() ;

constexpr void __cordl_internal_set_BehaviourCount(int16_t  value) ;

constexpr void __cordl_internal_set_Flags(::Fusion::NetworkObjectHeaderFlags  value) ;

constexpr void __cordl_internal_set_Id(::Fusion::NetworkId  value) ;

constexpr void __cordl_internal_set_InputAuthority(::Fusion::PlayerRef  value) ;

constexpr void __cordl_internal_set_NestingKey(::Fusion::NetworkObjectNestingKey  value) ;

constexpr void __cordl_internal_set_NestingRoot(::Fusion::NetworkId  value) ;

constexpr void __cordl_internal_set_PlayerData(::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData  value) ;

constexpr void __cordl_internal_set_StateAuthority(::Fusion::PlayerRef  value) ;

constexpr void __cordl_internal_set_Type(::Fusion::NetworkObjectTypeId  value) ;

constexpr void __cordl_internal_set_WordCount(int16_t  value) ;

constexpr void __cordl_internal_set__reserved(::GlobalNamespace::NetworkObjectHeader___reserved_e__FixedBuffer  value) ;

/// @brief Method .ctor, addr 0x5fab2e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkId  id, int16_t  wordCount, int16_t  behaviourCount, ::Fusion::NetworkObjectTypeId  type, ::Fusion::NetworkId  nestingRoot, ::Fusion::NetworkObjectNestingKey  nestingKey, ::Fusion::NetworkObjectHeaderFlags  flags) ;

/// @brief Method get_ByteCount, addr 0x5fab300, size 0xc, virtual false, abstract: false, final false
inline int32_t get_ByteCount() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkObjectHeader>"
constexpr ::System::IEquatable_1<::Fusion::NetworkObjectHeader>* i___System__IEquatable_1___Fusion__NetworkObjectHeader_() ;

/// @brief Method op_Equality, addr 0x5fabadc, size 0x20, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::NetworkObjectHeader  left, ::Fusion::NetworkObjectHeader  right) ;

/// @brief Method op_Inequality, addr 0x5fabd70, size 0x20, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::NetworkObjectHeader  left, ::Fusion::NetworkObjectHeader  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectHeader() ;

// Ctor Parameters [CppParam { name: "Id", ty: "::Fusion::NetworkId", modifiers: "", def_value: None, comment: None }, CppParam { name: "WordCount", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BehaviourCount", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Type", ty: "::Fusion::NetworkObjectTypeId", modifiers: "", def_value: None, comment: None }, CppParam { name: "NestingRoot", ty: "::Fusion::NetworkId", modifiers: "", def_value: None, comment: None }, CppParam { name: "NestingKey", ty: "::Fusion::NetworkObjectNestingKey", modifiers: "", def_value: None, comment: None }, CppParam { name: "Flags", ty: "::Fusion::NetworkObjectHeaderFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "InputAuthority", ty: "::Fusion::PlayerRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "StateAuthority", ty: "::Fusion::PlayerRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "PlayerData", ty: "::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData", modifiers: "", def_value: None, comment: None }, CppParam { name: "_reserved", ty: "::GlobalNamespace::NetworkObjectHeader___reserved_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectHeader(::Fusion::NetworkId  Id, int16_t  WordCount, int16_t  BehaviourCount, ::Fusion::NetworkObjectTypeId  Type, ::Fusion::NetworkId  NestingRoot, ::Fusion::NetworkObjectNestingKey  NestingKey, ::Fusion::NetworkObjectHeaderFlags  Flags, ::Fusion::PlayerRef  InputAuthority, ::Fusion::PlayerRef  StateAuthority, ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData  PlayerData, ::GlobalNamespace::NetworkObjectHeader___reserved_e__FixedBuffer  _reserved) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Id_padding[0x0];
/// @brief Field Id, offset: 0x0, size: 0x4, def value: None
 ::Fusion::NetworkId  ___Id;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Id_padding_forAlignment[0x0];
/// @brief Field Id, offset: 0x0, size: 0x4, def value: None
 ::Fusion::NetworkId  ___Id_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___WordCount_padding[0x4];
/// @brief Field WordCount, offset: 0x4, size: 0x2, def value: None
 int16_t  ___WordCount;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___WordCount_padding_forAlignment[0x4];
/// @brief Field WordCount, offset: 0x4, size: 0x2, def value: None
 int16_t  ___WordCount_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x6
 uint8_t  ___BehaviourCount_padding[0x6];
/// @brief Field BehaviourCount, offset: 0x6, size: 0x2, def value: None
 int16_t  ___BehaviourCount;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x6 for alignment
 uint8_t  ___BehaviourCount_padding_forAlignment[0x6];
/// @brief Field BehaviourCount, offset: 0x6, size: 0x2, def value: None
 int16_t  ___BehaviourCount_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___Type_padding[0x8];
/// @brief Field Type, offset: 0x8, size: 0x8, def value: None
 ::Fusion::NetworkObjectTypeId  ___Type;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___Type_padding_forAlignment[0x8];
/// @brief Field Type, offset: 0x8, size: 0x8, def value: None
 ::Fusion::NetworkObjectTypeId  ___Type_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___NestingRoot_padding[0x10];
/// @brief Field NestingRoot, offset: 0x10, size: 0x4, def value: None
 ::Fusion::NetworkId  ___NestingRoot;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___NestingRoot_padding_forAlignment[0x10];
/// @brief Field NestingRoot, offset: 0x10, size: 0x4, def value: None
 ::Fusion::NetworkId  ___NestingRoot_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x14
 uint8_t  ___NestingKey_padding[0x14];
/// @brief Field NestingKey, offset: 0x14, size: 0x4, def value: None
 ::Fusion::NetworkObjectNestingKey  ___NestingKey;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x14 for alignment
 uint8_t  ___NestingKey_padding_forAlignment[0x14];
/// @brief Field NestingKey, offset: 0x14, size: 0x4, def value: None
 ::Fusion::NetworkObjectNestingKey  ___NestingKey_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ___Flags_padding[0x18];
/// @brief Field Flags, offset: 0x18, size: 0x4, def value: None
 ::Fusion::NetworkObjectHeaderFlags  ___Flags;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ___Flags_padding_forAlignment[0x18];
/// @brief Field Flags, offset: 0x18, size: 0x4, def value: None
 ::Fusion::NetworkObjectHeaderFlags  ___Flags_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1c
 uint8_t  ___InputAuthority_padding[0x1c];
/// @brief Field InputAuthority, offset: 0x1c, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___InputAuthority;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1c for alignment
 uint8_t  ___InputAuthority_padding_forAlignment[0x1c];
/// @brief Field InputAuthority, offset: 0x1c, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___InputAuthority_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x20
 uint8_t  ___StateAuthority_padding[0x20];
/// @brief Field StateAuthority, offset: 0x20, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___StateAuthority;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x20 for alignment
 uint8_t  ___StateAuthority_padding_forAlignment[0x20];
/// @brief Field StateAuthority, offset: 0x20, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___StateAuthority_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x24
 uint8_t  ___PlayerData_padding[0x24];
/// @brief Field PlayerData, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData  ___PlayerData;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x24 for alignment
 uint8_t  ___PlayerData_padding_forAlignment[0x24];
/// @brief Field PlayerData, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData  ___PlayerData_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x28
 uint8_t  ____reserved_padding[0x28];
/// [FixedBuffer(typeof(System.Int32), 10)]
/// @brief Field _reserved, offset: 0x28, size: 0x28, def value: None
 ::GlobalNamespace::NetworkObjectHeader___reserved_e__FixedBuffer  ____reserved;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x28 for alignment
 uint8_t  ____reserved_padding_forAlignment[0x28];
/// [FixedBuffer(typeof(System.Int32), 10)]
/// @brief Field _reserved, offset: 0x28, size: 0x28, def value: None
 ::GlobalNamespace::NetworkObjectHeader___reserved_e__FixedBuffer  ____reserved_forAlignment;
};
};
public:

/// @brief Field PLAYER_DATA_WORD offset 0xffffffff size 0x4
static constexpr int32_t  PLAYER_DATA_WORD{static_cast<int32_t>(0x9)};

/// @brief Field READ_ONLY_WORD_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  READ_ONLY_WORD_COUNT{static_cast<int32_t>(0x7)};

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x50)};

/// @brief Field WORDS offset 0xffffffff size 0x4
static constexpr int32_t  WORDS{static_cast<int32_t>(0x14)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19143};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkObjectHeader) == 0x50, "Size mismatch!");

} // namespace end def Fusion
