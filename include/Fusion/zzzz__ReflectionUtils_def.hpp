#pragma once
// IWYU pragma private; include "Fusion/ReflectionUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionUtils)
namespace Fusion {
class NetworkAssemblyWeavedAttribute;
}
namespace Fusion {
class NetworkBehaviourWeavedAttribute;
}
namespace Fusion {
class ReflectionUtils__GetAllNetworkBehaviourTypes_d__5;
}
namespace Fusion {
class ReflectionUtils__GetAllSimulationBehaviourTypes_d__3;
}
namespace Fusion {
class ReflectionUtils__GetAllWeavedAssemblies_d__2;
}
namespace Fusion {
class ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6;
}
namespace Fusion {
class ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4;
}
namespace Fusion {
class ReflectionUtils__GetAllWeaverGeneratedTypes_d__7;
}
namespace Fusion {
class WeaverGeneratedAttribute;
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
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
class ReflectionUtils;
}
namespace Fusion {
class ReflectionUtils__GetAllNetworkBehaviourTypes_d__5;
}
namespace Fusion {
class ReflectionUtils__GetAllSimulationBehaviourTypes_d__3;
}
namespace Fusion {
class ReflectionUtils__GetAllWeavedAssemblies_d__2;
}
namespace Fusion {
class ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6;
}
namespace Fusion {
class ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4;
}
namespace Fusion {
class ReflectionUtils__GetAllWeaverGeneratedTypes_d__7;
}
// Write type traits
MARK_REF_T(::Fusion::ReflectionUtils*);
MARK_REF_T(::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*);
MARK_REF_T(::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3*);
MARK_REF_T(::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2*);
MARK_REF_T(::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*);
MARK_REF_T(::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*);
MARK_REF_T(::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*);
DEFINE_IL2CPP_CLASS(::Fusion::ReflectionUtils*, "Fusion", "ReflectionUtils");
DEFINE_IL2CPP_CLASS(::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*, "Fusion", "ReflectionUtils/<GetAllNetworkBehaviourTypes>d__5");
DEFINE_IL2CPP_CLASS(::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3*, "Fusion", "ReflectionUtils/<GetAllSimulationBehaviourTypes>d__3");
DEFINE_IL2CPP_CLASS(::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2*, "Fusion", "ReflectionUtils/<GetAllWeavedAssemblies>d__2");
DEFINE_IL2CPP_CLASS(::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*, "Fusion", "ReflectionUtils/<GetAllWeavedNetworkBehaviourTypes>d__6");
DEFINE_IL2CPP_CLASS(::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*, "Fusion", "ReflectionUtils/<GetAllWeavedSimulationBehaviourTypes>d__4");
DEFINE_IL2CPP_CLASS(::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*, "Fusion", "ReflectionUtils/<GetAllWeaverGeneratedTypes>d__7");
// [Extension]
// Dependencies System.Attribute, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ReflectionUtils
class CORDL_TYPE ReflectionUtils : public ::System::Object {
public:
// Declarations
using _GetAllNetworkBehaviourTypes_d__5 = ::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5;

using _GetAllSimulationBehaviourTypes_d__3 = ::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3;

using _GetAllWeavedAssemblies_d__2 = ::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2;

using _GetAllWeavedNetworkBehaviourTypes_d__6 = ::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6;

using _GetAllWeavedSimulationBehaviourTypes_d__4 = ::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4;

using _GetAllWeaverGeneratedTypes_d__7 = ::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7;

/// [IteratorStateMachine(typeof(Fusion.ReflectionUtils::<GetAllNetworkBehaviourTypes>d__5))]
/// @brief Method GetAllNetworkBehaviourTypes, addr 0x5fa21fc, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAllNetworkBehaviourTypes() ;

/// [IteratorStateMachine(typeof(Fusion.ReflectionUtils::<GetAllSimulationBehaviourTypes>d__3))]
/// @brief Method GetAllSimulationBehaviourTypes, addr 0x5fa20bc, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAllSimulationBehaviourTypes() ;

/// [IteratorStateMachine(typeof(Fusion.ReflectionUtils::<GetAllWeavedAssemblies>d__2))]
/// @brief Method GetAllWeavedAssemblies, addr 0x5fa201c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* GetAllWeavedAssemblies() ;

/// [IteratorStateMachine(typeof(Fusion.ReflectionUtils::<GetAllWeavedNetworkBehaviourTypes>d__6))]
/// @brief Method GetAllWeavedNetworkBehaviourTypes, addr 0x5fa229c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAllWeavedNetworkBehaviourTypes() ;

/// [IteratorStateMachine(typeof(Fusion.ReflectionUtils::<GetAllWeavedSimulationBehaviourTypes>d__4))]
/// @brief Method GetAllWeavedSimulationBehaviourTypes, addr 0x5fa215c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAllWeavedSimulationBehaviourTypes() ;

/// [IteratorStateMachine(typeof(Fusion.ReflectionUtils::<GetAllWeaverGeneratedTypes>d__7))]
/// @brief Method GetAllWeaverGeneratedTypes, addr 0x5fa233c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAllWeaverGeneratedTypes() ;

/// [Extension]
/// @brief Method GetCustomAttributeOrThrow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::Attribute*>)
static inline T GetCustomAttributeOrThrow(::System::Reflection::MemberInfo*  member, bool  inherit) ;

/// @brief Method GetWeavedAttributeOrThrow, addr 0x5fa1eac, size 0x170, virtual false, abstract: false, final false
static inline ::Fusion::NetworkBehaviourWeavedAttribute* GetWeavedAttributeOrThrow(::System::Type*  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionUtils(ReflectionUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionUtils(ReflectionUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19093};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::ReflectionUtils) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object, System.Type
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ReflectionUtils/<GetAllWeaverGeneratedTypes>d__7
class CORDL_TYPE ReflectionUtils__GetAllWeaverGeneratedTypes_d__7 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Type__get_Current)) ::System::Type*  System_Collections_Generic_IEnumerator_System_Type__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Type*  __2__current;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>s__1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) ::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>*  __s__1;

/// @brief Field <>s__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__3, put=__cordl_internal_set___s__3)) ::ArrayW<::System::Type*>  __s__3;

/// @brief Field <>s__4, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__4, put=__cordl_internal_set___s__4)) int32_t  __s__4;

/// @brief Field <asm>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__asm_5__2, put=__cordl_internal_set__asm_5__2)) ::System::Reflection::Assembly*  _asm_5__2;

/// @brief Field <type>5__5, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__type_5__5, put=__cordl_internal_set__type_5__5)) ::System::Type*  _type_5__5;

/// @brief Field <weaverGen>5__6, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__weaverGen_5__6, put=__cordl_internal_set__weaverGen_5__6)) ::Fusion::WeaverGeneratedAttribute*  _weaverGen_5__6;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5fa3a5c, size 0x3d8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator, addr 0x5fa3f2c, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current, addr 0x5fa3ee4, size 0x8, virtual true, abstract: false, final true
inline ::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5fa3fbc, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5fa3eec, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5fa3f24, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5fa39d8, size 0x84, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Type* const& __cordl_internal_get___2__current() const;

constexpr ::System::Type*& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>* const& __cordl_internal_get___s__1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>*& __cordl_internal_get___s__1() ;

constexpr ::ArrayW<::System::Type*> const& __cordl_internal_get___s__3() const;

constexpr ::ArrayW<::System::Type*>& __cordl_internal_get___s__3() ;

constexpr int32_t const& __cordl_internal_get___s__4() const;

constexpr int32_t& __cordl_internal_get___s__4() ;

constexpr ::System::Reflection::Assembly* const& __cordl_internal_get__asm_5__2() const;

constexpr ::System::Reflection::Assembly*& __cordl_internal_get__asm_5__2() ;

constexpr ::System::Type* const& __cordl_internal_get__type_5__5() const;

constexpr ::System::Type*& __cordl_internal_get__type_5__5() ;

constexpr ::Fusion::WeaverGeneratedAttribute* const& __cordl_internal_get__weaverGen_5__6() const;

constexpr ::Fusion::WeaverGeneratedAttribute*& __cordl_internal_get__weaverGen_5__6() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Type*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set___s__1(::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>*  value) ;

constexpr void __cordl_internal_set___s__3(::ArrayW<::System::Type*>  value) ;

constexpr void __cordl_internal_set___s__4(int32_t  value) ;

constexpr void __cordl_internal_set__asm_5__2(::System::Reflection::Assembly*  value) ;

constexpr void __cordl_internal_set__type_5__5(::System::Type*  value) ;

constexpr void __cordl_internal_set__weaverGen_5__6(::Fusion::WeaverGeneratedAttribute*  value) ;

/// @brief Method <>m__Finally1, addr 0x5fa3e34, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5fa23a8, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>* i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionUtils__GetAllWeaverGeneratedTypes_d__7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils__GetAllWeaverGeneratedTypes_d__7", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionUtils__GetAllWeaverGeneratedTypes_d__7(ReflectionUtils__GetAllWeaverGeneratedTypes_d__7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils__GetAllWeaverGeneratedTypes_d__7", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionUtils__GetAllWeaverGeneratedTypes_d__7(ReflectionUtils__GetAllWeaverGeneratedTypes_d__7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19092};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>s__1, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>*  _____s__1;

/// @brief Field <asm>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Reflection::Assembly*  ____asm_5__2;

/// @brief Field <>s__3, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::System::Type*>  _____s__3;

/// @brief Field <>s__4, offset: 0x40, size: 0x4, def value: None
 int32_t  _____s__4;

/// @brief Field <type>5__5, offset: 0x48, size: 0x8, def value: None
 ::System::Type*  ____type_5__5;

/// @brief Field <weaverGen>5__6, offset: 0x50, size: 0x8, def value: None
 ::Fusion::WeaverGeneratedAttribute*  ____weaverGen_5__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7, _____s__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7, ____asm_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7, _____s__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7, _____s__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7, ____type_5__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7, ____weaverGen_5__6) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7) == 0x58, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object, System.Type
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ReflectionUtils/<GetAllWeavedSimulationBehaviourTypes>d__4
class CORDL_TYPE ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Type__get_Current)) ::System::Type*  System_Collections_Generic_IEnumerator_System_Type__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Type*  __2__current;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>s__1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) ::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>*  __s__1;

/// @brief Field <>s__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__3, put=__cordl_internal_set___s__3)) ::ArrayW<::System::Type*>  __s__3;

/// @brief Field <>s__4, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__4, put=__cordl_internal_set___s__4)) int32_t  __s__4;

/// @brief Field <asm>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__asm_5__2, put=__cordl_internal_set__asm_5__2)) ::System::Reflection::Assembly*  _asm_5__2;

/// @brief Field <type>5__5, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__type_5__5, put=__cordl_internal_set__type_5__5)) ::System::Type*  _type_5__5;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5fa3454, size 0x3f8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator, addr 0x5fa3944, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current, addr 0x5fa38fc, size 0x8, virtual true, abstract: false, final true
inline ::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5fa39d4, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5fa3904, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5fa393c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5fa33e0, size 0x74, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Type* const& __cordl_internal_get___2__current() const;

constexpr ::System::Type*& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>* const& __cordl_internal_get___s__1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>*& __cordl_internal_get___s__1() ;

constexpr ::ArrayW<::System::Type*> const& __cordl_internal_get___s__3() const;

constexpr ::ArrayW<::System::Type*>& __cordl_internal_get___s__3() ;

constexpr int32_t const& __cordl_internal_get___s__4() const;

constexpr int32_t& __cordl_internal_get___s__4() ;

constexpr ::System::Reflection::Assembly* const& __cordl_internal_get__asm_5__2() const;

constexpr ::System::Reflection::Assembly*& __cordl_internal_get__asm_5__2() ;

constexpr ::System::Type* const& __cordl_internal_get__type_5__5() const;

constexpr ::System::Type*& __cordl_internal_get__type_5__5() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Type*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set___s__1(::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>*  value) ;

constexpr void __cordl_internal_set___s__3(::ArrayW<::System::Type*>  value) ;

constexpr void __cordl_internal_set___s__4(int32_t  value) ;

constexpr void __cordl_internal_set__asm_5__2(::System::Reflection::Assembly*  value) ;

constexpr void __cordl_internal_set__type_5__5(::System::Type*  value) ;

/// @brief Method <>m__Finally1, addr 0x5fa384c, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5fa21c8, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>* i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4(ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4(ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19091};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>s__1, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>*  _____s__1;

/// @brief Field <asm>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Reflection::Assembly*  ____asm_5__2;

/// @brief Field <>s__3, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::System::Type*>  _____s__3;

/// @brief Field <>s__4, offset: 0x40, size: 0x4, def value: None
 int32_t  _____s__4;

/// @brief Field <type>5__5, offset: 0x48, size: 0x8, def value: None
 ::System::Type*  ____type_5__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4, _____s__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4, ____asm_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4, _____s__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4, _____s__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4, ____type_5__5) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4) == 0x50, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ReflectionUtils/<GetAllWeavedNetworkBehaviourTypes>d__6
class CORDL_TYPE ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Type__get_Current)) ::System::Type*  System_Collections_Generic_IEnumerator_System_Type__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Type*  __2__current;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>s__1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) ::System::Collections::Generic::IEnumerator_1<::System::Type*>*  __s__1;

/// @brief Field <type>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__type_5__2, put=__cordl_internal_set__type_5__2)) ::System::Type*  _type_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5fa2f08, size 0x34c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator, addr 0x5fa334c, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current, addr 0x5fa3304, size 0x8, virtual true, abstract: false, final true
inline ::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5fa33dc, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5fa330c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5fa3344, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5fa2eb4, size 0x54, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Type* const& __cordl_internal_get___2__current() const;

constexpr ::System::Type*& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* const& __cordl_internal_get___s__1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>*& __cordl_internal_get___s__1() ;

constexpr ::System::Type* const& __cordl_internal_get__type_5__2() const;

constexpr ::System::Type*& __cordl_internal_get__type_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Type*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set___s__1(::System::Collections::Generic::IEnumerator_1<::System::Type*>*  value) ;

constexpr void __cordl_internal_set__type_5__2(::System::Type*  value) ;

/// @brief Method <>m__Finally1, addr 0x5fa3254, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5fa2308, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>* i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6(ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6(ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19090};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>s__1, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::Type*>*  _____s__1;

/// @brief Field <type>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Type*  ____type_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6, _____s__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6, ____type_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6) == 0x38, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object, System.Reflection.Assembly
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ReflectionUtils/<GetAllWeavedAssemblies>d__2
class CORDL_TYPE ReflectionUtils__GetAllWeavedAssemblies_d__2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Reflection_Assembly__get_Current)) ::System::Reflection::Assembly*  System_Collections_Generic_IEnumerator_System_Reflection_Assembly__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Reflection::Assembly*  __2__current;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>s__1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) ::ArrayW<::System::Reflection::Assembly*>  __s__1;

/// @brief Field <>s__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__2, put=__cordl_internal_set___s__2)) int32_t  __s__2;

/// @brief Field <asm>5__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__asm_5__3, put=__cordl_internal_set__asm_5__3)) ::System::Reflection::Assembly*  _asm_5__3;

/// @brief Field <attr>5__4, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__attr_5__4, put=__cordl_internal_set__attr_5__4)) ::Fusion::NetworkAssemblyWeavedAttribute*  _attr_5__4;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5fa2c80, size 0x158, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.Reflection.Assembly>.GetEnumerator, addr 0x5fa2e20, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>* System_Collections_Generic_IEnumerable_System_Reflection_Assembly__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Reflection.Assembly>.get_Current, addr 0x5fa2dd8, size 0x8, virtual true, abstract: false, final true
inline ::System::Reflection::Assembly* System_Collections_Generic_IEnumerator_System_Reflection_Assembly__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5fa2eb0, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5fa2de0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5fa2e18, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5fa2c3c, size 0x44, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Reflection::Assembly* const& __cordl_internal_get___2__current() const;

constexpr ::System::Reflection::Assembly*& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::ArrayW<::System::Reflection::Assembly*> const& __cordl_internal_get___s__1() const;

constexpr ::ArrayW<::System::Reflection::Assembly*>& __cordl_internal_get___s__1() ;

constexpr int32_t const& __cordl_internal_get___s__2() const;

constexpr int32_t& __cordl_internal_get___s__2() ;

constexpr ::System::Reflection::Assembly* const& __cordl_internal_get__asm_5__3() const;

constexpr ::System::Reflection::Assembly*& __cordl_internal_get__asm_5__3() ;

constexpr ::Fusion::NetworkAssemblyWeavedAttribute* const& __cordl_internal_get__attr_5__4() const;

constexpr ::Fusion::NetworkAssemblyWeavedAttribute*& __cordl_internal_get__attr_5__4() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Reflection::Assembly*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set___s__1(::ArrayW<::System::Reflection::Assembly*>  value) ;

constexpr void __cordl_internal_set___s__2(int32_t  value) ;

constexpr void __cordl_internal_set__asm_5__3(::System::Reflection::Assembly*  value) ;

constexpr void __cordl_internal_set__attr_5__4(::Fusion::NetworkAssemblyWeavedAttribute*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5fa2088, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* i___System__Collections__Generic__IEnumerable_1___System__Reflection__Assembly__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>* i___System__Collections__Generic__IEnumerator_1___System__Reflection__Assembly__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionUtils__GetAllWeavedAssemblies_d__2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils__GetAllWeavedAssemblies_d__2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionUtils__GetAllWeavedAssemblies_d__2(ReflectionUtils__GetAllWeavedAssemblies_d__2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils__GetAllWeavedAssemblies_d__2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionUtils__GetAllWeavedAssemblies_d__2(ReflectionUtils__GetAllWeavedAssemblies_d__2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19089};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Reflection::Assembly*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>s__1, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::System::Reflection::Assembly*>  _____s__1;

/// @brief Field <>s__2, offset: 0x30, size: 0x4, def value: None
 int32_t  _____s__2;

/// @brief Field <asm>5__3, offset: 0x38, size: 0x8, def value: None
 ::System::Reflection::Assembly*  ____asm_5__3;

/// @brief Field <attr>5__4, offset: 0x40, size: 0x8, def value: None
 ::Fusion::NetworkAssemblyWeavedAttribute*  ____attr_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2, _____s__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2, _____s__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2, ____asm_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2, ____attr_5__4) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2) == 0x48, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object, System.Reflection.Assembly, System.Type
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ReflectionUtils/<GetAllSimulationBehaviourTypes>d__3
class CORDL_TYPE ReflectionUtils__GetAllSimulationBehaviourTypes_d__3 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Type__get_Current)) ::System::Type*  System_Collections_Generic_IEnumerator_System_Type__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Type*  __2__current;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>s__1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) ::ArrayW<::System::Reflection::Assembly*>  __s__1;

/// @brief Field <>s__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__2, put=__cordl_internal_set___s__2)) int32_t  __s__2;

/// @brief Field <>s__4, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__4, put=__cordl_internal_set___s__4)) ::ArrayW<::System::Type*>  __s__4;

/// @brief Field <>s__5, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__5, put=__cordl_internal_set___s__5)) int32_t  __s__5;

/// @brief Field <asm>5__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__asm_5__3, put=__cordl_internal_set__asm_5__3)) ::System::Reflection::Assembly*  _asm_5__3;

/// @brief Field <type>5__6, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__type_5__6, put=__cordl_internal_set__type_5__6)) ::System::Type*  _type_5__6;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5fa295c, size 0x204, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator, addr 0x5fa2ba8, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current, addr 0x5fa2b60, size 0x8, virtual true, abstract: false, final true
inline ::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5fa2c38, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5fa2b68, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5fa2ba0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5fa2908, size 0x54, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Type* const& __cordl_internal_get___2__current() const;

constexpr ::System::Type*& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::ArrayW<::System::Reflection::Assembly*> const& __cordl_internal_get___s__1() const;

constexpr ::ArrayW<::System::Reflection::Assembly*>& __cordl_internal_get___s__1() ;

constexpr int32_t const& __cordl_internal_get___s__2() const;

constexpr int32_t& __cordl_internal_get___s__2() ;

constexpr ::ArrayW<::System::Type*> const& __cordl_internal_get___s__4() const;

constexpr ::ArrayW<::System::Type*>& __cordl_internal_get___s__4() ;

constexpr int32_t const& __cordl_internal_get___s__5() const;

constexpr int32_t& __cordl_internal_get___s__5() ;

constexpr ::System::Reflection::Assembly* const& __cordl_internal_get__asm_5__3() const;

constexpr ::System::Reflection::Assembly*& __cordl_internal_get__asm_5__3() ;

constexpr ::System::Type* const& __cordl_internal_get__type_5__6() const;

constexpr ::System::Type*& __cordl_internal_get__type_5__6() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Type*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set___s__1(::ArrayW<::System::Reflection::Assembly*>  value) ;

constexpr void __cordl_internal_set___s__2(int32_t  value) ;

constexpr void __cordl_internal_set___s__4(::ArrayW<::System::Type*>  value) ;

constexpr void __cordl_internal_set___s__5(int32_t  value) ;

constexpr void __cordl_internal_set__asm_5__3(::System::Reflection::Assembly*  value) ;

constexpr void __cordl_internal_set__type_5__6(::System::Type*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5fa2128, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>* i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionUtils__GetAllSimulationBehaviourTypes_d__3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils__GetAllSimulationBehaviourTypes_d__3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionUtils__GetAllSimulationBehaviourTypes_d__3(ReflectionUtils__GetAllSimulationBehaviourTypes_d__3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils__GetAllSimulationBehaviourTypes_d__3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionUtils__GetAllSimulationBehaviourTypes_d__3(ReflectionUtils__GetAllSimulationBehaviourTypes_d__3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19088};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>s__1, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::System::Reflection::Assembly*>  _____s__1;

/// @brief Field <>s__2, offset: 0x30, size: 0x4, def value: None
 int32_t  _____s__2;

/// @brief Field <asm>5__3, offset: 0x38, size: 0x8, def value: None
 ::System::Reflection::Assembly*  ____asm_5__3;

/// @brief Field <>s__4, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::System::Type*>  _____s__4;

/// @brief Field <>s__5, offset: 0x48, size: 0x4, def value: None
 int32_t  _____s__5;

/// @brief Field <type>5__6, offset: 0x50, size: 0x8, def value: None
 ::System::Type*  ____type_5__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3, _____s__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3, _____s__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3, ____asm_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3, _____s__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3, _____s__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3, ____type_5__6) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3) == 0x58, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ReflectionUtils/<GetAllNetworkBehaviourTypes>d__5
class CORDL_TYPE ReflectionUtils__GetAllNetworkBehaviourTypes_d__5 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Type__get_Current)) ::System::Type*  System_Collections_Generic_IEnumerator_System_Type__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Type*  __2__current;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>s__1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) ::System::Collections::Generic::IEnumerator_1<::System::Type*>*  __s__1;

/// @brief Field <type>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__type_5__2, put=__cordl_internal_set__type_5__2)) ::System::Type*  _type_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5fa2430, size 0x34c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator, addr 0x5fa2874, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current, addr 0x5fa282c, size 0x8, virtual true, abstract: false, final true
inline ::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5fa2904, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5fa2834, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5fa286c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5fa23dc, size 0x54, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Type* const& __cordl_internal_get___2__current() const;

constexpr ::System::Type*& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* const& __cordl_internal_get___s__1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>*& __cordl_internal_get___s__1() ;

constexpr ::System::Type* const& __cordl_internal_get__type_5__2() const;

constexpr ::System::Type*& __cordl_internal_get__type_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Type*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set___s__1(::System::Collections::Generic::IEnumerator_1<::System::Type*>*  value) ;

constexpr void __cordl_internal_set__type_5__2(::System::Type*  value) ;

/// @brief Method <>m__Finally1, addr 0x5fa277c, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5fa2268, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>* i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionUtils__GetAllNetworkBehaviourTypes_d__5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils__GetAllNetworkBehaviourTypes_d__5", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionUtils__GetAllNetworkBehaviourTypes_d__5(ReflectionUtils__GetAllNetworkBehaviourTypes_d__5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils__GetAllNetworkBehaviourTypes_d__5", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionUtils__GetAllNetworkBehaviourTypes_d__5(ReflectionUtils__GetAllNetworkBehaviourTypes_d__5 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19087};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>s__1, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::Type*>*  _____s__1;

/// @brief Field <type>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Type*  ____type_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5, _____s__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5, ____type_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5) == 0x38, "Size mismatch!");

} // namespace end def Fusion
