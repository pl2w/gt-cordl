#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/SceneIRCallbacks.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Meta/XR/Acoustics/zzzz__SceneIRCallbacks_def.hpp"
#include "Meta/XR/Acoustics/zzzz__ProgressCallback_def.hpp"
// Ctor Parameters [CppParam { name: "userData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "progress", ty: "::Meta::XR::Acoustics::ProgressCallback*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::Acoustics::SceneIRCallbacks::SceneIRCallbacks(::System::IntPtr  userData, ::Meta::XR::Acoustics::ProgressCallback*  progress) noexcept  {
this->userData = userData;
this->progress = progress;
}
// Ctor Parameters []
constexpr ::Meta::XR::Acoustics::SceneIRCallbacks::SceneIRCallbacks()   {
}
