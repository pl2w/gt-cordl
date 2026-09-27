#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_IMeshBakerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(MB_IMeshBakerSettings)
namespace DigitalOpus::MB::Core {
class IAssignToMeshCustomizer;
}
namespace DigitalOpus::MB::Core {
struct MB2_LightmapOptions;
}
namespace DigitalOpus::MB::Core {
struct MB_MeshCombineAPIType;
}
namespace DigitalOpus::MB::Core {
struct MB_MeshPivotLocation;
}
namespace DigitalOpus::MB::Core {
struct MB_RenderType;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB_IMeshBakerSettings;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, "DigitalOpus.MB.Core", "MB_IMeshBakerSettings");
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB_IMeshBakerSettings
class CORDL_TYPE MB_IMeshBakerSettings {
public:
// Declarations
 __declspec(property(get=get_assignToMeshCustomizer, put=set_assignToMeshCustomizer)) ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*  assignToMeshCustomizer;

 __declspec(property(get=get_clearBuffersAfterBake, put=set_clearBuffersAfterBake)) bool  clearBuffersAfterBake;

 __declspec(property(get=get_doBlendShapes, put=set_doBlendShapes)) bool  doBlendShapes;

 __declspec(property(get=get_doCol, put=set_doCol)) bool  doCol;

 __declspec(property(get=get_doNorm, put=set_doNorm)) bool  doNorm;

 __declspec(property(get=get_doTan, put=set_doTan)) bool  doTan;

 __declspec(property(get=get_doUV, put=set_doUV)) bool  doUV;

 __declspec(property(get=get_doUV3, put=set_doUV3)) bool  doUV3;

 __declspec(property(get=get_doUV4, put=set_doUV4)) bool  doUV4;

 __declspec(property(get=get_doUV5, put=set_doUV5)) bool  doUV5;

 __declspec(property(get=get_doUV6, put=set_doUV6)) bool  doUV6;

 __declspec(property(get=get_doUV7, put=set_doUV7)) bool  doUV7;

 __declspec(property(get=get_doUV8, put=set_doUV8)) bool  doUV8;

 __declspec(property(get=get_lightmapOption, put=set_lightmapOption)) ::DigitalOpus::MB::Core::MB2_LightmapOptions  lightmapOption;

 __declspec(property(get=get_meshAPI, put=set_meshAPI)) ::DigitalOpus::MB::Core::MB_MeshCombineAPIType  meshAPI;

 __declspec(property(get=get_optimizeAfterBake, put=set_optimizeAfterBake)) bool  optimizeAfterBake;

 __declspec(property(get=get_pivotLocation, put=set_pivotLocation)) ::UnityEngine::Vector3  pivotLocation;

 __declspec(property(get=get_pivotLocationType, put=set_pivotLocationType)) ::DigitalOpus::MB::Core::MB_MeshPivotLocation  pivotLocationType;

 __declspec(property(get=get_renderType, put=set_renderType)) ::DigitalOpus::MB::Core::MB_RenderType  renderType;

 __declspec(property(get=get_smrMergeBlendShapesWithSameNames, put=set_smrMergeBlendShapesWithSameNames)) bool  smrMergeBlendShapesWithSameNames;

 __declspec(property(get=get_smrNoExtraBonesWhenCombiningMeshRenderers, put=set_smrNoExtraBonesWhenCombiningMeshRenderers)) bool  smrNoExtraBonesWhenCombiningMeshRenderers;

 __declspec(property(get=get_uv2UnwrappingParamsHardAngle, put=set_uv2UnwrappingParamsHardAngle)) float_t  uv2UnwrappingParamsHardAngle;

 __declspec(property(get=get_uv2UnwrappingParamsPackMargin, put=set_uv2UnwrappingParamsPackMargin)) float_t  uv2UnwrappingParamsPackMargin;

/// @brief Method get_assignToMeshCustomizer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::DigitalOpus::MB::Core::IAssignToMeshCustomizer* get_assignToMeshCustomizer() ;

/// @brief Method get_clearBuffersAfterBake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_clearBuffersAfterBake() ;

/// @brief Method get_doBlendShapes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_doBlendShapes() ;

/// @brief Method get_doCol, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_doCol() ;

/// @brief Method get_doNorm, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_doNorm() ;

/// @brief Method get_doTan, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_doTan() ;

/// @brief Method get_doUV, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_doUV() ;

/// @brief Method get_doUV3, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_doUV3() ;

/// @brief Method get_doUV4, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_doUV4() ;

/// @brief Method get_doUV5, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_doUV5() ;

/// @brief Method get_doUV6, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_doUV6() ;

/// @brief Method get_doUV7, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_doUV7() ;

/// @brief Method get_doUV8, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_doUV8() ;

/// @brief Method get_lightmapOption, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::DigitalOpus::MB::Core::MB2_LightmapOptions get_lightmapOption() ;

/// @brief Method get_meshAPI, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::DigitalOpus::MB::Core::MB_MeshCombineAPIType get_meshAPI() ;

/// @brief Method get_optimizeAfterBake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_optimizeAfterBake() ;

/// @brief Method get_pivotLocation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_pivotLocation() ;

/// @brief Method get_pivotLocationType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::DigitalOpus::MB::Core::MB_MeshPivotLocation get_pivotLocationType() ;

/// @brief Method get_renderType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::DigitalOpus::MB::Core::MB_RenderType get_renderType() ;

/// @brief Method get_smrMergeBlendShapesWithSameNames, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_smrMergeBlendShapesWithSameNames() ;

/// @brief Method get_smrNoExtraBonesWhenCombiningMeshRenderers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_smrNoExtraBonesWhenCombiningMeshRenderers() ;

/// @brief Method get_uv2UnwrappingParamsHardAngle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_uv2UnwrappingParamsHardAngle() ;

/// @brief Method get_uv2UnwrappingParamsPackMargin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_uv2UnwrappingParamsPackMargin() ;

/// @brief Method set_assignToMeshCustomizer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_assignToMeshCustomizer(::DigitalOpus::MB::Core::IAssignToMeshCustomizer*  value) ;

/// @brief Method set_clearBuffersAfterBake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_clearBuffersAfterBake(bool  value) ;

/// @brief Method set_doBlendShapes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_doBlendShapes(bool  value) ;

/// @brief Method set_doCol, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_doCol(bool  value) ;

/// @brief Method set_doNorm, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_doNorm(bool  value) ;

/// @brief Method set_doTan, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_doTan(bool  value) ;

/// @brief Method set_doUV, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_doUV(bool  value) ;

/// @brief Method set_doUV3, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_doUV3(bool  value) ;

/// @brief Method set_doUV4, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_doUV4(bool  value) ;

/// @brief Method set_doUV5, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_doUV5(bool  value) ;

/// @brief Method set_doUV6, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_doUV6(bool  value) ;

/// @brief Method set_doUV7, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_doUV7(bool  value) ;

/// @brief Method set_doUV8, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_doUV8(bool  value) ;

/// @brief Method set_lightmapOption, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_lightmapOption(::DigitalOpus::MB::Core::MB2_LightmapOptions  value) ;

/// @brief Method set_meshAPI, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_meshAPI(::DigitalOpus::MB::Core::MB_MeshCombineAPIType  value) ;

/// @brief Method set_optimizeAfterBake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_optimizeAfterBake(bool  value) ;

/// @brief Method set_pivotLocation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_pivotLocation(::UnityEngine::Vector3  value) ;

/// @brief Method set_pivotLocationType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_pivotLocationType(::DigitalOpus::MB::Core::MB_MeshPivotLocation  value) ;

/// @brief Method set_renderType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_renderType(::DigitalOpus::MB::Core::MB_RenderType  value) ;

/// @brief Method set_smrMergeBlendShapesWithSameNames, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_smrMergeBlendShapesWithSameNames(bool  value) ;

/// @brief Method set_smrNoExtraBonesWhenCombiningMeshRenderers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_smrNoExtraBonesWhenCombiningMeshRenderers(bool  value) ;

/// @brief Method set_uv2UnwrappingParamsHardAngle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_uv2UnwrappingParamsHardAngle(float_t  value) ;

/// @brief Method set_uv2UnwrappingParamsPackMargin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_uv2UnwrappingParamsPackMargin(float_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "MB_IMeshBakerSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_IMeshBakerSettings(MB_IMeshBakerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22742};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DigitalOpus::MB::Core
