#pragma once
// IWYU pragma private; include "Pathfinding/Util/TileHandler_CuttingResult.hpp"
#include "Pathfinding/zzzz__Int3_impl.hpp"
#include "Pathfinding/Util/zzzz__TileHandler_CuttingResult_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
// Ctor Parameters [CppParam { name: "verts", ty: "::ArrayW<::Pathfinding::Int3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tris", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TileHandler_CuttingResult::TileHandler_CuttingResult(::ArrayW<::Pathfinding::Int3>  verts, ::ArrayW<int32_t>  tris) noexcept  {
this->verts = verts;
this->tris = tris;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TileHandler_CuttingResult::TileHandler_CuttingResult()   {
}
