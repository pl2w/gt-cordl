#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/LipSync/BaseVisemeBlendShapeLipSync_VisemeBlendShapeData.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__Viseme_impl.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight_impl.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__BaseVisemeBlendShapeLipSync_VisemeBlendShapeData_def.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight_def.hpp"
// Ctor Parameters [CppParam { name: "viseme", ty: "::Meta::WitAi::TTS::Data::Viseme", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "weights", ty: "::ArrayW<::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeData::BaseVisemeBlendShapeLipSync_VisemeBlendShapeData(::Meta::WitAi::TTS::Data::Viseme  viseme, ::ArrayW<::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight>  weights) noexcept  {
this->viseme = viseme;
this->weights = weights;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeData::BaseVisemeBlendShapeLipSync_VisemeBlendShapeData()   {
}
