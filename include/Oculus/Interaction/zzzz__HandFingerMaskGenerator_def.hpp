#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandFingerMaskGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HandFingerMaskGenerator)
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction {
class HandVisual;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Oculus::Interaction {
class HandFingerMaskGenerator;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandFingerMaskGenerator*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandFingerMaskGenerator*, "Oculus.Interaction", "HandFingerMaskGenerator");
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandFingerMaskGenerator
class CORDL_TYPE HandFingerMaskGenerator : public ::System::Object {
public:
// Declarations
/// @brief Field _fingerLinesID, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__fingerLinesID, put=setStaticF__fingerLinesID)) ::ArrayW<int32_t>  _fingerLinesID;

/// @brief Field _palmFingerLinesID, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__palmFingerLinesID, put=setStaticF__palmFingerLinesID)) ::ArrayW<int32_t>  _palmFingerLinesID;

/// @brief Method GenerateFingerLines, addr 0xa404754, size 0x24c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector4> GenerateFingerLines(::Oculus::Interaction::HandVisual*  handVisual, ::UnityEngine::Vector2  minPosition, float_t  maxLength, ::ArrayW<float_t>  lineScale) ;

/// @brief Method GenerateFingerMask, addr 0xa404d9c, size 0x114, virtual false, abstract: false, final false
static inline void GenerateFingerMask(::UnityEngine::SkinnedMeshRenderer*  handRenderer, ::Oculus::Interaction::HandVisual*  handVisual, ::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock) ;

/// @brief Method GenerateLineData, addr 0xa4049a0, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GenerateLineData(::Oculus::Interaction::HandVisual*  handVisual, ::Oculus::Interaction::Input::HandJointId  jointIdStart, ::Oculus::Interaction::Input::HandJointId  jointIdEnd, ::UnityEngine::Vector2  minRegion, float_t  sideLength, float_t  lineScale) ;

/// @brief Method GenerateModelUV, addr 0xa4041b8, size 0x3c0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GenerateModelUV(::Oculus::Interaction::Input::Handedness  handedness, ::UnityEngine::Mesh*  sharedHandMesh, ::by_ref<::UnityEngine::Vector2>  minPosition, ::by_ref<::UnityEngine::Vector2>  maxPosition) ;

/// @brief Method GetPositionOnRegion, addr 0xa404578, size 0x1dc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 GetPositionOnRegion(::Oculus::Interaction::HandVisual*  handVisual, ::Oculus::Interaction::Input::HandJointId  jointId, ::UnityEngine::Vector2  minRegion, float_t  sideLength) ;

/// @brief Method HandednessMultiplier, addr 0xa4041a4, size 0x14, virtual false, abstract: false, final false
static inline float_t HandednessMultiplier(::Oculus::Interaction::Input::Handedness  hand) ;

static inline ::Oculus::Interaction::HandFingerMaskGenerator* New_ctor() ;

/// @brief Method SetFingerMaskUniforms, addr 0xa404b38, size 0x264, virtual false, abstract: false, final false
static inline void SetFingerMaskUniforms(::Oculus::Interaction::HandVisual*  handVisual, ::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock, ::UnityEngine::Vector2  minPosition, ::UnityEngine::Vector2  maxPosition) ;

/// @brief Method SetGlowModelUV, addr 0xa404a80, size 0xb8, virtual false, abstract: false, final false
static inline void SetGlowModelUV(::UnityEngine::SkinnedMeshRenderer*  handRenderer, ::Oculus::Interaction::Input::Handedness  handedness, ::by_ref<::UnityEngine::Vector2>  minPosition, ::by_ref<::UnityEngine::Vector2>  maxPosition) ;

/// @brief Method .ctor, addr 0xa404eb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<int32_t> getStaticF__fingerLinesID() ;

static inline ::ArrayW<int32_t> getStaticF__palmFingerLinesID() ;

static inline void setStaticF__fingerLinesID(::ArrayW<int32_t>  value) ;

static inline void setStaticF__palmFingerLinesID(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandFingerMaskGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandFingerMaskGenerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandFingerMaskGenerator(HandFingerMaskGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandFingerMaskGenerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandFingerMaskGenerator(HandFingerMaskGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15711};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::HandFingerMaskGenerator) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
