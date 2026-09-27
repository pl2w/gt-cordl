#pragma once
// IWYU pragma private; include "GlobalNamespace/MB2_TextureBakeResults.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_ResultType_def.hpp"
#include "GlobalNamespace/zzzz__MB_MaterialAndUVRect_def.hpp"
#include "GlobalNamespace/zzzz__MB_MultiMaterialTexArray_def.hpp"
#include "GlobalNamespace/zzzz__MB_MultiMaterial_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB2_TextureBakeResults)
namespace DigitalOpus::MB::Core {
struct MB2_LogLevel;
}
namespace DigitalOpus::MB::Core {
struct MB_TextureTilingTreatment;
}
namespace GlobalNamespace {
class MB2_TextureBakeResults_CoroutineResult;
}
namespace GlobalNamespace {
struct MB2_TextureBakeResults_ResultType;
}
namespace GlobalNamespace {
class MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace GlobalNamespace {
class MB2_TextureBakeResults;
}
namespace GlobalNamespace {
class MB2_TextureBakeResults_CoroutineResult;
}
namespace GlobalNamespace {
class MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB2_TextureBakeResults*);
MARK_REF_T(::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*);
MARK_REF_T(::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB2_TextureBakeResults*, "", "MB2_TextureBakeResults");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*, "", "MB2_TextureBakeResults/CoroutineResult");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14*, "", "MB2_TextureBakeResults/<FindRuntimeMaterialsFromAddresses>d__14");
// Dependencies MB2_TextureBakeResults::ResultType, MB_MaterialAndUVRect, MB_MultiMaterial, MB_MultiMaterialTexArray, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB2_TextureBakeResults
class CORDL_TYPE MB2_TextureBakeResults : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using CoroutineResult = ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult;

using ResultType = ::GlobalNamespace::MB2_TextureBakeResults_ResultType;

using _FindRuntimeMaterialsFromAddresses_d__14 = ::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14;

/// @brief Field doMultiMaterial, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_doMultiMaterial, put=__cordl_internal_set_doMultiMaterial)) bool  doMultiMaterial;

/// @brief Field materialsAndUVRects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialsAndUVRects, put=__cordl_internal_set_materialsAndUVRects)) ::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*>  materialsAndUVRects;

/// @brief Field resultMaterials, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultMaterials, put=__cordl_internal_set_resultMaterials)) ::ArrayW<::GlobalNamespace::MB_MultiMaterial*>  resultMaterials;

/// @brief Field resultMaterialsTexArray, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultMaterialsTexArray, put=__cordl_internal_set_resultMaterialsTexArray)) ::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*>  resultMaterialsTexArray;

/// @brief Field resultType, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_resultType, put=__cordl_internal_set_resultType)) ::GlobalNamespace::MB2_TextureBakeResults_ResultType  resultType;

/// @brief Field version, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) int32_t  version;

/// @brief Method ContainsMaterial, addr 0x9d74098, size 0xc0, virtual false, abstract: false, final false
inline bool ContainsMaterial(::UnityEngine::Material*  m) ;

/// @brief Method CreateForMaterialsOnRenderer, addr 0x9d737e0, size 0x78c, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> CreateForMaterialsOnRenderer(::ArrayW<::UnityEngine::GameObject*>  gos, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  matsOnTargetRenderer) ;

/// @brief Method DoAnyResultMatsUseConsiderMeshUVs, addr 0x9d73f6c, size 0x12c, virtual false, abstract: false, final false
inline bool DoAnyResultMatsUseConsiderMeshUVs() ;

/// [IteratorStateMachine(typeof(MB2_TextureBakeResults::<FindRuntimeMaterialsFromAddresses>d__14))]
/// @brief Method FindRuntimeMaterialsFromAddresses, addr 0x9d73390, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FindRuntimeMaterialsFromAddresses(::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*  isComplete) ;

/// @brief Method GetCombinedMaterialForSubmesh, addr 0x9d73344, size 0x4c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetCombinedMaterialForSubmesh(int32_t  idx) ;

/// @brief Method GetConsiderMeshUVs, addr 0x9d73440, size 0x168, virtual false, abstract: false, final false
inline bool GetConsiderMeshUVs(int32_t  idxInSrcMats, ::UnityEngine::Material*  srcMaterial) ;

/// @brief Method GetDescription, addr 0x9d74158, size 0x420, virtual false, abstract: false, final false
inline ::StringW GetDescription() ;

/// @brief Method GetSourceMaterialsUsedByResultMaterial, addr 0x9d735a8, size 0x238, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* GetSourceMaterialsUsedByResultMaterial(int32_t  resultMatIdx) ;

/// @brief Method IsMeshAndMaterialRectEnclosedByAtlasRect, addr 0x9d745e0, size 0x388, virtual false, abstract: false, final false
static inline bool IsMeshAndMaterialRectEnclosedByAtlasRect(::DigitalOpus::MB::Core::MB_TextureTilingTreatment  tilingTreatment, ::UnityEngine::Rect  uvR, ::UnityEngine::Rect  sourceMaterialTiling, ::UnityEngine::Rect  samplingEncapsulatinRect, ::DigitalOpus::MB::Core::MB2_LogLevel  logLevel) ;

static inline ::GlobalNamespace::MB2_TextureBakeResults* New_ctor() ;

/// @brief Method NumResultMaterials, addr 0x9d73318, size 0x2c, virtual false, abstract: false, final false
inline int32_t NumResultMaterials() ;

/// @brief Method OnEnable, addr 0x9d732ac, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method UpgradeToCurrentVersion, addr 0x9d74578, size 0x68, virtual false, abstract: false, final false
inline void UpgradeToCurrentVersion(::GlobalNamespace::MB2_TextureBakeResults*  tbr) ;

constexpr bool const& __cordl_internal_get_doMultiMaterial() const;

constexpr bool& __cordl_internal_get_doMultiMaterial() ;

constexpr ::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*> const& __cordl_internal_get_materialsAndUVRects() const;

constexpr ::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*>& __cordl_internal_get_materialsAndUVRects() ;

constexpr ::ArrayW<::GlobalNamespace::MB_MultiMaterial*> const& __cordl_internal_get_resultMaterials() const;

constexpr ::ArrayW<::GlobalNamespace::MB_MultiMaterial*>& __cordl_internal_get_resultMaterials() ;

constexpr ::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*> const& __cordl_internal_get_resultMaterialsTexArray() const;

constexpr ::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*>& __cordl_internal_get_resultMaterialsTexArray() ;

constexpr ::GlobalNamespace::MB2_TextureBakeResults_ResultType const& __cordl_internal_get_resultType() const;

constexpr ::GlobalNamespace::MB2_TextureBakeResults_ResultType& __cordl_internal_get_resultType() ;

constexpr int32_t const& __cordl_internal_get_version() const;

constexpr int32_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_doMultiMaterial(bool  value) ;

constexpr void __cordl_internal_set_materialsAndUVRects(::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*>  value) ;

constexpr void __cordl_internal_set_resultMaterials(::ArrayW<::GlobalNamespace::MB_MultiMaterial*>  value) ;

constexpr void __cordl_internal_set_resultMaterialsTexArray(::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*>  value) ;

constexpr void __cordl_internal_set_resultType(::GlobalNamespace::MB2_TextureBakeResults_ResultType  value) ;

constexpr void __cordl_internal_set_version(int32_t  value) ;

/// @brief Method .ctor, addr 0x9d7328c, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_VERSION, addr 0x9d73284, size 0x8, virtual false, abstract: false, final false
static inline int32_t get_VERSION() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB2_TextureBakeResults() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB2_TextureBakeResults", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB2_TextureBakeResults(MB2_TextureBakeResults && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB2_TextureBakeResults", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB2_TextureBakeResults(MB2_TextureBakeResults const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22562};

/// @brief Field version, offset: 0x18, size: 0x4, def value: None
 int32_t  ___version;

/// @brief Field resultType, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::MB2_TextureBakeResults_ResultType  ___resultType;

/// [NonReorderable]
/// @brief Field materialsAndUVRects, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*>  ___materialsAndUVRects;

/// [NonReorderable]
/// @brief Field resultMaterials, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MB_MultiMaterial*>  ___resultMaterials;

/// [NonReorderable]
/// @brief Field resultMaterialsTexArray, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*>  ___resultMaterialsTexArray;

/// @brief Field doMultiMaterial, offset: 0x38, size: 0x1, def value: None
 bool  ___doMultiMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB2_TextureBakeResults, ___version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB2_TextureBakeResults, ___resultType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB2_TextureBakeResults, ___materialsAndUVRects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB2_TextureBakeResults, ___resultMaterials) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB2_TextureBakeResults, ___resultMaterialsTexArray) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB2_TextureBakeResults, ___doMultiMaterial) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB2_TextureBakeResults) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB2_TextureBakeResults/<FindRuntimeMaterialsFromAddresses>d__14
class CORDL_TYPE MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  __4__this;

/// @brief Field isComplete, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_isComplete, put=__cordl_internal_set_isComplete)) ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*  isComplete;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d74974, size 0x78, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d74a74, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d74a7c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d74ab4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d74970, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult* const& __cordl_internal_get_isComplete() const;

constexpr ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*& __cordl_internal_get_isComplete() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  value) ;

constexpr void __cordl_internal_set_isComplete(::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d73418, size 0x28, virtual false, abstract: false, final false
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
constexpr MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14(MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14(MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22561};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  _____4__this;

/// @brief Field isComplete, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*  ___isComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14, ___isComplete) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB2_TextureBakeResults/CoroutineResult
class CORDL_TYPE MB2_TextureBakeResults_CoroutineResult : public ::System::Object {
public:
// Declarations
/// @brief Field isComplete, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_isComplete, put=__cordl_internal_set_isComplete)) bool  isComplete;

static inline ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult* New_ctor() ;

constexpr bool const& __cordl_internal_get_isComplete() const;

constexpr bool& __cordl_internal_get_isComplete() ;

constexpr void __cordl_internal_set_isComplete(bool  value) ;

/// @brief Method .ctor, addr 0x9d74968, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB2_TextureBakeResults_CoroutineResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB2_TextureBakeResults_CoroutineResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB2_TextureBakeResults_CoroutineResult(MB2_TextureBakeResults_CoroutineResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB2_TextureBakeResults_CoroutineResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB2_TextureBakeResults_CoroutineResult(MB2_TextureBakeResults_CoroutineResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22559};

/// @brief Field isComplete, offset: 0x10, size: 0x1, def value: None
 bool  ___isComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult, ___isComplete) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
