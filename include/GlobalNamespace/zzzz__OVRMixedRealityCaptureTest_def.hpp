#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMixedRealityCaptureTest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureTest_CameraMode_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Fovf_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRMixedRealityCaptureTest)
namespace GlobalNamespace {
struct OVRMixedRealityCaptureTest_CameraMode;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMixedRealityCaptureTest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRMixedRealityCaptureTest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRMixedRealityCaptureTest*, "", "OVRMixedRealityCaptureTest");
// Dependencies OVRMixedRealityCaptureTest::CameraMode, OVRPlugin::Fovf, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRMixedRealityCaptureTest
class CORDL_TYPE OVRMixedRealityCaptureTest : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CameraMode = ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode;

/// @brief Field currentMode, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentMode, put=__cordl_internal_set_currentMode)) ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode  currentMode;

/// @brief Field defaultExternalCamera, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultExternalCamera, put=__cordl_internal_set_defaultExternalCamera)) ::UnityW<::UnityEngine::Camera>  defaultExternalCamera;

/// @brief Field defaultFov, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_defaultFov, put=__cordl_internal_set_defaultFov)) ::GlobalNamespace::OVRPlugin_Fovf  defaultFov;

/// @brief Field inited, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_inited, put=__cordl_internal_set_inited)) bool  inited;

/// @brief Method Initialize, addr 0xa66a19c, size 0x224, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::OVRMixedRealityCaptureTest* New_ctor() ;

/// @brief Method Start, addr 0xa66a0ec, size 0xb0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa66a7e4, size 0x774, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateDefaultExternalCamera, addr 0xa66a3c0, size 0x424, virtual false, abstract: false, final false
inline void UpdateDefaultExternalCamera() ;

constexpr ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode const& __cordl_internal_get_currentMode() const;

constexpr ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode& __cordl_internal_get_currentMode() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_defaultExternalCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_defaultExternalCamera() ;

constexpr ::GlobalNamespace::OVRPlugin_Fovf const& __cordl_internal_get_defaultFov() const;

constexpr ::GlobalNamespace::OVRPlugin_Fovf& __cordl_internal_get_defaultFov() ;

constexpr bool const& __cordl_internal_get_inited() const;

constexpr bool& __cordl_internal_get_inited() ;

constexpr void __cordl_internal_set_currentMode(::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode  value) ;

constexpr void __cordl_internal_set_defaultExternalCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_defaultFov(::GlobalNamespace::OVRPlugin_Fovf  value) ;

constexpr void __cordl_internal_set_inited(bool  value) ;

/// @brief Method .ctor, addr 0xa66af58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRMixedRealityCaptureTest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureTest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRMixedRealityCaptureTest(OVRMixedRealityCaptureTest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureTest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRMixedRealityCaptureTest(OVRMixedRealityCaptureTest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12670};

/// @brief Field inited, offset: 0x20, size: 0x1, def value: None
 bool  ___inited;

/// @brief Field currentMode, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode  ___currentMode;

/// @brief Field defaultExternalCamera, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___defaultExternalCamera;

/// @brief Field defaultFov, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Fovf  ___defaultFov;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureTest, ___inited) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureTest, ___currentMode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureTest, ___defaultExternalCamera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureTest, ___defaultFov) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRMixedRealityCaptureTest) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
