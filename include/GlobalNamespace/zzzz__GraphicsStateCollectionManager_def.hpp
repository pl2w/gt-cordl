#pragma once
// IWYU pragma private; include "GlobalNamespace/GraphicsStateCollectionManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GraphicsStateCollectionManager_Mode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsStateCollection_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsStateCollectionManager)
namespace GlobalNamespace {
struct GraphicsStateCollectionManager_Mode;
}
namespace GlobalNamespace {
class GraphicsStateCollectionManager__AutoSaveRoutine_d__13;
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
namespace UnityEngine::Experimental::Rendering {
class GraphicsStateCollection;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class GraphicsStateCollectionManager;
}
namespace GlobalNamespace {
class GraphicsStateCollectionManager__AutoSaveRoutine_d__13;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GraphicsStateCollectionManager*);
MARK_REF_T(::GlobalNamespace::GraphicsStateCollectionManager__AutoSaveRoutine_d__13*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GraphicsStateCollectionManager*, "", "GraphicsStateCollectionManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GraphicsStateCollectionManager__AutoSaveRoutine_d__13*, "", "GraphicsStateCollectionManager/<AutoSaveRoutine>d__13");
// Dependencies GraphicsStateCollectionManager::Mode, UnityEngine.Experimental.Rendering.GraphicsStateCollection, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GraphicsStateCollectionManager
class CORDL_TYPE GraphicsStateCollectionManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Mode = ::GlobalNamespace::GraphicsStateCollectionManager_Mode;

using _AutoSaveRoutine_d__13 = ::GlobalNamespace::GraphicsStateCollectionManager__AutoSaveRoutine_d__13;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GlobalNamespace::GraphicsStateCollectionManager>  Instance;

/// @brief Field _autoSaveRoutine, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__autoSaveRoutine, put=__cordl_internal_set__autoSaveRoutine)) ::UnityEngine::Coroutine*  _autoSaveRoutine;

/// @brief Field collections, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_collections, put=__cordl_internal_set_collections)) ::ArrayW<::UnityW<::UnityEngine::Experimental::Rendering::GraphicsStateCollection>>  collections;

/// @brief Field m_GraphicsStateCollection, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GraphicsStateCollection, put=__cordl_internal_set_m_GraphicsStateCollection)) ::UnityW<::UnityEngine::Experimental::Rendering::GraphicsStateCollection>  m_GraphicsStateCollection;

/// @brief Field m_OutputCollectionName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OutputCollectionName, put=__cordl_internal_set_m_OutputCollectionName)) ::StringW  m_OutputCollectionName;

/// @brief Field mode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::GraphicsStateCollectionManager_Mode  mode;

/// [IteratorStateMachine(typeof(GraphicsStateCollectionManager::<AutoSaveRoutine>d__13))]
/// @brief Method AutoSaveRoutine, addr 0x5b1efc4, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* AutoSaveRoutine() ;

/// @brief Method Awake, addr 0x5b1e76c, size 0x184, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FindExistingCollection, addr 0x5b1e59c, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Experimental::Rendering::GraphicsStateCollection> FindExistingCollection() ;

static inline ::GlobalNamespace::GraphicsStateCollectionManager* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x5b1f030, size 0x134, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  focus) ;

/// @brief Method OnDestroy, addr 0x5b1f164, size 0x148, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x5b1e8f0, size 0x6d4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__autoSaveRoutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__autoSaveRoutine() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Experimental::Rendering::GraphicsStateCollection>> const& __cordl_internal_get_collections() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Experimental::Rendering::GraphicsStateCollection>>& __cordl_internal_get_collections() ;

constexpr ::UnityW<::UnityEngine::Experimental::Rendering::GraphicsStateCollection> const& __cordl_internal_get_m_GraphicsStateCollection() const;

constexpr ::UnityW<::UnityEngine::Experimental::Rendering::GraphicsStateCollection>& __cordl_internal_get_m_GraphicsStateCollection() ;

constexpr ::StringW const& __cordl_internal_get_m_OutputCollectionName() const;

constexpr ::StringW& __cordl_internal_get_m_OutputCollectionName() ;

constexpr ::GlobalNamespace::GraphicsStateCollectionManager_Mode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::GraphicsStateCollectionManager_Mode& __cordl_internal_get_mode() ;

constexpr void __cordl_internal_set__autoSaveRoutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_collections(::ArrayW<::UnityW<::UnityEngine::Experimental::Rendering::GraphicsStateCollection>>  value) ;

constexpr void __cordl_internal_set_m_GraphicsStateCollection(::UnityW<::UnityEngine::Experimental::Rendering::GraphicsStateCollection>  value) ;

constexpr void __cordl_internal_set_m_OutputCollectionName(::StringW  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::GraphicsStateCollectionManager_Mode  value) ;

/// @brief Method .ctor, addr 0x5b1f2d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::GraphicsStateCollectionManager> getStaticF_Instance() ;

static inline void setStaticF_Instance(::UnityW<::GlobalNamespace::GraphicsStateCollectionManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsStateCollectionManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicsStateCollectionManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicsStateCollectionManager(GraphicsStateCollectionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsStateCollectionManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicsStateCollectionManager(GraphicsStateCollectionManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3594};

/// @brief Field k_CollectionFolderPath offset 0xffffffff size 0x8
static constexpr ::ConstString  k_CollectionFolderPath{u"SharedAssets/GraphicsStateCollections/"};

/// @brief Field mode, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GraphicsStateCollectionManager_Mode  ___mode;

/// @brief Field collections, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Experimental::Rendering::GraphicsStateCollection>>  ___collections;

/// @brief Field m_OutputCollectionName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___m_OutputCollectionName;

/// @brief Field m_GraphicsStateCollection, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Experimental::Rendering::GraphicsStateCollection>  ___m_GraphicsStateCollection;

/// @brief Field _autoSaveRoutine, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____autoSaveRoutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GraphicsStateCollectionManager, ___mode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphicsStateCollectionManager, ___collections) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphicsStateCollectionManager, ___m_OutputCollectionName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphicsStateCollectionManager, ___m_GraphicsStateCollection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphicsStateCollectionManager, ____autoSaveRoutine) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GraphicsStateCollectionManager) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GraphicsStateCollectionManager/<AutoSaveRoutine>d__13
class CORDL_TYPE GraphicsStateCollectionManager__AutoSaveRoutine_d__13 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GraphicsStateCollectionManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5b1f2e0, size 0x1a0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GraphicsStateCollectionManager__AutoSaveRoutine_d__13* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5b1f480, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5b1f488, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5b1f4c0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5b1f2dc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GraphicsStateCollectionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GraphicsStateCollectionManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GraphicsStateCollectionManager>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5b1f2ac, size 0x28, virtual false, abstract: false, final false
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
constexpr GraphicsStateCollectionManager__AutoSaveRoutine_d__13() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicsStateCollectionManager__AutoSaveRoutine_d__13", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicsStateCollectionManager__AutoSaveRoutine_d__13(GraphicsStateCollectionManager__AutoSaveRoutine_d__13 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsStateCollectionManager__AutoSaveRoutine_d__13", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicsStateCollectionManager__AutoSaveRoutine_d__13(GraphicsStateCollectionManager__AutoSaveRoutine_d__13 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3593};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GraphicsStateCollectionManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GraphicsStateCollectionManager__AutoSaveRoutine_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphicsStateCollectionManager__AutoSaveRoutine_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphicsStateCollectionManager__AutoSaveRoutine_d__13, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GraphicsStateCollectionManager__AutoSaveRoutine_d__13) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
