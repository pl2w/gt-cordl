#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/AsyncOperations/GetDownloadSizeOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetDownloadSizeOperation)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
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
namespace UnityEngine::ResourceManagement::AsyncOperations {
class GetDownloadSizeOperation__Calculate_d__3;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
class GetDownloadSizeOperation;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class GetDownloadSizeOperation__Calculate_d__3;
}
// Write type traits
MARK_REF_T(::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*);
MARK_REF_T(::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation__Calculate_d__3*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*, "UnityEngine.ResourceManagement.AsyncOperations", "GetDownloadSizeOperation");
DEFINE_IL2CPP_CLASS(::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation__Calculate_d__3*, "UnityEngine.ResourceManagement.AsyncOperations", "GetDownloadSizeOperation/<Calculate>d__3");
// Dependencies UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject>
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.GetDownloadSizeOperation
class CORDL_TYPE GetDownloadSizeOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t> {
public:
// Declarations
using _Calculate_d__3 = ::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation__Calculate_d__3;

/// @brief Field m_AsyncCalculation, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AsyncCalculation, put=__cordl_internal_set_m_AsyncCalculation)) ::UnityEngine::Coroutine*  m_AsyncCalculation;

/// @brief Field m_Locations, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Locations, put=__cordl_internal_set_m_Locations)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  m_Locations;

/// [IteratorStateMachine(typeof(UnityEngine.ResourceManagement.AsyncOperations.GetDownloadSizeOperation::<Calculate>d__3))]
/// @brief Method Calculate, addr 0xb308984, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Calculate() ;

/// @brief Method CalculateSync, addr 0xb308a18, size 0x400, virtual false, abstract: false, final false
inline void CalculateSync() ;

/// @brief Method Execute, addr 0xb308e18, size 0x78, virtual true, abstract: false, final false
inline void Execute() ;

/// @brief Method Init, addr 0xb308954, size 0x30, virtual false, abstract: false, final false
inline void Init(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, ::UnityEngine::ResourceManagement::ResourceManager*  resourceManager) ;

/// @brief Method InvokeWaitForCompletion, addr 0xb308e90, size 0x68, virtual true, abstract: false, final false
inline bool InvokeWaitForCompletion() ;

static inline ::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation* New_ctor() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_m_AsyncCalculation() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_AsyncCalculation() ;

constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* const& __cordl_internal_get_m_Locations() const;

constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& __cordl_internal_get_m_Locations() ;

constexpr void __cordl_internal_set_m_AsyncCalculation(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_m_Locations(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  value) ;

/// @brief Method .ctor, addr 0xb308ef8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetDownloadSizeOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetDownloadSizeOperation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetDownloadSizeOperation(GetDownloadSizeOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetDownloadSizeOperation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetDownloadSizeOperation(GetDownloadSizeOperation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28662};

/// @brief Field m_Locations, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  ___m_Locations;

/// @brief Field m_AsyncCalculation, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___m_AsyncCalculation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation, ___m_Locations) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation, ___m_AsyncCalculation) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation) == 0xa8, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.GetDownloadSizeOperation/<Calculate>d__3
class CORDL_TYPE GetDownloadSizeOperation__Calculate_d__3 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*  __4__this;

/// @brief Field <>7__wrap2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  __7__wrap2;

/// @brief Field <size>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__size_5__2, put=__cordl_internal_set__size_5__2)) int64_t  _size_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb308f5c, size 0x438, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation__Calculate_d__3* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xb309444, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb30944c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb309484, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb308f40, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation* const& __cordl_internal_get___4__this() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* const& __cordl_internal_get___7__wrap2() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& __cordl_internal_get___7__wrap2() ;

constexpr int64_t const& __cordl_internal_get__size_5__2() const;

constexpr int64_t& __cordl_internal_get__size_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*  value) ;

constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  value) ;

constexpr void __cordl_internal_set__size_5__2(int64_t  value) ;

/// @brief Method <>m__Finally1, addr 0xb309394, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb3089f0, size 0x28, virtual false, abstract: false, final false
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
constexpr GetDownloadSizeOperation__Calculate_d__3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetDownloadSizeOperation__Calculate_d__3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetDownloadSizeOperation__Calculate_d__3(GetDownloadSizeOperation__Calculate_d__3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetDownloadSizeOperation__Calculate_d__3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetDownloadSizeOperation__Calculate_d__3(GetDownloadSizeOperation__Calculate_d__3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28661};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*  _____4__this;

/// @brief Field <size>5__2, offset: 0x28, size: 0x8, def value: None
 int64_t  ____size_5__2;

/// @brief Field <>7__wrap2, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  _____7__wrap2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation__Calculate_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation__Calculate_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation__Calculate_d__3, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation__Calculate_d__3, ____size_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation__Calculate_d__3, _____7__wrap2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation__Calculate_d__3) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
