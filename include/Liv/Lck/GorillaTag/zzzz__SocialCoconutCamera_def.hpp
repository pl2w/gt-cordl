#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/SocialCoconutCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SocialCoconutCamera)
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
class SocialCoconutCamera;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::SocialCoconutCamera*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::SocialCoconutCamera*, "Liv.Lck.GorillaTag", "SocialCoconutCamera");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.SocialCoconutCamera
class CORDL_TYPE SocialCoconutCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field IS_RECORDING, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_IS_RECORDING, put=__cordl_internal_set_IS_RECORDING)) ::StringW  IS_RECORDING;

/// @brief Field _bodyRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyRenderer, put=__cordl_internal_set__bodyRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  _bodyRenderer;

/// @brief Field _isActive, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActive, put=__cordl_internal_set__isActive)) bool  _isActive;

/// @brief Field _propertyBlock, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__propertyBlock, put=__cordl_internal_set__propertyBlock)) ::UnityEngine::MaterialPropertyBlock*  _propertyBlock;

/// @brief Field _visuals, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__visuals, put=__cordl_internal_set__visuals)) ::UnityW<::UnityEngine::GameObject>  _visuals;

/// @brief Method Awake, addr 0x5cd2c3c, size 0x9c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Liv::Lck::GorillaTag::SocialCoconutCamera* New_ctor() ;

/// @brief Method SetRecordingState, addr 0x5cd2cfc, size 0x50, virtual false, abstract: false, final false
inline void SetRecordingState(bool  isRecording) ;

/// @brief Method SetVisualsActive, addr 0x5cd2cd8, size 0x24, virtual false, abstract: false, final false
inline void SetVisualsActive(bool  active) ;

constexpr ::StringW const& __cordl_internal_get_IS_RECORDING() const;

constexpr ::StringW& __cordl_internal_get_IS_RECORDING() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__bodyRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__bodyRenderer() ;

constexpr bool const& __cordl_internal_get__isActive() const;

constexpr bool& __cordl_internal_get__isActive() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__propertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__propertyBlock() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__visuals() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__visuals() ;

constexpr void __cordl_internal_set_IS_RECORDING(::StringW  value) ;

constexpr void __cordl_internal_set__bodyRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__isActive(bool  value) ;

constexpr void __cordl_internal_set__propertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__visuals(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5cd2d4c, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SocialCoconutCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SocialCoconutCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SocialCoconutCamera(SocialCoconutCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SocialCoconutCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SocialCoconutCamera(SocialCoconutCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4473};

/// [SerializeField]
/// @brief Field _visuals, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____visuals;

/// [SerializeField]
/// @brief Field _bodyRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____bodyRenderer;

/// @brief Field _isActive, offset: 0x30, size: 0x1, def value: None
 bool  ____isActive;

/// @brief Field _propertyBlock, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____propertyBlock;

/// @brief Field IS_RECORDING, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___IS_RECORDING;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::SocialCoconutCamera, ____visuals) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::SocialCoconutCamera, ____bodyRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::SocialCoconutCamera, ____isActive) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::SocialCoconutCamera, ____propertyBlock) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::SocialCoconutCamera, ___IS_RECORDING) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::SocialCoconutCamera) == 0x48, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
