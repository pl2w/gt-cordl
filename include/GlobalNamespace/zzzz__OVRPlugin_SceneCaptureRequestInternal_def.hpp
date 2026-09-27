#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SceneCaptureRequestInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_SceneCaptureRequestInternal)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SceneCaptureRequestInternal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SceneCaptureRequestInternal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SceneCaptureRequestInternal, "", "OVRPlugin/SceneCaptureRequestInternal");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SceneCaptureRequestInternal
struct CORDL_TYPE OVRPlugin_SceneCaptureRequestInternal {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SceneCaptureRequestInternal() ;

// Ctor Parameters [CppParam { name: "requestByteCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "request", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SceneCaptureRequestInternal(int32_t  requestByteCount, ::StringW  request) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12240};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field requestByteCount, offset: 0x0, size: 0x4, def value: None
 int32_t  requestByteCount;

/// @brief Field request, offset: 0x8, size: 0x8, def value: None
 ::StringW  request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SceneCaptureRequestInternal, requestByteCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SceneCaptureRequestInternal, request) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SceneCaptureRequestInternal) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
