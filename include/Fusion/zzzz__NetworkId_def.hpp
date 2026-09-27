#pragma once
// IWYU pragma private; include "Fusion/NetworkId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkId)
namespace Fusion::Sockets {
struct NetBitBuffer;
}
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
class NetworkId_EqualityComparer;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IComparable;
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
class NetworkId_EqualityComparer;
}
namespace Fusion {
struct NetworkId;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkId_EqualityComparer*);
MARK_VAL_T(::Fusion::NetworkId);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkId_EqualityComparer*, "Fusion", "NetworkId/EqualityComparer");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkId, "Fusion", "NetworkId");
// [NetworkStructWeaved(1)]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkId
struct CORDL_TYPE NetworkId {
public:
// Declarations
using EqualityComparer = ::Fusion::NetworkId_EqualityComparer;

 __declspec(property(get=get_IsReserved)) bool  IsReserved;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field Raw, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Raw, put=__cordl_internal_set_Raw)) uint32_t  Raw;

/// @brief Field <Comparer>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Comparer_k__BackingField, put=setStaticF__Comparer_k__BackingField)) ::Fusion::NetworkId_EqualityComparer*  _Comparer_k__BackingField;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::Fusion::NetworkId>"
constexpr operator  ::System::IComparable_1<::Fusion::NetworkId>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkId>"
constexpr operator  ::System::IEquatable_1<::Fusion::NetworkId>*() ;

/// @brief Method CompareTo, addr 0x5fa7c24, size 0xc, virtual true, abstract: false, final true
inline int32_t CompareTo(::Fusion::NetworkId  other) ;

/// @brief Method Equals, addr 0x5fa7c30, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5fa7c14, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkId  other) ;

/// @brief Method GetHashCode, addr 0x5fa7ddc, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Read, addr 0x5fa7d60, size 0xc, virtual false, abstract: false, final false
static inline ::Fusion::NetworkId Read(::Fusion::Sockets::NetBitBuffer*  buffer) ;

/// @brief Method System.IComparable.CompareTo, addr 0x5fa7ca8, size 0x88, virtual true, abstract: false, final true
inline int32_t System_IComparable_CompareTo(::System::Object*  obj) ;

/// @brief Method ToNamePrefixString, addr 0x5fa7f28, size 0xbc, virtual false, abstract: false, final false
inline ::StringW ToNamePrefixString() ;

/// @brief Method ToString, addr 0x5fa7de4, size 0x144, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Write, addr 0x5fa7d6c, size 0x70, virtual false, abstract: false, final false
inline void Write(::Fusion::Sockets::NetBitBuffer*  buffer) ;

/// @brief Method Write, addr 0x5fa7d54, size 0xc, virtual false, abstract: false, final false
static inline void Write(::Fusion::Sockets::NetBitBuffer*  buffer, ::Fusion::NetworkId  id) ;

constexpr uint32_t const& __cordl_internal_get_Raw() const;

constexpr uint32_t& __cordl_internal_get_Raw() ;

constexpr void __cordl_internal_set_Raw(uint32_t  value) ;

/// @brief Method .ctor, addr 0x5fa7bfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint32_t  raw) ;

static inline ::Fusion::NetworkId_EqualityComparer* getStaticF__Comparer_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Comparer, addr 0x5fa7b78, size 0x58, virtual false, abstract: false, final false
static inline ::Fusion::NetworkId_EqualityComparer* get_Comparer() ;

/// @brief Method get_IsReserved, addr 0x5fa7be0, size 0x14, virtual false, abstract: false, final false
inline bool get_IsReserved() ;

/// @brief Method get_IsValid, addr 0x5fa7bd0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_PhysicsInfo, addr 0x5fa7c0c, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::NetworkId get_PhysicsInfo() ;

/// @brief Method get_RuntimeConfig, addr 0x5fa7bf4, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::NetworkId get_RuntimeConfig() ;

/// @brief Method get_SceneInfo, addr 0x5fa7c04, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::NetworkId get_SceneInfo() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Convert to "::System::IComparable_1<::Fusion::NetworkId>"
constexpr ::System::IComparable_1<::Fusion::NetworkId>* i___System__IComparable_1___Fusion__NetworkId_() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkId>"
constexpr ::System::IEquatable_1<::Fusion::NetworkId>* i___System__IEquatable_1___Fusion__NetworkId_() ;

/// @brief Method op_Equality, addr 0x5fa7d30, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::NetworkId  a, ::Fusion::NetworkId  b) ;

/// @brief Method op_Implicit, addr 0x5fa7d48, size 0xc, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::Fusion::NetworkId  id) ;

/// @brief Method op_Inequality, addr 0x5fa7d3c, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::NetworkId  a, ::Fusion::NetworkId  b) ;

static inline void setStaticF__Comparer_k__BackingField(::Fusion::NetworkId_EqualityComparer*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkId() ;

// Ctor Parameters [CppParam { name: "Raw", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkId(uint32_t  Raw) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Raw_padding[0x0];
/// @brief Field Raw, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___Raw;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Raw_padding_forAlignment[0x0];
/// @brief Field Raw, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___Raw_forAlignment;
};
};
public:

/// @brief Field ALIGNMENT offset 0xffffffff size 0x4
static constexpr int32_t  ALIGNMENT{static_cast<int32_t>(0x4)};

/// @brief Field BLOCK_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  BLOCK_SIZE{static_cast<int32_t>(0x8)};

/// @brief Field MAX_RESERVED_ID offset 0xffffffff size 0x4
static constexpr int32_t  MAX_RESERVED_ID{static_cast<int32_t>(0x3ff)};

/// @brief Field RAW_PHYSICS_INFO offset 0xffffffff size 0x4
static constexpr uint32_t  RAW_PHYSICS_INFO{static_cast<uint32_t>(0x4u)};

/// @brief Field RAW_PLAYER_REF_DATA_ARRAY offset 0xffffffff size 0x4
static constexpr uint32_t  RAW_PLAYER_REF_DATA_ARRAY{static_cast<uint32_t>(0x2u)};

/// @brief Field RAW_RUNTIME_CONFIG offset 0xffffffff size 0x4
static constexpr uint32_t  RAW_RUNTIME_CONFIG{static_cast<uint32_t>(0x1u)};

/// @brief Field RAW_SCENE_INFO offset 0xffffffff size 0x4
static constexpr uint32_t  RAW_SCENE_INFO{static_cast<uint32_t>(0x3u)};

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19116};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkId) == 0x4, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkId/EqualityComparer
class CORDL_TYPE NetworkId_EqualityComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkId>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkId>*() noexcept;

/// @brief Method Equals, addr 0x5fa8068, size 0xc, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkId  a, ::Fusion::NetworkId  b) ;

/// @brief Method GetHashCode, addr 0x5fa8074, size 0x8, virtual true, abstract: false, final true
inline int32_t GetHashCode(::Fusion::NetworkId  id) ;

static inline ::Fusion::NetworkId_EqualityComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x5fa8060, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkId>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkId>* i___System__Collections__Generic__IEqualityComparer_1___Fusion__NetworkId_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkId_EqualityComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkId_EqualityComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkId_EqualityComparer(NetworkId_EqualityComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkId_EqualityComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkId_EqualityComparer(NetworkId_EqualityComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19115};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkId_EqualityComparer) == 0x10, "Size mismatch!");

} // namespace end def Fusion
