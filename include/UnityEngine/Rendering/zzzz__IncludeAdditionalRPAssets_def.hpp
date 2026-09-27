#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IncludeAdditionalRPAssets.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__IncludeAdditionalRPAssets_Version_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IncludeAdditionalRPAssets)
namespace GlobalNamespace {
struct IncludeAdditionalRPAssets_Version;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class IncludeAdditionalRPAssets;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::IncludeAdditionalRPAssets*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::IncludeAdditionalRPAssets*, "UnityEngine.Rendering", "IncludeAdditionalRPAssets");
// [SupportedOnRenderPipeline(new[] {  })]
// [CategoryInfo(Name = "H: RP Assets Inclusion", Order = 990)]
// [HideInInspector]
// Dependencies System.Object, UnityEngine.Rendering.IncludeAdditionalRPAssets::Version
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IncludeAdditionalRPAssets
class CORDL_TYPE IncludeAdditionalRPAssets : public ::System::Object {
public:
// Declarations
using Version = ::GlobalNamespace::IncludeAdditionalRPAssets_Version;

 __declspec(property(get=UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)) int32_t  UnityEngine_Rendering_IRenderPipelineGraphicsSettings_version;

 __declspec(property(get=get_includeAssetsByLabel, put=set_includeAssetsByLabel)) bool  includeAssetsByLabel;

 __declspec(property(get=get_includeReferencedInScenes, put=set_includeReferencedInScenes)) bool  includeReferencedInScenes;

 __declspec(property(get=get_labelToInclude, put=set_labelToInclude)) ::StringW  labelToInclude;

/// @brief Field m_IncludeAssetsByLabel, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IncludeAssetsByLabel, put=__cordl_internal_set_m_IncludeAssetsByLabel)) bool  m_IncludeAssetsByLabel;

/// @brief Field m_IncludeReferencedInScenes, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IncludeReferencedInScenes, put=__cordl_internal_set_m_IncludeReferencedInScenes)) bool  m_IncludeReferencedInScenes;

/// @brief Field m_LabelToInclude, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LabelToInclude, put=__cordl_internal_set_m_LabelToInclude)) ::StringW  m_LabelToInclude;

/// @brief Field m_version, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_version, put=__cordl_internal_set_m_version)) ::GlobalNamespace::IncludeAdditionalRPAssets_Version  m_version;

/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr operator  ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

static inline ::UnityEngine::Rendering::IncludeAdditionalRPAssets* New_ctor() ;

/// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version, addr 0xb173abc, size 0x8, virtual true, abstract: false, final true
inline int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version() ;

constexpr bool const& __cordl_internal_get_m_IncludeAssetsByLabel() const;

constexpr bool& __cordl_internal_get_m_IncludeAssetsByLabel() ;

constexpr bool const& __cordl_internal_get_m_IncludeReferencedInScenes() const;

constexpr bool& __cordl_internal_get_m_IncludeReferencedInScenes() ;

constexpr ::StringW const& __cordl_internal_get_m_LabelToInclude() const;

constexpr ::StringW& __cordl_internal_get_m_LabelToInclude() ;

constexpr ::GlobalNamespace::IncludeAdditionalRPAssets_Version const& __cordl_internal_get_m_version() const;

constexpr ::GlobalNamespace::IncludeAdditionalRPAssets_Version& __cordl_internal_get_m_version() ;

constexpr void __cordl_internal_set_m_IncludeAssetsByLabel(bool  value) ;

constexpr void __cordl_internal_set_m_IncludeReferencedInScenes(bool  value) ;

constexpr void __cordl_internal_set_m_LabelToInclude(::StringW  value) ;

constexpr void __cordl_internal_set_m_version(::GlobalNamespace::IncludeAdditionalRPAssets_Version  value) ;

/// @brief Method .ctor, addr 0xb173c38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_includeAssetsByLabel, addr 0xb173b40, size 0x8, virtual false, abstract: false, final false
inline bool get_includeAssetsByLabel() ;

/// @brief Method get_includeReferencedInScenes, addr 0xb173ac4, size 0x8, virtual false, abstract: false, final false
inline bool get_includeReferencedInScenes() ;

/// @brief Method get_labelToInclude, addr 0xb173bbc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_labelToInclude() ;

/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

/// @brief Method set_includeAssetsByLabel, addr 0xb173b48, size 0x74, virtual false, abstract: false, final false
inline void set_includeAssetsByLabel(bool  value) ;

/// @brief Method set_includeReferencedInScenes, addr 0xb173acc, size 0x74, virtual false, abstract: false, final false
inline void set_includeReferencedInScenes(bool  value) ;

/// @brief Method set_labelToInclude, addr 0xb173bc4, size 0x74, virtual false, abstract: false, final false
inline void set_labelToInclude(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IncludeAdditionalRPAssets() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IncludeAdditionalRPAssets", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IncludeAdditionalRPAssets(IncludeAdditionalRPAssets && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IncludeAdditionalRPAssets", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IncludeAdditionalRPAssets(IncludeAdditionalRPAssets const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16915};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_version, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::IncludeAdditionalRPAssets_Version  ___m_version;

/// [SerializeField]
/// @brief Field m_IncludeReferencedInScenes, offset: 0x14, size: 0x1, def value: None
 bool  ___m_IncludeReferencedInScenes;

/// [SerializeField]
/// @brief Field m_IncludeAssetsByLabel, offset: 0x15, size: 0x1, def value: None
 bool  ___m_IncludeAssetsByLabel;

/// [SerializeField]
/// @brief Field m_LabelToInclude, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___m_LabelToInclude;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::IncludeAdditionalRPAssets, ___m_version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IncludeAdditionalRPAssets, ___m_IncludeReferencedInScenes) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IncludeAdditionalRPAssets, ___m_IncludeAssetsByLabel) == 0x15, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IncludeAdditionalRPAssets, ___m_LabelToInclude) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::IncludeAdditionalRPAssets) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
