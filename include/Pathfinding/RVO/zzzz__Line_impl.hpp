#pragma once
// IWYU pragma private; include "Pathfinding/RVO/Line.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Pathfinding/RVO/zzzz__Line_def.hpp"
// Ctor Parameters [CppParam { name: "point", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dir", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::RVO::Line::Line(::UnityEngine::Vector2  point, ::UnityEngine::Vector2  dir) noexcept  {
this->point = point;
this->dir = dir;
}
// Ctor Parameters []
constexpr ::Pathfinding::RVO::Line::Line()   {
}
