#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/MetaQuestSupport/MetaQuestFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MetaQuestFeature)
namespace GlobalNamespace {
struct MetaQuestFeature_TargetDevice;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::MetaQuestSupport {
class MetaQuestFeature;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature*, "UnityEngine.XR.OpenXR.Features.MetaQuestSupport", "MetaQuestFeature");
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace UnityEngine::XR::OpenXR::Features::MetaQuestSupport {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature
class CORDL_TYPE MetaQuestFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
// Declarations
using TargetDevice = ::GlobalNamespace::MetaQuestFeature_TargetDevice;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

static inline ::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb504c60, size 0x4, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb504c5c, size 0x4, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method .ctor, addr 0xb504c64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaQuestFeature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaQuestFeature", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaQuestFeature(MetaQuestFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaQuestFeature", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaQuestFeature(MetaQuestFeature const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33114};

/// @brief Field ambientOcclusionScriptName offset 0xffffffff size 0x8
static constexpr ::ConstString  ambientOcclusionScriptName{u"ScreenSpaceAmbientOcclusion"};

/// @brief Field featureId offset 0xffffffff size 0x8
static constexpr ::ConstString  featureId{u"com.unity.openxr.feature.metaquest"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::XR::OpenXR::Features::MetaQuestSupport
