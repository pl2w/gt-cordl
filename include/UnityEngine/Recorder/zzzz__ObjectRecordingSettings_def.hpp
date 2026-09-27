#pragma once
// IWYU pragma private; include "UnityEngine/Recorder/ObjectRecordingSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ObjectRecordingSettings)
// Forward declare root types
namespace UnityEngine::Recorder {
class ObjectRecordingSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::Recorder::ObjectRecordingSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Recorder::ObjectRecordingSettings*, "UnityEngine.Recorder", "ObjectRecordingSettings");
// [AddComponentMenu("Recording/Object Recording Settings")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::Recorder {
// Is value type: false
// CS Name: UnityEngine.Recorder.ObjectRecordingSettings
class CORDL_TYPE ObjectRecordingSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field recordPosition, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_recordPosition, put=__cordl_internal_set_recordPosition)) bool  recordPosition;

/// @brief Field recordRotation, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_recordRotation, put=__cordl_internal_set_recordRotation)) bool  recordRotation;

/// @brief Field recordScale, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_recordScale, put=__cordl_internal_set_recordScale)) bool  recordScale;

static inline ::UnityEngine::Recorder::ObjectRecordingSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_recordPosition() const;

constexpr bool& __cordl_internal_get_recordPosition() ;

constexpr bool const& __cordl_internal_get_recordRotation() const;

constexpr bool& __cordl_internal_get_recordRotation() ;

constexpr bool const& __cordl_internal_get_recordScale() const;

constexpr bool& __cordl_internal_get_recordScale() ;

constexpr void __cordl_internal_set_recordPosition(bool  value) ;

constexpr void __cordl_internal_set_recordRotation(bool  value) ;

constexpr void __cordl_internal_set_recordScale(bool  value) ;

/// @brief Method .ctor, addr 0xb110120, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectRecordingSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectRecordingSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectRecordingSettings(ObjectRecordingSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectRecordingSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectRecordingSettings(ObjectRecordingSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33011};

/// [Tooltip("Record localPosition curves for this object.")]
/// @brief Field recordPosition, offset: 0x20, size: 0x1, def value: None
 bool  ___recordPosition;

/// [Tooltip("Record localRotation curves for this object.")]
/// @brief Field recordRotation, offset: 0x21, size: 0x1, def value: None
 bool  ___recordRotation;

/// [Tooltip("Record localScale curves for this object.")]
/// @brief Field recordScale, offset: 0x22, size: 0x1, def value: None
 bool  ___recordScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Recorder::ObjectRecordingSettings, ___recordPosition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Recorder::ObjectRecordingSettings, ___recordRotation) == 0x21, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Recorder::ObjectRecordingSettings, ___recordScale) == 0x22, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Recorder::ObjectRecordingSettings) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Recorder
