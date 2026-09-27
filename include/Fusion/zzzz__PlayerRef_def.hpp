#pragma once
// IWYU pragma private; include "Fusion/PlayerRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__INetBitWriteStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerRef)
namespace Fusion::Sockets {
struct NetBitBuffer;
}
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
class PlayerRef_IndexEqualityComparer;
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
class PlayerRef_IndexEqualityComparer;
}
namespace Fusion {
struct PlayerRef;
}
// Write type traits
MARK_REF_T(::Fusion::PlayerRef_IndexEqualityComparer*);
MARK_VAL_T(::Fusion::PlayerRef);
DEFINE_IL2CPP_CLASS(::Fusion::PlayerRef_IndexEqualityComparer*, "Fusion", "PlayerRef/IndexEqualityComparer");
DEFINE_IL2CPP_CLASS(::Fusion::PlayerRef, "Fusion", "PlayerRef");
// [NetworkStructWeaved(1)]
// Dependencies Fusion.Sockets.INetBitWriteStream
namespace Fusion {
// Is value type: true
// CS Name: Fusion.PlayerRef
struct CORDL_TYPE PlayerRef {
public:
// Declarations
using IndexEqualityComparer = ::Fusion::PlayerRef_IndexEqualityComparer;

 __declspec(property(get=get_AsIndex)) int32_t  AsIndex;

 __declspec(property(get=get_IsMasterClient)) bool  IsMasterClient;

 __declspec(property(get=get_IsNone)) bool  IsNone;

 __declspec(property(get=get_IsRealPlayer)) bool  IsRealPlayer;

 __declspec(property(get=get_PlayerId)) int32_t  PlayerId;

 __declspec(property(get=get_RawEncoded)) int32_t  RawEncoded;

/// @brief Field <Comparer>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Comparer_k__BackingField, put=setStaticF__Comparer_k__BackingField)) ::System::Collections::Generic::IEqualityComparer_1<::Fusion::PlayerRef>*  _Comparer_k__BackingField;

/// @brief Field _index, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__index, put=__cordl_internal_set__index)) int32_t  _index;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::PlayerRef>"
constexpr operator  ::System::IEquatable_1<::Fusion::PlayerRef>*() ;

/// @brief Method Equals, addr 0x5fa15dc, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5fa1668, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Fusion::PlayerRef  other) ;

/// @brief Method FromEncoded, addr 0x5fa1734, size 0x4, virtual false, abstract: false, final false
static inline ::Fusion::PlayerRef FromEncoded(int32_t  encoded) ;

/// @brief Method FromIndex, addr 0x5fa1738, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::PlayerRef FromIndex(int32_t  index) ;

/// @brief Method GetHashCode, addr 0x5fa1678, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Read, addr 0x5fa1800, size 0x98, virtual false, abstract: false, final false
static inline ::Fusion::PlayerRef Read(::Fusion::Sockets::NetBitBuffer*  buffer) ;

/// @brief Method ToString, addr 0x5fa1680, size 0xb4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Write, addr 0x5fa1758, size 0xa8, virtual false, abstract: false, final false
static inline void Write(::Fusion::Sockets::NetBitBuffer*  buffer, ::Fusion::PlayerRef  playerRef) ;

/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::Sockets::INetBitWriteStream*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void Write(T*  buffer, ::Fusion::PlayerRef  playerRef) ;

constexpr int32_t const& __cordl_internal_get__index() const;

constexpr int32_t& __cordl_internal_get__index() ;

constexpr void __cordl_internal_set__index(int32_t  value) ;

static inline ::System::Collections::Generic::IEqualityComparer_1<::Fusion::PlayerRef>* getStaticF__Comparer_k__BackingField() ;

/// @brief Method get_AsIndex, addr 0x5fa15c4, size 0xc, virtual false, abstract: false, final false
inline int32_t get_AsIndex() ;

/// [CompilerGenerated]
/// @brief Method get_Comparer, addr 0x5fa151c, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEqualityComparer_1<::Fusion::PlayerRef>* get_Comparer() ;

/// @brief Method get_Invalid, addr 0x5fa1574, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::PlayerRef get_Invalid() ;

/// @brief Method get_IsMasterClient, addr 0x5fa15ac, size 0x10, virtual false, abstract: false, final false
inline bool get_IsMasterClient() ;

/// @brief Method get_IsNone, addr 0x5fa159c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsNone() ;

/// @brief Method get_IsRealPlayer, addr 0x5fa158c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsRealPlayer() ;

/// @brief Method get_MasterClient, addr 0x5fa1584, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::PlayerRef get_MasterClient() ;

/// @brief Method get_None, addr 0x5fa157c, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::PlayerRef get_None() ;

/// @brief Method get_PlayerId, addr 0x5fa15d0, size 0xc, virtual false, abstract: false, final false
inline int32_t get_PlayerId() ;

/// @brief Method get_RawEncoded, addr 0x5fa15bc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_RawEncoded() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::PlayerRef>"
constexpr ::System::IEquatable_1<::Fusion::PlayerRef>* i___System__IEquatable_1___Fusion__PlayerRef_() ;

/// @brief Method op_Equality, addr 0x5fa1740, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::PlayerRef  a, ::Fusion::PlayerRef  b) ;

/// @brief Method op_Inequality, addr 0x5fa174c, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::PlayerRef  a, ::Fusion::PlayerRef  b) ;

static inline void setStaticF__Comparer_k__BackingField(::System::Collections::Generic::IEqualityComparer_1<::Fusion::PlayerRef>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerRef() ;

// Ctor Parameters [CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PlayerRef(int32_t  _index) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____index_padding[0x0];
/// @brief Field _index, offset: 0x0, size: 0x4, def value: None
 int32_t  ____index;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____index_padding_forAlignment[0x0];
/// @brief Field _index, offset: 0x0, size: 0x4, def value: None
 int32_t  ____index_forAlignment;
};
};
public:

/// @brief Field INVALID_RAW offset 0xffffffff size 0x4
static constexpr int32_t  INVALID_RAW{static_cast<int32_t>(0xfffffff6)};

/// @brief Field MASTER_CLIENT_RAW offset 0xffffffff size 0x4
static constexpr int32_t  MASTER_CLIENT_RAW{static_cast<int32_t>(0xffffffff)};

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19083};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::PlayerRef) == 0x4, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.PlayerRef/IndexEqualityComparer
class CORDL_TYPE PlayerRef_IndexEqualityComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::PlayerRef>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::Fusion::PlayerRef>*() noexcept;

/// @brief Method Equals, addr 0x5fa191c, size 0xc, virtual true, abstract: false, final true
inline bool Equals(::Fusion::PlayerRef  x, ::Fusion::PlayerRef  y) ;

/// @brief Method GetHashCode, addr 0x5fa1928, size 0x8, virtual true, abstract: false, final true
inline int32_t GetHashCode(::Fusion::PlayerRef  obj) ;

static inline ::Fusion::PlayerRef_IndexEqualityComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x5fa1914, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::PlayerRef>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Fusion::PlayerRef>* i___System__Collections__Generic__IEqualityComparer_1___Fusion__PlayerRef_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerRef_IndexEqualityComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerRef_IndexEqualityComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerRef_IndexEqualityComparer(PlayerRef_IndexEqualityComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerRef_IndexEqualityComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerRef_IndexEqualityComparer(PlayerRef_IndexEqualityComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19082};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::PlayerRef_IndexEqualityComparer) == 0x10, "Size mismatch!");

} // namespace end def Fusion
