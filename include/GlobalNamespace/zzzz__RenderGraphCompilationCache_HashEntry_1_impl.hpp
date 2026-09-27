#pragma once
// IWYU pragma private; include "GlobalNamespace/RenderGraphCompilationCache_HashEntry_1.hpp"
#include "GlobalNamespace/zzzz__RenderGraphCompilationCache_HashEntry_1_def.hpp"
// Ctor Parameters [CppParam { name: "hash", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastFrameUsed", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "compiledGraph", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>::RenderGraphCompilationCache_HashEntry_1(int32_t  hash, int32_t  lastFrameUsed, T  compiledGraph) noexcept  {
this->hash = hash;
this->lastFrameUsed = lastFrameUsed;
this->compiledGraph = compiledGraph;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>::RenderGraphCompilationCache_HashEntry_1()   {
}
