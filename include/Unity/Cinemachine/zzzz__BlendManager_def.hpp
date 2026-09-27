#pragma once
// IWYU pragma private; include "Unity/Cinemachine/BlendManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CameraBlendStack_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BlendManager)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineBlend;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace Unity::Cinemachine {
class ICinemachineMixer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class BlendManager;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::BlendManager*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::BlendManager*, "Unity.Cinemachine", "BlendManager");
// Dependencies Unity.Cinemachine.CameraBlendStack
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.BlendManager
class CORDL_TYPE BlendManager : public ::Unity::Cinemachine::CameraBlendStack {
public:
// Declarations
 __declspec(property(get=get_ActiveBlend, put=set_ActiveBlend)) ::Unity::Cinemachine::CinemachineBlend*  ActiveBlend;

 __declspec(property(get=get_ActiveVirtualCamera)) ::Unity::Cinemachine::ICinemachineCamera*  ActiveVirtualCamera;

 __declspec(property(get=get_CameraState)) ::Unity::Cinemachine::CameraState  CameraState;

 __declspec(property(get=get_Description)) ::StringW  Description;

 __declspec(property(get=get_IsBlending)) bool  IsBlending;

/// @brief Field m_CurrentLiveCameras, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentLiveCameras, put=__cordl_internal_set_m_CurrentLiveCameras)) ::Unity::Cinemachine::CinemachineBlend*  m_CurrentLiveCameras;

/// @brief Field m_PreviousActiveCamera, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreviousActiveCamera, put=__cordl_internal_set_m_PreviousActiveCamera)) ::Unity::Cinemachine::ICinemachineCamera*  m_PreviousActiveCamera;

/// @brief Field m_PreviousLiveCameras, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreviousLiveCameras, put=__cordl_internal_set_m_PreviousLiveCameras)) ::System::Collections::Generic::HashSet_1<::Unity::Cinemachine::ICinemachineCamera*>*  m_PreviousLiveCameras;

/// @brief Field m_WasBlending, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WasBlending, put=__cordl_internal_set_m_WasBlending)) bool  m_WasBlending;

/// @brief Method ComputeCurrentBlend, addr 0xaea8bd8, size 0xc, virtual false, abstract: false, final false
inline void ComputeCurrentBlend() ;

/// @brief Method DeepCamBFromBlend, addr 0xaea86a4, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::ICinemachineCamera* DeepCamBFromBlend(::Unity::Cinemachine::CinemachineBlend*  blend) ;

/// @brief Method IsLive, addr 0xaea8b78, size 0x18, virtual false, abstract: false, final false
inline bool IsLive(::Unity::Cinemachine::ICinemachineCamera*  cam) ;

/// @brief Method IsLiveInBlend, addr 0xaea8ac4, size 0xb4, virtual false, abstract: false, final false
inline bool IsLiveInBlend(::Unity::Cinemachine::ICinemachineCamera*  cam) ;

static inline ::Unity::Cinemachine::BlendManager* New_ctor() ;

/// @brief Method OnEnable, addr 0xaea8524, size 0x70, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ProcessActiveCamera, addr 0xaea8f78, size 0x690, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::ICinemachineCamera* ProcessActiveCamera(::Unity::Cinemachine::ICinemachineMixer*  mixer, ::UnityEngine::Vector3  up, float_t  deltaTime) ;

/// @brief Method RefreshCurrentCameraState, addr 0xaea8f60, size 0x18, virtual false, abstract: false, final false
inline void RefreshCurrentCameraState(::UnityEngine::Vector3  up, float_t  deltaTime) ;

/// [CompilerGenerated]
/// @brief Method <ProcessActiveCamera>g__CollectLiveCameras|21_0, addr 0xaea9608, size 0x120, virtual false, abstract: false, final false
static inline void _ProcessActiveCamera_g__CollectLiveCameras_21_0(::Unity::Cinemachine::CinemachineBlend*  blend, ::by_ref<::System::Collections::Generic::HashSet_1<::Unity::Cinemachine::ICinemachineCamera*>*>  cams) ;

constexpr ::Unity::Cinemachine::CinemachineBlend* const& __cordl_internal_get_m_CurrentLiveCameras() const;

constexpr ::Unity::Cinemachine::CinemachineBlend*& __cordl_internal_get_m_CurrentLiveCameras() ;

constexpr ::Unity::Cinemachine::ICinemachineCamera* const& __cordl_internal_get_m_PreviousActiveCamera() const;

constexpr ::Unity::Cinemachine::ICinemachineCamera*& __cordl_internal_get_m_PreviousActiveCamera() ;

constexpr ::System::Collections::Generic::HashSet_1<::Unity::Cinemachine::ICinemachineCamera*>* const& __cordl_internal_get_m_PreviousLiveCameras() const;

constexpr ::System::Collections::Generic::HashSet_1<::Unity::Cinemachine::ICinemachineCamera*>*& __cordl_internal_get_m_PreviousLiveCameras() ;

constexpr bool const& __cordl_internal_get_m_WasBlending() const;

constexpr bool& __cordl_internal_get_m_WasBlending() ;

constexpr void __cordl_internal_set_m_CurrentLiveCameras(::Unity::Cinemachine::CinemachineBlend*  value) ;

constexpr void __cordl_internal_set_m_PreviousActiveCamera(::Unity::Cinemachine::ICinemachineCamera*  value) ;

constexpr void __cordl_internal_set_m_PreviousLiveCameras(::System::Collections::Generic::HashSet_1<::Unity::Cinemachine::ICinemachineCamera*>*  value) ;

constexpr void __cordl_internal_set_m_WasBlending(bool  value) ;

/// @brief Method .ctor, addr 0xaea9728, size 0xe8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActiveBlend, addr 0xaea87ac, size 0x44, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineBlend* get_ActiveBlend() ;

/// @brief Method get_ActiveVirtualCamera, addr 0xaea869c, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::ICinemachineCamera* get_ActiveVirtualCamera() ;

/// @brief Method get_CameraState, addr 0xaea8b90, size 0x48, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CameraState get_CameraState() ;

/// @brief Method get_Description, addr 0xaea893c, size 0x188, virtual false, abstract: false, final false
inline ::StringW get_Description() ;

/// @brief Method get_IsBlending, addr 0xaea8924, size 0x18, virtual false, abstract: false, final false
inline bool get_IsBlending() ;

/// @brief Method set_ActiveBlend, addr 0xaea87f0, size 0x4, virtual false, abstract: false, final false
inline void set_ActiveBlend(::Unity::Cinemachine::CinemachineBlend*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BlendManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BlendManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BlendManager(BlendManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BlendManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BlendManager(BlendManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22250};

/// @brief Field m_CurrentLiveCameras, offset: 0x28, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineBlend*  ___m_CurrentLiveCameras;

/// @brief Field m_PreviousLiveCameras, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Unity::Cinemachine::ICinemachineCamera*>*  ___m_PreviousLiveCameras;

/// @brief Field m_PreviousActiveCamera, offset: 0x38, size: 0x8, def value: None
 ::Unity::Cinemachine::ICinemachineCamera*  ___m_PreviousActiveCamera;

/// @brief Field m_WasBlending, offset: 0x40, size: 0x1, def value: None
 bool  ___m_WasBlending;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::BlendManager, ___m_CurrentLiveCameras) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::BlendManager, ___m_PreviousLiveCameras) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::BlendManager, ___m_PreviousActiveCamera) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::BlendManager, ___m_WasBlending) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::BlendManager) == 0x48, "Size mismatch!");

} // namespace end def Unity::Cinemachine
