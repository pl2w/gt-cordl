#pragma once
// IWYU pragma private; include "Voxels/VoxelScoreBoard_VoxelScoreEntry.hpp"
#include "Voxels/zzzz__VoxelScoreBoard_VoxelScoreEntry_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry::*)(int32_t)>(&::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5dcf8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry::*)(::ArrayW<int32_t>)>(&::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry::Add)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5dcfa14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry>(),
                        {"Add", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry::_ctor(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, actorNumber);
}
inline void GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry::Add(::ArrayW<int32_t>  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry>(),
                        {"Add", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, resources);
}
// Ctor Parameters [CppParam { name: "actorNumber", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "amount1", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "amount2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "amount3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry::VoxelScoreBoard_VoxelScoreEntry(int32_t  actorNumber, int32_t  amount1, int32_t  amount2, int32_t  amount3) noexcept  {
this->actorNumber = actorNumber;
this->amount1 = amount1;
this->amount2 = amount2;
this->amount3 = amount3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry::VoxelScoreBoard_VoxelScoreEntry()   {
}
