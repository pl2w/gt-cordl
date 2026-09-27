#pragma once
// IWYU pragma private; include "GlobalNamespace/PerfTestFPSCaptureController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PerfTestFPSCaptureController)
namespace GlobalNamespace {
class ScenePerformanceData;
}
namespace GlobalNamespace {
template<typename T>
class SerializablePerformanceReport_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PerfTestFPSCaptureController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PerfTestFPSCaptureController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerfTestFPSCaptureController*, "", "PerfTestFPSCaptureController");
// [GTStripGameObjectFromBuild("!GT_AUTOMATED_PERF_TEST && !BETA")]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerfTestFPSCaptureController
class CORDL_TYPE PerfTestFPSCaptureController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field performanceSummary, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_performanceSummary, put=__cordl_internal_set_performanceSummary)) ::GlobalNamespace::SerializablePerformanceReport_1<::GlobalNamespace::ScenePerformanceData*>*  performanceSummary;

static inline ::GlobalNamespace::PerfTestFPSCaptureController* New_ctor() ;

constexpr ::GlobalNamespace::SerializablePerformanceReport_1<::GlobalNamespace::ScenePerformanceData*>* const& __cordl_internal_get_performanceSummary() const;

constexpr ::GlobalNamespace::SerializablePerformanceReport_1<::GlobalNamespace::ScenePerformanceData*>*& __cordl_internal_get_performanceSummary() ;

constexpr void __cordl_internal_set_performanceSummary(::GlobalNamespace::SerializablePerformanceReport_1<::GlobalNamespace::ScenePerformanceData*>*  value) ;

/// @brief Method .ctor, addr 0x56bc9c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PerfTestFPSCaptureController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PerfTestFPSCaptureController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PerfTestFPSCaptureController(PerfTestFPSCaptureController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerfTestFPSCaptureController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerfTestFPSCaptureController(PerfTestFPSCaptureController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{977};

/// [SerializeField]
/// @brief Field performanceSummary, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::SerializablePerformanceReport_1<::GlobalNamespace::ScenePerformanceData*>*  ___performanceSummary;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerfTestFPSCaptureController, ___performanceSummary) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PerfTestFPSCaptureController) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
