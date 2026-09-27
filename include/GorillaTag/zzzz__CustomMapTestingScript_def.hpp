#pragma once
// IWYU pragma private; include "GorillaTag/CustomMapTestingScript.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapTestingScript)
namespace GorillaTag {
class CustomMapTestingScript__ButtonPressed_Local_d__1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
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
namespace GorillaTag {
class CustomMapTestingScript;
}
namespace GorillaTag {
class CustomMapTestingScript__ButtonPressed_Local_d__1;
}
// Write type traits
MARK_REF_T(::GorillaTag::CustomMapTestingScript*);
MARK_REF_T(::GorillaTag::CustomMapTestingScript__ButtonPressed_Local_d__1*);
DEFINE_IL2CPP_CLASS(::GorillaTag::CustomMapTestingScript*, "GorillaTag", "CustomMapTestingScript");
DEFINE_IL2CPP_CLASS(::GorillaTag::CustomMapTestingScript__ButtonPressed_Local_d__1*, "GorillaTag", "CustomMapTestingScript/<ButtonPressed_Local>d__1");
// Dependencies GorillaPressableButton
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.CustomMapTestingScript
class CORDL_TYPE CustomMapTestingScript : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
using _ButtonPressed_Local_d__1 = ::GorillaTag::CustomMapTestingScript__ButtonPressed_Local_d__1;

/// @brief Method ButtonActivation, addr 0x5d34ed0, size 0x2c, virtual true, abstract: false, final false
inline void ButtonActivation() ;

/// [IteratorStateMachine(typeof(GorillaTag.CustomMapTestingScript::<ButtonPressed_Local>d__1))]
/// @brief Method ButtonPressed_Local, addr 0x5d34efc, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ButtonPressed_Local() ;

static inline ::GorillaTag::CustomMapTestingScript* New_ctor() ;

/// @brief Method .ctor, addr 0x5d34f90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapTestingScript() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapTestingScript", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapTestingScript(CustomMapTestingScript && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapTestingScript", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapTestingScript(CustomMapTestingScript const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4650};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::CustomMapTestingScript) == 0xb8, "Size mismatch!");

} // namespace end def GorillaTag
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.CustomMapTestingScript/<ButtonPressed_Local>d__1
class CORDL_TYPE CustomMapTestingScript__ButtonPressed_Local_d__1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTag::CustomMapTestingScript>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5d34f9c, size 0xe8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTag::CustomMapTestingScript__ButtonPressed_Local_d__1* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5d35084, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5d3508c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5d350c4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5d34f98, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTag::CustomMapTestingScript> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTag::CustomMapTestingScript>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTag::CustomMapTestingScript>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5d34f68, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapTestingScript__ButtonPressed_Local_d__1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapTestingScript__ButtonPressed_Local_d__1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapTestingScript__ButtonPressed_Local_d__1(CustomMapTestingScript__ButtonPressed_Local_d__1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapTestingScript__ButtonPressed_Local_d__1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapTestingScript__ButtonPressed_Local_d__1(CustomMapTestingScript__ButtonPressed_Local_d__1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4649};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::CustomMapTestingScript>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CustomMapTestingScript__ButtonPressed_Local_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CustomMapTestingScript__ButtonPressed_Local_d__1, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CustomMapTestingScript__ButtonPressed_Local_d__1, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CustomMapTestingScript__ButtonPressed_Local_d__1) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag
