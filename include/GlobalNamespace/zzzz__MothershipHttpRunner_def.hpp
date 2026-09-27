#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipHttpRunner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipHttpRunner)
namespace GlobalNamespace {
class MothershipHTTPRequest;
}
namespace GlobalNamespace {
class MothershipHTTPResponse;
}
namespace GlobalNamespace {
class MothershipHttpRunner__SendRequestInternal_d__6;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipHttpRunner;
}
namespace GlobalNamespace {
class MothershipHttpRunner__SendRequestInternal_d__6;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipHttpRunner*);
MARK_REF_T(::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipHttpRunner*, "", "MothershipHttpRunner");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6*, "", "MothershipHttpRunner/<SendRequestInternal>d__6");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipHttpRunner
class CORDL_TYPE MothershipHttpRunner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _SendRequestInternal_d__6 = ::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::MothershipHttpRunner>  _instance;

/// @brief Method Awake, addr 0x53c0898, size 0x130, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateInstance, addr 0x53c074c, size 0x14c, virtual false, abstract: false, final false
static inline void CreateInstance() ;

static inline ::GlobalNamespace::MothershipHttpRunner* New_ctor() ;

/// @brief Method SendRequest, addr 0x53c0614, size 0x20, virtual false, abstract: false, final false
inline void SendRequest(::UnityEngine::Networking::UnityWebRequest*  uwr, ::GlobalNamespace::MothershipHTTPRequest*  request, ::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>*  responseCallback) ;

/// [IteratorStateMachine(typeof(MothershipHttpRunner::<SendRequestInternal>d__6))]
/// @brief Method SendRequestInternal, addr 0x53c09c8, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SendRequestInternal(::UnityEngine::Networking::UnityWebRequest*  uwr, ::GlobalNamespace::MothershipHTTPRequest*  request, ::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>*  responseCallback) ;

/// @brief Method .ctor, addr 0x53c0a8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::MothershipHttpRunner> getStaticF__instance() ;

/// @brief Method get_instance, addr 0x53c05c8, size 0x4c, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::MothershipHttpRunner> get_instance() ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::MothershipHttpRunner>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipHttpRunner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipHttpRunner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipHttpRunner(MothershipHttpRunner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipHttpRunner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipHttpRunner(MothershipHttpRunner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9769};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipHttpRunner) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipHttpRunner/<SendRequestInternal>d__6
class CORDL_TYPE MothershipHttpRunner__SendRequestInternal_d__6 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field request, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::GlobalNamespace::MothershipHTTPRequest*  request;

/// @brief Field responseCallback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_responseCallback, put=__cordl_internal_set_responseCallback)) ::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>*  responseCallback;

/// @brief Field uwr, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_uwr, put=__cordl_internal_set_uwr)) ::UnityEngine::Networking::UnityWebRequest*  uwr;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x53c0a98, size 0x138, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x53c0bd0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x53c0bd8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x53c0c10, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x53c0a94, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::GlobalNamespace::MothershipHTTPRequest* const& __cordl_internal_get_request() const;

constexpr ::GlobalNamespace::MothershipHTTPRequest*& __cordl_internal_get_request() ;

constexpr ::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>* const& __cordl_internal_get_responseCallback() const;

constexpr ::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>*& __cordl_internal_get_responseCallback() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_uwr() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_uwr() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_request(::GlobalNamespace::MothershipHTTPRequest*  value) ;

constexpr void __cordl_internal_set_responseCallback(::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>*  value) ;

constexpr void __cordl_internal_set_uwr(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x53c0a64, size 0x28, virtual false, abstract: false, final false
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
constexpr MothershipHttpRunner__SendRequestInternal_d__6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipHttpRunner__SendRequestInternal_d__6", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipHttpRunner__SendRequestInternal_d__6(MothershipHttpRunner__SendRequestInternal_d__6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipHttpRunner__SendRequestInternal_d__6", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipHttpRunner__SendRequestInternal_d__6(MothershipHttpRunner__SendRequestInternal_d__6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9768};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field uwr, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___uwr;

/// @brief Field request, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::MothershipHTTPRequest*  ___request;

/// @brief Field responseCallback, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>*  ___responseCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6, ___uwr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6, ___request) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6, ___responseCallback) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
