#pragma once
// IWYU pragma private; include "Fusion/NetworkString_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__IFixedStorage_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkString_1)
namespace Fusion {
class INetworkString;
}
namespace Fusion {
class INetworkStruct;
}
namespace GlobalNamespace {
struct UTF32Tools_CharEnumerator;
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
template<typename TSize>
struct NetworkString_1;
}
// Write type traits
MARK_GEN_VAL_T(::Fusion::NetworkString_1);
DEFINE_IL2CPP_GEN_CLASS(::Fusion::NetworkString_1, "Fusion", "NetworkString`1");
// [DefaultMember("Item")]
// [DebuggerDisplay("{Value}")]
// [NetworkStructWeaved(1, true)]
// Dependencies Fusion.IFixedStorage
namespace Fusion {
// cpp template
template<typename TSize>
// Is value type: true
// CS Name: Fusion.NetworkString`1<TSize>
#pragma pack(push, 4)
struct CORDL_TYPE NetworkString_1 {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Item)) uint32_t  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_SafeLength)) int32_t  SafeLength;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

/// @brief Convert operator to "::Fusion::INetworkString"
constexpr operator  ::Fusion::INetworkString*() ;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<char16_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkString_1<TSize>>"
constexpr operator  ::System::IEquatable_1<::Fusion::NetworkString_1<TSize>>*() ;

/// @brief Method Assign, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Assign(::StringW  value) ;

/// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline int32_t Compare(::Fusion::NetworkString_1<TOtherSize>  other) ;

/// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline int32_t Compare(::by_ref<::Fusion::NetworkString_1<TOtherSize>>  other) ;

/// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Compare(::Fusion::NetworkString_1<TSize>  s) ;

/// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Compare(::StringW  s) ;

/// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Compare(::by_ref<::Fusion::NetworkString_1<TSize>>  s) ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(char16_t  c) ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(uint32_t  codePoint) ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline bool Contains(::Fusion::NetworkString_1<TOtherSize>  str) ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(::StringW  str) ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline bool Contains(::by_ref<::Fusion::NetworkString_1<TOtherSize>>  str) ;

/// @brief Method EndsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline bool EndsWith(::by_ref<::Fusion::NetworkString_1<TOtherSize>>  other) ;

/// @brief Method EndsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool EndsWith(::StringW  s) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline bool Equals(::Fusion::NetworkString_1<TOtherSize>  other) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkString_1<TSize>  other) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline bool Equals(::by_ref<::Fusion::NetworkString_1<TOtherSize>>  other) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Equals(::by_ref<::Fusion::NetworkString_1<TSize>>  other) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Equals(::StringW  s) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Get(::by_ref<::StringW>  cache) ;

/// @brief Method GetCharCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t GetCharCount() ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::UTF32Tools_CharEnumerator GetEnumerator() ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(char16_t  c, int32_t  startIndex) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(char16_t  c, int32_t  startIndex, int32_t  count) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(uint32_t  codePoint, int32_t  startIndex) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(uint32_t  codePoint, int32_t  startIndex, int32_t  count) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline int32_t IndexOf(::Fusion::NetworkString_1<TOtherSize>  str, int32_t  startIndex) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline int32_t IndexOf(::Fusion::NetworkString_1<TOtherSize>  str, int32_t  startIndex, int32_t  count) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(::StringW  str, int32_t  startIndex) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(::StringW  str, int32_t  startIndex, int32_t  count) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline int32_t IndexOf(::by_ref<::Fusion::NetworkString_1<TOtherSize>>  str, int32_t  startIndex) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline int32_t IndexOf(::by_ref<::Fusion::NetworkString_1<TOtherSize>>  str, int32_t  startIndex, int32_t  count) ;

/// @brief Method SafeIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t SafeIndex(int32_t  index) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Set(::StringW  value) ;

/// @brief Method StartsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline bool StartsWith(::by_ref<::Fusion::NetworkString_1<TOtherSize>>  other) ;

/// @brief Method StartsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool StartsWith(::StringW  s) ;

/// @brief Method Substring, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Fusion::NetworkString_1<TSize> Substring(int32_t  startIndex) ;

/// @brief Method Substring, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Fusion::NetworkString_1<TSize> Substring(int32_t  startIndex, int32_t  length) ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<char16_t>* System_Collections_Generic_IEnumerable_System_Char__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToLower, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Fusion::NetworkString_1<TSize> ToLower() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToUpper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Fusion::NetworkString_1<TSize> ToUpper() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  value) ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<uint32_t> get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_SafeLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_SafeLength() ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Convert to "::Fusion::INetworkString"
constexpr ::Fusion::INetworkString* i___Fusion__INetworkString() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<char16_t>* i___System__Collections__Generic__IEnumerable_1_char16_t_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkString_1<TSize>>"
constexpr ::System::IEquatable_1<::Fusion::NetworkString_1<TSize>>* i___System__IEquatable_1___Fusion__NetworkString_1_TSize__() ;

/// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::NetworkString_1<TSize>  a, ::Fusion::NetworkString_1<TSize>  b) ;

/// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::NetworkString_1<TSize>  a, ::StringW  b) ;

/// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Equality(::StringW  a, ::Fusion::NetworkString_1<TSize>  b) ;

/// @brief Method op_Explicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::StringW op_Explicit___StringW(::Fusion::NetworkString_1<TSize>  str) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Fusion::NetworkString_1<TSize> op_Implicit___Fusion__NetworkString_1_TSize_(::StringW  str) ;

/// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::NetworkString_1<TSize>  a, ::Fusion::NetworkString_1<TSize>  b) ;

/// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::NetworkString_1<TSize>  a, ::StringW  b) ;

/// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Inequality(::StringW  a, ::Fusion::NetworkString_1<TSize>  b) ;

/// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Value(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkString_1() ;

// Ctor Parameters [CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data", ty: "TSize", modifiers: "", def_value: None, comment: None }]
constexpr NetworkString_1(int32_t  _length, TSize  _data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19080};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// [SerializeField]
/// @brief Field _length, offset: 0x0, size: 0x4, def value: None
 int32_t  _length;

/// [SerializeField]
/// @brief Field _data, offset: 0x4, size: 0x8, def value: None
 TSize  _data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace end def Fusion
