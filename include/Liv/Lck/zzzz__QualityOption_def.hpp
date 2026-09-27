#pragma once
// IWYU pragma private; include "Liv/Lck/QualityOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(QualityOption)
namespace Liv::Lck {
struct CameraTrackDescriptor;
}
// Forward declare root types
namespace Liv::Lck {
struct QualityOption;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::QualityOption);
DEFINE_IL2CPP_CLASS(::Liv::Lck::QualityOption, "Liv.Lck", "QualityOption");
// Dependencies Liv.Lck.CameraTrackDescriptor
namespace Liv::Lck {
// Is value type: true
// CS Name: Liv.Lck.QualityOption
struct CORDL_TYPE QualityOption {
public:
// Declarations
/// @brief [Obsolete("Provides the RecordingCameraTrackDescriptor and only exists for backwards compability - Use RecordingCameraTrackDescriptor or StreamingCameraTrackDescriptor instead")]
 __declspec(property(get=get_CameraTrackDescriptor)) ::Liv::Lck::CameraTrackDescriptor  CameraTrackDescriptor;

/// @brief Method .ctor, addr 0x9cf34c8, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, bool  isDefault, ::Liv::Lck::CameraTrackDescriptor  recordingCameraTrackDescriptor, ::Liv::Lck::CameraTrackDescriptor  streamingCameraTrackDescriptor) ;

/// @brief Method get_CameraTrackDescriptor, addr 0x9cf3520, size 0x14, virtual false, abstract: false, final false
inline ::Liv::Lck::CameraTrackDescriptor get_CameraTrackDescriptor() ;

// Ctor Parameters []
// @brief default ctor
constexpr QualityOption() ;

// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsDefault", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "RecordingCameraTrackDescriptor", ty: "::Liv::Lck::CameraTrackDescriptor", modifiers: "", def_value: None, comment: None }, CppParam { name: "StreamingCameraTrackDescriptor", ty: "::Liv::Lck::CameraTrackDescriptor", modifiers: "", def_value: None, comment: None }]
constexpr QualityOption(::StringW  Name, bool  IsDefault, ::Liv::Lck::CameraTrackDescriptor  RecordingCameraTrackDescriptor, ::Liv::Lck::CameraTrackDescriptor  StreamingCameraTrackDescriptor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24783};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field Name, offset: 0x0, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field IsDefault, offset: 0x8, size: 0x1, def value: None
 bool  IsDefault;

/// [FormerlySerializedAs("CameraTrackDescriptor")]
/// @brief Field RecordingCameraTrackDescriptor, offset: 0xc, size: 0x14, def value: None
 ::Liv::Lck::CameraTrackDescriptor  RecordingCameraTrackDescriptor;

/// @brief Field StreamingCameraTrackDescriptor, offset: 0x20, size: 0x14, def value: None
 ::Liv::Lck::CameraTrackDescriptor  StreamingCameraTrackDescriptor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::QualityOption, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::QualityOption, IsDefault) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::QualityOption, RecordingCameraTrackDescriptor) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::QualityOption, StreamingCameraTrackDescriptor) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::QualityOption) == 0x38, "Size mismatch!");

} // namespace end def Liv::Lck
