#pragma once
// IWYU pragma private; include "Fusion/FusionBasicBillboard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FusionBasicBillboard)
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace Fusion {
class FusionBasicBillboard;
}
// Write type traits
MARK_REF_T(::Fusion::FusionBasicBillboard*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionBasicBillboard*, "Fusion", "FusionBasicBillboard");
// [ScriptHelp(BackColor = (Fusion.ScriptHeaderBackColor)9)]
// [ExecuteAlways]
// Dependencies Fusion.Behaviour
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionBasicBillboard
class CORDL_TYPE FusionBasicBillboard : public ::Fusion::Behaviour {
public:
// Declarations
/// @brief Field Camera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Camera, put=__cordl_internal_set_Camera)) ::UnityW<::UnityEngine::Camera>  Camera;

 __declspec(property(get=get_MainCamera, put=set_MainCamera)) ::UnityW<::UnityEngine::Camera>  MainCamera;

/// @brief Field _currentCam, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__currentCam, put=setStaticF__currentCam)) ::UnityW<::UnityEngine::Camera>  _currentCam;

/// @brief Field _lastCameraFindTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__lastCameraFindTime, put=setStaticF__lastCameraFindTime)) float_t  _lastCameraFindTime;

/// @brief Method LateUpdate, addr 0x60ea280, size 0x4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Fusion::FusionBasicBillboard* New_ctor() ;

/// @brief Method OnDisable, addr 0x60ea174, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x60ea084, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
/// @brief Method ResetStatics, addr 0x60ea284, size 0x5c, virtual false, abstract: false, final false
static inline void ResetStatics() ;

/// @brief Method UpdateLookAt, addr 0x60ea088, size 0xec, virtual false, abstract: false, final false
inline void UpdateLookAt() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_Camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_Camera() ;

constexpr void __cordl_internal_set_Camera(::UnityW<::UnityEngine::Camera>  value) ;

/// @brief Method .ctor, addr 0x60ea2e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::UnityEngine::Camera> getStaticF__currentCam() ;

static inline float_t getStaticF__lastCameraFindTime() ;

/// @brief Method get_MainCamera, addr 0x60ea1f4, size 0x8c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_MainCamera() ;

static inline void setStaticF__currentCam(::UnityW<::UnityEngine::Camera>  value) ;

static inline void setStaticF__lastCameraFindTime(float_t  value) ;

/// @brief Method set_MainCamera, addr 0x60ea1a4, size 0x50, virtual false, abstract: false, final false
inline void set_MainCamera(::UnityEngine::Camera*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionBasicBillboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionBasicBillboard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionBasicBillboard(FusionBasicBillboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionBasicBillboard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionBasicBillboard(FusionBasicBillboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23457};

/// [InlineHelp]
/// @brief Field Camera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___Camera;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionBasicBillboard, ___Camera) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionBasicBillboard) == 0x28, "Size mismatch!");

} // namespace end def Fusion
