#pragma once
// IWYU pragma private; include "Fusion/BitSet128.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__BitSet128__Bits_e__FixedBuffer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitSet128)
namespace Fusion {
class INetworkStruct;
}
namespace GlobalNamespace {
struct BitSet128_Enumerator;
}
namespace GlobalNamespace {
struct BitSet128_Iterator;
}
namespace GlobalNamespace {
struct BitSet128__Bits_e__FixedBuffer;
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
struct BitSet128;
}
// Write type traits
MARK_VAL_T(::Fusion::BitSet128);
DEFINE_IL2CPP_CLASS(::Fusion::BitSet128, "Fusion", "BitSet128");
// [DefaultMember("Item")]
// [NetworkStructWeaved(4)]
// Dependencies Fusion.BitSet128::<Bits>e__FixedBuffer
namespace Fusion {
// Is value type: true
// CS Name: Fusion.BitSet128
struct CORDL_TYPE BitSet128 {
public:
// Declarations
using Enumerator = ::GlobalNamespace::BitSet128_Enumerator;

using Iterator = ::GlobalNamespace::BitSet128_Iterator;

using _Bits_e__FixedBuffer = ::GlobalNamespace::BitSet128__Bits_e__FixedBuffer;

/// @brief Field Bits, offset 0x0, size 0x10 
 __declspec(property(get=__cordl_internal_get_Bits, put=__cordl_internal_set_Bits)) ::GlobalNamespace::BitSet128__Bits_e__FixedBuffer  Bits;

 __declspec(property(get=get_Item, put=set_Item)) bool  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::BitSet128>"
constexpr operator  ::System::IEquatable_1<::Fusion::BitSet128>*() ;

/// @brief Method And, addr 0x5f981b4, size 0x50, virtual false, abstract: false, final false
inline void And(::Fusion::BitSet128  other) ;

/// @brief Method AndNot, addr 0x5f982a4, size 0x50, virtual false, abstract: false, final false
inline void AndNot(::Fusion::BitSet128  other) ;

/// @brief Method Any, addr 0x5f983a8, size 0x20, virtual false, abstract: false, final false
inline bool Any() ;

/// @brief Method Clear, addr 0x5f980e4, size 0x50, virtual false, abstract: false, final false
inline void Clear(int32_t  bit) ;

/// @brief Method ClearAll, addr 0x5f98308, size 0x8, virtual false, abstract: false, final false
inline void ClearAll() ;

/// @brief Method Empty, addr 0x5f983c8, size 0x20, virtual false, abstract: false, final false
inline bool Empty() ;

/// @brief Method Equals, addr 0x5f98438, size 0xc0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5f984f8, size 0x5c, virtual true, abstract: false, final true
inline bool Equals(::Fusion::BitSet128  other) ;

/// @brief Method FromArray, addr 0x5f97f4c, size 0x148, virtual false, abstract: false, final false
static inline ::Fusion::BitSet128 FromArray(::ArrayW<uint64_t>  values) ;

/// @brief Method GetEnumerator, addr 0x5f98554, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::BitSet128_Enumerator GetEnumerator() ;

/// @brief Method GetHashCode, addr 0x5f983e8, size 0x50, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetIterator, addr 0x5f97f20, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::BitSet128_Iterator GetIterator() ;

/// @brief Method GetSetCount, addr 0x5f98330, size 0x78, virtual false, abstract: false, final false
inline int32_t GetSetCount() ;

/// @brief Method IsSet, addr 0x5f98310, size 0x20, virtual false, abstract: false, final false
inline bool IsSet(int32_t  bit) ;

/// @brief Method Not, addr 0x5f982f4, size 0x14, virtual false, abstract: false, final false
inline void Not() ;

/// @brief Method Or, addr 0x5f98204, size 0x50, virtual false, abstract: false, final false
inline void Or(::Fusion::BitSet128  other) ;

/// @brief Method Set, addr 0x5f98094, size 0x50, virtual false, abstract: false, final false
inline void Set(int32_t  bit) ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator, addr 0x5f9856c, size 0x5c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5f985c8, size 0x5c, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Xor, addr 0x5f98254, size 0x50, virtual false, abstract: false, final false
inline void Xor(::Fusion::BitSet128  other) ;

constexpr ::GlobalNamespace::BitSet128__Bits_e__FixedBuffer const& __cordl_internal_get_Bits() const;

constexpr ::GlobalNamespace::BitSet128__Bits_e__FixedBuffer& __cordl_internal_get_Bits() ;

constexpr void __cordl_internal_set_Bits(::GlobalNamespace::BitSet128__Bits_e__FixedBuffer  value) ;

/// @brief Method get_Item, addr 0x5f98134, size 0x20, virtual false, abstract: false, final false
inline bool get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x5f97f44, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* i___System__Collections__Generic__IEnumerable_1_int32_t_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::BitSet128>"
constexpr ::System::IEquatable_1<::Fusion::BitSet128>* i___System__IEquatable_1___Fusion__BitSet128_() ;

/// @brief Method op_Equality, addr 0x5f98624, size 0x5c, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::BitSet128  a, ::Fusion::BitSet128  b) ;

/// @brief Method op_Inequality, addr 0x5f98680, size 0x5c, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::BitSet128  a, ::Fusion::BitSet128  b) ;

/// @brief Method set_Item, addr 0x5f98154, size 0x60, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BitSet128() ;

// Ctor Parameters [CppParam { name: "Bits", ty: "::GlobalNamespace::BitSet128__Bits_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr BitSet128(::GlobalNamespace::BitSet128__Bits_e__FixedBuffer  Bits) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Bits_padding[0x0];
/// [FixedBuffer(typeof(System.UInt64), 2)]
/// @brief Field Bits, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::BitSet128__Bits_e__FixedBuffer  ___Bits;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Bits_padding_forAlignment[0x0];
/// [FixedBuffer(typeof(System.UInt64), 2)]
/// @brief Field Bits, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::BitSet128__Bits_e__FixedBuffer  ___Bits_forAlignment;
};
};
public:

/// @brief Field CAPACITY offset 0xffffffff size 0x4
static constexpr int32_t  CAPACITY{static_cast<int32_t>(0x80)};

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18982};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::BitSet128) == 0x10, "Size mismatch!");

} // namespace end def Fusion
