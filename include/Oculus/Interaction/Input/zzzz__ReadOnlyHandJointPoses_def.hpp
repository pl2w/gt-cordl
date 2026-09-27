#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ReadOnlyHandJointPoses.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyHandJointPoses)
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
class ReadOnlyHandJointPoses__GetEnumerator_d__2;
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
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
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
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class ReadOnlyHandJointPoses;
}
namespace Oculus::Interaction::Input {
class ReadOnlyHandJointPoses__GetEnumerator_d__2;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::ReadOnlyHandJointPoses*);
MARK_REF_T(::Oculus::Interaction::Input::ReadOnlyHandJointPoses__GetEnumerator_d__2*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::ReadOnlyHandJointPoses*, "Oculus.Interaction.Input", "ReadOnlyHandJointPoses");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::ReadOnlyHandJointPoses__GetEnumerator_d__2*, "Oculus.Interaction.Input", "ReadOnlyHandJointPoses/<GetEnumerator>d__2");
// [DefaultMember("Item")]
// Dependencies System.Object, UnityEngine.Pose
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.ReadOnlyHandJointPoses
class CORDL_TYPE ReadOnlyHandJointPoses : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__2 = ::Oculus::Interaction::Input::ReadOnlyHandJointPoses__GetEnumerator_d__2;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::UnityEngine::Pose  Item[];

/// @brief [IsReadOnly]
 __declspec(property(get=get_Item)) ::UnityEngine::Pose  Item[];

/// @brief Field <Empty>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Empty_k__BackingField, put=setStaticF__Empty_k__BackingField)) ::Oculus::Interaction::Input::ReadOnlyHandJointPoses*  _Empty_k__BackingField;

/// @brief Field _poses, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__poses, put=__cordl_internal_set__poses)) ::ArrayW<::UnityEngine::Pose>  _poses;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Pose>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Pose>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Pose>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Pose>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// [IteratorStateMachine(typeof(Oculus.Interaction.Input.ReadOnlyHandJointPoses::<GetEnumerator>d__2))]
/// @brief Method GetEnumerator, addr 0xa501d98, size 0x6c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Pose>* GetEnumerator() ;

static inline ::Oculus::Interaction::Input::ReadOnlyHandJointPoses* New_ctor(::ArrayW<::UnityEngine::Pose>  poses) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa501e2c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::ArrayW<::UnityEngine::Pose> const& __cordl_internal_get__poses() const;

constexpr ::ArrayW<::UnityEngine::Pose>& __cordl_internal_get__poses() ;

constexpr void __cordl_internal_set__poses(::ArrayW<::UnityEngine::Pose>  value) ;

/// @brief Method .ctor, addr 0xa501d68, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::UnityEngine::Pose>  poses) ;

static inline ::Oculus::Interaction::Input::ReadOnlyHandJointPoses* getStaticF__Empty_k__BackingField() ;

/// @brief Method get_Count, addr 0xa501e88, size 0x18, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// [CompilerGenerated]
/// @brief Method get_Empty, addr 0xa501e30, size 0x58, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Input::ReadOnlyHandJointPoses* get_Empty() ;

/// @brief Method get_Item, addr 0xa501ea0, size 0x40, virtual true, abstract: false, final true
inline ::UnityEngine::Pose get_Item(int32_t  index) ;

/// @brief Method get_Item, addr 0xa501ee0, size 0x34, virtual false, abstract: false, final false
inline ::by_ref<::UnityEngine::Pose> get_Item(::Oculus::Interaction::Input::HandJointId  index) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Pose>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Pose>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__Pose_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Pose>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Pose>* i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__Pose_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>* i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__Pose_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

static inline void setStaticF__Empty_k__BackingField(::Oculus::Interaction::Input::ReadOnlyHandJointPoses*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlyHandJointPoses() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyHandJointPoses", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadOnlyHandJointPoses(ReadOnlyHandJointPoses && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyHandJointPoses", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadOnlyHandJointPoses(ReadOnlyHandJointPoses const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16447};

/// @brief Field _poses, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Pose>  ____poses;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::ReadOnlyHandJointPoses, ____poses) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::ReadOnlyHandJointPoses) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Pose
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2
class CORDL_TYPE ReadOnlyHandJointPoses__GetEnumerator_d__2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_Pose__get_Current)) ::UnityEngine::Pose  System_Collections_Generic_IEnumerator_UnityEngine_Pose__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x14, size 0x1c 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityEngine::Pose  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Oculus::Interaction::Input::ReadOnlyHandJointPoses*  __4__this;

/// @brief Field <>7__wrap1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::ArrayW<::UnityEngine::Pose>  __7__wrap1;

/// @brief Field <>7__wrap2, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) int32_t  __7__wrap2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Pose>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Pose>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa501ffc, size 0xcc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::Input::ReadOnlyHandJointPoses__GetEnumerator_d__2* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Pose>.get_Current, addr 0xa5020c8, size 0x14, virtual true, abstract: false, final true
inline ::UnityEngine::Pose System_Collections_Generic_IEnumerator_UnityEngine_Pose__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa5020dc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa502114, size 0x64, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa501ff8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get___2__current() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get___2__current() ;

constexpr ::Oculus::Interaction::Input::ReadOnlyHandJointPoses* const& __cordl_internal_get___4__this() const;

constexpr ::Oculus::Interaction::Input::ReadOnlyHandJointPoses*& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<::UnityEngine::Pose> const& __cordl_internal_get___7__wrap1() const;

constexpr ::ArrayW<::UnityEngine::Pose>& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___7__wrap2() const;

constexpr int32_t& __cordl_internal_get___7__wrap2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set___4__this(::Oculus::Interaction::Input::ReadOnlyHandJointPoses*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::ArrayW<::UnityEngine::Pose>  value) ;

constexpr void __cordl_internal_set___7__wrap2(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa501e04, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Pose>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Pose>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__Pose_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlyHandJointPoses__GetEnumerator_d__2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyHandJointPoses__GetEnumerator_d__2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadOnlyHandJointPoses__GetEnumerator_d__2(ReadOnlyHandJointPoses__GetEnumerator_d__2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyHandJointPoses__GetEnumerator_d__2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadOnlyHandJointPoses__GetEnumerator_d__2(ReadOnlyHandJointPoses__GetEnumerator_d__2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16446};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x14, size: 0x1c, def value: None
 ::UnityEngine::Pose  _____2__current;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ReadOnlyHandJointPoses*  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Pose>  _____7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x40, size: 0x4, def value: None
 int32_t  _____7__wrap2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::ReadOnlyHandJointPoses__GetEnumerator_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ReadOnlyHandJointPoses__GetEnumerator_d__2, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ReadOnlyHandJointPoses__GetEnumerator_d__2, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ReadOnlyHandJointPoses__GetEnumerator_d__2, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ReadOnlyHandJointPoses__GetEnumerator_d__2, _____7__wrap2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::ReadOnlyHandJointPoses__GetEnumerator_d__2) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
