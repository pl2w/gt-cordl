#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Painter2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__Painter2D_Painter2DJobData_def.hpp"
#include "UnityEngine/UIElements/zzzz__SafeHandleAccess_def.hpp"
CORDL_MODULE_EXPORT(Painter2D)
namespace GlobalNamespace {
struct Painter2D_Painter2DJobData;
}
namespace GlobalNamespace {
struct Painter2D_Painter2DJob;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements::UIR {
class DetachedAllocator;
}
namespace UnityEngine::UIElements::UIR {
class MeshGenerationCallback;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Painter2D;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::Painter2D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Painter2D*, "UnityEngine.UIElements", "Painter2D");
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.Painter2D::Painter2DJobData, UnityEngine.UIElements.SafeHandleAccess
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Painter2D
class CORDL_TYPE Painter2D : public ::System::Object {
public:
// Declarations
using Painter2DJob = ::GlobalNamespace::Painter2D_Painter2DJob;

using Painter2DJobData = ::GlobalNamespace::Painter2D_Painter2DJobData;

/// @brief Field <isPainterActive>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isPainterActive_k__BackingField, put=setStaticF__isPainterActive_k__BackingField)) bool  _isPainterActive_k__BackingField;

/// @brief Field m_Ctx, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ctx, put=__cordl_internal_set_m_Ctx)) Il2CppObject*  m_Ctx;

/// @brief Field m_DetachedAllocator, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DetachedAllocator, put=__cordl_internal_set_m_DetachedAllocator)) ::UnityEngine::UIElements::UIR::DetachedAllocator*  m_DetachedAllocator;

/// @brief Field m_Disposed, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Disposed, put=__cordl_internal_set_m_Disposed)) bool  m_Disposed;

/// @brief Field m_Handle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Handle, put=__cordl_internal_set_m_Handle)) ::UnityEngine::UIElements::SafeHandleAccess  m_Handle;

/// @brief Field m_JobParameters, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_JobParameters, put=__cordl_internal_set_m_JobParameters)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::Painter2D_Painter2DJobData>  m_JobParameters;

/// @brief Field m_JobSnapshots, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_JobSnapshots, put=__cordl_internal_set_m_JobSnapshots)) ::System::Collections::Generic::List_1<::GlobalNamespace::Painter2D_Painter2DJobData>*  m_JobSnapshots;

/// @brief Field m_OnMeshGenerationDelegate, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnMeshGenerationDelegate, put=__cordl_internal_set_m_OnMeshGenerationDelegate)) ::UnityEngine::UIElements::UIR::MeshGenerationCallback*  m_OnMeshGenerationDelegate;

/// @brief Field s_FillMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_FillMarker, put=setStaticF_s_FillMarker)) ::Unity::Profiling::ProfilerMarker  s_FillMarker;

/// @brief Field s_StrokeMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_StrokeMarker, put=setStaticF_s_StrokeMarker)) ::Unity::Profiling::ProfilerMarker  s_StrokeMarker;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xb8c698c, size 0x64, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xb8c7668, size 0xb0, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::UnityEngine::UIElements::Painter2D* New_ctor() ;

static inline ::UnityEngine::UIElements::Painter2D* New_ctor(Il2CppObject*  ctx) ;

/// @brief Method OnMeshGeneration, addr 0xb8c7994, size 0x44, virtual false, abstract: false, final false
inline void OnMeshGeneration(Il2CppObject*  ctx, ::System::Object*  data) ;

/// @brief Method Reset, addr 0xb8c67bc, size 0x44, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ScheduleJobs, addr 0xb8c7778, size 0x21c, virtual false, abstract: false, final false
inline void ScheduleJobs(Il2CppObject*  mgc) ;

constexpr Il2CppObject* const& __cordl_internal_get_m_Ctx() const;

constexpr Il2CppObject*& __cordl_internal_get_m_Ctx() ;

constexpr ::UnityEngine::UIElements::UIR::DetachedAllocator* const& __cordl_internal_get_m_DetachedAllocator() const;

constexpr ::UnityEngine::UIElements::UIR::DetachedAllocator*& __cordl_internal_get_m_DetachedAllocator() ;

constexpr bool const& __cordl_internal_get_m_Disposed() const;

constexpr bool& __cordl_internal_get_m_Disposed() ;

constexpr ::UnityEngine::UIElements::SafeHandleAccess const& __cordl_internal_get_m_Handle() const;

constexpr ::UnityEngine::UIElements::SafeHandleAccess& __cordl_internal_get_m_Handle() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::Painter2D_Painter2DJobData> const& __cordl_internal_get_m_JobParameters() const;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::Painter2D_Painter2DJobData>& __cordl_internal_get_m_JobParameters() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Painter2D_Painter2DJobData>* const& __cordl_internal_get_m_JobSnapshots() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Painter2D_Painter2DJobData>*& __cordl_internal_get_m_JobSnapshots() ;

constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback* const& __cordl_internal_get_m_OnMeshGenerationDelegate() const;

constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback*& __cordl_internal_get_m_OnMeshGenerationDelegate() ;

constexpr void __cordl_internal_set_m_Ctx(Il2CppObject*  value) ;

constexpr void __cordl_internal_set_m_DetachedAllocator(::UnityEngine::UIElements::UIR::DetachedAllocator*  value) ;

constexpr void __cordl_internal_set_m_Disposed(bool  value) ;

constexpr void __cordl_internal_set_m_Handle(::UnityEngine::UIElements::SafeHandleAccess  value) ;

constexpr void __cordl_internal_set_m_JobParameters(::Unity::Collections::NativeArray_1<::GlobalNamespace::Painter2D_Painter2DJobData>  value) ;

constexpr void __cordl_internal_set_m_JobSnapshots(::System::Collections::Generic::List_1<::GlobalNamespace::Painter2D_Painter2DJobData>*  value) ;

constexpr void __cordl_internal_set_m_OnMeshGenerationDelegate(::UnityEngine::UIElements::UIR::MeshGenerationCallback*  value) ;

/// @brief Method .ctor, addr 0xb8c74f4, size 0x174, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb8c610c, size 0x150, virtual false, abstract: false, final false
inline void _ctor(Il2CppObject*  ctx) ;

static inline bool getStaticF__isPainterActive_k__BackingField() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_FillMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_StrokeMarker() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF__isPainterActive_k__BackingField(bool  value) ;

static inline void setStaticF_s_FillMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_StrokeMarker(::Unity::Profiling::ProfilerMarker  value) ;

/// [CompilerGenerated]
/// @brief Method set_isPainterActive, addr 0xb8c7718, size 0x60, virtual false, abstract: false, final false
static inline void set_isPainterActive(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Painter2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Painter2D", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Painter2D(Painter2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Painter2D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Painter2D(Painter2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7872};

/// @brief Field m_Ctx, offset: 0x10, size: 0x8, def value: None
 Il2CppObject*  ___m_Ctx;

/// @brief Field m_DetachedAllocator, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::DetachedAllocator*  ___m_DetachedAllocator;

/// @brief Field m_Handle, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::UIElements::SafeHandleAccess  ___m_Handle;

/// @brief Field m_JobSnapshots, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::Painter2D_Painter2DJobData>*  ___m_JobSnapshots;

/// @brief Field m_JobParameters, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::Painter2D_Painter2DJobData>  ___m_JobParameters;

/// @brief Field m_Disposed, offset: 0x40, size: 0x1, def value: None
 bool  ___m_Disposed;

/// @brief Field m_OnMeshGenerationDelegate, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::MeshGenerationCallback*  ___m_OnMeshGenerationDelegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_Ctx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_DetachedAllocator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_Handle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_JobSnapshots) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_JobParameters) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_Disposed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_OnMeshGenerationDelegate) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Painter2D) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
