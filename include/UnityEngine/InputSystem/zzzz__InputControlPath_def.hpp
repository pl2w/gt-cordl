#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlPath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlPath_ParsedPathComponent_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlPath_PathParser_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlPath)
namespace GlobalNamespace {
struct InputControlLayout_ControlItem;
}
namespace GlobalNamespace {
struct InputControlPath_HumanReadableStringOptions;
}
namespace GlobalNamespace {
struct InputControlPath_ParsedPathComponent;
}
namespace GlobalNamespace {
struct InputControlPath_PathComponentType;
}
namespace GlobalNamespace {
struct InputControlPath_PathParser;
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
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
namespace UnityEngine::InputSystem {
template<typename TControl>
struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
class InputControlPath__Parse_d__34;
}
namespace UnityEngine::InputSystem {
class InputControlPath___c;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputControlPath;
}
namespace UnityEngine::InputSystem {
class InputControlPath__Parse_d__34;
}
namespace UnityEngine::InputSystem {
class InputControlPath___c;
}
namespace UnityEngine::InputSystem {
class ParsedPathComponent_InputControlPath___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::InputControlPath*);
MARK_REF_T(::UnityEngine::InputSystem::InputControlPath__Parse_d__34*);
MARK_REF_T(::UnityEngine::InputSystem::InputControlPath___c*);
MARK_REF_T(::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputControlPath*, "UnityEngine.InputSystem", "InputControlPath");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputControlPath__Parse_d__34*, "UnityEngine.InputSystem", "InputControlPath/<Parse>d__34");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputControlPath___c*, "UnityEngine.InputSystem", "InputControlPath/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c*, "UnityEngine.InputSystem", "InputControlPath/ParsedPathComponent/<>c");
// [Extension]
// Dependencies System.Object, UnityEngine.InputSystem.InputControl
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputControlPath
class CORDL_TYPE InputControlPath : public ::System::Object {
public:
// Declarations
using HumanReadableStringOptions = ::GlobalNamespace::InputControlPath_HumanReadableStringOptions;

using ParsedPathComponent = ::GlobalNamespace::InputControlPath_ParsedPathComponent;

using PathComponentType = ::GlobalNamespace::InputControlPath_PathComponentType;

using PathParser = ::GlobalNamespace::InputControlPath_PathParser;

using _Parse_d__34 = ::UnityEngine::InputSystem::InputControlPath__Parse_d__34;

using __c = ::UnityEngine::InputSystem::InputControlPath___c;

/// [Extension]
/// @brief Method CleanSlashes, addr 0xaf573dc, size 0x1c, virtual false, abstract: false, final false
static inline ::StringW CleanSlashes(::StringW  pathComponent) ;

/// @brief Method Combine, addr 0xaf521dc, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW Combine(::UnityEngine::InputSystem::InputControl*  parent, ::StringW  path) ;

/// @brief Method ControlLayoutMatchesPathComponent, addr 0xaf58cbc, size 0x17c, virtual false, abstract: false, final false
static inline bool ControlLayoutMatchesPathComponent(::by_ref<::GlobalNamespace::InputControlLayout_ControlItem>  controlItem, ::by_ref<::GlobalNamespace::InputControlPath_PathParser>  parser) ;

/// @brief Method FindControlLayoutRecursive, addr 0xaf58b20, size 0x19c, virtual false, abstract: false, final false
static inline ::StringW FindControlLayoutRecursive(::by_ref<::GlobalNamespace::InputControlPath_PathParser>  parser, ::UnityEngine::InputSystem::Layouts::InputControlLayout*  layout) ;

/// @brief Method FindControlLayoutRecursive, addr 0xaf589bc, size 0x164, virtual false, abstract: false, final false
static inline ::StringW FindControlLayoutRecursive(::by_ref<::GlobalNamespace::InputControlPath_PathParser>  parser, ::StringW  layoutName) ;

/// @brief Method MatchByUsageAtDeviceRootRecursive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
static inline TControl MatchByUsageAtDeviceRootRecursive(::UnityEngine::InputSystem::InputDevice*  device, ::StringW  path, int32_t  indexInPath, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<TControl>>  matches, bool  matchMultiple) ;

/// @brief Method MatchChildrenRecursive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
static inline TControl MatchChildrenRecursive(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<TControl>>  matches, bool  matchMultiple) ;

/// @brief Method MatchControlComponent, addr 0xaf59250, size 0x3c0, virtual false, abstract: false, final false
static inline bool MatchControlComponent(::by_ref<::GlobalNamespace::InputControlPath_ParsedPathComponent>  expectedControlComponent, ::by_ref<::GlobalNamespace::InputControlLayout_ControlItem>  controlItem, bool  matchAlias) ;

/// @brief Method MatchControlsRecursive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
static inline TControl MatchControlsRecursive(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<TControl>>  matches, bool  matchMultiple) ;

/// @brief Method MatchPathComponent, addr 0xaf599a8, size 0x230, virtual false, abstract: false, final false
static inline bool MatchPathComponent(::StringW  component, ::StringW  path, ::by_ref<int32_t>  indexInPath, ::GlobalNamespace::InputControlPath_PathComponentType  componentType, int32_t  startIndexInComponent) ;

/// @brief Method Matches, addr 0xaf578dc, size 0xd0, virtual false, abstract: false, final false
static inline bool Matches(::StringW  expected, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method MatchesPrefix, addr 0xaf59610, size 0xec, virtual false, abstract: false, final false
static inline bool MatchesPrefix(::StringW  expected, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method MatchesRecursive, addr 0xaf591e8, size 0x68, virtual false, abstract: false, final false
static inline bool MatchesRecursive(::by_ref<::GlobalNamespace::InputControlPath_PathParser>  parser, ::UnityEngine::InputSystem::InputControl*  currentControl, bool  prefixOnly) ;

/// [IteratorStateMachine(typeof(UnityEngine.InputSystem.InputControlPath::<Parse>d__34))]
/// @brief Method Parse, addr 0xaf59c94, size 0x80, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>* Parse(::StringW  path) ;

/// @brief Method PathComponentCanYieldMultipleMatches, addr 0xaf59bd8, size 0xbc, virtual false, abstract: false, final false
static inline bool PathComponentCanYieldMultipleMatches(::StringW  path, int32_t  indexInPath) ;

/// @brief Method StringMatches, addr 0xaf58e4c, size 0x1dc, virtual false, abstract: false, final false
static inline bool StringMatches(::UnityEngine::InputSystem::Utilities::Substring  str, ::UnityEngine::InputSystem::Utilities::InternedString  matchTo) ;

/// @brief Method ToHumanReadableString, addr 0xaf57424, size 0x4b8, virtual false, abstract: false, final false
static inline ::StringW ToHumanReadableString(::StringW  path, ::by_ref<::StringW>  deviceLayoutName, ::by_ref<::StringW>  controlPath, ::GlobalNamespace::InputControlPath_HumanReadableStringOptions  options, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ToHumanReadableString, addr 0xaf573f8, size 0x2c, virtual false, abstract: false, final false
static inline ::StringW ToHumanReadableString(::StringW  path, ::GlobalNamespace::InputControlPath_HumanReadableStringOptions  options, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method TryFindChild, addr 0xaf525d8, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputControl* TryFindChild(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath) ;

/// @brief Method TryFindChild, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
static inline TControl TryFindChild(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath) ;

/// @brief Method TryFindControl, addr 0xaf4ad20, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputControl* TryFindControl(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath) ;

/// @brief Method TryFindControl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
static inline TControl TryFindControl(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath) ;

/// @brief Method TryFindControls, addr 0xaf59028, size 0x150, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::InputSystem::InputControl*> TryFindControls(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath) ;

/// @brief Method TryFindControls, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
static inline int32_t TryFindControls(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<TControl>>  matches) ;

/// @brief Method TryFindControls, addr 0xaf59178, size 0x70, virtual false, abstract: false, final false
static inline int32_t TryFindControls(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>  matches, int32_t  indexInPath) ;

/// @brief Method TryGetControlLayout, addr 0xaf587a0, size 0x21c, virtual false, abstract: false, final false
static inline ::StringW TryGetControlLayout(::StringW  path) ;

/// @brief Method TryGetDeviceLayout, addr 0xaf5860c, size 0x130, virtual false, abstract: false, final false
static inline ::StringW TryGetDeviceLayout(::StringW  path) ;

/// @brief Method TryGetDeviceUsages, addr 0xaf58478, size 0x194, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> TryGetDeviceUsages(::StringW  path) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputControlPath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputControlPath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControlPath(InputControlPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControlPath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControlPath(InputControlPath const& ) = delete;

/// @brief Field DoubleWildcard offset 0xffffffff size 0x8
static constexpr ::ConstString  DoubleWildcard{u"**"};

/// @brief Field Separator offset 0xffffffff size 0x2
static constexpr char16_t  Separator{u'/'};

/// @brief Field SeparatorReplacement offset 0xffffffff size 0x2
static constexpr char16_t  SeparatorReplacement{u' '};

/// @brief Field Wildcard offset 0xffffffff size 0x8
static constexpr ::ConstString  Wildcard{u"*"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13444};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputControlPath) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.InputSystem.InputControlPath::ParsedPathComponent, UnityEngine.InputSystem.InputControlPath::PathParser
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputControlPath/<Parse>d__34
class CORDL_TYPE InputControlPath__Parse_d__34 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__get_Current)) ::GlobalNamespace::InputControlPath_ParsedPathComponent  System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x48 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::GlobalNamespace::InputControlPath_ParsedPathComponent  __2__current;

/// @brief Field <>3__path, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__path, put=__cordl_internal_set___3__path)) ::StringW  __3__path;

/// @brief Field <>l__initialThreadId, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <parser>5__2, offset 0x78, size 0x60 
 __declspec(property(get=__cordl_internal_get__parser_5__2, put=__cordl_internal_set__parser_5__2)) ::GlobalNamespace::InputControlPath_PathParser  _parser_5__2;

/// @brief Field path, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::StringW  path;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xaf5a2d8, size 0x108, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::InputSystem::InputControlPath__Parse_d__34* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.GetEnumerator, addr 0xaf5a48c, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.get_Current, addr 0xaf5a3e0, size 0x10, virtual true, abstract: false, final true
inline ::GlobalNamespace::InputControlPath_ParsedPathComponent System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xaf5a530, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xaf5a3f0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xaf5a428, size 0x64, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xaf5a2d4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::GlobalNamespace::InputControlPath_ParsedPathComponent const& __cordl_internal_get___2__current() const;

constexpr ::GlobalNamespace::InputControlPath_ParsedPathComponent& __cordl_internal_get___2__current() ;

constexpr ::StringW const& __cordl_internal_get___3__path() const;

constexpr ::StringW& __cordl_internal_get___3__path() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::GlobalNamespace::InputControlPath_PathParser const& __cordl_internal_get__parser_5__2() const;

constexpr ::GlobalNamespace::InputControlPath_PathParser& __cordl_internal_get__parser_5__2() ;

constexpr ::StringW const& __cordl_internal_get_path() const;

constexpr ::StringW& __cordl_internal_get_path() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::GlobalNamespace::InputControlPath_ParsedPathComponent  value) ;

constexpr void __cordl_internal_set___3__path(::StringW  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__parser_5__2(::GlobalNamespace::InputControlPath_PathParser  value) ;

constexpr void __cordl_internal_set_path(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xaf59d14, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__InputControlPath_ParsedPathComponent_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__InputControlPath_ParsedPathComponent_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputControlPath__Parse_d__34() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputControlPath__Parse_d__34", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControlPath__Parse_d__34(InputControlPath__Parse_d__34 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControlPath__Parse_d__34", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControlPath__Parse_d__34(InputControlPath__Parse_d__34 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13443};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x48, def value: None
 ::GlobalNamespace::InputControlPath_ParsedPathComponent  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x60, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field path, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___path;

/// @brief Field <>3__path, offset: 0x70, size: 0x8, def value: None
 ::StringW  _____3__path;

/// @brief Field <parser>5__2, offset: 0x78, size: 0x60, def value: None
 ::GlobalNamespace::InputControlPath_PathParser  ____parser_5__2;

/// @brief Size padding 0xe8 - 0xd8 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath__Parse_d__34, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath__Parse_d__34, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath__Parse_d__34, _____l__initialThreadId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath__Parse_d__34, ___path) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath__Parse_d__34, _____3__path) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath__Parse_d__34, ____parser_5__2) == 0x78, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputControlPath__Parse_d__34) == 0xe8, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputControlPath/<>c
class CORDL_TYPE InputControlPath___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::InputControlPath___c*  __9;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*  __9__9_0;

static inline ::UnityEngine::InputSystem::InputControlPath___c* New_ctor() ;

/// @brief Method <TryGetDeviceUsages>b__9_0, addr 0xaf5a2b0, size 0x24, virtual false, abstract: false, final false
inline ::StringW _TryGetDeviceUsages_b__9_0(::UnityEngine::InputSystem::Utilities::Substring  x) ;

/// @brief Method .ctor, addr 0xaf5a2a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::InputControlPath___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>* getStaticF___9__9_0() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::InputControlPath___c*  value) ;

static inline void setStaticF___9__9_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputControlPath___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputControlPath___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControlPath___c(InputControlPath___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControlPath___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControlPath___c(InputControlPath___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13442};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputControlPath___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputControlPath/ParsedPathComponent/<>c
class CORDL_TYPE ParsedPathComponent_InputControlPath___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*  __9__7_0;

static inline ::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c* New_ctor() ;

/// @brief Method .ctor, addr 0xaf5a10c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_usages>b__7_0, addr 0xaf5a114, size 0x24, virtual false, abstract: false, final false
inline ::StringW _get_usages_b__7_0(::UnityEngine::InputSystem::Utilities::Substring  x) ;

static inline ::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>* getStaticF___9__7_0() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c*  value) ;

static inline void setStaticF___9__7_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParsedPathComponent_InputControlPath___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParsedPathComponent_InputControlPath___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParsedPathComponent_InputControlPath___c(ParsedPathComponent_InputControlPath___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParsedPathComponent_InputControlPath___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParsedPathComponent_InputControlPath___c(ParsedPathComponent_InputControlPath___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13439};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
