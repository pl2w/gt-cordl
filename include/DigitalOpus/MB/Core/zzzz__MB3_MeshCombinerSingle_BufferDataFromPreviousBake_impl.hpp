#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle_BufferDataFromPreviousBake.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_BufferDataFromPreviousBake_def.hpp"
// Ctor Parameters [CppParam { name: "numVertsBaked", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshVerticesShift", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshVerticiesWereShifted", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake::MB3_MeshCombinerSingle_BufferDataFromPreviousBake(int32_t  numVertsBaked, ::UnityEngine::Vector3  meshVerticesShift, bool  meshVerticiesWereShifted) noexcept  {
this->numVertsBaked = numVertsBaked;
this->meshVerticesShift = meshVerticesShift;
this->meshVerticiesWereShifted = meshVerticiesWereShifted;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake::MB3_MeshCombinerSingle_BufferDataFromPreviousBake()   {
}
