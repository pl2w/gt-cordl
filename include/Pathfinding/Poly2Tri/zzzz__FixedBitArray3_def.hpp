#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/FixedBitArray3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedBitArray3)
namespace Pathfinding::Poly2Tri {
class FixedBitArray3__Enumerate_c__Iterator1;
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
class FixedBitArray3__Enumerate_c__Iterator1;
}
namespace Pathfinding::Poly2Tri {
struct FixedBitArray3;
}
// Write type traits
MARK_REF_T(::Pathfinding::Poly2Tri::FixedBitArray3__Enumerate_c__Iterator1*);
MARK_VAL_T(::Pathfinding::Poly2Tri::FixedBitArray3);
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::FixedBitArray3__Enumerate_c__Iterator1*, "Pathfinding.Poly2Tri", "FixedBitArray3/<Enumerate>c__Iterator1");
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::FixedBitArray3, "Pathfinding.Poly2Tri", "FixedBitArray3");
// [CompilerGenerated]
// Dependencies Pathfinding.Poly2Tri.FixedBitArray3, System.Object
namespace Pathfinding::Poly2Tri {
// Is value type: false
// CS Name: Pathfinding.Poly2Tri.FixedBitArray3/<Enumerate>c__Iterator1
class CORDL_TYPE FixedBitArray3__Enumerate_c__Iterator1 : public ::System::Object {
public:
// Declarations
/// @brief Field $PC, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_$PC, put=__cordl_internal_set_$PC)) int32_t  $PC;

/// @brief Field $current, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_$current, put=__cordl_internal_set_$current)) bool  $current;

 __declspec(property(get=System_Collections_Generic_IEnumerator_bool__get_Current)) bool  System_Collections_Generic_IEnumerator_bool__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>f__this, offset 0x19, size 0x3 
 __declspec(property(get=__cordl_internal_get___f__this, put=__cordl_internal_set___f__this)) ::Pathfinding::Poly2Tri::FixedBitArray3  __f__this;

/// @brief Field <i>__0, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__i___0, put=__cordl_internal_set__i___0)) int32_t  _i___0;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<bool>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<bool>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<bool>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<bool>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// [DebuggerHidden]
/// @brief Method Dispose, addr 0xa6b6974, size 0xc, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0xa6b68e0, size 0x94, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Pathfinding::Poly2Tri::FixedBitArray3__Enumerate_c__Iterator1* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method Reset, addr 0xa6b6980, size 0x38, virtual true, abstract: false, final true
inline void Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<bool>.GetEnumerator, addr 0xa6b6850, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<bool>* System_Collections_Generic_IEnumerable_bool__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<bool>.get_Current, addr 0xa6b681c, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_Generic_IEnumerator_bool__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa6b684c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa6b6824, size 0x28, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

constexpr int32_t const& __cordl_internal_get_$PC() const;

constexpr int32_t& __cordl_internal_get_$PC() ;

constexpr bool const& __cordl_internal_get_$current() const;

constexpr bool& __cordl_internal_get_$current() ;

constexpr ::Pathfinding::Poly2Tri::FixedBitArray3 const& __cordl_internal_get___f__this() const;

constexpr ::Pathfinding::Poly2Tri::FixedBitArray3& __cordl_internal_get___f__this() ;

constexpr int32_t const& __cordl_internal_get__i___0() const;

constexpr int32_t& __cordl_internal_get__i___0() ;

constexpr void __cordl_internal_set_$PC(int32_t  value) ;

constexpr void __cordl_internal_set_$current(bool  value) ;

constexpr void __cordl_internal_set___f__this(::Pathfinding::Poly2Tri::FixedBitArray3  value) ;

constexpr void __cordl_internal_set__i___0(int32_t  value) ;

/// @brief Method .ctor, addr 0xa6b6814, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<bool>"
constexpr ::System::Collections::Generic::IEnumerable_1<bool>* i___System__Collections__Generic__IEnumerable_1_bool_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<bool>"
constexpr ::System::Collections::Generic::IEnumerator_1<bool>* i___System__Collections__Generic__IEnumerator_1_bool_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FixedBitArray3__Enumerate_c__Iterator1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FixedBitArray3__Enumerate_c__Iterator1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedBitArray3__Enumerate_c__Iterator1(FixedBitArray3__Enumerate_c__Iterator1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedBitArray3__Enumerate_c__Iterator1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedBitArray3__Enumerate_c__Iterator1(FixedBitArray3__Enumerate_c__Iterator1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32352};

/// @brief Field <i>__0, offset: 0x10, size: 0x4, def value: None
 int32_t  ____i___0;

/// @brief Field $PC, offset: 0x14, size: 0x4, def value: None
 int32_t  ___$PC;

/// @brief Field $current, offset: 0x18, size: 0x1, def value: None
 bool  ___$current;

/// @brief Field <>f__this, offset: 0x19, size: 0x3, def value: None
 ::Pathfinding::Poly2Tri::FixedBitArray3  _____f__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Poly2Tri::FixedBitArray3__Enumerate_c__Iterator1, ____i___0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::FixedBitArray3__Enumerate_c__Iterator1, ___$PC) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::FixedBitArray3__Enumerate_c__Iterator1, ___$current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::FixedBitArray3__Enumerate_c__Iterator1, _____f__this) == 0x19, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Poly2Tri::FixedBitArray3__Enumerate_c__Iterator1) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding::Poly2Tri
// [DefaultMember("Item")]
// Dependencies 
namespace Pathfinding::Poly2Tri {
// Is value type: true
// CS Name: Pathfinding.Poly2Tri.FixedBitArray3
struct CORDL_TYPE FixedBitArray3 {
public:
// Declarations
using _Enumerate_c__Iterator1 = ::Pathfinding::Poly2Tri::FixedBitArray3__Enumerate_c__Iterator1;

 __declspec(property(get=get_Item, put=set_Item)) bool  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<bool>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<bool>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method Clear, addr 0xa6b5470, size 0xc, virtual false, abstract: false, final false
inline void Clear() ;

/// [DebuggerHidden]
/// @brief Method Enumerate, addr 0xa6b679c, size 0x78, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<bool>* Enumerate() ;

/// @brief Method GetEnumerator, addr 0xa6b66f4, size 0xa8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<bool>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa6b66f0, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_Item, addr 0xa6b1f24, size 0x60, virtual false, abstract: false, final false
inline bool get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<bool>"
constexpr ::System::Collections::Generic::IEnumerable_1<bool>* i___System__Collections__Generic__IEnumerable_1_bool_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Method set_Item, addr 0xa6b1e54, size 0x64, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FixedBitArray3() ;

// Ctor Parameters [CppParam { name: "_0", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_1", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_2", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr FixedBitArray3(bool  _0, bool  _1, bool  _2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32353};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3};

/// @brief Field _0, offset: 0x0, size: 0x1, def value: None
 bool  _0;

/// @brief Field _1, offset: 0x1, size: 0x1, def value: None
 bool  _1;

/// @brief Field _2, offset: 0x2, size: 0x1, def value: None
 bool  _2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Poly2Tri::FixedBitArray3, _0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::FixedBitArray3, _1) == 0x1, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::FixedBitArray3, _2) == 0x2, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Poly2Tri::FixedBitArray3) == 0x3, "Size mismatch!");

} // namespace end def Pathfinding::Poly2Tri
