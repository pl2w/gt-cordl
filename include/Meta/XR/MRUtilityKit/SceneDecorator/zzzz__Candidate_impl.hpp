#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Candidate.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "decorationPrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localPos", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localPosNormalized", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hit", ty: "::UnityEngine::RaycastHit", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "anchorCompDists", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "anchorDist", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "slope", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate::Candidate(::UnityW<::UnityEngine::GameObject>  decorationPrefab, ::UnityEngine::Vector2  localPos, ::UnityEngine::Vector2  localPosNormalized, ::UnityEngine::RaycastHit  hit, ::UnityEngine::Vector3  anchorCompDists, float_t  anchorDist, float_t  slope) noexcept  {
this->decorationPrefab = decorationPrefab;
this->localPos = localPos;
this->localPosNormalized = localPosNormalized;
this->hit = hit;
this->anchorCompDists = anchorCompDists;
this->anchorDist = anchorDist;
this->slope = slope;
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate::Candidate()   {
}
