#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/BVHDraw.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/LagCompensation/zzzz__BVHNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BVHDraw)
namespace Fusion::LagCompensation {
class BVHDraw__GetEnumerator_d__4;
}
namespace Fusion::LagCompensation {
class BVHNodeDrawInfo;
}
namespace Fusion::LagCompensation {
struct BVHNode;
}
namespace Fusion::LagCompensation {
class HitboxBuffer;
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
class Stack_1;
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
namespace Fusion::LagCompensation {
class BVHDraw;
}
namespace Fusion::LagCompensation {
class BVHDraw__GetEnumerator_d__4;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::BVHDraw*);
MARK_REF_T(::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::BVHDraw*, "Fusion.LagCompensation", "BVHDraw");
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4*, "Fusion.LagCompensation", "BVHDraw/<GetEnumerator>d__4");
// Dependencies System.Object
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.BVHDraw
class CORDL_TYPE BVHDraw : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__4 = ::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4;

/// @brief Field _buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::Fusion::LagCompensation::HitboxBuffer*  _buffer;

/// @brief Field _drawInfo, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__drawInfo, put=__cordl_internal_set__drawInfo)) ::Fusion::LagCompensation::BVHNodeDrawInfo*  _drawInfo;

/// @brief Field _reusableStack, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__reusableStack, put=__cordl_internal_set__reusableStack)) ::System::Collections::Generic::Stack_1<::Fusion::LagCompensation::BVHNode>*  _reusableStack;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// [IteratorStateMachine(typeof(Fusion.LagCompensation.BVHDraw::<GetEnumerator>d__4))]
/// @brief Method GetEnumerator, addr 0x60188c0, size 0x6c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>* GetEnumerator() ;

static inline ::Fusion::LagCompensation::BVHDraw* New_ctor(::Fusion::LagCompensation::HitboxBuffer*  buffer) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x6018954, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::Fusion::LagCompensation::HitboxBuffer* const& __cordl_internal_get__buffer() const;

constexpr ::Fusion::LagCompensation::HitboxBuffer*& __cordl_internal_get__buffer() ;

constexpr ::Fusion::LagCompensation::BVHNodeDrawInfo* const& __cordl_internal_get__drawInfo() const;

constexpr ::Fusion::LagCompensation::BVHNodeDrawInfo*& __cordl_internal_get__drawInfo() ;

constexpr ::System::Collections::Generic::Stack_1<::Fusion::LagCompensation::BVHNode>* const& __cordl_internal_get__reusableStack() const;

constexpr ::System::Collections::Generic::Stack_1<::Fusion::LagCompensation::BVHNode>*& __cordl_internal_get__reusableStack() ;

constexpr void __cordl_internal_set__buffer(::Fusion::LagCompensation::HitboxBuffer*  value) ;

constexpr void __cordl_internal_set__drawInfo(::Fusion::LagCompensation::BVHNodeDrawInfo*  value) ;

constexpr void __cordl_internal_set__reusableStack(::System::Collections::Generic::Stack_1<::Fusion::LagCompensation::BVHNode>*  value) ;

/// @brief Method .ctor, addr 0x60181c8, size 0xf4, virtual false, abstract: false, final false
inline void _ctor(::Fusion::LagCompensation::HitboxBuffer*  buffer) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>* i___System__Collections__Generic__IEnumerable_1___Fusion__LagCompensation__BVHNodeDrawInfo__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BVHDraw() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BVHDraw", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BVHDraw(BVHDraw && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BVHDraw", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BVHDraw(BVHDraw const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19408};

/// @brief Field _buffer, offset: 0x10, size: 0x8, def value: None
 ::Fusion::LagCompensation::HitboxBuffer*  ____buffer;

/// @brief Field _drawInfo, offset: 0x18, size: 0x8, def value: None
 ::Fusion::LagCompensation::BVHNodeDrawInfo*  ____drawInfo;

/// @brief Field _reusableStack, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::Fusion::LagCompensation::BVHNode>*  ____reusableStack;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::BVHDraw, ____buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVHDraw, ____drawInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVHDraw, ____reusableStack) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::BVHDraw) == 0x28, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
// [CompilerGenerated]
// Dependencies Fusion.LagCompensation.BVHNode, System.Object
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.BVHDraw/<GetEnumerator>d__4
class CORDL_TYPE BVHDraw__GetEnumerator_d__4 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Fusion_LagCompensation_BVHNodeDrawInfo__get_Current)) ::Fusion::LagCompensation::BVHNodeDrawInfo*  System_Collections_Generic_IEnumerator_Fusion_LagCompensation_BVHNodeDrawInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Fusion::LagCompensation::BVHNodeDrawInfo*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::LagCompensation::BVHDraw*  __4__this;

/// @brief Field <node>5__1, offset 0x28, size 0x78 
 __declspec(property(get=__cordl_internal_get__node_5__1, put=__cordl_internal_set__node_5__1)) ::Fusion::LagCompensation::BVHNode  _node_5__1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x6018988, size 0x370, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Fusion.LagCompensation.BVHNodeDrawInfo>.get_Current, addr 0x6018cf8, size 0x8, virtual true, abstract: false, final true
inline ::Fusion::LagCompensation::BVHNodeDrawInfo* System_Collections_Generic_IEnumerator_Fusion_LagCompensation_BVHNodeDrawInfo__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x6018d00, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x6018d38, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x6018958, size 0x30, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::LagCompensation::BVHNodeDrawInfo* const& __cordl_internal_get___2__current() const;

constexpr ::Fusion::LagCompensation::BVHNodeDrawInfo*& __cordl_internal_get___2__current() ;

constexpr ::Fusion::LagCompensation::BVHDraw* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::LagCompensation::BVHDraw*& __cordl_internal_get___4__this() ;

constexpr ::Fusion::LagCompensation::BVHNode const& __cordl_internal_get__node_5__1() const;

constexpr ::Fusion::LagCompensation::BVHNode& __cordl_internal_get__node_5__1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Fusion::LagCompensation::BVHNodeDrawInfo*  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::LagCompensation::BVHDraw*  value) ;

constexpr void __cordl_internal_set__node_5__1(::Fusion::LagCompensation::BVHNode  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x601892c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>* i___System__Collections__Generic__IEnumerator_1___Fusion__LagCompensation__BVHNodeDrawInfo__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BVHDraw__GetEnumerator_d__4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BVHDraw__GetEnumerator_d__4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BVHDraw__GetEnumerator_d__4(BVHDraw__GetEnumerator_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BVHDraw__GetEnumerator_d__4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BVHDraw__GetEnumerator_d__4(BVHDraw__GetEnumerator_d__4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19407};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::Fusion::LagCompensation::BVHNodeDrawInfo*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Fusion::LagCompensation::BVHDraw*  _____4__this;

/// @brief Field <node>5__1, offset: 0x28, size: 0x78, def value: None
 ::Fusion::LagCompensation::BVHNode  ____node_5__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4, ____node_5__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4) == 0xa0, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
