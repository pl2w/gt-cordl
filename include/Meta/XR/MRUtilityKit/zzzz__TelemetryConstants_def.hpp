#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/TelemetryConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TelemetryConstants)
namespace Meta::XR::MRUtilityKit {
class TelemetryConstants_AnnotationType;
}
namespace Meta::XR::MRUtilityKit {
class TelemetryConstants_MarkerId;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class TelemetryConstants;
}
namespace Meta::XR::MRUtilityKit {
class TelemetryConstants_AnnotationType;
}
namespace Meta::XR::MRUtilityKit {
class TelemetryConstants_MarkerId;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::TelemetryConstants*);
MARK_REF_T(::Meta::XR::MRUtilityKit::TelemetryConstants_AnnotationType*);
MARK_REF_T(::Meta::XR::MRUtilityKit::TelemetryConstants_MarkerId*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::TelemetryConstants*, "Meta.XR.MRUtilityKit", "TelemetryConstants");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::TelemetryConstants_AnnotationType*, "Meta.XR.MRUtilityKit", "TelemetryConstants/AnnotationType");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::TelemetryConstants_MarkerId*, "Meta.XR.MRUtilityKit", "TelemetryConstants/MarkerId");
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.TelemetryConstants
class CORDL_TYPE TelemetryConstants : public ::System::Object {
public:
// Declarations
using AnnotationType = ::Meta::XR::MRUtilityKit::TelemetryConstants_AnnotationType;

using MarkerId = ::Meta::XR::MRUtilityKit::TelemetryConstants_MarkerId;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TelemetryConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TelemetryConstants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TelemetryConstants(TelemetryConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TelemetryConstants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TelemetryConstants(TelemetryConstants const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25906};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::TelemetryConstants) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.TelemetryConstants/AnnotationType
class CORDL_TYPE TelemetryConstants_AnnotationType : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr TelemetryConstants_AnnotationType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TelemetryConstants_AnnotationType", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TelemetryConstants_AnnotationType(TelemetryConstants_AnnotationType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TelemetryConstants_AnnotationType", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TelemetryConstants_AnnotationType(TelemetryConstants_AnnotationType const& ) = delete;

/// @brief Field NumRooms offset 0xffffffff size 0x8
static constexpr ::ConstString  NumRooms{u"NumRooms"};

/// @brief Field SceneName offset 0xffffffff size 0x8
static constexpr ::ConstString  SceneName{u"SceneName"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25905};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::TelemetryConstants_AnnotationType) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.TelemetryConstants/MarkerId
class CORDL_TYPE TelemetryConstants_MarkerId : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr TelemetryConstants_MarkerId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TelemetryConstants_MarkerId", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TelemetryConstants_MarkerId(TelemetryConstants_MarkerId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TelemetryConstants_MarkerId", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TelemetryConstants_MarkerId(TelemetryConstants_MarkerId const& ) = delete;

/// @brief Field LoadAnchorPrefabSpawner offset 0xffffffff size 0x4
static constexpr int32_t  LoadAnchorPrefabSpawner{static_cast<int32_t>(0x26db3ed9)};

/// @brief Field LoadDestructibleGlobalMeshSpawner offset 0xffffffff size 0x4
static constexpr int32_t  LoadDestructibleGlobalMeshSpawner{static_cast<int32_t>(0x26db303a)};

/// @brief Field LoadEffectMesh offset 0xffffffff size 0x4
static constexpr int32_t  LoadEffectMesh{static_cast<int32_t>(0x26db2b05)};

/// @brief Field LoadEnvironmentRaycastManager offset 0xffffffff size 0x4
static constexpr int32_t  LoadEnvironmentRaycastManager{static_cast<int32_t>(0x26db11f6)};

/// @brief Field LoadFindSpawnPositions offset 0xffffffff size 0x4
static constexpr int32_t  LoadFindSpawnPositions{static_cast<int32_t>(0x26db0738)};

/// @brief Field LoadGridSliceResizer offset 0xffffffff size 0x4
static constexpr int32_t  LoadGridSliceResizer{static_cast<int32_t>(0x26db2548)};

/// @brief Field LoadRoomGuardian offset 0xffffffff size 0x4
static constexpr int32_t  LoadRoomGuardian{static_cast<int32_t>(0x26db38ac)};

/// @brief Field LoadSceneDebugger offset 0xffffffff size 0x4
static constexpr int32_t  LoadSceneDebugger{static_cast<int32_t>(0x26db2ae0)};

/// @brief Field LoadSceneDecoration offset 0xffffffff size 0x4
static constexpr int32_t  LoadSceneDecoration{static_cast<int32_t>(0x26db0870)};

/// @brief Field LoadSceneFromDevice offset 0xffffffff size 0x4
static constexpr int32_t  LoadSceneFromDevice{static_cast<int32_t>(0x26db18e6)};

/// @brief Field LoadSceneFromJson offset 0xffffffff size 0x4
static constexpr int32_t  LoadSceneFromJson{static_cast<int32_t>(0x26db219d)};

/// @brief Field LoadSceneFromPrefab offset 0xffffffff size 0x4
static constexpr int32_t  LoadSceneFromPrefab{static_cast<int32_t>(0x26db0bf3)};

/// @brief Field LoadSceneNavigation offset 0xffffffff size 0x4
static constexpr int32_t  LoadSceneNavigation{static_cast<int32_t>(0x26db09c6)};

/// @brief Field LoadSpaceMapGPU offset 0xffffffff size 0x4
static constexpr int32_t  LoadSpaceMapGPU{static_cast<int32_t>(0x26db2852)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25904};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::TelemetryConstants_MarkerId) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
