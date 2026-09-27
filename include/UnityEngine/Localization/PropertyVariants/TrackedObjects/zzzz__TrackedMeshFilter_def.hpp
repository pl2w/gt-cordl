#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedObjects/TrackedMeshFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__TrackedObject_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TrackedMeshFilter)
namespace UnityEngine::Localization {
class Locale;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedObjects {
class TrackedMeshFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter*, "UnityEngine.Localization.PropertyVariants.TrackedObjects", "TrackedMeshFilter");
// [DisplayName("Mesh Filter", null)]
// [CustomTrackedObject(typeof(UnityEngine.MeshFilter), false)]
// Dependencies UnityEngine.Localization.PropertyVariants.TrackedObjects.TrackedObject, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace UnityEngine::Localization::PropertyVariants::TrackedObjects {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedObjects.TrackedMeshFilter
class CORDL_TYPE TrackedMeshFilter : public ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject {
public:
// Declarations
/// @brief Field m_CurrentOperation, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_CurrentOperation, put=__cordl_internal_set_m_CurrentOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Mesh>>  m_CurrentOperation;

/// @brief Method ApplyLocale, addr 0xb05717c, size 0x508, virtual true, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle ApplyLocale(::UnityEngine::Localization::Locale*  variantLocale, ::UnityEngine::Localization::Locale*  defaultLocale) ;

/// @brief Method CanTrackProperty, addr 0xb057130, size 0x4c, virtual true, abstract: false, final false
inline bool CanTrackProperty(::StringW  propertyPath) ;

/// @brief Method MeshOperationCompleted, addr 0xb0576f0, size 0x60, virtual false, abstract: false, final false
inline void MeshOperationCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Mesh>>  assetOp) ;

static inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter* New_ctor() ;

/// @brief Method SetMesh, addr 0xb057684, size 0x6c, virtual false, abstract: false, final false
inline void SetMesh(::UnityEngine::Mesh*  mesh) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Mesh>> const& __cordl_internal_get_m_CurrentOperation() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Mesh>>& __cordl_internal_get_m_CurrentOperation() ;

constexpr void __cordl_internal_set_m_CurrentOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Mesh>>  value) ;

/// @brief Method .ctor, addr 0xb057750, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackedMeshFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackedMeshFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedMeshFilter(TrackedMeshFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedMeshFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedMeshFilter(TrackedMeshFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25384};

/// @brief Field k_MeshProperty offset 0xffffffff size 0x8
static constexpr ::ConstString  k_MeshProperty{u"m_Mesh"};

/// @brief Field m_CurrentOperation, offset: 0x28, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Mesh>>  ___m_CurrentOperation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter, ___m_CurrentOperation) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedObjects
