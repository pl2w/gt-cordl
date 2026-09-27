#pragma once
// IWYU pragma private; include "Backtrace/Unity/Types/MiniDumpType.hpp"
#include "Backtrace/Unity/Types/zzzz__MiniDumpType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Backtrace::Unity::Types::MiniDumpType::MiniDumpType(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Types::MiniDumpType::MiniDumpType()   {
}
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::None{static_cast<uint32_t>(0x7fffeu)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::Normal{static_cast<uint32_t>(0x0u)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::WithDataSegs{static_cast<uint32_t>(0x1u)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::WithFullMemory{static_cast<uint32_t>(0x2u)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::WithHandleData{static_cast<uint32_t>(0x4u)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::FilterMemory{static_cast<uint32_t>(0x8u)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::ScanMemory{static_cast<uint32_t>(0x10u)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::WithUnloadedModules{static_cast<uint32_t>(0x20u)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::WithIndirectlyReferencedMemory{static_cast<uint32_t>(0x40u)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::FilterModulePaths{static_cast<uint32_t>(0x80u)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::WithProcessThreadData{static_cast<uint32_t>(0x100u)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::WithPrivateReadWriteMemory{static_cast<uint32_t>(0x200u)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::WithoutOptionalData{static_cast<uint32_t>(0x400u)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::WithFullMemoryInfo{static_cast<uint32_t>(0x800u)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::WithThreadInfo{static_cast<uint32_t>(0x1000u)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::WithCodeSegs{static_cast<uint32_t>(0x2000u)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::WithoutAuxiliaryState{static_cast<uint32_t>(0x4000u)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::WithFullAuxiliaryState{static_cast<uint32_t>(0x8000u)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::WithPrivateWriteCopyMemory{static_cast<uint32_t>(0x10000u)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::IgnoreInaccessibleMemory{static_cast<uint32_t>(0x20000u)};
constexpr ::Backtrace::Unity::Types::MiniDumpType  Backtrace::Unity::Types::MiniDumpType::ValidTypeFlags{static_cast<uint32_t>(0x3ffffu)};
