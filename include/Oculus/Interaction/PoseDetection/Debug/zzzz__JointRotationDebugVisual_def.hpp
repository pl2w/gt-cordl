#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/JointRotationDebugVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JointRotationDebugVisual)
namespace Oculus::Interaction::PoseDetection {
class JointRotationActiveState;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection::Debug {
class JointRotationDebugVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::Debug::JointRotationDebugVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Debug::JointRotationDebugVisual*, "Oculus.Interaction.PoseDetection.Debug", "JointRotationDebugVisual");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection::Debug {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Debug.JointRotationDebugVisual
class CORDL_TYPE JointRotationDebugVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _enabledRendererCount, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__enabledRendererCount, put=__cordl_internal_set__enabledRendererCount)) int32_t  _enabledRendererCount;

/// @brief Field _jointRotation, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointRotation, put=__cordl_internal_set__jointRotation)) ::UnityW<::Oculus::Interaction::PoseDetection::JointRotationActiveState>  _jointRotation;

/// @brief Field _lineRendererMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lineRendererMaterial, put=__cordl_internal_set__lineRendererMaterial)) ::UnityW<::UnityEngine::Material>  _lineRendererMaterial;

/// @brief Field _lineRenderers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__lineRenderers, put=__cordl_internal_set__lineRenderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::LineRenderer>>*  _lineRenderers;

/// @brief Field _rendererLineLength, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__rendererLineLength, put=__cordl_internal_set__rendererLineLength)) float_t  _rendererLineLength;

/// @brief Field _rendererLineWidth, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__rendererLineWidth, put=__cordl_internal_set__rendererLineWidth)) float_t  _rendererLineWidth;

/// @brief Field _started, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method AddLine, addr 0xa4afa0c, size 0x24c, virtual false, abstract: false, final false
inline void AddLine(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color) ;

/// @brief Method Awake, addr 0xa4af198, size 0x7c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method DrawDebugLine, addr 0xa4af81c, size 0x1f0, virtual false, abstract: false, final false
inline void DrawDebugLine(::UnityEngine::Vector3  jointPos, ::UnityEngine::Vector3  direction, float_t  amount) ;

static inline ::Oculus::Interaction::PoseDetection::Debug::JointRotationDebugVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4af240, size 0x10, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method ResetLines, addr 0xa4af250, size 0x184, virtual false, abstract: false, final false
inline void ResetLines() ;

/// @brief Method Start, addr 0xa4af214, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa4af3d4, size 0x448, virtual true, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get__enabledRendererCount() const;

constexpr int32_t& __cordl_internal_get__enabledRendererCount() ;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::JointRotationActiveState> const& __cordl_internal_get__jointRotation() const;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::JointRotationActiveState>& __cordl_internal_get__jointRotation() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__lineRendererMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__lineRendererMaterial() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::LineRenderer>>* const& __cordl_internal_get__lineRenderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::LineRenderer>>*& __cordl_internal_get__lineRenderers() ;

constexpr float_t const& __cordl_internal_get__rendererLineLength() const;

constexpr float_t& __cordl_internal_get__rendererLineLength() ;

constexpr float_t const& __cordl_internal_get__rendererLineWidth() const;

constexpr float_t& __cordl_internal_get__rendererLineWidth() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__enabledRendererCount(int32_t  value) ;

constexpr void __cordl_internal_set__jointRotation(::UnityW<::Oculus::Interaction::PoseDetection::JointRotationActiveState>  value) ;

constexpr void __cordl_internal_set__lineRendererMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__lineRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::LineRenderer>>*  value) ;

constexpr void __cordl_internal_set__rendererLineLength(float_t  value) ;

constexpr void __cordl_internal_set__rendererLineWidth(float_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa4afc58, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JointRotationDebugVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JointRotationDebugVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JointRotationDebugVisual(JointRotationDebugVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JointRotationDebugVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JointRotationDebugVisual(JointRotationDebugVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16194};

/// [SerializeField]
/// @brief Field _jointRotation, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PoseDetection::JointRotationActiveState>  ____jointRotation;

/// [SerializeField]
/// @brief Field _lineRendererMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____lineRendererMaterial;

/// [SerializeField]
/// @brief Field _rendererLineWidth, offset: 0x30, size: 0x4, def value: None
 float_t  ____rendererLineWidth;

/// [SerializeField]
/// @brief Field _rendererLineLength, offset: 0x34, size: 0x4, def value: None
 float_t  ____rendererLineLength;

/// @brief Field _lineRenderers, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::LineRenderer>>*  ____lineRenderers;

/// @brief Field _enabledRendererCount, offset: 0x40, size: 0x4, def value: None
 int32_t  ____enabledRendererCount;

/// @brief Field _started, offset: 0x44, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::JointRotationDebugVisual, ____jointRotation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::JointRotationDebugVisual, ____lineRendererMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::JointRotationDebugVisual, ____rendererLineWidth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::JointRotationDebugVisual, ____rendererLineLength) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::JointRotationDebugVisual, ____lineRenderers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::JointRotationDebugVisual, ____enabledRendererCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::JointRotationDebugVisual, ____started) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::Debug::JointRotationDebugVisual) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection::Debug
