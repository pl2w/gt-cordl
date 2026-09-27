#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachinePixelPerfect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachinePixelPerfect)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachinePixelPerfect;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachinePixelPerfect*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachinePixelPerfect*, "Unity.Cinemachine", "CinemachinePixelPerfect");
// [AddComponentMenu("Cinemachine/Procedural/Extensions/Cinemachine Pixel Perfect")]
// [ExecuteAlways]
// [DisallowMultipleComponent]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachinePixelPerfect.html")]
// Dependencies Unity.Cinemachine.CinemachineExtension
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachinePixelPerfect
class CORDL_TYPE CinemachinePixelPerfect : public ::Unity::Cinemachine::CinemachineExtension {
public:
// Declarations
static inline ::Unity::Cinemachine::CinemachinePixelPerfect* New_ctor() ;

/// @brief Method PostPipelineStageCallback, addr 0xae96cf8, size 0x18c, virtual true, abstract: false, final false
inline void PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method .ctor, addr 0xae96e84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachinePixelPerfect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachinePixelPerfect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachinePixelPerfect(CinemachinePixelPerfect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachinePixelPerfect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachinePixelPerfect(CinemachinePixelPerfect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22193};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachinePixelPerfect) == 0x30, "Size mismatch!");

} // namespace end def Unity::Cinemachine
