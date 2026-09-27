#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtTabletSocialCameraVisuals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GtTabletSocialCameraVisuals)
namespace Liv::Lck::GorillaTag {
class IGtCameraVisuals;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtTabletSocialCameraVisuals;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals*, "Liv.Lck.GorillaTag", "GtTabletSocialCameraVisuals");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtTabletSocialCameraVisuals
class CORDL_TYPE GtTabletSocialCameraVisuals : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _isRecording, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRecording, put=__cordl_internal_set__isRecording)) bool  _isRecording;

/// @brief Field _recordingIndicatorRoot, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordingIndicatorRoot, put=__cordl_internal_set__recordingIndicatorRoot)) ::UnityW<::UnityEngine::GameObject>  _recordingIndicatorRoot;

/// @brief Field _visuals, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__visuals, put=__cordl_internal_set__visuals)) ::UnityW<::UnityEngine::GameObject>  _visuals;

/// @brief Convert operator to "::Liv::Lck::GorillaTag::IGtCameraVisuals"
constexpr operator  ::Liv::Lck::GorillaTag::IGtCameraVisuals*() noexcept;

static inline ::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals* New_ctor() ;

/// @brief Method SetNetworkedVisualsActive, addr 0x9d2f558, size 0x1c, virtual true, abstract: false, final true
inline void SetNetworkedVisualsActive(bool  active) ;

/// @brief Method SetRecordingState, addr 0x9d2f520, size 0x38, virtual true, abstract: false, final true
inline void SetRecordingState(bool  isRecording) ;

/// @brief Method SetVisualsActive, addr 0x9d2f4f0, size 0x30, virtual true, abstract: false, final true
inline void SetVisualsActive(bool  active) ;

constexpr bool const& __cordl_internal_get__isRecording() const;

constexpr bool& __cordl_internal_get__isRecording() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__recordingIndicatorRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__recordingIndicatorRoot() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__visuals() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__visuals() ;

constexpr void __cordl_internal_set__isRecording(bool  value) ;

constexpr void __cordl_internal_set__recordingIndicatorRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__visuals(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9d2f574, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Liv::Lck::GorillaTag::IGtCameraVisuals"
constexpr ::Liv::Lck::GorillaTag::IGtCameraVisuals* i___Liv__Lck__GorillaTag__IGtCameraVisuals() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtTabletSocialCameraVisuals() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtTabletSocialCameraVisuals", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtTabletSocialCameraVisuals(GtTabletSocialCameraVisuals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtTabletSocialCameraVisuals", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtTabletSocialCameraVisuals(GtTabletSocialCameraVisuals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29662};

/// [SerializeField]
/// @brief Field _visuals, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____visuals;

/// [SerializeField]
/// @brief Field _recordingIndicatorRoot, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____recordingIndicatorRoot;

/// @brief Field _isRecording, offset: 0x30, size: 0x1, def value: None
 bool  ____isRecording;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals, ____visuals) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals, ____recordingIndicatorRoot) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals, ____isRecording) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals) == 0x38, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
