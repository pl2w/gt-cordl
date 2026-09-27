#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectTypeId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectTypeId)
namespace Fusion::Sockets {
struct NetBitBuffer;
}
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
class NetworkObjectTypeId_EqualityComparer;
}
namespace Fusion {
struct NetworkPrefabId;
}
namespace Fusion {
struct NetworkSceneLoadId;
}
namespace Fusion {
struct NetworkSceneObjectId;
}
namespace Fusion {
struct NetworkTypeIdKind;
}
namespace Fusion {
struct SceneRef;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
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
class NetworkObjectTypeId_EqualityComparer;
}
namespace Fusion {
struct NetworkObjectTypeId;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObjectTypeId_EqualityComparer*);
MARK_VAL_T(::Fusion::NetworkObjectTypeId);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectTypeId_EqualityComparer*, "Fusion", "NetworkObjectTypeId/EqualityComparer");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectTypeId, "Fusion", "NetworkObjectTypeId");
// [InlineHelp]
// [NetworkStructWeaved(2)]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkObjectTypeId
struct CORDL_TYPE NetworkObjectTypeId {
public:
// Declarations
using EqualityComparer = ::Fusion::NetworkObjectTypeId_EqualityComparer;

 __declspec(property(get=get_AsCustom)) uint32_t  AsCustom;

 __declspec(property(get=get_AsInternalStructId)) uint16_t  AsInternalStructId;

 __declspec(property(get=get_AsPrefabId)) ::Fusion::NetworkPrefabId  AsPrefabId;

 __declspec(property(get=get_AsSceneObjectId)) ::Fusion::NetworkSceneObjectId  AsSceneObjectId;

 __declspec(property(get=get_IsCustom)) bool  IsCustom;

 __declspec(property(get=get_IsNone)) bool  IsNone;

 __declspec(property(get=get_IsPrefab)) bool  IsPrefab;

 __declspec(property(get=get_IsSceneObject)) bool  IsSceneObject;

 __declspec(property(get=get_IsStruct)) bool  IsStruct;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Kind)) ::Fusion::NetworkTypeIdKind  Kind;

/// @brief Field <Comparer>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Comparer_k__BackingField, put=setStaticF__Comparer_k__BackingField)) ::Fusion::NetworkObjectTypeId_EqualityComparer*  _Comparer_k__BackingField;

/// @brief Field _value0, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__value0, put=__cordl_internal_set__value0)) uint32_t  _value0;

/// @brief Field _value1, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get__value1, put=__cordl_internal_set__value1)) uint32_t  _value1;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkObjectTypeId>"
constexpr operator  ::System::IEquatable_1<::Fusion::NetworkObjectTypeId>*() ;

/// @brief Method Equals, addr 0x5fcd3f0, size 0x9c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5fcd3b4, size 0x28, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkObjectTypeId  other) ;

/// @brief Method FromCustom, addr 0x5fccfd0, size 0xc, virtual false, abstract: false, final false
static inline ::Fusion::NetworkObjectTypeId FromCustom(uint32_t  raw) ;

/// @brief Method FromPrefabId, addr 0x5fccdc8, size 0x70, virtual false, abstract: false, final false
static inline ::Fusion::NetworkObjectTypeId FromPrefabId(::Fusion::NetworkPrefabId  prefabId) ;

/// @brief Method FromSceneObjectId, addr 0x5fccb34, size 0xd4, virtual false, abstract: false, final false
static inline ::Fusion::NetworkObjectTypeId FromSceneObjectId(::Fusion::NetworkSceneObjectId  sceneObjectId) ;

/// @brief Method FromSceneRefAndObjectIndex, addr 0x5fccac8, size 0x6c, virtual false, abstract: false, final false
static inline ::Fusion::NetworkObjectTypeId FromSceneRefAndObjectIndex(::Fusion::SceneRef  sceneRef, int32_t  objIndex, ::Fusion::NetworkSceneLoadId  loadId) ;

/// @brief Method FromStruct, addr 0x5fcca9c, size 0x10, virtual false, abstract: false, final false
static inline ::Fusion::NetworkObjectTypeId FromStruct(uint16_t  structId) ;

/// @brief Method GetHashCode, addr 0x5fcd3dc, size 0x14, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ReadInternal, addr 0x5fcd758, size 0x40, virtual false, abstract: false, final false
static inline ::Fusion::NetworkObjectTypeId ReadInternal(::Fusion::Sockets::NetBitBuffer*  buffer, int32_t  blockSize) ;

/// @brief Method ToString, addr 0x5fcd48c, size 0x210, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method WriteInternal, addr 0x5fcd714, size 0x44, virtual false, abstract: false, final false
static inline void WriteInternal(::Fusion::NetworkObjectTypeId  typeId, ::Fusion::Sockets::NetBitBuffer*  buffer, int32_t  blockSize) ;

constexpr uint32_t const& __cordl_internal_get__value0() const;

constexpr uint32_t& __cordl_internal_get__value0() ;

constexpr uint32_t const& __cordl_internal_get__value1() const;

constexpr uint32_t& __cordl_internal_get__value1() ;

constexpr void __cordl_internal_set__value0(uint32_t  value) ;

constexpr void __cordl_internal_set__value1(uint32_t  value) ;

static inline ::Fusion::NetworkObjectTypeId_EqualityComparer* getStaticF__Comparer_k__BackingField() ;

/// @brief Method get_AsCustom, addr 0x5fccfdc, size 0x124, virtual false, abstract: false, final false
inline uint32_t get_AsCustom() ;

/// @brief Method get_AsInternalStructId, addr 0x5fcd168, size 0x124, virtual false, abstract: false, final false
inline uint16_t get_AsInternalStructId() ;

/// @brief Method get_AsPrefabId, addr 0x5fcce48, size 0x120, virtual false, abstract: false, final false
inline ::Fusion::NetworkPrefabId get_AsPrefabId() ;

/// @brief Method get_AsSceneObjectId, addr 0x5fccc08, size 0x158, virtual false, abstract: false, final false
inline ::Fusion::NetworkSceneObjectId get_AsSceneObjectId() ;

/// [CompilerGenerated]
/// @brief Method get_Comparer, addr 0x5fcc9f0, size 0x58, virtual false, abstract: false, final false
static inline ::Fusion::NetworkObjectTypeId_EqualityComparer* get_Comparer() ;

/// @brief Method get_IsCustom, addr 0x5fcd100, size 0x68, virtual false, abstract: false, final false
inline bool get_IsCustom() ;

/// @brief Method get_IsNone, addr 0x5fcd2f4, size 0x60, virtual false, abstract: false, final false
inline bool get_IsNone() ;

/// @brief Method get_IsPrefab, addr 0x5fccf68, size 0x64, virtual false, abstract: false, final false
inline bool get_IsPrefab() ;

/// @brief Method get_IsSceneObject, addr 0x5fccd60, size 0x68, virtual false, abstract: false, final false
inline bool get_IsSceneObject() ;

/// @brief Method get_IsStruct, addr 0x5fcd28c, size 0x68, virtual false, abstract: false, final false
inline bool get_IsStruct() ;

/// @brief Method get_IsValid, addr 0x5fcd354, size 0x60, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Kind, addr 0x5fccaac, size 0x1c, virtual false, abstract: false, final false
inline ::Fusion::NetworkTypeIdKind get_Kind() ;

/// @brief Method get_PlayerData, addr 0x5fcca48, size 0x54, virtual false, abstract: false, final false
static inline ::Fusion::NetworkObjectTypeId get_PlayerData() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkObjectTypeId>"
constexpr ::System::IEquatable_1<::Fusion::NetworkObjectTypeId>* i___System__IEquatable_1___Fusion__NetworkObjectTypeId_() ;

/// @brief Method op_Equality, addr 0x5fcd6a8, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::NetworkObjectTypeId  a, ::Fusion::NetworkObjectTypeId  b) ;

/// @brief Method op_Implicit, addr 0x5fcd6c0, size 0x54, virtual false, abstract: false, final false
static inline ::Fusion::NetworkObjectTypeId op_Implicit___Fusion__NetworkObjectTypeId(::Fusion::NetworkPrefabId  prefabId) ;

/// @brief Method op_Inequality, addr 0x5fcd6b4, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::NetworkObjectTypeId  a, ::Fusion::NetworkObjectTypeId  b) ;

static inline void setStaticF__Comparer_k__BackingField(::Fusion::NetworkObjectTypeId_EqualityComparer*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectTypeId() ;

// Ctor Parameters [CppParam { name: "_value0", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_value1", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectTypeId(uint32_t  _value0, uint32_t  _value1) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____value0_padding[0x0];
/// @brief Field _value0, offset: 0x0, size: 0x4, def value: None
 uint32_t  ____value0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____value0_padding_forAlignment[0x0];
/// @brief Field _value0, offset: 0x0, size: 0x4, def value: None
 uint32_t  ____value0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ____value1_padding[0x4];
/// @brief Field _value1, offset: 0x4, size: 0x4, def value: None
 uint32_t  ____value1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ____value1_padding_forAlignment[0x4];
/// @brief Field _value1, offset: 0x4, size: 0x4, def value: None
 uint32_t  ____value1_forAlignment;
};
};
public:

/// @brief Field ALIGNMENT offset 0xffffffff size 0x4
static constexpr int32_t  ALIGNMENT{static_cast<int32_t>(0x4)};

/// @brief Field KIND_BITS offset 0xffffffff size 0x4
static constexpr int32_t  KIND_BITS{static_cast<int32_t>(0x2)};

/// @brief Field KIND_MASK offset 0xffffffff size 0x4
static constexpr int32_t  KIND_MASK{static_cast<int32_t>(0x3)};

/// @brief Field MAX_SCENE_OBJECT_INDEX offset 0xffffffff size 0x4
static constexpr int32_t  MAX_SCENE_OBJECT_INDEX{static_cast<int32_t>(0x3fffff)};

/// @brief Field SCENE_OBJECT_INDEX_BITS offset 0xffffffff size 0x4
static constexpr int32_t  SCENE_OBJECT_INDEX_BITS{static_cast<int32_t>(0x16)};

/// @brief Field SCENE_OBJECT_INDEX_MASK offset 0xffffffff size 0x4
static constexpr int32_t  SCENE_OBJECT_INDEX_MASK{static_cast<int32_t>(0x3fffff)};

/// @brief Field SCENE_OBJECT_INDEX_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  SCENE_OBJECT_INDEX_SHIFT{static_cast<int32_t>(0x2)};

/// @brief Field SCENE_OBJECT_LOAD_ID_BITS offset 0xffffffff size 0x4
static constexpr int32_t  SCENE_OBJECT_LOAD_ID_BITS{static_cast<int32_t>(0x8)};

/// @brief Field SCENE_OBJECT_LOAD_ID_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  SCENE_OBJECT_LOAD_ID_SHIFT{static_cast<int32_t>(0x18)};

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x8)};

/// @brief Field STRUCT_TYPE_PLAYERDATA offset 0xffffffff size 0x2
static constexpr uint16_t  STRUCT_TYPE_PLAYERDATA{static_cast<uint16_t>(0x1u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19169};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkObjectTypeId) == 0x8, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectTypeId/EqualityComparer
class CORDL_TYPE NetworkObjectTypeId_EqualityComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectTypeId>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectTypeId>*() noexcept;

/// @brief Method Equals, addr 0x5fcd81c, size 0x64, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkObjectTypeId  x, ::Fusion::NetworkObjectTypeId  y) ;

/// @brief Method GetHashCode, addr 0x5fcd880, size 0x60, virtual true, abstract: false, final true
inline int32_t GetHashCode(::Fusion::NetworkObjectTypeId  obj) ;

static inline ::Fusion::NetworkObjectTypeId_EqualityComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x5fcd814, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectTypeId>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectTypeId>* i___System__Collections__Generic__IEqualityComparer_1___Fusion__NetworkObjectTypeId_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectTypeId_EqualityComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectTypeId_EqualityComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectTypeId_EqualityComparer(NetworkObjectTypeId_EqualityComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectTypeId_EqualityComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectTypeId_EqualityComparer(NetworkObjectTypeId_EqualityComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19168};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkObjectTypeId_EqualityComparer) == 0x10, "Size mismatch!");

} // namespace end def Fusion
