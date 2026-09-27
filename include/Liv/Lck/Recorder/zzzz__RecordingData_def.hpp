#pragma once
// IWYU pragma private; include "Liv/Lck/Recorder/RecordingData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(RecordingData)
// Forward declare root types
namespace Liv::Lck::Recorder {
struct RecordingData;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Recorder::RecordingData);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Recorder::RecordingData, "Liv.Lck.Recorder", "RecordingData");
// Dependencies 
namespace Liv::Lck::Recorder {
// Is value type: true
// CS Name: Liv.Lck.Recorder.RecordingData
struct CORDL_TYPE RecordingData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RecordingData() ;

// Ctor Parameters [CppParam { name: "RecordingFilePath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "RecordingDuration", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr RecordingData(::StringW  RecordingFilePath, float_t  RecordingDuration) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24974};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field RecordingFilePath, offset: 0x0, size: 0x8, def value: None
 ::StringW  RecordingFilePath;

/// @brief Field RecordingDuration, offset: 0x8, size: 0x4, def value: None
 float_t  RecordingDuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Recorder::RecordingData, RecordingFilePath) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::RecordingData, RecordingDuration) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Recorder::RecordingData) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Recorder
