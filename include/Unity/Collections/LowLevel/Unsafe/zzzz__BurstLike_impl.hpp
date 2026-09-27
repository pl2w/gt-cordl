#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/BurstLike.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_SharedStatic_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_def.hpp"
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::BurstLike::BurstLike()   {
}
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic.GetOrCreateSharedStaticInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(int64_t, int64_t, uint32_t, uint32_t)>(&::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic::GetOrCreateSharedStaticInternal)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb55f878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic*>(),
                        {"GetOrCreateSharedStaticInternal", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void* Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic::GetOrCreateSharedStaticInternal(int64_t  getHashCode64, int64_t  getSubHashCode64, uint32_t  sizeOf, uint32_t  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic*>(),
                        {"GetOrCreateSharedStaticInternal", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, getHashCode64, getSubHashCode64, sizeOf, alignment);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic::BurstLike_SharedStatic()   {
}
