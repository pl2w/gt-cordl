#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/SnapshotHistoryDraw.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SnapshotHistoryDraw)
namespace Fusion::LagCompensation {
class HitboxBuffer;
}
namespace Fusion::LagCompensation {
class HitboxColliderContainerDraw;
}
namespace Fusion::LagCompensation {
class SnapshotHistoryDraw__GetEnumerator_d__3;
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
class SnapshotHistoryDraw;
}
namespace Fusion::LagCompensation {
class SnapshotHistoryDraw__GetEnumerator_d__3;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::SnapshotHistoryDraw*);
MARK_REF_T(::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::SnapshotHistoryDraw*, "Fusion.LagCompensation", "SnapshotHistoryDraw");
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3*, "Fusion.LagCompensation", "SnapshotHistoryDraw/<GetEnumerator>d__3");
// Dependencies System.Object
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.SnapshotHistoryDraw
class CORDL_TYPE SnapshotHistoryDraw : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__3 = ::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3;

/// @brief Field _buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::Fusion::LagCompensation::HitboxBuffer*  _buffer;

/// @brief Field _containerDraw, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__containerDraw, put=__cordl_internal_set__containerDraw)) ::Fusion::LagCompensation::HitboxColliderContainerDraw*  _containerDraw;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// [IteratorStateMachine(typeof(Fusion.LagCompensation.SnapshotHistoryDraw::<GetEnumerator>d__3))]
/// @brief Method GetEnumerator, addr 0x6018510, size 0x6c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>* GetEnumerator() ;

static inline ::Fusion::LagCompensation::SnapshotHistoryDraw* New_ctor(::Fusion::LagCompensation::HitboxBuffer*  buffer) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x60185a4, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::Fusion::LagCompensation::HitboxBuffer* const& __cordl_internal_get__buffer() const;

constexpr ::Fusion::LagCompensation::HitboxBuffer*& __cordl_internal_get__buffer() ;

constexpr ::Fusion::LagCompensation::HitboxColliderContainerDraw* const& __cordl_internal_get__containerDraw() const;

constexpr ::Fusion::LagCompensation::HitboxColliderContainerDraw*& __cordl_internal_get__containerDraw() ;

constexpr void __cordl_internal_set__buffer(::Fusion::LagCompensation::HitboxBuffer*  value) ;

constexpr void __cordl_internal_set__containerDraw(::Fusion::LagCompensation::HitboxColliderContainerDraw*  value) ;

/// @brief Method .ctor, addr 0x6018144, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::Fusion::LagCompensation::HitboxBuffer*  buffer) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>* i___System__Collections__Generic__IEnumerable_1___Fusion__LagCompensation__HitboxColliderContainerDraw__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnapshotHistoryDraw() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnapshotHistoryDraw", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SnapshotHistoryDraw(SnapshotHistoryDraw && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnapshotHistoryDraw", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnapshotHistoryDraw(SnapshotHistoryDraw const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19404};

/// @brief Field _buffer, offset: 0x10, size: 0x8, def value: None
 ::Fusion::LagCompensation::HitboxBuffer*  ____buffer;

/// @brief Field _containerDraw, offset: 0x18, size: 0x8, def value: None
 ::Fusion::LagCompensation::HitboxColliderContainerDraw*  ____containerDraw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::SnapshotHistoryDraw, ____buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::SnapshotHistoryDraw, ____containerDraw) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::SnapshotHistoryDraw) == 0x20, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.SnapshotHistoryDraw/<GetEnumerator>d__3
class CORDL_TYPE SnapshotHistoryDraw__GetEnumerator_d__3 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Fusion_LagCompensation_HitboxColliderContainerDraw__get_Current)) ::Fusion::LagCompensation::HitboxColliderContainerDraw*  System_Collections_Generic_IEnumerator_Fusion_LagCompensation_HitboxColliderContainerDraw__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Fusion::LagCompensation::HitboxColliderContainerDraw*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::LagCompensation::SnapshotHistoryDraw*  __4__this;

/// @brief Field <i>5__1, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__1, put=__cordl_internal_set__i_5__1)) int32_t  _i_5__1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x60185b4, size 0xc4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Fusion.LagCompensation.HitboxColliderContainerDraw>.get_Current, addr 0x6018690, size 0x8, virtual true, abstract: false, final true
inline ::Fusion::LagCompensation::HitboxColliderContainerDraw* System_Collections_Generic_IEnumerator_Fusion_LagCompensation_HitboxColliderContainerDraw__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x6018698, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x60186d0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x60185a8, size 0xc, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::LagCompensation::HitboxColliderContainerDraw* const& __cordl_internal_get___2__current() const;

constexpr ::Fusion::LagCompensation::HitboxColliderContainerDraw*& __cordl_internal_get___2__current() ;

constexpr ::Fusion::LagCompensation::SnapshotHistoryDraw* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::LagCompensation::SnapshotHistoryDraw*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__i_5__1() const;

constexpr int32_t& __cordl_internal_get__i_5__1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Fusion::LagCompensation::HitboxColliderContainerDraw*  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::LagCompensation::SnapshotHistoryDraw*  value) ;

constexpr void __cordl_internal_set__i_5__1(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x601857c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>* i___System__Collections__Generic__IEnumerator_1___Fusion__LagCompensation__HitboxColliderContainerDraw__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnapshotHistoryDraw__GetEnumerator_d__3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnapshotHistoryDraw__GetEnumerator_d__3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SnapshotHistoryDraw__GetEnumerator_d__3(SnapshotHistoryDraw__GetEnumerator_d__3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnapshotHistoryDraw__GetEnumerator_d__3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnapshotHistoryDraw__GetEnumerator_d__3(SnapshotHistoryDraw__GetEnumerator_d__3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19403};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::Fusion::LagCompensation::HitboxColliderContainerDraw*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Fusion::LagCompensation::SnapshotHistoryDraw*  _____4__this;

/// @brief Field <i>5__1, offset: 0x28, size: 0x4, def value: None
 int32_t  ____i_5__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3, ____i_5__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3) == 0x30, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
