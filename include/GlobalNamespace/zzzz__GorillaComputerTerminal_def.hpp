#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaComputerTerminal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaComputerTerminal)
namespace GlobalNamespace {
class GorillaComputerTerminal___OnEnable_g__OnEnable_Local_4_0_d;
}
namespace GlobalNamespace {
class GorillaComputerTerminal___c;
}
namespace GlobalNamespace {
class IBuildValidation;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaComputerTerminal;
}
namespace GlobalNamespace {
class GorillaComputerTerminal___OnEnable_g__OnEnable_Local_4_0_d;
}
namespace GlobalNamespace {
class GorillaComputerTerminal___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaComputerTerminal*);
MARK_REF_T(::GlobalNamespace::GorillaComputerTerminal___OnEnable_g__OnEnable_Local_4_0_d*);
MARK_REF_T(::GlobalNamespace::GorillaComputerTerminal___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaComputerTerminal*, "", "GorillaComputerTerminal");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaComputerTerminal___OnEnable_g__OnEnable_Local_4_0_d*, "", "GorillaComputerTerminal/<<OnEnable>g__OnEnable_Local|4_0>d");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaComputerTerminal___c*, "", "GorillaComputerTerminal/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaComputerTerminal
class CORDL_TYPE GorillaComputerTerminal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __OnEnable_g__OnEnable_Local_4_0_d = ::GlobalNamespace::GorillaComputerTerminal___OnEnable_g__OnEnable_Local_4_0_d;

using __c = ::GlobalNamespace::GorillaComputerTerminal___c;

/// @brief Field monitorMesh, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_monitorMesh, put=__cordl_internal_set_monitorMesh)) ::UnityW<::UnityEngine::MeshRenderer>  monitorMesh;

/// @brief Field myFunctionText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myFunctionText, put=__cordl_internal_set_myFunctionText)) ::UnityW<::TMPro::TextMeshPro>  myFunctionText;

/// @brief Field myScreenText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myScreenText, put=__cordl_internal_set_myScreenText)) ::UnityW<::TMPro::TextMeshPro>  myScreenText;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method BuildValidationCheck, addr 0x5996d04, size 0x1b4, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

/// @brief Method Init, addr 0x5996fe0, size 0x31c, virtual false, abstract: false, final false
inline void Init() ;

static inline ::GlobalNamespace::GorillaComputerTerminal* New_ctor() ;

/// @brief Method OnDisable, addr 0x59972fc, size 0x1a0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5996eb8, size 0xbc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFunctionTextChanged, addr 0x59974bc, size 0x20, virtual false, abstract: false, final false
inline void OnFunctionTextChanged(::StringW  text) ;

/// @brief Method OnLanguageChanged, addr 0x59974f4, size 0xb4, virtual false, abstract: false, final false
inline void OnLanguageChanged() ;

/// @brief Method OnMaterialsChanged, addr 0x59974dc, size 0x18, virtual false, abstract: false, final false
inline void OnMaterialsChanged(::ArrayW<::UnityEngine::Material*>  materials) ;

/// @brief Method OnScreenTextChanged, addr 0x599749c, size 0x20, virtual false, abstract: false, final false
inline void OnScreenTextChanged(::StringW  text) ;

/// [IteratorStateMachine(typeof(GorillaComputerTerminal::<<OnEnable>g__OnEnable_Local|4_0>d))]
/// [CompilerGenerated]
/// @brief Method <OnEnable>g__OnEnable_Local|4_0, addr 0x5996f74, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* _OnEnable_g__OnEnable_Local_4_0() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_monitorMesh() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_monitorMesh() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_myFunctionText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_myFunctionText() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_myScreenText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_myScreenText() ;

constexpr void __cordl_internal_set_monitorMesh(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_myFunctionText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_myScreenText(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x59975a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaComputerTerminal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputerTerminal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaComputerTerminal(GorillaComputerTerminal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputerTerminal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaComputerTerminal(GorillaComputerTerminal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2597};

/// @brief Field myScreenText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___myScreenText;

/// @brief Field myFunctionText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___myFunctionText;

/// @brief Field monitorMesh, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___monitorMesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaComputerTerminal, ___myScreenText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaComputerTerminal, ___myFunctionText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaComputerTerminal, ___monitorMesh) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaComputerTerminal) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaComputerTerminal/<>c
class CORDL_TYPE GorillaComputerTerminal___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::GorillaComputerTerminal___c*  __9;

/// @brief Field <>9__4_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_1, put=setStaticF___9__4_1)) ::System::Func_1<bool>*  __9__4_1;

static inline ::GlobalNamespace::GorillaComputerTerminal___c* New_ctor() ;

/// @brief Method <OnEnable>b__4_1, addr 0x5997818, size 0x8c, virtual false, abstract: false, final false
inline bool _OnEnable_b__4_1() ;

/// @brief Method .ctor, addr 0x5997810, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::GorillaComputerTerminal___c* getStaticF___9() ;

static inline ::System::Func_1<bool>* getStaticF___9__4_1() ;

static inline void setStaticF___9(::GlobalNamespace::GorillaComputerTerminal___c*  value) ;

static inline void setStaticF___9__4_1(::System::Func_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaComputerTerminal___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputerTerminal___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaComputerTerminal___c(GorillaComputerTerminal___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputerTerminal___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaComputerTerminal___c(GorillaComputerTerminal___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2596};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaComputerTerminal___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaComputerTerminal/<<OnEnable>g__OnEnable_Local|4_0>d
class CORDL_TYPE GorillaComputerTerminal___OnEnable_g__OnEnable_Local_4_0_d : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaComputerTerminal>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59975dc, size 0x184, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaComputerTerminal___OnEnable_g__OnEnable_Local_4_0_d* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5997760, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5997768, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59977a0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59975d8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaComputerTerminal> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaComputerTerminal>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaComputerTerminal>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59975b0, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaComputerTerminal___OnEnable_g__OnEnable_Local_4_0_d() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputerTerminal___OnEnable_g__OnEnable_Local_4_0_d", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaComputerTerminal___OnEnable_g__OnEnable_Local_4_0_d(GorillaComputerTerminal___OnEnable_g__OnEnable_Local_4_0_d && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputerTerminal___OnEnable_g__OnEnable_Local_4_0_d", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaComputerTerminal___OnEnable_g__OnEnable_Local_4_0_d(GorillaComputerTerminal___OnEnable_g__OnEnable_Local_4_0_d const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2595};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaComputerTerminal>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaComputerTerminal___OnEnable_g__OnEnable_Local_4_0_d, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaComputerTerminal___OnEnable_g__OnEnable_Local_4_0_d, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaComputerTerminal___OnEnable_g__OnEnable_Local_4_0_d, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaComputerTerminal___OnEnable_g__OnEnable_Local_4_0_d) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
