#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkPrefabId)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
class NetworkPrefabId_EqualityComparer;
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
class NetworkPrefabId_EqualityComparer;
}
namespace Fusion {
struct NetworkPrefabId;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkPrefabId_EqualityComparer*);
MARK_VAL_T(::Fusion::NetworkPrefabId);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkPrefabId_EqualityComparer*, "Fusion", "NetworkPrefabId/EqualityComparer");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkPrefabId, "Fusion", "NetworkPrefabId");
// [InlineHelp]
// [NetworkStructWeaved(1)]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkPrefabId
struct CORDL_TYPE NetworkPrefabId {
public:
// Declarations
using EqualityComparer = ::Fusion::NetworkPrefabId_EqualityComparer;

 __declspec(property(get=get_AsIndex)) int32_t  AsIndex;

 __declspec(property(get=get_IsNone)) bool  IsNone;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field RawValue, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_RawValue, put=__cordl_internal_set_RawValue)) uint32_t  RawValue;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::Fusion::NetworkPrefabId>"
constexpr operator  ::System::IComparable_1<::Fusion::NetworkPrefabId>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkPrefabId>"
constexpr operator  ::System::IEquatable_1<::Fusion::NetworkPrefabId>*() ;

/// @brief Method CompareTo, addr 0x5fce64c, size 0x8, virtual true, abstract: false, final true
inline int32_t CompareTo(::Fusion::NetworkPrefabId  other) ;

/// @brief Method Equals, addr 0x5fce420, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5fce410, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkPrefabId  other) ;

/// @brief Method FromIndex, addr 0x5fce3b0, size 0x60, virtual false, abstract: false, final false
static inline ::Fusion::NetworkPrefabId FromIndex(int32_t  index) ;

/// @brief Method FromRaw, addr 0x5fccfcc, size 0x4, virtual false, abstract: false, final false
static inline ::Fusion::NetworkPrefabId FromRaw(uint32_t  value) ;

/// @brief Method GetHashCode, addr 0x5fce498, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method System.IComparable.CompareTo, addr 0x5fce5cc, size 0x80, virtual true, abstract: false, final true
inline int32_t System_IComparable_CompareTo(::System::Object*  obj) ;

/// @brief Method ToString, addr 0x5fce4a0, size 0xc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x5fce4ac, size 0x120, virtual false, abstract: false, final false
inline ::StringW ToString(bool  brackets, bool  prefix) ;

constexpr uint32_t const& __cordl_internal_get_RawValue() const;

constexpr uint32_t& __cordl_internal_get_RawValue() ;

constexpr void __cordl_internal_set_RawValue(uint32_t  value) ;

/// @brief Method get_AsIndex, addr 0x5fcd69c, size 0xc, virtual false, abstract: false, final false
inline int32_t get_AsIndex() ;

/// @brief Method get_IsNone, addr 0x5fce3a0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsNone() ;

/// @brief Method get_IsValid, addr 0x5fcce38, size 0x10, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Convert to "::System::IComparable_1<::Fusion::NetworkPrefabId>"
constexpr ::System::IComparable_1<::Fusion::NetworkPrefabId>* i___System__IComparable_1___Fusion__NetworkPrefabId_() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkPrefabId>"
constexpr ::System::IEquatable_1<::Fusion::NetworkPrefabId>* i___System__IEquatable_1___Fusion__NetworkPrefabId_() ;

/// @brief Method op_Equality, addr 0x5fce654, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::NetworkPrefabId  a, ::Fusion::NetworkPrefabId  b) ;

/// @brief Method op_Inequality, addr 0x5fce660, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::NetworkPrefabId  a, ::Fusion::NetworkPrefabId  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkPrefabId() ;

// Ctor Parameters [CppParam { name: "RawValue", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkPrefabId(uint32_t  RawValue) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___RawValue_padding[0x0];
/// [FormerlySerializedAs("Value")]
/// @brief Field RawValue, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___RawValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___RawValue_padding_forAlignment[0x0];
/// [FormerlySerializedAs("Value")]
/// @brief Field RawValue, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___RawValue_forAlignment;
};
};
public:

/// @brief Field ALIGNMENT offset 0xffffffff size 0x4
static constexpr int32_t  ALIGNMENT{static_cast<int32_t>(0x4)};

/// @brief Field MAX_INDEX offset 0xffffffff size 0x4
static constexpr int32_t  MAX_INDEX{static_cast<int32_t>(0x7ffffffe)};

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19175};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkPrefabId) == 0x4, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkPrefabId/EqualityComparer
class CORDL_TYPE NetworkPrefabId_EqualityComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabId>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabId>*() noexcept;

/// @brief Method Equals, addr 0x5fce66c, size 0xc, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkPrefabId  x, ::Fusion::NetworkPrefabId  y) ;

/// @brief Method GetHashCode, addr 0x5fce678, size 0x8, virtual true, abstract: false, final true
inline int32_t GetHashCode(::Fusion::NetworkPrefabId  obj) ;

static inline ::Fusion::NetworkPrefabId_EqualityComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x5fce680, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabId>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabId>* i___System__Collections__Generic__IEqualityComparer_1___Fusion__NetworkPrefabId_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkPrefabId_EqualityComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkPrefabId_EqualityComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkPrefabId_EqualityComparer(NetworkPrefabId_EqualityComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPrefabId_EqualityComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkPrefabId_EqualityComparer(NetworkPrefabId_EqualityComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19174};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkPrefabId_EqualityComparer) == 0x10, "Size mismatch!");

} // namespace end def Fusion
