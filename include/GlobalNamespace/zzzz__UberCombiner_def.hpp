#pragma once
// IWYU pragma private; include "GlobalNamespace/UberCombiner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ShaderHashId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderQueueRange_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UberCombiner)
namespace GlobalNamespace {
class UberCombiner__FilterRenderers_d__16;
}
namespace GlobalNamespace {
class UberCombiner___c;
}
namespace MTAssets::EasyMeshCombiner {
class RuntimeMeshCombiner;
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
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class UberCombiner;
}
namespace GlobalNamespace {
class UberCombiner__FilterRenderers_d__16;
}
namespace GlobalNamespace {
class UberCombiner___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UberCombiner*);
MARK_REF_T(::GlobalNamespace::UberCombiner__FilterRenderers_d__16*);
MARK_REF_T(::GlobalNamespace::UberCombiner___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UberCombiner*, "", "UberCombiner");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UberCombiner__FilterRenderers_d__16*, "", "UberCombiner/<FilterRenderers>d__16");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UberCombiner___c*, "", "UberCombiner/<>c");
// [RequireComponent(typeof(MTAssets.EasyMeshCombiner.RuntimeMeshCombiner))]
// Dependencies ShaderHashId, UnityEngine.GameObject, UnityEngine.MeshRenderer, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: UberCombiner
class CORDL_TYPE UberCombiner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _FilterRenderers_d__16 = ::GlobalNamespace::UberCombiner__FilterRenderers_d__16;

using __c = ::GlobalNamespace::UberCombiner___c;

/// @brief Field _BaseMap, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__BaseMap, put=setStaticF__BaseMap)) ::GlobalNamespace::ShaderHashId  _BaseMap;

/// @brief Field _combiner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__combiner, put=__cordl_internal_set__combiner)) ::UnityW<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner>  _combiner;

/// @brief Field includeInactive, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_includeInactive, put=__cordl_internal_set_includeInactive)) bool  includeInactive;

/// @brief Field invalidObjects, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_invalidObjects, put=__cordl_internal_set_invalidObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  invalidObjects;

/// @brief Field meshSources, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshSources, put=__cordl_internal_set_meshSources)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  meshSources;

/// @brief Field objectsToIgnore, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsToIgnore, put=__cordl_internal_set_objectsToIgnore)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  objectsToIgnore;

/// @brief Field renderersToCombine, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderersToCombine, put=__cordl_internal_set_renderersToCombine)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  renderersToCombine;

/// @brief Method CollectRenderers, addr 0x5b3b434, size 0x258, virtual false, abstract: false, final false
inline void CollectRenderers() ;

/// [IteratorStateMachine(typeof(UberCombiner::<FilterRenderers>d__16))]
/// @brief Method FilterRenderers, addr 0x5b3b68c, size 0x80, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::MeshRenderer>>* FilterRenderers(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::MeshRenderer>>*  renderers) ;

/// @brief Method MergeAndExtractPerMaterialMeshes, addr 0x5b3c564, size 0xa0, virtual false, abstract: false, final false
inline void MergeAndExtractPerMaterialMeshes() ;

/// @brief Method MergeMeshes, addr 0x5b3c534, size 0x18, virtual false, abstract: false, final false
inline void MergeMeshes() ;

static inline ::GlobalNamespace::UberCombiner* New_ctor() ;

/// @brief Method OnPostMerge, addr 0x5b3c62c, size 0x530, virtual false, abstract: false, final false
inline void OnPostMerge() ;

/// @brief Method OnValidate, addr 0x5b3cb5c, size 0x154, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method QuickMerge, addr 0x5b3c604, size 0x28, virtual false, abstract: false, final false
inline void QuickMerge() ;

/// @brief Method SendToCombiner, addr 0x5b3c1e0, size 0x354, virtual false, abstract: false, final false
inline void SendToCombiner() ;

/// @brief Method UndoMerge, addr 0x5b3c54c, size 0x18, virtual false, abstract: false, final false
inline void UndoMerge() ;

/// @brief Method ValidateRenderers, addr 0x5b3b70c, size 0xad4, virtual false, abstract: false, final false
inline void ValidateRenderers() ;

/// [CompilerGenerated]
/// @brief Method <CollectRenderers>b__6_0, addr 0x5b3ce64, size 0x58, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::MeshRenderer>>* _CollectRenderers_b__6_0(::UnityEngine::GameObject*  g) ;

/// [CompilerGenerated]
/// @brief Method <SendToCombiner>b__8_2, addr 0x5b3cebc, size 0x64, virtual false, abstract: false, final false
inline bool _SendToCombiner_b__8_2(::UnityEngine::GameObject*  g) ;

/// [CompilerGenerated]
/// @brief Method <SendToCombiner>b__8_3, addr 0x5b3cf20, size 0x64, virtual false, abstract: false, final false
inline bool _SendToCombiner_b__8_3(::UnityEngine::GameObject*  g) ;

constexpr ::UnityW<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner> const& __cordl_internal_get__combiner() const;

constexpr ::UnityW<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner>& __cordl_internal_get__combiner() ;

constexpr bool const& __cordl_internal_get_includeInactive() const;

constexpr bool& __cordl_internal_get_includeInactive() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_invalidObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_invalidObjects() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_meshSources() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_meshSources() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_objectsToIgnore() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_objectsToIgnore() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_renderersToCombine() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_renderersToCombine() ;

constexpr void __cordl_internal_set__combiner(::UnityW<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner>  value) ;

constexpr void __cordl_internal_set_includeInactive(bool  value) ;

constexpr void __cordl_internal_set_invalidObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_meshSources(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_objectsToIgnore(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_renderersToCombine(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

/// @brief Method .ctor, addr 0x5b3cce4, size 0x10c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__BaseMap() ;

static inline void setStaticF__BaseMap(::GlobalNamespace::ShaderHashId  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UberCombiner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UberCombiner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UberCombiner(UberCombiner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UberCombiner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UberCombiner(UberCombiner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3698};

/// [SerializeField]
/// @brief Field _combiner, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner>  ____combiner;

/// [Space]
/// @brief Field meshSources, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___meshSources;

/// [Space]
/// @brief Field objectsToIgnore, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___objectsToIgnore;

/// [Space]
/// @brief Field renderersToCombine, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___renderersToCombine;

/// [Space]
/// @brief Field invalidObjects, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___invalidObjects;

/// @brief Field includeInactive, offset: 0x48, size: 0x1, def value: None
 bool  ___includeInactive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UberCombiner, ____combiner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombiner, ___meshSources) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombiner, ___objectsToIgnore) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombiner, ___renderersToCombine) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombiner, ___invalidObjects) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombiner, ___includeInactive) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UberCombiner) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Material, UnityEngine.Rendering.RenderQueueRange
namespace GlobalNamespace {
// Is value type: false
// CS Name: UberCombiner/<FilterRenderers>d__16
class CORDL_TYPE UberCombiner__FilterRenderers_d__16 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_MeshRenderer__get_Current)) ::UnityW<::UnityEngine::MeshRenderer>  System_Collections_Generic_IEnumerator_UnityEngine_MeshRenderer__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityW<::UnityEngine::MeshRenderer>  __2__current;

/// @brief Field <>3__renderers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__renderers, put=__cordl_internal_set___3__renderers)) ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::MeshRenderer>>*  __3__renderers;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <i>5__5, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__5, put=__cordl_internal_set__i_5__5)) int32_t  _i_5__5;

/// @brief Field <j>5__8, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__j_5__8, put=__cordl_internal_set__j_5__8)) int32_t  _j_5__8;

/// @brief Field <mr>5__6, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__mr_5__6, put=__cordl_internal_set__mr_5__6)) ::UnityW<::UnityEngine::MeshRenderer>  _mr_5__6;

/// @brief Field <sharedMats>5__7, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__sharedMats_5__7, put=__cordl_internal_set__sharedMats_5__7)) ::ArrayW<::UnityW<::UnityEngine::Material>>  _sharedMats_5__7;

/// @brief Field <transQueue>5__4, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__transQueue_5__4, put=__cordl_internal_set__transQueue_5__4)) ::UnityEngine::Rendering::RenderQueueRange  _transQueue_5__4;

/// @brief Field <uberShaderNonSRP>5__3, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__uberShaderNonSRP_5__3, put=__cordl_internal_set__uberShaderNonSRP_5__3)) ::UnityW<::UnityEngine::Shader>  _uberShaderNonSRP_5__3;

/// @brief Field <uberShader>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__uberShader_5__2, put=__cordl_internal_set__uberShader_5__2)) ::UnityW<::UnityEngine::Shader>  _uberShader_5__2;

/// @brief Field renderers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::MeshRenderer>>*  renderers;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::MeshRenderer>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::MeshRenderer>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::MeshRenderer>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::MeshRenderer>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5b3d0c8, size 0x55c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::UberCombiner__FilterRenderers_d__16* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.MeshRenderer>.GetEnumerator, addr 0x5b3d66c, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::MeshRenderer>>* System_Collections_Generic_IEnumerable_UnityEngine_MeshRenderer__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.MeshRenderer>.get_Current, addr 0x5b3d624, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::MeshRenderer> System_Collections_Generic_IEnumerator_UnityEngine_MeshRenderer__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5b3d710, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5b3d62c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5b3d664, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5b3d0c4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get___2__current() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get___2__current() ;

constexpr ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::MeshRenderer>>* const& __cordl_internal_get___3__renderers() const;

constexpr ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::MeshRenderer>>*& __cordl_internal_get___3__renderers() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr int32_t const& __cordl_internal_get__i_5__5() const;

constexpr int32_t& __cordl_internal_get__i_5__5() ;

constexpr int32_t const& __cordl_internal_get__j_5__8() const;

constexpr int32_t& __cordl_internal_get__j_5__8() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__mr_5__6() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__mr_5__6() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get__sharedMats_5__7() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get__sharedMats_5__7() ;

constexpr ::UnityEngine::Rendering::RenderQueueRange const& __cordl_internal_get__transQueue_5__4() const;

constexpr ::UnityEngine::Rendering::RenderQueueRange& __cordl_internal_get__transQueue_5__4() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__uberShaderNonSRP_5__3() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__uberShaderNonSRP_5__3() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__uberShader_5__2() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__uberShader_5__2() ;

constexpr ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::MeshRenderer>>* const& __cordl_internal_get_renderers() const;

constexpr ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::MeshRenderer>>*& __cordl_internal_get_renderers() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set___3__renderers(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::MeshRenderer>>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__i_5__5(int32_t  value) ;

constexpr void __cordl_internal_set__j_5__8(int32_t  value) ;

constexpr void __cordl_internal_set__mr_5__6(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__sharedMats_5__7(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set__transQueue_5__4(::UnityEngine::Rendering::RenderQueueRange  value) ;

constexpr void __cordl_internal_set__uberShaderNonSRP_5__3(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__uberShader_5__2(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_renderers(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::MeshRenderer>>*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5b3ccb0, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::MeshRenderer>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::MeshRenderer>>* i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__MeshRenderer__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::MeshRenderer>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::MeshRenderer>>* i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__MeshRenderer__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UberCombiner__FilterRenderers_d__16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UberCombiner__FilterRenderers_d__16", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UberCombiner__FilterRenderers_d__16(UberCombiner__FilterRenderers_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UberCombiner__FilterRenderers_d__16", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UberCombiner__FilterRenderers_d__16(UberCombiner__FilterRenderers_d__16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3697};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field renderers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::MeshRenderer>>*  ___renderers;

/// @brief Field <>3__renderers, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::MeshRenderer>>*  _____3__renderers;

/// @brief Field <uberShader>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____uberShader_5__2;

/// @brief Field <uberShaderNonSRP>5__3, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____uberShaderNonSRP_5__3;

/// @brief Field <transQueue>5__4, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Rendering::RenderQueueRange  ____transQueue_5__4;

/// @brief Field <i>5__5, offset: 0x50, size: 0x4, def value: None
 int32_t  ____i_5__5;

/// @brief Field <mr>5__6, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____mr_5__6;

/// @brief Field <sharedMats>5__7, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ____sharedMats_5__7;

/// @brief Field <j>5__8, offset: 0x68, size: 0x4, def value: None
 int32_t  ____j_5__8;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UberCombiner__FilterRenderers_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombiner__FilterRenderers_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombiner__FilterRenderers_d__16, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombiner__FilterRenderers_d__16, ___renderers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombiner__FilterRenderers_d__16, _____3__renderers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombiner__FilterRenderers_d__16, ____uberShader_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombiner__FilterRenderers_d__16, ____uberShaderNonSRP_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombiner__FilterRenderers_d__16, ____transQueue_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombiner__FilterRenderers_d__16, ____i_5__5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombiner__FilterRenderers_d__16, ____mr_5__6) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombiner__FilterRenderers_d__16, ____sharedMats_5__7) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombiner__FilterRenderers_d__16, ____j_5__8) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UberCombiner__FilterRenderers_d__16) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UberCombiner/<>c
class CORDL_TYPE UberCombiner___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::UberCombiner___c*  __9;

/// @brief Field <>9__6_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_1, put=setStaticF___9__6_1)) ::System::Func_2<::UnityW<::UnityEngine::MeshRenderer>,int32_t>*  __9__6_1;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Func_2<::UnityW<::UnityEngine::GameObject>,int32_t>*  __9__7_0;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::System::Func_2<::UnityW<::UnityEngine::MeshRenderer>,::UnityW<::UnityEngine::GameObject>>*  __9__8_0;

/// @brief Field <>9__8_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_1, put=setStaticF___9__8_1)) ::System::Func_2<::UnityW<::UnityEngine::GameObject>,bool>*  __9__8_1;

/// @brief Field <>9__8_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_4, put=setStaticF___9__8_4)) ::System::Func_2<::UnityW<::UnityEngine::GameObject>,int32_t>*  __9__8_4;

static inline ::GlobalNamespace::UberCombiner___c* New_ctor() ;

/// @brief Method <CollectRenderers>b__6_1, addr 0x5b3cff4, size 0x18, virtual false, abstract: false, final false
inline int32_t _CollectRenderers_b__6_1(::UnityEngine::MeshRenderer*  mr) ;

/// @brief Method <SendToCombiner>b__8_0, addr 0x5b3d02c, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> _SendToCombiner_b__8_0(::UnityEngine::MeshRenderer*  r) ;

/// @brief Method <SendToCombiner>b__8_1, addr 0x5b3d044, size 0x68, virtual false, abstract: false, final false
inline bool _SendToCombiner_b__8_1(::UnityEngine::GameObject*  g) ;

/// @brief Method <SendToCombiner>b__8_4, addr 0x5b3d0ac, size 0x18, virtual false, abstract: false, final false
inline int32_t _SendToCombiner_b__8_4(::UnityEngine::GameObject*  g) ;

/// @brief Method <ValidateRenderers>b__7_0, addr 0x5b3d00c, size 0x20, virtual false, abstract: false, final false
inline int32_t _ValidateRenderers_b__7_0(::UnityEngine::GameObject*  g) ;

/// @brief Method .ctor, addr 0x5b3cfec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::UberCombiner___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::MeshRenderer>,int32_t>* getStaticF___9__6_1() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::GameObject>,int32_t>* getStaticF___9__7_0() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::MeshRenderer>,::UnityW<::UnityEngine::GameObject>>* getStaticF___9__8_0() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::GameObject>,bool>* getStaticF___9__8_1() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::GameObject>,int32_t>* getStaticF___9__8_4() ;

static inline void setStaticF___9(::GlobalNamespace::UberCombiner___c*  value) ;

static inline void setStaticF___9__6_1(::System::Func_2<::UnityW<::UnityEngine::MeshRenderer>,int32_t>*  value) ;

static inline void setStaticF___9__7_0(::System::Func_2<::UnityW<::UnityEngine::GameObject>,int32_t>*  value) ;

static inline void setStaticF___9__8_0(::System::Func_2<::UnityW<::UnityEngine::MeshRenderer>,::UnityW<::UnityEngine::GameObject>>*  value) ;

static inline void setStaticF___9__8_1(::System::Func_2<::UnityW<::UnityEngine::GameObject>,bool>*  value) ;

static inline void setStaticF___9__8_4(::System::Func_2<::UnityW<::UnityEngine::GameObject>,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UberCombiner___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UberCombiner___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UberCombiner___c(UberCombiner___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UberCombiner___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UberCombiner___c(UberCombiner___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3696};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UberCombiner___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
