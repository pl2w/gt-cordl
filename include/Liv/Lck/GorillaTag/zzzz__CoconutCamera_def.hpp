#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/CoconutCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CoconutCamera)
namespace Liv::Lck::GorillaTag {
class IGtCameraVisuals;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class CoconutCamera;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::CoconutCamera*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::CoconutCamera*, "Liv.Lck.GorillaTag", "CoconutCamera");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.CoconutCamera
class CORDL_TYPE CoconutCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field IS_RECORDING, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_IS_RECORDING, put=__cordl_internal_set_IS_RECORDING)) ::StringW  IS_RECORDING;

/// @brief Field _bodyRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyRenderer, put=__cordl_internal_set__bodyRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  _bodyRenderer;

/// @brief Field _isNetworkedVersion, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isNetworkedVersion, put=__cordl_internal_set__isNetworkedVersion)) bool  _isNetworkedVersion;

/// @brief Field _isRecording, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRecording, put=__cordl_internal_set__isRecording)) bool  _isRecording;

/// @brief Field _isRecordingID, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__isRecordingID, put=__cordl_internal_set__isRecordingID)) int32_t  _isRecordingID;

/// @brief Field _propertyBlock, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__propertyBlock, put=__cordl_internal_set__propertyBlock)) ::UnityEngine::MaterialPropertyBlock*  _propertyBlock;

/// @brief Field _visuals, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__visuals, put=__cordl_internal_set__visuals)) ::UnityW<::UnityEngine::GameObject>  _visuals;

/// @brief Convert operator to "::Liv::Lck::GorillaTag::IGtCameraVisuals"
constexpr operator  ::Liv::Lck::GorillaTag::IGtCameraVisuals*() noexcept;

/// @brief Method Awake, addr 0x9d15948, size 0x74, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Liv::Lck::GorillaTag::CoconutCamera* New_ctor() ;

/// @brief Method SetNetworkedVisualsActive, addr 0x9d15c28, size 0x30, virtual true, abstract: false, final true
inline void SetNetworkedVisualsActive(bool  active) ;

/// @brief Method SetRecordingState, addr 0x9d159fc, size 0x22c, virtual true, abstract: false, final true
inline void SetRecordingState(bool  isRecording) ;

/// @brief Method SetVisualsActive, addr 0x9d159bc, size 0x40, virtual true, abstract: false, final true
inline void SetVisualsActive(bool  active) ;

constexpr ::StringW const& __cordl_internal_get_IS_RECORDING() const;

constexpr ::StringW& __cordl_internal_get_IS_RECORDING() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__bodyRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__bodyRenderer() ;

constexpr bool const& __cordl_internal_get__isNetworkedVersion() const;

constexpr bool& __cordl_internal_get__isNetworkedVersion() ;

constexpr bool const& __cordl_internal_get__isRecording() const;

constexpr bool& __cordl_internal_get__isRecording() ;

constexpr int32_t const& __cordl_internal_get__isRecordingID() const;

constexpr int32_t& __cordl_internal_get__isRecordingID() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__propertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__propertyBlock() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__visuals() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__visuals() ;

constexpr void __cordl_internal_set_IS_RECORDING(::StringW  value) ;

constexpr void __cordl_internal_set__bodyRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__isNetworkedVersion(bool  value) ;

constexpr void __cordl_internal_set__isRecording(bool  value) ;

constexpr void __cordl_internal_set__isRecordingID(int32_t  value) ;

constexpr void __cordl_internal_set__propertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__visuals(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9d15c58, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Liv::Lck::GorillaTag::IGtCameraVisuals"
constexpr ::Liv::Lck::GorillaTag::IGtCameraVisuals* i___Liv__Lck__GorillaTag__IGtCameraVisuals() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoconutCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoconutCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CoconutCamera(CoconutCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoconutCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoconutCamera(CoconutCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29590};

/// [SerializeField]
/// @brief Field _visuals, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____visuals;

/// [SerializeField]
/// @brief Field _bodyRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____bodyRenderer;

/// [SerializeField]
/// @brief Field _isNetworkedVersion, offset: 0x30, size: 0x1, def value: None
 bool  ____isNetworkedVersion;

/// @brief Field _propertyBlock, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____propertyBlock;

/// @brief Field IS_RECORDING, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___IS_RECORDING;

/// @brief Field _isRecordingID, offset: 0x48, size: 0x4, def value: None
 int32_t  ____isRecordingID;

/// @brief Field _isRecording, offset: 0x4c, size: 0x1, def value: None
 bool  ____isRecording;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::CoconutCamera, ____visuals) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::CoconutCamera, ____bodyRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::CoconutCamera, ____isNetworkedVersion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::CoconutCamera, ____propertyBlock) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::CoconutCamera, ___IS_RECORDING) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::CoconutCamera, ____isRecordingID) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::CoconutCamera, ____isRecording) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::CoconutCamera) == 0x50, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
