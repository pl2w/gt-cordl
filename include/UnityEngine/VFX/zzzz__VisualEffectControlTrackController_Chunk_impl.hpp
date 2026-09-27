#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectControlTrackController_Chunk.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrackController_Clip_impl.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrackController_Event_impl.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrackController_Chunk_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrackController_Clip_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrackController_Event_def.hpp"
// Ctor Parameters [CppParam { name: "scrubbing", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "reinitEnter", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "reinitExit", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "startSeed", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "begin", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "end", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prewarmCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prewarmDeltaTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prewarmOffset", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prewarmEvent", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "events", ty: "::ArrayW<::GlobalNamespace::VisualEffectControlTrackController_Event>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "clips", ty: "::ArrayW<::GlobalNamespace::VisualEffectControlTrackController_Clip>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VisualEffectControlTrackController_Chunk::VisualEffectControlTrackController_Chunk(bool  scrubbing, bool  reinitEnter, bool  reinitExit, uint32_t  startSeed, double_t  begin, double_t  end, uint32_t  prewarmCount, float_t  prewarmDeltaTime, double_t  prewarmOffset, int32_t  prewarmEvent, ::ArrayW<::GlobalNamespace::VisualEffectControlTrackController_Event>  events, ::ArrayW<::GlobalNamespace::VisualEffectControlTrackController_Clip>  clips) noexcept  {
this->scrubbing = scrubbing;
this->reinitEnter = reinitEnter;
this->reinitExit = reinitExit;
this->startSeed = startSeed;
this->begin = begin;
this->end = end;
this->prewarmCount = prewarmCount;
this->prewarmDeltaTime = prewarmDeltaTime;
this->prewarmOffset = prewarmOffset;
this->prewarmEvent = prewarmEvent;
this->events = events;
this->clips = clips;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VisualEffectControlTrackController_Chunk::VisualEffectControlTrackController_Chunk()   {
}
