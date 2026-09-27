#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/HitboxColliderContainerDraw.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HitboxColliderContainerDraw)
namespace Fusion::LagCompensation {
class ColliderDrawInfo;
}
namespace Fusion::LagCompensation {
class HitboxBuffer_HitboxSnapshot;
}
namespace Fusion::LagCompensation {
class HitboxColliderContainerDraw__GetEnumerator_d__2;
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
namespace Fusion::LagCompensation {
class HitboxColliderContainerDraw;
}
namespace Fusion::LagCompensation {
class HitboxColliderContainerDraw__GetEnumerator_d__2;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::HitboxColliderContainerDraw*);
MARK_REF_T(::Fusion::LagCompensation::HitboxColliderContainerDraw__GetEnumerator_d__2*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::HitboxColliderContainerDraw*, "Fusion.LagCompensation", "HitboxColliderContainerDraw");
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::HitboxColliderContainerDraw__GetEnumerator_d__2*, "Fusion.LagCompensation", "HitboxColliderContainerDraw/<GetEnumerator>d__2");
// Dependencies System.Object
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.HitboxColliderContainerDraw
class CORDL_TYPE HitboxColliderContainerDraw : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__2 = ::Fusion::LagCompensation::HitboxColliderContainerDraw__GetEnumerator_d__2;

/// @brief Field _container, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__container, put=__cordl_internal_set__container)) ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*  _container;

/// @brief Field _drawInfo, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__drawInfo, put=__cordl_internal_set__drawInfo)) ::Fusion::LagCompensation::ColliderDrawInfo*  _drawInfo;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::ColliderDrawInfo*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::ColliderDrawInfo*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// [IteratorStateMachine(typeof(Fusion.LagCompensation.HitboxColliderContainerDraw::<GetEnumerator>d__2))]
/// @brief Method GetEnumerator, addr 0x60186d8, size 0x6c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::ColliderDrawInfo*>* GetEnumerator() ;

static inline ::Fusion::LagCompensation::HitboxColliderContainerDraw* New_ctor() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x601876c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot* const& __cordl_internal_get__container() const;

constexpr ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*& __cordl_internal_get__container() ;

constexpr ::Fusion::LagCompensation::ColliderDrawInfo* const& __cordl_internal_get__drawInfo() const;

constexpr ::Fusion::LagCompensation::ColliderDrawInfo*& __cordl_internal_get__drawInfo() ;

constexpr void __cordl_internal_set__container(::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*  value) ;

constexpr void __cordl_internal_set__drawInfo(::Fusion::LagCompensation::ColliderDrawInfo*  value) ;

/// @brief Method .ctor, addr 0x60184a4, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::ColliderDrawInfo*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::ColliderDrawInfo*>* i___System__Collections__Generic__IEnumerable_1___Fusion__LagCompensation__ColliderDrawInfo__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HitboxColliderContainerDraw() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HitboxColliderContainerDraw", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HitboxColliderContainerDraw(HitboxColliderContainerDraw && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HitboxColliderContainerDraw", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HitboxColliderContainerDraw(HitboxColliderContainerDraw const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19406};

/// @brief Field _container, offset: 0x10, size: 0x8, def value: None
 ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*  ____container;

/// @brief Field _drawInfo, offset: 0x18, size: 0x8, def value: None
 ::Fusion::LagCompensation::ColliderDrawInfo*  ____drawInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::HitboxColliderContainerDraw, ____container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxColliderContainerDraw, ____drawInfo) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::HitboxColliderContainerDraw) == 0x20, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.HitboxColliderContainerDraw/<GetEnumerator>d__2
class CORDL_TYPE HitboxColliderContainerDraw__GetEnumerator_d__2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Fusion_LagCompensation_ColliderDrawInfo__get_Current)) ::Fusion::LagCompensation::ColliderDrawInfo*  System_Collections_Generic_IEnumerator_Fusion_LagCompensation_ColliderDrawInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Fusion::LagCompensation::ColliderDrawInfo*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::LagCompensation::HitboxColliderContainerDraw*  __4__this;

/// @brief Field <i>5__1, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__1, put=__cordl_internal_set__i_5__1)) int32_t  _i_5__1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::ColliderDrawInfo*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::ColliderDrawInfo*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x601877c, size 0xf0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::LagCompensation::HitboxColliderContainerDraw__GetEnumerator_d__2* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Fusion.LagCompensation.ColliderDrawInfo>.get_Current, addr 0x6018878, size 0x8, virtual true, abstract: false, final true
inline ::Fusion::LagCompensation::ColliderDrawInfo* System_Collections_Generic_IEnumerator_Fusion_LagCompensation_ColliderDrawInfo__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x6018880, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x60188b8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x6018770, size 0xc, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::LagCompensation::ColliderDrawInfo* const& __cordl_internal_get___2__current() const;

constexpr ::Fusion::LagCompensation::ColliderDrawInfo*& __cordl_internal_get___2__current() ;

constexpr ::Fusion::LagCompensation::HitboxColliderContainerDraw* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::LagCompensation::HitboxColliderContainerDraw*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__i_5__1() const;

constexpr int32_t& __cordl_internal_get__i_5__1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Fusion::LagCompensation::ColliderDrawInfo*  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::LagCompensation::HitboxColliderContainerDraw*  value) ;

constexpr void __cordl_internal_set__i_5__1(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x6018744, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::ColliderDrawInfo*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::ColliderDrawInfo*>* i___System__Collections__Generic__IEnumerator_1___Fusion__LagCompensation__ColliderDrawInfo__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HitboxColliderContainerDraw__GetEnumerator_d__2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HitboxColliderContainerDraw__GetEnumerator_d__2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HitboxColliderContainerDraw__GetEnumerator_d__2(HitboxColliderContainerDraw__GetEnumerator_d__2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HitboxColliderContainerDraw__GetEnumerator_d__2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HitboxColliderContainerDraw__GetEnumerator_d__2(HitboxColliderContainerDraw__GetEnumerator_d__2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19405};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::Fusion::LagCompensation::ColliderDrawInfo*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Fusion::LagCompensation::HitboxColliderContainerDraw*  _____4__this;

/// @brief Field <i>5__1, offset: 0x28, size: 0x4, def value: None
 int32_t  ____i_5__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::HitboxColliderContainerDraw__GetEnumerator_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxColliderContainerDraw__GetEnumerator_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxColliderContainerDraw__GetEnumerator_d__2, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxColliderContainerDraw__GetEnumerator_d__2, ____i_5__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::HitboxColliderContainerDraw__GetEnumerator_d__2) == 0x30, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
