#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombinerSettingsData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB2_LightmapOptions_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_OutputOptions_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshCombineAPIType_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshPivotLocation_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_RenderType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MB3_MeshCombinerSettingsData)
namespace DigitalOpus::MB::Core {
class IAssignToMeshCustomizer;
}
namespace DigitalOpus::MB::Core {
struct MB2_LightmapOptions;
}
namespace DigitalOpus::MB::Core {
struct MB2_OutputOptions;
}
namespace DigitalOpus::MB::Core {
class MB_IMeshBakerSettings;
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
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSettingsData;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSettingsData");
// Dependencies DigitalOpus.MB.Core.MB2_LightmapOptions, DigitalOpus.MB.Core.MB2_OutputOptions, DigitalOpus.MB.Core.MB_MeshCombineAPIType, DigitalOpus.MB.Core.MB_MeshPivotLocation, DigitalOpus.MB.Core.MB_RenderType, System.Object, UnityEngine.Vector3
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSettingsData
class CORDL_TYPE MB3_MeshCombinerSettingsData : public ::System::Object {
public:
// Declarations
/// @brief Field _assignToMeshCustomizer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__assignToMeshCustomizer, put=__cordl_internal_set__assignToMeshCustomizer)) ::UnityW<::UnityEngine::Object>  _assignToMeshCustomizer;

/// @brief Field _clearBuffersAfterBake, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__clearBuffersAfterBake, put=__cordl_internal_set__clearBuffersAfterBake)) bool  _clearBuffersAfterBake;

/// @brief Field _doBlendShapes, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get__doBlendShapes, put=__cordl_internal_set__doBlendShapes)) bool  _doBlendShapes;

/// @brief Field _doCol, offset 0x1e, size 0x1 
 __declspec(property(get=__cordl_internal_get__doCol, put=__cordl_internal_set__doCol)) bool  _doCol;

/// @brief Field _doNorm, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__doNorm, put=__cordl_internal_set__doNorm)) bool  _doNorm;

/// @brief Field _doTan, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get__doTan, put=__cordl_internal_set__doTan)) bool  _doTan;

/// @brief Field _doUV, offset 0x1f, size 0x1 
 __declspec(property(get=__cordl_internal_get__doUV, put=__cordl_internal_set__doUV)) bool  _doUV;

/// @brief Field _doUV3, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__doUV3, put=__cordl_internal_set__doUV3)) bool  _doUV3;

/// @brief Field _doUV4, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__doUV4, put=__cordl_internal_set__doUV4)) bool  _doUV4;

/// @brief Field _doUV5, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get__doUV5, put=__cordl_internal_set__doUV5)) bool  _doUV5;

/// @brief Field _doUV6, offset 0x23, size 0x1 
 __declspec(property(get=__cordl_internal_get__doUV6, put=__cordl_internal_set__doUV6)) bool  _doUV6;

/// @brief Field _doUV7, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__doUV7, put=__cordl_internal_set__doUV7)) bool  _doUV7;

/// @brief Field _doUV8, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get__doUV8, put=__cordl_internal_set__doUV8)) bool  _doUV8;

/// @brief Field _lightmapOption, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__lightmapOption, put=__cordl_internal_set__lightmapOption)) ::DigitalOpus::MB::Core::MB2_LightmapOptions  _lightmapOption;

/// @brief Field _meshAPItoUse, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__meshAPItoUse, put=__cordl_internal_set__meshAPItoUse)) ::DigitalOpus::MB::Core::MB_MeshCombineAPIType  _meshAPItoUse;

/// @brief Field _optimizeAfterBake, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__optimizeAfterBake, put=__cordl_internal_set__optimizeAfterBake)) bool  _optimizeAfterBake;

/// @brief Field _outputOption, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__outputOption, put=__cordl_internal_set__outputOption)) ::DigitalOpus::MB::Core::MB2_OutputOptions  _outputOption;

/// @brief Field _pivotLocation, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get__pivotLocation, put=__cordl_internal_set__pivotLocation)) ::UnityEngine::Vector3  _pivotLocation;

/// @brief Field _pivotLocationType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__pivotLocationType, put=__cordl_internal_set__pivotLocationType)) ::DigitalOpus::MB::Core::MB_MeshPivotLocation  _pivotLocationType;

/// @brief Field _renderType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__renderType, put=__cordl_internal_set__renderType)) ::DigitalOpus::MB::Core::MB_RenderType  _renderType;

/// @brief Field _smrMergeBlendShapesWithSameNames, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get__smrMergeBlendShapesWithSameNames, put=__cordl_internal_set__smrMergeBlendShapesWithSameNames)) bool  _smrMergeBlendShapesWithSameNames;

/// @brief Field _smrNoExtraBonesWhenCombiningMeshRenderers, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__smrNoExtraBonesWhenCombiningMeshRenderers, put=__cordl_internal_set__smrNoExtraBonesWhenCombiningMeshRenderers)) bool  _smrNoExtraBonesWhenCombiningMeshRenderers;

/// @brief Field _uv2UnwrappingParamsHardAngle, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__uv2UnwrappingParamsHardAngle, put=__cordl_internal_set__uv2UnwrappingParamsHardAngle)) float_t  _uv2UnwrappingParamsHardAngle;

/// @brief Field _uv2UnwrappingParamsPackMargin, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__uv2UnwrappingParamsPackMargin, put=__cordl_internal_set__uv2UnwrappingParamsPackMargin)) float_t  _uv2UnwrappingParamsPackMargin;

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

 __declspec(property(get=get_outputOption, put=set_outputOption)) ::DigitalOpus::MB::Core::MB2_OutputOptions  outputOption;

 __declspec(property(get=get_pivotLocation, put=set_pivotLocation)) ::UnityEngine::Vector3  pivotLocation;

 __declspec(property(get=get_pivotLocationType, put=set_pivotLocationType)) ::DigitalOpus::MB::Core::MB_MeshPivotLocation  pivotLocationType;

 __declspec(property(get=get_renderType, put=set_renderType)) ::DigitalOpus::MB::Core::MB_RenderType  renderType;

 __declspec(property(get=get_smrMergeBlendShapesWithSameNames, put=set_smrMergeBlendShapesWithSameNames)) bool  smrMergeBlendShapesWithSameNames;

 __declspec(property(get=get_smrNoExtraBonesWhenCombiningMeshRenderers, put=set_smrNoExtraBonesWhenCombiningMeshRenderers)) bool  smrNoExtraBonesWhenCombiningMeshRenderers;

 __declspec(property(get=get_uv2UnwrappingParamsHardAngle, put=set_uv2UnwrappingParamsHardAngle)) float_t  uv2UnwrappingParamsHardAngle;

 __declspec(property(get=get_uv2UnwrappingParamsPackMargin, put=set_uv2UnwrappingParamsPackMargin)) float_t  uv2UnwrappingParamsPackMargin;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MB_IMeshBakerSettings"
constexpr operator  ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*() noexcept;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__assignToMeshCustomizer() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__assignToMeshCustomizer() ;

constexpr bool const& __cordl_internal_get__clearBuffersAfterBake() const;

constexpr bool& __cordl_internal_get__clearBuffersAfterBake() ;

constexpr bool const& __cordl_internal_get__doBlendShapes() const;

constexpr bool& __cordl_internal_get__doBlendShapes() ;

constexpr bool const& __cordl_internal_get__doCol() const;

constexpr bool& __cordl_internal_get__doCol() ;

constexpr bool const& __cordl_internal_get__doNorm() const;

constexpr bool& __cordl_internal_get__doNorm() ;

constexpr bool const& __cordl_internal_get__doTan() const;

constexpr bool& __cordl_internal_get__doTan() ;

constexpr bool const& __cordl_internal_get__doUV() const;

constexpr bool& __cordl_internal_get__doUV() ;

constexpr bool const& __cordl_internal_get__doUV3() const;

constexpr bool& __cordl_internal_get__doUV3() ;

constexpr bool const& __cordl_internal_get__doUV4() const;

constexpr bool& __cordl_internal_get__doUV4() ;

constexpr bool const& __cordl_internal_get__doUV5() const;

constexpr bool& __cordl_internal_get__doUV5() ;

constexpr bool const& __cordl_internal_get__doUV6() const;

constexpr bool& __cordl_internal_get__doUV6() ;

constexpr bool const& __cordl_internal_get__doUV7() const;

constexpr bool& __cordl_internal_get__doUV7() ;

constexpr bool const& __cordl_internal_get__doUV8() const;

constexpr bool& __cordl_internal_get__doUV8() ;

constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions const& __cordl_internal_get__lightmapOption() const;

constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions& __cordl_internal_get__lightmapOption() ;

constexpr ::DigitalOpus::MB::Core::MB_MeshCombineAPIType const& __cordl_internal_get__meshAPItoUse() const;

constexpr ::DigitalOpus::MB::Core::MB_MeshCombineAPIType& __cordl_internal_get__meshAPItoUse() ;

constexpr bool const& __cordl_internal_get__optimizeAfterBake() const;

constexpr bool& __cordl_internal_get__optimizeAfterBake() ;

constexpr ::DigitalOpus::MB::Core::MB2_OutputOptions const& __cordl_internal_get__outputOption() const;

constexpr ::DigitalOpus::MB::Core::MB2_OutputOptions& __cordl_internal_get__outputOption() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__pivotLocation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__pivotLocation() ;

constexpr ::DigitalOpus::MB::Core::MB_MeshPivotLocation const& __cordl_internal_get__pivotLocationType() const;

constexpr ::DigitalOpus::MB::Core::MB_MeshPivotLocation& __cordl_internal_get__pivotLocationType() ;

constexpr ::DigitalOpus::MB::Core::MB_RenderType const& __cordl_internal_get__renderType() const;

constexpr ::DigitalOpus::MB::Core::MB_RenderType& __cordl_internal_get__renderType() ;

constexpr bool const& __cordl_internal_get__smrMergeBlendShapesWithSameNames() const;

constexpr bool& __cordl_internal_get__smrMergeBlendShapesWithSameNames() ;

constexpr bool const& __cordl_internal_get__smrNoExtraBonesWhenCombiningMeshRenderers() const;

constexpr bool& __cordl_internal_get__smrNoExtraBonesWhenCombiningMeshRenderers() ;

constexpr float_t const& __cordl_internal_get__uv2UnwrappingParamsHardAngle() const;

constexpr float_t& __cordl_internal_get__uv2UnwrappingParamsHardAngle() ;

constexpr float_t const& __cordl_internal_get__uv2UnwrappingParamsPackMargin() const;

constexpr float_t& __cordl_internal_get__uv2UnwrappingParamsPackMargin() ;

constexpr void __cordl_internal_set__assignToMeshCustomizer(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__clearBuffersAfterBake(bool  value) ;

constexpr void __cordl_internal_set__doBlendShapes(bool  value) ;

constexpr void __cordl_internal_set__doCol(bool  value) ;

constexpr void __cordl_internal_set__doNorm(bool  value) ;

constexpr void __cordl_internal_set__doTan(bool  value) ;

constexpr void __cordl_internal_set__doUV(bool  value) ;

constexpr void __cordl_internal_set__doUV3(bool  value) ;

constexpr void __cordl_internal_set__doUV4(bool  value) ;

constexpr void __cordl_internal_set__doUV5(bool  value) ;

constexpr void __cordl_internal_set__doUV6(bool  value) ;

constexpr void __cordl_internal_set__doUV7(bool  value) ;

constexpr void __cordl_internal_set__doUV8(bool  value) ;

constexpr void __cordl_internal_set__lightmapOption(::DigitalOpus::MB::Core::MB2_LightmapOptions  value) ;

constexpr void __cordl_internal_set__meshAPItoUse(::DigitalOpus::MB::Core::MB_MeshCombineAPIType  value) ;

constexpr void __cordl_internal_set__optimizeAfterBake(bool  value) ;

constexpr void __cordl_internal_set__outputOption(::DigitalOpus::MB::Core::MB2_OutputOptions  value) ;

constexpr void __cordl_internal_set__pivotLocation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__pivotLocationType(::DigitalOpus::MB::Core::MB_MeshPivotLocation  value) ;

constexpr void __cordl_internal_set__renderType(::DigitalOpus::MB::Core::MB_RenderType  value) ;

constexpr void __cordl_internal_set__smrMergeBlendShapesWithSameNames(bool  value) ;

constexpr void __cordl_internal_set__smrNoExtraBonesWhenCombiningMeshRenderers(bool  value) ;

constexpr void __cordl_internal_set__uv2UnwrappingParamsHardAngle(float_t  value) ;

constexpr void __cordl_internal_set__uv2UnwrappingParamsPackMargin(float_t  value) ;

/// @brief Method .ctor, addr 0x9d8669c, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_assignToMeshCustomizer, addr 0x9d86550, size 0x8c, virtual true, abstract: false, final true
inline ::DigitalOpus::MB::Core::IAssignToMeshCustomizer* get_assignToMeshCustomizer() ;

/// @brief Method get_clearBuffersAfterBake, addr 0x9d864f0, size 0x8, virtual true, abstract: false, final true
inline bool get_clearBuffersAfterBake() ;

/// @brief Method get_doBlendShapes, addr 0x9d864b8, size 0x8, virtual true, abstract: false, final false
inline bool get_doBlendShapes() ;

/// @brief Method get_doCol, addr 0x9d86438, size 0x8, virtual true, abstract: false, final false
inline bool get_doCol() ;

/// @brief Method get_doNorm, addr 0x9d86418, size 0x8, virtual true, abstract: false, final false
inline bool get_doNorm() ;

/// @brief Method get_doTan, addr 0x9d86428, size 0x8, virtual true, abstract: false, final false
inline bool get_doTan() ;

/// @brief Method get_doUV, addr 0x9d86448, size 0x8, virtual true, abstract: false, final false
inline bool get_doUV() ;

/// @brief Method get_doUV3, addr 0x9d86458, size 0x8, virtual true, abstract: false, final false
inline bool get_doUV3() ;

/// @brief Method get_doUV4, addr 0x9d86468, size 0x8, virtual true, abstract: false, final false
inline bool get_doUV4() ;

/// @brief Method get_doUV5, addr 0x9d86478, size 0x8, virtual true, abstract: false, final false
inline bool get_doUV5() ;

/// @brief Method get_doUV6, addr 0x9d86488, size 0x8, virtual true, abstract: false, final false
inline bool get_doUV6() ;

/// @brief Method get_doUV7, addr 0x9d86498, size 0x8, virtual true, abstract: false, final false
inline bool get_doUV7() ;

/// @brief Method get_doUV8, addr 0x9d864a8, size 0x8, virtual true, abstract: false, final false
inline bool get_doUV8() ;

/// @brief Method get_lightmapOption, addr 0x9d86408, size 0x8, virtual true, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB2_LightmapOptions get_lightmapOption() ;

/// @brief Method get_meshAPI, addr 0x9d8668c, size 0x8, virtual true, abstract: false, final true
inline ::DigitalOpus::MB::Core::MB_MeshCombineAPIType get_meshAPI() ;

/// @brief Method get_optimizeAfterBake, addr 0x9d86500, size 0x8, virtual true, abstract: false, final true
inline bool get_optimizeAfterBake() ;

/// @brief Method get_outputOption, addr 0x9d863f8, size 0x8, virtual true, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB2_OutputOptions get_outputOption() ;

/// @brief Method get_pivotLocation, addr 0x9d864d8, size 0xc, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_pivotLocation() ;

/// @brief Method get_pivotLocationType, addr 0x9d864c8, size 0x8, virtual true, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB_MeshPivotLocation get_pivotLocationType() ;

/// @brief Method get_renderType, addr 0x9d863e8, size 0x8, virtual true, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB_RenderType get_renderType() ;

/// @brief Method get_smrMergeBlendShapesWithSameNames, addr 0x9d86540, size 0x8, virtual true, abstract: false, final true
inline bool get_smrMergeBlendShapesWithSameNames() ;

/// @brief Method get_smrNoExtraBonesWhenCombiningMeshRenderers, addr 0x9d86530, size 0x8, virtual true, abstract: false, final true
inline bool get_smrNoExtraBonesWhenCombiningMeshRenderers() ;

/// @brief Method get_uv2UnwrappingParamsHardAngle, addr 0x9d86510, size 0x8, virtual true, abstract: false, final true
inline float_t get_uv2UnwrappingParamsHardAngle() ;

/// @brief Method get_uv2UnwrappingParamsPackMargin, addr 0x9d86520, size 0x8, virtual true, abstract: false, final true
inline float_t get_uv2UnwrappingParamsPackMargin() ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB_IMeshBakerSettings"
constexpr ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* i___DigitalOpus__MB__Core__MB_IMeshBakerSettings() noexcept;

/// @brief Method set_assignToMeshCustomizer, addr 0x9d865dc, size 0xb0, virtual true, abstract: false, final true
inline void set_assignToMeshCustomizer(::DigitalOpus::MB::Core::IAssignToMeshCustomizer*  value) ;

/// @brief Method set_clearBuffersAfterBake, addr 0x9d864f8, size 0x8, virtual true, abstract: false, final true
inline void set_clearBuffersAfterBake(bool  value) ;

/// @brief Method set_doBlendShapes, addr 0x9d864c0, size 0x8, virtual true, abstract: false, final false
inline void set_doBlendShapes(bool  value) ;

/// @brief Method set_doCol, addr 0x9d86440, size 0x8, virtual true, abstract: false, final false
inline void set_doCol(bool  value) ;

/// @brief Method set_doNorm, addr 0x9d86420, size 0x8, virtual true, abstract: false, final false
inline void set_doNorm(bool  value) ;

/// @brief Method set_doTan, addr 0x9d86430, size 0x8, virtual true, abstract: false, final false
inline void set_doTan(bool  value) ;

/// @brief Method set_doUV, addr 0x9d86450, size 0x8, virtual true, abstract: false, final false
inline void set_doUV(bool  value) ;

/// @brief Method set_doUV3, addr 0x9d86460, size 0x8, virtual true, abstract: false, final false
inline void set_doUV3(bool  value) ;

/// @brief Method set_doUV4, addr 0x9d86470, size 0x8, virtual true, abstract: false, final false
inline void set_doUV4(bool  value) ;

/// @brief Method set_doUV5, addr 0x9d86480, size 0x8, virtual true, abstract: false, final false
inline void set_doUV5(bool  value) ;

/// @brief Method set_doUV6, addr 0x9d86490, size 0x8, virtual true, abstract: false, final false
inline void set_doUV6(bool  value) ;

/// @brief Method set_doUV7, addr 0x9d864a0, size 0x8, virtual true, abstract: false, final false
inline void set_doUV7(bool  value) ;

/// @brief Method set_doUV8, addr 0x9d864b0, size 0x8, virtual true, abstract: false, final false
inline void set_doUV8(bool  value) ;

/// @brief Method set_lightmapOption, addr 0x9d86410, size 0x8, virtual true, abstract: false, final false
inline void set_lightmapOption(::DigitalOpus::MB::Core::MB2_LightmapOptions  value) ;

/// @brief Method set_meshAPI, addr 0x9d86694, size 0x8, virtual true, abstract: false, final true
inline void set_meshAPI(::DigitalOpus::MB::Core::MB_MeshCombineAPIType  value) ;

/// @brief Method set_optimizeAfterBake, addr 0x9d86508, size 0x8, virtual true, abstract: false, final true
inline void set_optimizeAfterBake(bool  value) ;

/// @brief Method set_outputOption, addr 0x9d86400, size 0x8, virtual true, abstract: false, final false
inline void set_outputOption(::DigitalOpus::MB::Core::MB2_OutputOptions  value) ;

/// @brief Method set_pivotLocation, addr 0x9d864e4, size 0xc, virtual true, abstract: false, final false
inline void set_pivotLocation(::UnityEngine::Vector3  value) ;

/// @brief Method set_pivotLocationType, addr 0x9d864d0, size 0x8, virtual true, abstract: false, final false
inline void set_pivotLocationType(::DigitalOpus::MB::Core::MB_MeshPivotLocation  value) ;

/// @brief Method set_renderType, addr 0x9d863f0, size 0x8, virtual true, abstract: false, final false
inline void set_renderType(::DigitalOpus::MB::Core::MB_RenderType  value) ;

/// @brief Method set_smrMergeBlendShapesWithSameNames, addr 0x9d86548, size 0x8, virtual true, abstract: false, final true
inline void set_smrMergeBlendShapesWithSameNames(bool  value) ;

/// @brief Method set_smrNoExtraBonesWhenCombiningMeshRenderers, addr 0x9d86538, size 0x8, virtual true, abstract: false, final true
inline void set_smrNoExtraBonesWhenCombiningMeshRenderers(bool  value) ;

/// @brief Method set_uv2UnwrappingParamsHardAngle, addr 0x9d86518, size 0x8, virtual true, abstract: false, final true
inline void set_uv2UnwrappingParamsHardAngle(float_t  value) ;

/// @brief Method set_uv2UnwrappingParamsPackMargin, addr 0x9d86528, size 0x8, virtual true, abstract: false, final true
inline void set_uv2UnwrappingParamsPackMargin(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSettingsData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSettingsData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombinerSettingsData(MB3_MeshCombinerSettingsData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSettingsData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombinerSettingsData(MB3_MeshCombinerSettingsData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22625};

/// [SerializeField]
/// @brief Field _renderType, offset: 0x10, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB_RenderType  ____renderType;

/// [SerializeField]
/// @brief Field _outputOption, offset: 0x14, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_OutputOptions  ____outputOption;

/// [SerializeField]
/// @brief Field _lightmapOption, offset: 0x18, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LightmapOptions  ____lightmapOption;

/// [SerializeField]
/// @brief Field _doNorm, offset: 0x1c, size: 0x1, def value: None
 bool  ____doNorm;

/// [SerializeField]
/// @brief Field _doTan, offset: 0x1d, size: 0x1, def value: None
 bool  ____doTan;

/// [SerializeField]
/// @brief Field _doCol, offset: 0x1e, size: 0x1, def value: None
 bool  ____doCol;

/// [SerializeField]
/// @brief Field _doUV, offset: 0x1f, size: 0x1, def value: None
 bool  ____doUV;

/// [SerializeField]
/// @brief Field _doUV3, offset: 0x20, size: 0x1, def value: None
 bool  ____doUV3;

/// [SerializeField]
/// @brief Field _doUV4, offset: 0x21, size: 0x1, def value: None
 bool  ____doUV4;

/// [SerializeField]
/// @brief Field _doUV5, offset: 0x22, size: 0x1, def value: None
 bool  ____doUV5;

/// [SerializeField]
/// @brief Field _doUV6, offset: 0x23, size: 0x1, def value: None
 bool  ____doUV6;

/// [SerializeField]
/// @brief Field _doUV7, offset: 0x24, size: 0x1, def value: None
 bool  ____doUV7;

/// [SerializeField]
/// @brief Field _doUV8, offset: 0x25, size: 0x1, def value: None
 bool  ____doUV8;

/// [SerializeField]
/// @brief Field _doBlendShapes, offset: 0x26, size: 0x1, def value: None
 bool  ____doBlendShapes;

/// [FormerlySerializedAs("_recenterVertsToBoundsCenter")]
/// [SerializeField]
/// @brief Field _pivotLocationType, offset: 0x28, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB_MeshPivotLocation  ____pivotLocationType;

/// [SerializeField]
/// @brief Field _pivotLocation, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____pivotLocation;

/// [SerializeField]
/// @brief Field _clearBuffersAfterBake, offset: 0x38, size: 0x1, def value: None
 bool  ____clearBuffersAfterBake;

/// [SerializeField]
/// @brief Field _optimizeAfterBake, offset: 0x39, size: 0x1, def value: None
 bool  ____optimizeAfterBake;

/// [SerializeField]
/// @brief Field _uv2UnwrappingParamsHardAngle, offset: 0x3c, size: 0x4, def value: None
 float_t  ____uv2UnwrappingParamsHardAngle;

/// [SerializeField]
/// @brief Field _uv2UnwrappingParamsPackMargin, offset: 0x40, size: 0x4, def value: None
 float_t  ____uv2UnwrappingParamsPackMargin;

/// [SerializeField]
/// @brief Field _smrNoExtraBonesWhenCombiningMeshRenderers, offset: 0x44, size: 0x1, def value: None
 bool  ____smrNoExtraBonesWhenCombiningMeshRenderers;

/// [SerializeField]
/// @brief Field _smrMergeBlendShapesWithSameNames, offset: 0x45, size: 0x1, def value: None
 bool  ____smrMergeBlendShapesWithSameNames;

/// [SerializeField]
/// @brief Field _assignToMeshCustomizer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____assignToMeshCustomizer;

/// [SerializeField]
/// @brief Field _meshAPItoUse, offset: 0x50, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB_MeshCombineAPIType  ____meshAPItoUse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____renderType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____outputOption) == 0x14, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____lightmapOption) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____doNorm) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____doTan) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____doCol) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____doUV) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____doUV3) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____doUV4) == 0x21, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____doUV5) == 0x22, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____doUV6) == 0x23, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____doUV7) == 0x24, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____doUV8) == 0x25, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____doBlendShapes) == 0x26, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____pivotLocationType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____pivotLocation) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____clearBuffersAfterBake) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____optimizeAfterBake) == 0x39, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____uv2UnwrappingParamsHardAngle) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____uv2UnwrappingParamsPackMargin) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____smrNoExtraBonesWhenCombiningMeshRenderers) == 0x44, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____smrMergeBlendShapesWithSameNames) == 0x45, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____assignToMeshCustomizer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData, ____meshAPItoUse) == 0x50, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData) == 0x58, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
