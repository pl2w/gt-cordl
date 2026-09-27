#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRBoundary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRBoundary)
namespace GlobalNamespace {
struct OVRBoundary_BoundaryTestResult;
}
namespace GlobalNamespace {
struct OVRBoundary_BoundaryType;
}
namespace GlobalNamespace {
struct OVRBoundary_Node;
}
namespace GlobalNamespace {
class OVRNativeBuffer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRBoundary;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRBoundary*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRBoundary*, "", "OVRBoundary");
// [HelpURL("https://developer.oculus.com/documentation/unity/unity-ovrboundary/")]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRBoundary
class CORDL_TYPE OVRBoundary : public ::System::Object {
public:
// Declarations
using BoundaryTestResult = ::GlobalNamespace::OVRBoundary_BoundaryTestResult;

using BoundaryType = ::GlobalNamespace::OVRBoundary_BoundaryType;

using Node = ::GlobalNamespace::OVRBoundary_Node;

/// @brief Field cachedGeometryList, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedGeometryList, put=__cordl_internal_set_cachedGeometryList)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  cachedGeometryList;

/// @brief Field cachedGeometryManagedBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cachedGeometryManagedBuffer, put=setStaticF_cachedGeometryManagedBuffer)) ::ArrayW<float_t>  cachedGeometryManagedBuffer;

/// @brief Field cachedGeometryNativeBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cachedGeometryNativeBuffer, put=setStaticF_cachedGeometryNativeBuffer)) ::GlobalNamespace::OVRNativeBuffer*  cachedGeometryNativeBuffer;

/// @brief Field cachedVector3fSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_cachedVector3fSize, put=setStaticF_cachedVector3fSize)) int32_t  cachedVector3fSize;

/// @brief Method GetConfigured, addr 0xa57e6e4, size 0x98, virtual false, abstract: false, final false
inline bool GetConfigured() ;

/// @brief Method GetDimensions, addr 0xa57ed50, size 0xd0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetDimensions(::GlobalNamespace::OVRBoundary_BoundaryType  boundaryType) ;

/// @brief Method GetGeometry, addr 0xa57e91c, size 0x3c8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> GetGeometry(::GlobalNamespace::OVRBoundary_BoundaryType  boundaryType) ;

/// [Obsolete("Deprecated. This function will not be supported in OpenXR", false)]
/// @brief Method GetVisible, addr 0xa57ee20, size 0x98, virtual false, abstract: false, final false
inline bool GetVisible() ;

static inline ::GlobalNamespace::OVRBoundary* New_ctor() ;

/// [Obsolete("Deprecated. This function will not be supported in OpenXR", false)]
/// @brief Method SetVisible, addr 0xa57eeb8, size 0x9c, virtual false, abstract: false, final false
inline void SetVisible(bool  value) ;

/// [Obsolete("Deprecated. This function will not be supported in OpenXR", false)]
/// @brief Method TestNode, addr 0xa57e77c, size 0xc0, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRBoundary_BoundaryTestResult TestNode(::GlobalNamespace::OVRBoundary_Node  node, ::GlobalNamespace::OVRBoundary_BoundaryType  boundaryType) ;

/// [Obsolete("Deprecated. This function will not be supported in OpenXR", false)]
/// @brief Method TestPoint, addr 0xa57e83c, size 0xe0, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRBoundary_BoundaryTestResult TestPoint(::UnityEngine::Vector3  point, ::GlobalNamespace::OVRBoundary_BoundaryType  boundaryType) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_cachedGeometryList() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_cachedGeometryList() ;

constexpr void __cordl_internal_set_cachedGeometryList(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method .ctor, addr 0xa57ef54, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<float_t> getStaticF_cachedGeometryManagedBuffer() ;

static inline ::GlobalNamespace::OVRNativeBuffer* getStaticF_cachedGeometryNativeBuffer() ;

static inline int32_t getStaticF_cachedVector3fSize() ;

static inline void setStaticF_cachedGeometryManagedBuffer(::ArrayW<float_t>  value) ;

static inline void setStaticF_cachedGeometryNativeBuffer(::GlobalNamespace::OVRNativeBuffer*  value) ;

static inline void setStaticF_cachedVector3fSize(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRBoundary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRBoundary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRBoundary(OVRBoundary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRBoundary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRBoundary(OVRBoundary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11870};

/// @brief Field cachedGeometryList, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___cachedGeometryList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRBoundary, ___cachedGeometryList) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRBoundary) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
