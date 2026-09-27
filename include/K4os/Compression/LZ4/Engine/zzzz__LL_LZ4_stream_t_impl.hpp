#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_LZ4_stream_t.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_LZ4_stream_t__hashTable_e__FixedBuffer_impl.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_tableType_t_impl.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_LZ4_stream_t_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_LZ4_stream_t__hashTable_e__FixedBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "hashTable", ty: "::GlobalNamespace::LZ4_stream_t_LL__hashTable_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dirty", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tableType", ty: "::GlobalNamespace::LL_tableType_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dictionary", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dictCtx", ty: "::GlobalNamespace::LL_LZ4_stream_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dictSize", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LL_LZ4_stream_t::LL_LZ4_stream_t(::GlobalNamespace::LZ4_stream_t_LL__hashTable_e__FixedBuffer  hashTable, uint32_t  currentOffset, bool  dirty, ::GlobalNamespace::LL_tableType_t  tableType, uint8_t*  dictionary, ::GlobalNamespace::LL_LZ4_stream_t*  dictCtx, uint32_t  dictSize) noexcept  {
this->hashTable = hashTable;
this->currentOffset = currentOffset;
this->dirty = dirty;
this->tableType = tableType;
this->dictionary = dictionary;
this->dictCtx = dictCtx;
this->dictSize = dictSize;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LL_LZ4_stream_t::LL_LZ4_stream_t()   {
}
