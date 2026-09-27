#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_LZ4_streamHC_t.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_LZ4_streamHC_t__chainTable_e__FixedBuffer_impl.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_LZ4_streamHC_t__hashTable_e__FixedBuffer_impl.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_LZ4_streamHC_t_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_LZ4_streamHC_t__chainTable_e__FixedBuffer_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_LZ4_streamHC_t__hashTable_e__FixedBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "hashTable", ty: "::GlobalNamespace::LZ4_streamHC_t_LL__hashTable_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "chainTable", ty: "::GlobalNamespace::LZ4_streamHC_t_LL__chainTable_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "end", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "base", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dictBase", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dictLimit", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lowLimit", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nextToUpdate", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "compressionLevel", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "favorDecSpeed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dirty", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dictCtx", ty: "::GlobalNamespace::LL_LZ4_streamHC_t*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LL_LZ4_streamHC_t::LL_LZ4_streamHC_t(::GlobalNamespace::LZ4_streamHC_t_LL__hashTable_e__FixedBuffer  hashTable, ::GlobalNamespace::LZ4_streamHC_t_LL__chainTable_e__FixedBuffer  chainTable, uint8_t*  end, uint8_t*  base, uint8_t*  dictBase, uint32_t  dictLimit, uint32_t  lowLimit, uint32_t  nextToUpdate, int16_t  compressionLevel, bool  favorDecSpeed, bool  dirty, ::GlobalNamespace::LL_LZ4_streamHC_t*  dictCtx) noexcept  {
this->hashTable = hashTable;
this->chainTable = chainTable;
this->end = end;
this->base = base;
this->dictBase = dictBase;
this->dictLimit = dictLimit;
this->lowLimit = lowLimit;
this->nextToUpdate = nextToUpdate;
this->compressionLevel = compressionLevel;
this->favorDecSpeed = favorDecSpeed;
this->dirty = dirty;
this->dictCtx = dictCtx;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LL_LZ4_streamHC_t::LL_LZ4_streamHC_t()   {
}
