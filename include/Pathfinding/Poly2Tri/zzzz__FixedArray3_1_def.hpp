#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/FixedArray3_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedArray3_1)
namespace Pathfinding::Poly2Tri {
template<typename T>
class FixedArray3_1__Enumerate_c__Iterator0;
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
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Pathfinding::Poly2Tri {
template<typename T>
class FixedArray3_1__Enumerate_c__Iterator0;
}
namespace Pathfinding::Poly2Tri {
template<typename T>
struct FixedArray3_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Pathfinding::Poly2Tri::FixedArray3_1__Enumerate_c__Iterator0);
MARK_GEN_VAL_T(::Pathfinding::Poly2Tri::FixedArray3_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Pathfinding::Poly2Tri::FixedArray3_1__Enumerate_c__Iterator0, "Pathfinding.Poly2Tri", "FixedArray3`1/<Enumerate>c__Iterator0");
DEFINE_IL2CPP_GEN_CLASS(::Pathfinding::Poly2Tri::FixedArray3_1, "Pathfinding.Poly2Tri", "FixedArray3`1");
// [CompilerGenerated]
// Dependencies Pathfinding.Poly2Tri.FixedArray3`1<T>, System.Object
namespace Pathfinding::Poly2Tri {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Pathfinding.Poly2Tri.FixedArray3`1/<Enumerate>c__Iterator0<T>
class CORDL_TYPE FixedArray3_1__Enumerate_c__Iterator0 : public ::System::Object {
public:
// Declarations
/// @brief Field $PC, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_$PC, put=__cordl_internal_set_$PC)) int32_t  $PC;

/// @brief Field $current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_$current, put=__cordl_internal_set_$current)) T  $current;

 __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current)) T  System_Collections_Generic_IEnumerator_T__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>f__this, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get___f__this, put=__cordl_internal_set___f__this)) ::Pathfinding::Poly2Tri::FixedArray3_1<T>  __f__this;

/// @brief Field <i>__0, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__i___0, put=__cordl_internal_set__i___0)) int32_t  _i___0;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// [DebuggerHidden]
/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Pathfinding::Poly2Tri::FixedArray3_1__Enumerate_c__Iterator0<T>* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

constexpr int32_t const& __cordl_internal_get_$PC() const;

constexpr int32_t& __cordl_internal_get_$PC() ;

constexpr T const& __cordl_internal_get_$current() const;

constexpr T& __cordl_internal_get_$current() ;

constexpr ::Pathfinding::Poly2Tri::FixedArray3_1<T> const& __cordl_internal_get___f__this() const;

constexpr ::Pathfinding::Poly2Tri::FixedArray3_1<T>& __cordl_internal_get___f__this() ;

constexpr int32_t const& __cordl_internal_get__i___0() const;

constexpr int32_t& __cordl_internal_get__i___0() ;

constexpr void __cordl_internal_set_$PC(int32_t  value) ;

constexpr void __cordl_internal_set_$current(T  value) ;

constexpr void __cordl_internal_set___f__this(::Pathfinding::Poly2Tri::FixedArray3_1<T>  value) ;

constexpr void __cordl_internal_set__i___0(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FixedArray3_1__Enumerate_c__Iterator0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FixedArray3_1__Enumerate_c__Iterator0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedArray3_1__Enumerate_c__Iterator0(FixedArray3_1__Enumerate_c__Iterator0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedArray3_1__Enumerate_c__Iterator0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedArray3_1__Enumerate_c__Iterator0(FixedArray3_1__Enumerate_c__Iterator0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32350};

/// @brief Field <i>__0, offset: 0x10, size: 0x4, def value: None
 int32_t  ____i___0;

/// @brief Field $PC, offset: 0x14, size: 0x4, def value: None
 int32_t  ___$PC;

/// @brief Field $current, offset: 0x18, size: 0x8, def value: None
 T  ___$current;

/// @brief Field <>f__this, offset: 0x20, size: 0x18, def value: None
 ::Pathfinding::Poly2Tri::FixedArray3_1<T>  _____f__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding::Poly2Tri
// [DefaultMember("Item")]
// Dependencies 
namespace Pathfinding::Poly2Tri {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Pathfinding.Poly2Tri.FixedArray3`1<T>
struct CORDL_TYPE FixedArray3_1 {
public:
// Declarations
using _Enumerate_c__Iterator0 = ::Pathfinding::Poly2Tri::FixedArray3_1__Enumerate_c__Iterator0<T>;

 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(T  value) ;

/// [DebuggerHidden]
/// @brief Method Enumerate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<T>* Enumerate() ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(T  value) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, T  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FixedArray3_1() ;

// Ctor Parameters [CppParam { name: "_0", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "_1", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "_2", ty: "T", modifiers: "", def_value: None, comment: None }]
constexpr FixedArray3_1(T  _0, T  _1, T  _2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32351};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _0, offset: 0x0, size: 0x8, def value: None
 T  _0;

/// @brief Field _1, offset: 0x8, size: 0x8, def value: None
 T  _1;

/// @brief Field _2, offset: 0x10, size: 0x8, def value: None
 T  _2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Pathfinding::Poly2Tri
