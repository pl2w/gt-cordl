#pragma once
// IWYU pragma private; include "Fusion/BitSet256.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__BitSet256__Bits_e__FixedBuffer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitSet256)
namespace Fusion {
class INetworkStruct;
}
namespace GlobalNamespace {
struct BitSet256_Enumerator;
}
namespace GlobalNamespace {
struct BitSet256_Iterator;
}
namespace GlobalNamespace {
struct BitSet256__Bits_e__FixedBuffer;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
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
struct BitSet256;
}
// Write type traits
MARK_VAL_T(::Fusion::BitSet256);
DEFINE_IL2CPP_CLASS(::Fusion::BitSet256, "Fusion", "BitSet256");
// [DefaultMember("Item")]
// [NetworkStructWeaved(8)]
// Dependencies Fusion.BitSet256::<Bits>e__FixedBuffer
namespace Fusion {
// Is value type: true
// CS Name: Fusion.BitSet256
struct CORDL_TYPE BitSet256 {
public:
// Declarations
using Enumerator = ::GlobalNamespace::BitSet256_Enumerator;

using Iterator = ::GlobalNamespace::BitSet256_Iterator;

using _Bits_e__FixedBuffer = ::GlobalNamespace::BitSet256__Bits_e__FixedBuffer;

/// @brief Field Bits, offset 0x0, size 0x20 
 __declspec(property(get=__cordl_internal_get_Bits, put=__cordl_internal_set_Bits)) ::GlobalNamespace::BitSet256__Bits_e__FixedBuffer  Bits;

 __declspec(property(get=get_Item, put=set_Item)) bool  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::BitSet256>"
constexpr operator  ::System::IEquatable_1<::Fusion::BitSet256>*() ;

/// @brief Method And, addr 0x5f9964c, size 0x3c, virtual false, abstract: false, final false
inline void And(::Fusion::BitSet256  other) ;

/// @brief Method AndNot, addr 0x5f99700, size 0x3c, virtual false, abstract: false, final false
inline void AndNot(::Fusion::BitSet256  other) ;

/// @brief Method Any, addr 0x5f99828, size 0x30, virtual false, abstract: false, final false
inline bool Any() ;

/// @brief Method Clear, addr 0x5f9957c, size 0x50, virtual false, abstract: false, final false
inline void Clear(int32_t  bit) ;

/// @brief Method ClearAll, addr 0x5f99760, size 0xc, virtual false, abstract: false, final false
inline void ClearAll() ;

/// @brief Method Empty, addr 0x5f99858, size 0x30, virtual false, abstract: false, final false
inline bool Empty() ;

/// @brief Method Equals, addr 0x5f998d8, size 0xb0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5f99988, size 0x4c, virtual true, abstract: false, final true
inline bool Equals(::Fusion::BitSet256  other) ;

/// @brief Method FromArray, addr 0x5f993e4, size 0x148, virtual false, abstract: false, final false
static inline ::Fusion::BitSet256 FromArray(::ArrayW<uint64_t>  values) ;

/// @brief Method GetEnumerator, addr 0x5f999d4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::BitSet256_Enumerator GetEnumerator() ;

/// @brief Method GetHashCode, addr 0x5f99888, size 0x50, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetIterator, addr 0x5f9935c, size 0x68, virtual false, abstract: false, final false
inline ::GlobalNamespace::BitSet256_Iterator GetIterator() ;

/// @brief Method GetSetCount, addr 0x5f9978c, size 0x9c, virtual false, abstract: false, final false
inline int32_t GetSetCount() ;

/// @brief Method IsSet, addr 0x5f9976c, size 0x20, virtual false, abstract: false, final false
inline bool IsSet(int32_t  bit) ;

/// @brief Method Not, addr 0x5f9973c, size 0x24, virtual false, abstract: false, final false
inline void Not() ;

/// @brief Method Or, addr 0x5f99688, size 0x3c, virtual false, abstract: false, final false
inline void Or(::Fusion::BitSet256  other) ;

/// @brief Method Set, addr 0x5f9952c, size 0x50, virtual false, abstract: false, final false
inline void Set(int32_t  bit) ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator, addr 0x5f999ec, size 0x5c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5f99a48, size 0x5c, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Xor, addr 0x5f996c4, size 0x3c, virtual false, abstract: false, final false
inline void Xor(::Fusion::BitSet256  other) ;

constexpr ::GlobalNamespace::BitSet256__Bits_e__FixedBuffer const& __cordl_internal_get_Bits() const;

constexpr ::GlobalNamespace::BitSet256__Bits_e__FixedBuffer& __cordl_internal_get_Bits() ;

constexpr void __cordl_internal_set_Bits(::GlobalNamespace::BitSet256__Bits_e__FixedBuffer  value) ;

/// @brief Method get_Item, addr 0x5f995cc, size 0x20, virtual false, abstract: false, final false
inline bool get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x5f993dc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* i___System__Collections__Generic__IEnumerable_1_int32_t_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::BitSet256>"
constexpr ::System::IEquatable_1<::Fusion::BitSet256>* i___System__IEquatable_1___Fusion__BitSet256_() ;

/// @brief Method op_Equality, addr 0x5f99aa4, size 0x48, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::BitSet256  a, ::Fusion::BitSet256  b) ;

/// @brief Method op_Inequality, addr 0x5f99aec, size 0x4c, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::BitSet256  a, ::Fusion::BitSet256  b) ;

/// @brief Method set_Item, addr 0x5f995ec, size 0x60, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BitSet256() ;

// Ctor Parameters [CppParam { name: "Bits", ty: "::GlobalNamespace::BitSet256__Bits_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr BitSet256(::GlobalNamespace::BitSet256__Bits_e__FixedBuffer  Bits) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Bits_padding[0x0];
/// [FixedBuffer(typeof(System.UInt64), 4)]
/// @brief Field Bits, offset: 0x0, size: 0x20, def value: None
 ::GlobalNamespace::BitSet256__Bits_e__FixedBuffer  ___Bits;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Bits_padding_forAlignment[0x0];
/// [FixedBuffer(typeof(System.UInt64), 4)]
/// @brief Field Bits, offset: 0x0, size: 0x20, def value: None
 ::GlobalNamespace::BitSet256__Bits_e__FixedBuffer  ___Bits_forAlignment;
};
};
public:

/// @brief Field CAPACITY offset 0xffffffff size 0x4
static constexpr int32_t  CAPACITY{static_cast<int32_t>(0x100)};

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x20)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18990};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::BitSet256) == 0x20, "Size mismatch!");

} // namespace end def Fusion
