#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsGorillaRopeSwing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaLocomotion/Gameplay/zzzz__GorillaRopeSwing_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapsGorillaRopeSwing)
namespace GT_CustomMapSupportRuntime {
class GTObjectPlaceholder;
}
namespace GT_CustomMapSupportRuntime {
class RopeSwingSegment;
}
namespace GlobalNamespace {
class CustomMapsGorillaRopeSwing__WaitForRopeLength_d__16;
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
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsGorillaRopeSwing;
}
namespace GlobalNamespace {
class CustomMapsGorillaRopeSwing__WaitForRopeLength_d__16;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsGorillaRopeSwing*);
MARK_REF_T(::GlobalNamespace::CustomMapsGorillaRopeSwing__WaitForRopeLength_d__16*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsGorillaRopeSwing*, "", "CustomMapsGorillaRopeSwing");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsGorillaRopeSwing__WaitForRopeLength_d__16*, "", "CustomMapsGorillaRopeSwing/<WaitForRopeLength>d__16");
// Dependencies GorillaLocomotion.Gameplay.GorillaRopeSwing, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsGorillaRopeSwing
class CORDL_TYPE CustomMapsGorillaRopeSwing : public ::GorillaLocomotion::Gameplay::GorillaRopeSwing {
public:
// Declarations
using _WaitForRopeLength_d__16 = ::GlobalNamespace::CustomMapsGorillaRopeSwing__WaitForRopeLength_d__16;

/// @brief Field OnReleaseSFX, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReleaseSFX, put=__cordl_internal_set_OnReleaseSFX)) ::UnityW<::UnityEngine::AudioClip>  OnReleaseSFX;

/// @brief Field isRopeLengthSet, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRopeLengthSet, put=__cordl_internal_set_isRopeLengthSet)) bool  isRopeLengthSet;

/// @brief Field maxDistanceSnap, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistanceSnap, put=__cordl_internal_set_maxDistanceSnap)) float_t  maxDistanceSnap;

/// @brief Field onGrabSFX, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_onGrabSFX, put=__cordl_internal_set_onGrabSFX)) ::UnityW<::UnityEngine::AudioClip>  onGrabSFX;

/// @brief Field partiallyUnderwaterPrefab, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_partiallyUnderwaterPrefab, put=__cordl_internal_set_partiallyUnderwaterPrefab)) ::UnityW<::UnityEngine::GameObject>  partiallyUnderwaterPrefab;

/// @brief Field preExistingSegments, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_preExistingSegments, put=__cordl_internal_set_preExistingSegments)) ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::RopeSwingSegment>>*  preExistingSegments;

/// @brief Field ropePlaceholder, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ropePlaceholder, put=__cordl_internal_set_ropePlaceholder)) ::UnityW<::GT_CustomMapSupportRuntime::GTObjectPlaceholder>  ropePlaceholder;

/// @brief Field ropeScale, offset 0xe8, size 0xc 
 __declspec(property(get=__cordl_internal_get_ropeScale, put=__cordl_internal_set_ropeScale)) ::UnityEngine::Vector3  ropeScale;

/// @brief Field snapX, offset 0xf4, size 0x1 
 __declspec(property(get=__cordl_internal_get_snapX, put=__cordl_internal_set_snapX)) bool  snapX;

/// @brief Field snapY, offset 0xf5, size 0x1 
 __declspec(property(get=__cordl_internal_get_snapY, put=__cordl_internal_set_snapY)) bool  snapY;

/// @brief Field snapZ, offset 0xf6, size 0x1 
 __declspec(property(get=__cordl_internal_get_snapZ, put=__cordl_internal_set_snapZ)) bool  snapZ;

/// @brief Method Awake, addr 0x59a7d08, size 0x30, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::CustomMapsGorillaRopeSwing* New_ctor() ;

/// @brief Method OnEnable, addr 0x59a7da8, size 0x14, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RopeGeneration, addr 0x59a7ed0, size 0xab8, virtual false, abstract: false, final false
inline void RopeGeneration() ;

/// @brief Method SetRopeLength, addr 0x59a7dbc, size 0x10, virtual false, abstract: false, final false
inline void SetRopeLength(int32_t  length) ;

/// @brief Method SetRopeProperties, addr 0x59a7dcc, size 0xdc, virtual false, abstract: false, final false
inline void SetRopeProperties(::GT_CustomMapSupportRuntime::GTObjectPlaceholder*  placeholder) ;

/// @brief Method Start, addr 0x59a7da4, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// [IteratorStateMachine(typeof(CustomMapsGorillaRopeSwing::<WaitForRopeLength>d__16))]
/// @brief Method WaitForRopeLength, addr 0x59a7d38, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitForRopeLength() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_OnReleaseSFX() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_OnReleaseSFX() ;

constexpr bool const& __cordl_internal_get_isRopeLengthSet() const;

constexpr bool& __cordl_internal_get_isRopeLengthSet() ;

constexpr float_t const& __cordl_internal_get_maxDistanceSnap() const;

constexpr float_t& __cordl_internal_get_maxDistanceSnap() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_onGrabSFX() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_onGrabSFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_partiallyUnderwaterPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_partiallyUnderwaterPrefab() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::RopeSwingSegment>>* const& __cordl_internal_get_preExistingSegments() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::RopeSwingSegment>>*& __cordl_internal_get_preExistingSegments() ;

constexpr ::UnityW<::GT_CustomMapSupportRuntime::GTObjectPlaceholder> const& __cordl_internal_get_ropePlaceholder() const;

constexpr ::UnityW<::GT_CustomMapSupportRuntime::GTObjectPlaceholder>& __cordl_internal_get_ropePlaceholder() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_ropeScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_ropeScale() ;

constexpr bool const& __cordl_internal_get_snapX() const;

constexpr bool& __cordl_internal_get_snapX() ;

constexpr bool const& __cordl_internal_get_snapY() const;

constexpr bool& __cordl_internal_get_snapY() ;

constexpr bool const& __cordl_internal_get_snapZ() const;

constexpr bool& __cordl_internal_get_snapZ() ;

constexpr void __cordl_internal_set_OnReleaseSFX(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_isRopeLengthSet(bool  value) ;

constexpr void __cordl_internal_set_maxDistanceSnap(float_t  value) ;

constexpr void __cordl_internal_set_onGrabSFX(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_partiallyUnderwaterPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_preExistingSegments(::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::RopeSwingSegment>>*  value) ;

constexpr void __cordl_internal_set_ropePlaceholder(::UnityW<::GT_CustomMapSupportRuntime::GTObjectPlaceholder>  value) ;

constexpr void __cordl_internal_set_ropeScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_snapX(bool  value) ;

constexpr void __cordl_internal_set_snapY(bool  value) ;

constexpr void __cordl_internal_set_snapZ(bool  value) ;

/// [CompilerGenerated]
/// [DebuggerHidden]
/// @brief Method <>n__0, addr 0x59a89f4, size 0x8, virtual false, abstract: false, final false
inline void __n__0() ;

/// [CompilerGenerated]
/// [DebuggerHidden]
/// @brief Method <>n__1, addr 0x59a89fc, size 0x8, virtual false, abstract: false, final false
inline void __n__1() ;

/// [CompilerGenerated]
/// [DebuggerHidden]
/// @brief Method <>n__2, addr 0x59a8a04, size 0x8, virtual false, abstract: false, final false
inline void __n__2() ;

/// @brief Method .ctor, addr 0x59a8988, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsGorillaRopeSwing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGorillaRopeSwing", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsGorillaRopeSwing(CustomMapsGorillaRopeSwing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGorillaRopeSwing", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsGorillaRopeSwing(CustomMapsGorillaRopeSwing const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2641};

/// [SerializeField]
/// @brief Field partiallyUnderwaterPrefab, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___partiallyUnderwaterPrefab;

/// @brief Field isRopeLengthSet, offset: 0xd0, size: 0x1, def value: None
 bool  ___isRopeLengthSet;

/// @brief Field preExistingSegments, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::RopeSwingSegment>>*  ___preExistingSegments;

/// @brief Field ropePlaceholder, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GT_CustomMapSupportRuntime::GTObjectPlaceholder>  ___ropePlaceholder;

/// @brief Field ropeScale, offset: 0xe8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___ropeScale;

/// @brief Field snapX, offset: 0xf4, size: 0x1, def value: None
 bool  ___snapX;

/// @brief Field snapY, offset: 0xf5, size: 0x1, def value: None
 bool  ___snapY;

/// @brief Field snapZ, offset: 0xf6, size: 0x1, def value: None
 bool  ___snapZ;

/// @brief Field maxDistanceSnap, offset: 0xf8, size: 0x4, def value: None
 float_t  ___maxDistanceSnap;

/// @brief Field onGrabSFX, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___onGrabSFX;

/// @brief Field OnReleaseSFX, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___OnReleaseSFX;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsGorillaRopeSwing, ___partiallyUnderwaterPrefab) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGorillaRopeSwing, ___isRopeLengthSet) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGorillaRopeSwing, ___preExistingSegments) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGorillaRopeSwing, ___ropePlaceholder) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGorillaRopeSwing, ___ropeScale) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGorillaRopeSwing, ___snapX) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGorillaRopeSwing, ___snapY) == 0xf5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGorillaRopeSwing, ___snapZ) == 0xf6, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGorillaRopeSwing, ___maxDistanceSnap) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGorillaRopeSwing, ___onGrabSFX) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGorillaRopeSwing, ___OnReleaseSFX) == 0x108, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsGorillaRopeSwing) == 0x110, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsGorillaRopeSwing/<WaitForRopeLength>d__16
class CORDL_TYPE CustomMapsGorillaRopeSwing__WaitForRopeLength_d__16 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::CustomMapsGorillaRopeSwing>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59a8a10, size 0x8c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CustomMapsGorillaRopeSwing__WaitForRopeLength_d__16* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59a8a9c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59a8aa4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59a8adc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59a8a0c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsGorillaRopeSwing> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsGorillaRopeSwing>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CustomMapsGorillaRopeSwing>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59a7ea8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsGorillaRopeSwing__WaitForRopeLength_d__16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGorillaRopeSwing__WaitForRopeLength_d__16", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsGorillaRopeSwing__WaitForRopeLength_d__16(CustomMapsGorillaRopeSwing__WaitForRopeLength_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGorillaRopeSwing__WaitForRopeLength_d__16", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsGorillaRopeSwing__WaitForRopeLength_d__16(CustomMapsGorillaRopeSwing__WaitForRopeLength_d__16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2640};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsGorillaRopeSwing>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsGorillaRopeSwing__WaitForRopeLength_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGorillaRopeSwing__WaitForRopeLength_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGorillaRopeSwing__WaitForRopeLength_d__16, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsGorillaRopeSwing__WaitForRopeLength_d__16) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
