#pragma once
// IWYU pragma private; include "Liv/Lck/Recorder/RecordingData.hpp"
#include "Liv/Lck/Recorder/zzzz__RecordingData_def.hpp"
// Ctor Parameters [CppParam { name: "RecordingFilePath", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RecordingDuration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Recorder::RecordingData::RecordingData(::StringW  RecordingFilePath, float_t  RecordingDuration) noexcept  {
this->RecordingFilePath = RecordingFilePath;
this->RecordingDuration = RecordingDuration;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Recorder::RecordingData::RecordingData()   {
}
