#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XRBodyTransformer_OrderedTransformation.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XRBodyTransformer_OrderedTransformation_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__IXRBodyTransformation_def.hpp"
// Ctor Parameters [CppParam { name: "transformation", ty: "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "priority", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XRBodyTransformer_OrderedTransformation::XRBodyTransformer_OrderedTransformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*  transformation, int32_t  priority) noexcept  {
this->transformation = transformation;
this->priority = priority;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRBodyTransformer_OrderedTransformation::XRBodyTransformer_OrderedTransformation()   {
}
