#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/IGtCameraVisuals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGtCameraVisuals)
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class IGtCameraVisuals;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::IGtCameraVisuals*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::IGtCameraVisuals*, "Liv.Lck.GorillaTag", "IGtCameraVisuals");
// Dependencies 
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.IGtCameraVisuals
class CORDL_TYPE IGtCameraVisuals {
public:
// Declarations
/// @brief Method SetNetworkedVisualsActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetNetworkedVisualsActive(bool  active) ;

/// @brief Method SetRecordingState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetRecordingState(bool  isRecording) ;

/// @brief Method SetVisualsActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetVisualsActive(bool  active) ;

// Ctor Parameters [CppParam { name: "", ty: "IGtCameraVisuals", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGtCameraVisuals(IGtCameraVisuals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29589};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::GorillaTag
