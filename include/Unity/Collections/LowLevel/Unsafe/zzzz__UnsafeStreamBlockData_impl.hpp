#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeStreamBlockData.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_impl.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_Block_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStreamBlockData_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStreamBlock_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData::*)(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData::Free)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaf07dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData>(),
                        {"Free", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData::Free(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*  oldBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData>(),
                        {"Free", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, oldBlock);
}
// Ctor Parameters [CppParam { name: "Allocator", ty: "::GlobalNamespace::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Blocks", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BlockCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Ranges", ty: "::GlobalNamespace::AllocatorManager_Block", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RangeCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData::UnsafeStreamBlockData(::GlobalNamespace::AllocatorManager_AllocatorHandle  Allocator, ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*  Blocks, int32_t  BlockCount, ::GlobalNamespace::AllocatorManager_Block  Ranges, int32_t  RangeCount) noexcept  {
this->Allocator = Allocator;
this->Blocks = Blocks;
this->BlockCount = BlockCount;
this->Ranges = Ranges;
this->RangeCount = RangeCount;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData::UnsafeStreamBlockData()   {
}
