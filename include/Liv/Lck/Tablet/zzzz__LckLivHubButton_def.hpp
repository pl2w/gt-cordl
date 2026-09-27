#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckLivHubButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckLivHubButton)
namespace Liv::Lck::Tablet {
class LckLivHubButton__OpenStoreAppCoroutine_d__4;
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
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Liv::Lck::Tablet {
class LckLivHubButton;
}
namespace Liv::Lck::Tablet {
class LckLivHubButton__OpenStoreAppCoroutine_d__4;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Tablet::LckLivHubButton*);
MARK_REF_T(::Liv::Lck::Tablet::LckLivHubButton__OpenStoreAppCoroutine_d__4*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LckLivHubButton*, "Liv.Lck.Tablet", "LckLivHubButton");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LckLivHubButton__OpenStoreAppCoroutine_d__4*, "Liv.Lck.Tablet", "LckLivHubButton/<OpenStoreAppCoroutine>d__4");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LckLivHubButton
class CORDL_TYPE LckLivHubButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _OpenStoreAppCoroutine_d__4 = ::Liv::Lck::Tablet::LckLivHubButton__OpenStoreAppCoroutine_d__4;

/// @brief Field _livHubButtonGameObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__livHubButtonGameObject, put=__cordl_internal_set__livHubButtonGameObject)) ::UnityW<::UnityEngine::GameObject>  _livHubButtonGameObject;

static inline ::Liv::Lck::Tablet::LckLivHubButton* New_ctor() ;

/// @brief Method OpenMetaStoreApp, addr 0x9d5ef14, size 0x20, virtual false, abstract: false, final false
inline void OpenMetaStoreApp() ;

/// [IteratorStateMachine(typeof(Liv.Lck.Tablet.LckLivHubButton::<OpenStoreAppCoroutine>d__4))]
/// @brief Method OpenStoreAppCoroutine, addr 0x9d5ef34, size 0x58, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* OpenStoreAppCoroutine() ;

/// @brief Method Start, addr 0x9d5ee40, size 0xd4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__livHubButtonGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__livHubButtonGameObject() ;

constexpr void __cordl_internal_set__livHubButtonGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9d5efb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckLivHubButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckLivHubButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckLivHubButton(LckLivHubButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckLivHubButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckLivHubButton(LckLivHubButton const& ) = delete;

/// @brief Field PRODUCTION_APPID offset 0xffffffff size 0x8
static constexpr int64_t  PRODUCTION_APPID{static_cast<int64_t>(0x55f8fad863f201)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24958};

/// [SerializeField]
/// @brief Field _livHubButtonGameObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____livHubButtonGameObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LckLivHubButton, ____livHubButtonGameObject) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LckLivHubButton) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LckLivHubButton/<OpenStoreAppCoroutine>d__4
class CORDL_TYPE LckLivHubButton__OpenStoreAppCoroutine_d__4 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d5efc0, size 0xbb0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::Tablet::LckLivHubButton__OpenStoreAppCoroutine_d__4* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d5fb70, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d5fb78, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d5fbb0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d5efbc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d5ef8c, size 0x28, virtual false, abstract: false, final false
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
constexpr LckLivHubButton__OpenStoreAppCoroutine_d__4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckLivHubButton__OpenStoreAppCoroutine_d__4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckLivHubButton__OpenStoreAppCoroutine_d__4(LckLivHubButton__OpenStoreAppCoroutine_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckLivHubButton__OpenStoreAppCoroutine_d__4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckLivHubButton__OpenStoreAppCoroutine_d__4(LckLivHubButton__OpenStoreAppCoroutine_d__4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24957};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LckLivHubButton__OpenStoreAppCoroutine_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckLivHubButton__OpenStoreAppCoroutine_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LckLivHubButton__OpenStoreAppCoroutine_d__4) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
