#pragma once
// IWYU pragma private; include "Fusion/NetworkArray_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkArray_1)
namespace Fusion {
template<typename T>
class DebuggerProxy_NetworkArray_1___c__DisplayClass0_0;
}
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace Fusion {
class INetworkArray;
}
namespace Fusion {
template<typename T>
struct NetworkArrayReadOnly_1;
}
namespace Fusion {
template<typename T>
class NetworkArray_1_DebuggerProxy;
}
namespace GlobalNamespace {
template<typename T>
struct NetworkArray_1_Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
class Lazy_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
template<typename T>
class DebuggerProxy_NetworkArray_1___c__DisplayClass0_0;
}
namespace Fusion {
template<typename T>
class NetworkArray_1_DebuggerProxy;
}
namespace Fusion {
template<typename T>
struct NetworkArray_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Fusion::DebuggerProxy_NetworkArray_1___c__DisplayClass0_0);
MARK_GEN_REF_T_PTR(::Fusion::NetworkArray_1_DebuggerProxy);
MARK_GEN_VAL_T(::Fusion::NetworkArray_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::DebuggerProxy_NetworkArray_1___c__DisplayClass0_0, "Fusion", "NetworkArray`1/DebuggerProxy/<>c__DisplayClass0_0");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::NetworkArray_1_DebuggerProxy, "Fusion", "NetworkArray`1/DebuggerProxy");
DEFINE_IL2CPP_GEN_CLASS(::Fusion::NetworkArray_1, "Fusion", "NetworkArray`1");
// Dependencies System.Object
namespace Fusion {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.NetworkArray`1/DebuggerProxy<T>
class CORDL_TYPE NetworkArray_1_DebuggerProxy : public ::System::Object {
public:
// Declarations
using __c__DisplayClass0_0 = ::Fusion::DebuggerProxy_NetworkArray_1___c__DisplayClass0_0<T>;

/// @brief [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)3)]
 __declspec(property(get=get_Items)) ::ArrayW<T>  Items;

/// @brief Field _items, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__items, put=__cordl_internal_set__items)) ::System::Lazy_1<::ArrayW<T>>*  _items;

static inline ::Fusion::NetworkArray_1_DebuggerProxy<T>* New_ctor(::Fusion::NetworkArray_1<T>  array) ;

constexpr ::System::Lazy_1<::ArrayW<T>>* const& __cordl_internal_get__items() const;

constexpr ::System::Lazy_1<::ArrayW<T>>*& __cordl_internal_get__items() ;

constexpr void __cordl_internal_set__items(::System::Lazy_1<::ArrayW<T>>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkArray_1<T>  array) ;

/// @brief Method get_Items, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T> get_Items() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkArray_1_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkArray_1_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkArray_1_DebuggerProxy(NetworkArray_1_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkArray_1_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkArray_1_DebuggerProxy(NetworkArray_1_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19055};

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field _items, offset: 0x10, size: 0x8, def value: None
 ::System::Lazy_1<::ArrayW<T>>*  ____items;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.NetworkArray`1<T>, System.Object
namespace Fusion {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.NetworkArray`1/DebuggerProxy/<>c__DisplayClass0_0<T>
class CORDL_TYPE DebuggerProxy_NetworkArray_1___c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief Field array, offset 0x10, size 0x18 
 __declspec(property(get=__cordl_internal_get_array, put=__cordl_internal_set_array)) ::Fusion::NetworkArray_1<T>  array;

static inline ::Fusion::DebuggerProxy_NetworkArray_1___c__DisplayClass0_0<T>* New_ctor() ;

constexpr ::Fusion::NetworkArray_1<T> const& __cordl_internal_get_array() const;

constexpr ::Fusion::NetworkArray_1<T>& __cordl_internal_get_array() ;

constexpr void __cordl_internal_set_array(::Fusion::NetworkArray_1<T>  value) ;

/// @brief Method <.ctor>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T> __ctor_b__0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebuggerProxy_NetworkArray_1___c__DisplayClass0_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebuggerProxy_NetworkArray_1___c__DisplayClass0_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebuggerProxy_NetworkArray_1___c__DisplayClass0_0(DebuggerProxy_NetworkArray_1___c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerProxy_NetworkArray_1___c__DisplayClass0_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebuggerProxy_NetworkArray_1___c__DisplayClass0_0(DebuggerProxy_NetworkArray_1___c__DisplayClass0_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19054};

/// @brief Field array, offset: 0x10, size: 0x18, def value: None
 ::Fusion::NetworkArray_1<T>  ___array;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
// [DefaultMember("Item")]
// [DebuggerDisplay("Length = {Length}")]
// [DebuggerTypeProxy(typeof(Fusion.NetworkArray`1::DebuggerProxy<T>))]
// Dependencies 
namespace Fusion {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Fusion.NetworkArray`1<T>
struct CORDL_TYPE NetworkArray_1 {
public:
// Declarations
using DebuggerProxy = ::Fusion::NetworkArray_1_DebuggerProxy<T>;

using Enumerator = ::GlobalNamespace::NetworkArray_1_Enumerator<T>;

 __declspec(property(get=Fusion_INetworkArray_get_Item, put=Fusion_INetworkArray_set_Item)) ::System::Object*  Fusion_INetworkArray_Item[];

 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Field _stringBuilderCached, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__stringBuilderCached, put=setStaticF__stringBuilderCached)) ::System::Text::StringBuilder*  _stringBuilderCached;

/// @brief Convert operator to "::Fusion::INetworkArray"
constexpr operator  ::Fusion::INetworkArray*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyFrom(::ArrayW<T>  source, int32_t  sourceOffset, int32_t  sourceCount) ;

/// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyFrom(::System::Collections::Generic::List_1<T>*  source, int32_t  sourceOffset, int32_t  sourceCount) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<T>  array, bool  throwIfOverflow) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyTo(::Fusion::NetworkArray_1<T>  array) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyTo(::System::Collections::Generic::List_1<T>*  list) ;

/// @brief Method Fusion.INetworkArray.get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* Fusion_INetworkArray_get_Item(int32_t  index) ;

/// @brief Method Fusion.INetworkArray.set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Fusion_INetworkArray_set_Item(int32_t  index, ::System::Object*  value) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Get(int32_t  index) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetworkArray_1_Enumerator<T> GetEnumerator() ;

/// @brief Method GetRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> GetRef(int32_t  index) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Set(int32_t  index, T  value) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T> ToArray() ;

/// @brief Method ToListString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW ToListString() ;

/// @brief Method ToReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Fusion::NetworkArrayReadOnly_1<T> ToReadOnly() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(uint8_t*  array, int32_t  length, ::Fusion::IElementReaderWriter_1<T>*  readerWriter) ;

static inline ::System::Text::StringBuilder* getStaticF__stringBuilderCached() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Convert to "::Fusion::INetworkArray"
constexpr ::Fusion::INetworkArray* i___Fusion__INetworkArray() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Fusion::NetworkArrayReadOnly_1<T> op_Implicit___Fusion__NetworkArrayReadOnly_1_T_(::Fusion::NetworkArray_1<T>  value) ;

static inline void setStaticF__stringBuilderCached(::System::Text::StringBuilder*  value) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, T  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkArray_1() ;

// Ctor Parameters [CppParam { name: "_array", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_readerWriter", ty: "::Fusion::IElementReaderWriter_1<T>*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkArray_1(uint8_t*  _array, int32_t  _length, ::Fusion::IElementReaderWriter_1<T>*  _readerWriter) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19057};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _array, offset: 0x0, size: 0x8, def value: None
 uint8_t*  _array;

/// @brief Field _length, offset: 0x8, size: 0x4, def value: None
 int32_t  _length;

/// @brief Field _readerWriter, offset: 0x10, size: 0x8, def value: None
 ::Fusion::IElementReaderWriter_1<T>*  _readerWriter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Fusion
