#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ATGTextJobSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationNode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/valuew.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ATGTextJobSystem)
namespace GlobalNamespace {
struct ATGTextJobSystem_GenerateTextJobData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphRenderMode;
}
namespace UnityEngine::TextCore::Text {
struct ATGMeshInfo;
}
namespace UnityEngine::UIElements::UIR {
class MeshGenerationCallback;
}
namespace UnityEngine::UIElements {
class ATGTextJobSystem_ManagedJobData;
}
namespace UnityEngine::UIElements {
class ATGTextJobSystem___c;
}
namespace UnityEngine::UIElements {
struct TempMeshAllocator;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ATGTextJobSystem;
}
namespace UnityEngine::UIElements {
class ATGTextJobSystem_ManagedJobData;
}
namespace UnityEngine::UIElements {
class ATGTextJobSystem___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::ATGTextJobSystem*);
MARK_REF_T(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*);
MARK_REF_T(::UnityEngine::UIElements::ATGTextJobSystem___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ATGTextJobSystem*, "UnityEngine.UIElements", "ATGTextJobSystem");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*, "UnityEngine.UIElements", "ATGTextJobSystem/ManagedJobData");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ATGTextJobSystem___c*, "UnityEngine.UIElements", "ATGTextJobSystem/<>c");
// Dependencies System.Object, System.Runtime.InteropServices.GCHandle, Unity.Profiling.ProfilerMarker
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ATGTextJobSystem
class CORDL_TYPE ATGTextJobSystem : public ::System::Object {
public:
// Declarations
using GenerateTextJobData = ::GlobalNamespace::ATGTextJobSystem_GenerateTextJobData;

using ManagedJobData = ::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData;

using __c = ::UnityEngine::UIElements::ATGTextJobSystem___c;

/// @brief Field atlases, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_atlases, put=__cordl_internal_set_atlases)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  atlases;

/// @brief Field hasPendingTextWork, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasPendingTextWork, put=__cordl_internal_set_hasPendingTextWork)) bool  hasPendingTextWork;

/// @brief Field indicesArray, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_indicesArray, put=__cordl_internal_set_indicesArray)) ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*  indicesArray;

/// @brief Field k_ATGTextJobMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_ATGTextJobMarker, put=setStaticF_k_ATGTextJobMarker)) ::Unity::Profiling::ProfilerMarker  k_ATGTextJobMarker;

/// @brief Field k_GenerateTextMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_GenerateTextMarker, put=setStaticF_k_GenerateTextMarker)) ::Unity::Profiling::ProfilerMarker  k_GenerateTextMarker;

/// @brief Field k_IsMultiThreaded, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_k_IsMultiThreaded, put=setStaticF_k_IsMultiThreaded)) bool  k_IsMultiThreaded;

/// @brief Field m_AddDrawEntriesCallback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AddDrawEntriesCallback, put=__cordl_internal_set_m_AddDrawEntriesCallback)) ::UnityEngine::UIElements::UIR::MeshGenerationCallback*  m_AddDrawEntriesCallback;

/// @brief Field m_GenerateTextJobifiedCallback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GenerateTextJobifiedCallback, put=__cordl_internal_set_m_GenerateTextJobifiedCallback)) ::UnityEngine::UIElements::UIR::MeshGenerationCallback*  m_GenerateTextJobifiedCallback;

/// @brief Field renderModes, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderModes, put=__cordl_internal_set_renderModes)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*  renderModes;

/// @brief Field s_JobDataPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_JobDataPool, put=setStaticF_s_JobDataPool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>*  s_JobDataPool;

/// @brief Field sdfScalesArray, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_sdfScalesArray, put=__cordl_internal_set_sdfScalesArray)) ::System::Collections::Generic::List_1<float_t>*  sdfScalesArray;

/// @brief Field textJobDatas, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_textJobDatas, put=__cordl_internal_set_textJobDatas)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>*  textJobDatas;

/// @brief Field textJobDatasHandle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_textJobDatasHandle, put=__cordl_internal_set_textJobDatasHandle)) ::System::Runtime::InteropServices::GCHandle  textJobDatasHandle;

/// @brief Field verticesArray, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_verticesArray, put=__cordl_internal_set_verticesArray)) ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*  verticesArray;

/// @brief Method AddDrawEntries, addr 0xb798f20, size 0x4f0, virtual false, abstract: false, final false
inline void AddDrawEntries(Il2CppObject*  mgc, ::System::Object*  _) ;

/// @brief Method ConvertMeshInfoToUIRVertex, addr 0xb799410, size 0xa08, virtual false, abstract: false, final false
static inline void ConvertMeshInfoToUIRVertex(::ArrayW<::UnityEngine::TextCore::Text::ATGMeshInfo>  meshInfos, ::UnityEngine::UIElements::TempMeshAllocator  alloc, ::UnityEngine::UIElements::TextElement*  visualElement, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  atlases, ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*  verticesArray, ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*  indicesArray, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*  renderModes, ::System::Collections::Generic::List_1<float_t>*  sdfScales) ;

/// @brief Method GenerateText, addr 0xb7988d4, size 0x1b0, virtual false, abstract: false, final false
inline void GenerateText(Il2CppObject*  mgc, ::UnityEngine::UIElements::TextElement*  textElement) ;

/// @brief Method GenerateTextJobified, addr 0xb798a84, size 0x2b8, virtual false, abstract: false, final false
inline void GenerateTextJobified(Il2CppObject*  mgc, ::System::Object*  _) ;

static inline ::UnityEngine::UIElements::ATGTextJobSystem* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_atlases() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_atlases() ;

constexpr bool const& __cordl_internal_get_hasPendingTextWork() const;

constexpr bool& __cordl_internal_get_hasPendingTextWork() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* const& __cordl_internal_get_indicesArray() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*& __cordl_internal_get_indicesArray() ;

constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback* const& __cordl_internal_get_m_AddDrawEntriesCallback() const;

constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback*& __cordl_internal_get_m_AddDrawEntriesCallback() ;

constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback* const& __cordl_internal_get_m_GenerateTextJobifiedCallback() const;

constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback*& __cordl_internal_get_m_GenerateTextJobifiedCallback() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* const& __cordl_internal_get_renderModes() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*& __cordl_internal_get_renderModes() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_sdfScalesArray() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_sdfScalesArray() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>* const& __cordl_internal_get_textJobDatas() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>*& __cordl_internal_get_textJobDatas() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_textJobDatasHandle() const;

constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_textJobDatasHandle() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* const& __cordl_internal_get_verticesArray() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*& __cordl_internal_get_verticesArray() ;

constexpr void __cordl_internal_set_atlases(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_hasPendingTextWork(bool  value) ;

constexpr void __cordl_internal_set_indicesArray(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*  value) ;

constexpr void __cordl_internal_set_m_AddDrawEntriesCallback(::UnityEngine::UIElements::UIR::MeshGenerationCallback*  value) ;

constexpr void __cordl_internal_set_m_GenerateTextJobifiedCallback(::UnityEngine::UIElements::UIR::MeshGenerationCallback*  value) ;

constexpr void __cordl_internal_set_renderModes(::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*  value) ;

constexpr void __cordl_internal_set_sdfScalesArray(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_textJobDatas(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>*  value) ;

constexpr void __cordl_internal_set_textJobDatasHandle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr void __cordl_internal_set_verticesArray(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*  value) ;

/// @brief Method .ctor, addr 0xb798624, size 0x2b0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ATGTextJobMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateTextMarker() ;

static inline bool getStaticF_k_IsMultiThreaded() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>* getStaticF_s_JobDataPool() ;

static inline void setStaticF_k_ATGTextJobMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_GenerateTextMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_IsMultiThreaded(bool  value) ;

static inline void setStaticF_s_JobDataPool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ATGTextJobSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ATGTextJobSystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ATGTextJobSystem(ATGTextJobSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ATGTextJobSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ATGTextJobSystem(ATGTextJobSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8298};

/// @brief Field textJobDatasHandle, offset: 0x10, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  ___textJobDatasHandle;

/// @brief Field textJobDatas, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>*  ___textJobDatas;

/// @brief Field hasPendingTextWork, offset: 0x20, size: 0x1, def value: None
 bool  ___hasPendingTextWork;

/// @brief Field m_GenerateTextJobifiedCallback, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::MeshGenerationCallback*  ___m_GenerateTextJobifiedCallback;

/// @brief Field m_AddDrawEntriesCallback, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::MeshGenerationCallback*  ___m_AddDrawEntriesCallback;

/// @brief Field atlases, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___atlases;

/// @brief Field sdfScalesArray, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___sdfScalesArray;

/// @brief Field verticesArray, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*  ___verticesArray;

/// @brief Field indicesArray, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*  ___indicesArray;

/// @brief Field renderModes, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*  ___renderModes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem, ___textJobDatasHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem, ___textJobDatas) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem, ___hasPendingTextWork) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem, ___m_GenerateTextJobifiedCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem, ___m_AddDrawEntriesCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem, ___atlases) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem, ___sdfScalesArray) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem, ___verticesArray) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem, ___indicesArray) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem, ___renderModes) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::ATGTextJobSystem) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ATGTextJobSystem/<>c
class CORDL_TYPE ATGTextJobSystem___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::ATGTextJobSystem___c*  __9;

static inline ::UnityEngine::UIElements::ATGTextJobSystem___c* New_ctor() ;

/// @brief Method <.cctor>b__21_0, addr 0xb79a324, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData* __cctor_b__21_0() ;

/// @brief Method <.cctor>b__21_1, addr 0xb79a378, size 0x1c, virtual false, abstract: false, final false
inline void __cctor_b__21_1(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*  inst) ;

/// @brief Method .ctor, addr 0xb79a31c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::ATGTextJobSystem___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::UIElements::ATGTextJobSystem___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ATGTextJobSystem___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ATGTextJobSystem___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ATGTextJobSystem___c(ATGTextJobSystem___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ATGTextJobSystem___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ATGTextJobSystem___c(ATGTextJobSystem___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8297};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ATGTextJobSystem___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.UIElements.MeshGenerationNode
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ATGTextJobSystem/ManagedJobData
class CORDL_TYPE ATGTextJobSystem_ManagedJobData : public ::System::Object {
public:
// Declarations
/// @brief Field node, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_node, put=__cordl_internal_set_node)) ::UnityEngine::UIElements::MeshGenerationNode  node;

/// @brief Field success, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_success, put=__cordl_internal_set_success)) bool  success;

/// @brief Field textElement, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_textElement, put=__cordl_internal_set_textElement)) ::UnityEngine::UIElements::TextElement*  textElement;

/// @brief Field textInfo, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_textInfo, put=__cordl_internal_set_textInfo)) ::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">  textInfo;

static inline ::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData* New_ctor() ;

/// @brief Method Release, addr 0xb79a010, size 0x80, virtual false, abstract: false, final false
inline void Release() ;

constexpr ::UnityEngine::UIElements::MeshGenerationNode const& __cordl_internal_get_node() const;

constexpr ::UnityEngine::UIElements::MeshGenerationNode& __cordl_internal_get_node() ;

constexpr bool const& __cordl_internal_get_success() const;

constexpr bool& __cordl_internal_get_success() ;

constexpr ::UnityEngine::UIElements::TextElement* const& __cordl_internal_get_textElement() const;

constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get_textElement() ;

constexpr ::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo"> const& __cordl_internal_get_textInfo() const;

constexpr ::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">& __cordl_internal_get_textInfo() ;

constexpr void __cordl_internal_set_node(::UnityEngine::UIElements::MeshGenerationNode  value) ;

constexpr void __cordl_internal_set_success(bool  value) ;

constexpr void __cordl_internal_set_textElement(::UnityEngine::UIElements::TextElement*  value) ;

constexpr void __cordl_internal_set_textInfo(::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">  value) ;

/// @brief Method .ctor, addr 0xb79a2ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ATGTextJobSystem_ManagedJobData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ATGTextJobSystem_ManagedJobData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ATGTextJobSystem_ManagedJobData(ATGTextJobSystem_ManagedJobData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ATGTextJobSystem_ManagedJobData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ATGTextJobSystem_ManagedJobData(ATGTextJobSystem_ManagedJobData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8295};

/// @brief Field textElement, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::UIElements::TextElement*  ___textElement;

/// @brief Field node, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::UIElements::MeshGenerationNode  ___node;

/// @brief Field textInfo, offset: 0x20, size: 0x18, def value: None
 ::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">  ___textInfo;

/// @brief Field success, offset: 0x38, size: 0x1, def value: None
 bool  ___success;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData, ___textElement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData, ___node) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData, ___textInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData, ___success) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
