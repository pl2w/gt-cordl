#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMeshJobs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OVRMeshJobs)
namespace GlobalNamespace {
template<typename T>
struct OVRMeshJobs_NativeArrayHelper_1;
}
namespace GlobalNamespace {
struct OVRMeshJobs_TransformToUnitySpaceJob;
}
namespace GlobalNamespace {
struct OVRMeshJobs_TransformTrianglesJob;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMeshJobs;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRMeshJobs*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRMeshJobs*, "", "OVRMeshJobs");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRMeshJobs
class CORDL_TYPE OVRMeshJobs : public ::System::Object {
public:
// Declarations
template<typename T>
using NativeArrayHelper_1 = ::GlobalNamespace::OVRMeshJobs_NativeArrayHelper_1<T>;

using TransformToUnitySpaceJob = ::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob;

using TransformTrianglesJob = ::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob;

static inline ::GlobalNamespace::OVRMeshJobs* New_ctor() ;

/// @brief Method .ctor, addr 0xa667cf4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRMeshJobs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRMeshJobs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRMeshJobs(OVRMeshJobs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRMeshJobs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRMeshJobs(OVRMeshJobs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12660};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRMeshJobs) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
