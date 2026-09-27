#pragma once
// IWYU pragma private; include "Fusion/FusionGlobalScriptableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__FusionScriptableObject_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FusionGlobalScriptableObject)
namespace Fusion {
class FusionGlobalScriptableObjectSourceAttribute;
}
namespace Fusion {
template<typename T>
class FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1;
}
namespace Fusion {
class FusionGlobalScriptableObject___c;
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
namespace System::Reflection {
class Assembly;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class Lazy_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
class FusionGlobalScriptableObject;
}
namespace Fusion {
template<typename T>
class FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1;
}
namespace Fusion {
class FusionGlobalScriptableObject___c;
}
// Write type traits
MARK_REF_T(::Fusion::FusionGlobalScriptableObject*);
MARK_GEN_REF_T_PTR(::Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1);
MARK_REF_T(::Fusion::FusionGlobalScriptableObject___c*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionGlobalScriptableObject*, "Fusion", "FusionGlobalScriptableObject");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1, "Fusion", "FusionGlobalScriptableObject/<GetAssemblyAttributes>d__0`1");
DEFINE_IL2CPP_CLASS(::Fusion::FusionGlobalScriptableObject___c*, "Fusion", "FusionGlobalScriptableObject/<>c");
// Dependencies Fusion.FusionScriptableObject, System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionGlobalScriptableObject
class CORDL_TYPE FusionGlobalScriptableObject : public ::Fusion::FusionScriptableObject {
public:
// Declarations
template<typename T>
using _GetAssemblyAttributes_d__0_1 = ::Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>;

using __c = ::Fusion::FusionGlobalScriptableObject___c;

/// @brief Field s_sourceAttributes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_sourceAttributes, put=setStaticF_s_sourceAttributes)) ::System::Lazy_1<::ArrayW<::Fusion::FusionGlobalScriptableObjectSourceAttribute*>>*  s_sourceAttributes;

/// [IteratorStateMachine(typeof(Fusion.FusionGlobalScriptableObject::<GetAssemblyAttributes>d__0`1<T>))]
/// @brief Method GetAssemblyAttributes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::Attribute*>)
static inline ::System::Collections::Generic::IEnumerable_1<T>* GetAssemblyAttributes() ;

static inline ::Fusion::FusionGlobalScriptableObject* New_ctor() ;

/// @brief Method .ctor, addr 0x5f3e1d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Lazy_1<::ArrayW<::Fusion::FusionGlobalScriptableObjectSourceAttribute*>>* getStaticF_s_sourceAttributes() ;

/// @brief Method get_SourceAttributes, addr 0x5f3e15c, size 0x78, virtual false, abstract: false, final false
static inline ::ArrayW<::Fusion::FusionGlobalScriptableObjectSourceAttribute*> get_SourceAttributes() ;

static inline void setStaticF_s_sourceAttributes(::System::Lazy_1<::ArrayW<::Fusion::FusionGlobalScriptableObjectSourceAttribute*>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionGlobalScriptableObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionGlobalScriptableObject(FusionGlobalScriptableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionGlobalScriptableObject(FusionGlobalScriptableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31295};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FusionGlobalScriptableObject) == 0x18, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object, System.Reflection.Assembly
namespace Fusion {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.FusionGlobalScriptableObject/<GetAssemblyAttributes>d__0`1<T>
class CORDL_TYPE FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current)) T  System_Collections_Generic_IEnumerator_T__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) T  __2__current;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>s__1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) ::ArrayW<::System::Reflection::Assembly*>  __s__1;

/// @brief Field <>s__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__2, put=__cordl_internal_set___s__2)) int32_t  __s__2;

/// @brief Field <>s__4, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__4, put=__cordl_internal_set___s__4)) ::System::Collections::Generic::IEnumerator_1<T>*  __s__4;

/// @brief Field <assembly>5__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__assembly_5__3, put=__cordl_internal_set__assembly_5__3)) ::System::Reflection::Assembly*  _assembly_5__3;

/// @brief Field <attr>5__5, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__attr_5__5, put=__cordl_internal_set__attr_5__5)) T  _attr_5__5;

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

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T System_Collections_Generic_IEnumerator_T__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr T const& __cordl_internal_get___2__current() const;

constexpr T& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::ArrayW<::System::Reflection::Assembly*> const& __cordl_internal_get___s__1() const;

constexpr ::ArrayW<::System::Reflection::Assembly*>& __cordl_internal_get___s__1() ;

constexpr int32_t const& __cordl_internal_get___s__2() const;

constexpr int32_t& __cordl_internal_get___s__2() ;

constexpr ::System::Collections::Generic::IEnumerator_1<T>* const& __cordl_internal_get___s__4() const;

constexpr ::System::Collections::Generic::IEnumerator_1<T>*& __cordl_internal_get___s__4() ;

constexpr ::System::Reflection::Assembly* const& __cordl_internal_get__assembly_5__3() const;

constexpr ::System::Reflection::Assembly*& __cordl_internal_get__assembly_5__3() ;

constexpr T const& __cordl_internal_get__attr_5__5() const;

constexpr T& __cordl_internal_get__attr_5__5() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(T  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set___s__1(::ArrayW<::System::Reflection::Assembly*>  value) ;

constexpr void __cordl_internal_set___s__2(int32_t  value) ;

constexpr void __cordl_internal_set___s__4(::System::Collections::Generic::IEnumerator_1<T>*  value) ;

constexpr void __cordl_internal_set__assembly_5__3(::System::Reflection::Assembly*  value) ;

constexpr void __cordl_internal_set__attr_5__5(T  value) ;

/// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

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
constexpr FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1(FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1(FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31294};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 T  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>s__1, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::System::Reflection::Assembly*>  _____s__1;

/// @brief Field <>s__2, offset: 0x30, size: 0x4, def value: None
 int32_t  _____s__2;

/// @brief Field <assembly>5__3, offset: 0x38, size: 0x8, def value: None
 ::System::Reflection::Assembly*  ____assembly_5__3;

/// @brief Field <>s__4, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<T>*  _____s__4;

/// @brief Field <attr>5__5, offset: 0x48, size: 0x8, def value: None
 T  ____attr_5__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionGlobalScriptableObject/<>c
class CORDL_TYPE FusionGlobalScriptableObject___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Fusion::FusionGlobalScriptableObject___c*  __9;

/// @brief Field <>9__5_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_1, put=setStaticF___9__5_1)) ::System::Func_2<::Fusion::FusionGlobalScriptableObjectSourceAttribute*,int32_t>*  __9__5_1;

static inline ::Fusion::FusionGlobalScriptableObject___c* New_ctor() ;

/// @brief Method <.cctor>b__5_0, addr 0x5f3e36c, size 0x164, virtual false, abstract: false, final false
inline ::ArrayW<::Fusion::FusionGlobalScriptableObjectSourceAttribute*> __cctor_b__5_0() ;

/// @brief Method <.cctor>b__5_1, addr 0x5f3e4d0, size 0x14, virtual false, abstract: false, final false
inline int32_t __cctor_b__5_1(::Fusion::FusionGlobalScriptableObjectSourceAttribute*  x) ;

/// @brief Method .ctor, addr 0x5f3e364, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::FusionGlobalScriptableObject___c* getStaticF___9() ;

static inline ::System::Func_2<::Fusion::FusionGlobalScriptableObjectSourceAttribute*,int32_t>* getStaticF___9__5_1() ;

static inline void setStaticF___9(::Fusion::FusionGlobalScriptableObject___c*  value) ;

static inline void setStaticF___9__5_1(::System::Func_2<::Fusion::FusionGlobalScriptableObjectSourceAttribute*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionGlobalScriptableObject___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObject___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionGlobalScriptableObject___c(FusionGlobalScriptableObject___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObject___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionGlobalScriptableObject___c(FusionGlobalScriptableObject___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31293};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FusionGlobalScriptableObject___c) == 0x10, "Size mismatch!");

} // namespace end def Fusion
