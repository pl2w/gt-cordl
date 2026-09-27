#pragma once
// IWYU pragma private; include "Voxels/SortChunksJob.hpp"
#include "Unity/Collections/zzzz__NativeHashSet_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Mathematics/zzzz__int3_impl.hpp"
#include "Voxels/zzzz__SortChunksJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Voxels/zzzz__SortChunksJob_SortKey_def.hpp"
//  Writing Method size for method: ::Voxels::SortChunksJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::SortChunksJob::*)()>(&::Voxels::SortChunksJob::Execute)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x5db1598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SortChunksJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Voxels::SortChunksJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SortChunksJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  Voxels::SortChunksJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Voxels::SortChunksJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "ChunkSet", ty: "::Unity::Collections::NativeHashSet_1<::Unity::Mathematics::int3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TargetPos", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SortedChunks", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::int3>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Voxels::SortChunksJob::SortChunksJob(::Unity::Collections::NativeHashSet_1<::Unity::Mathematics::int3>  ChunkSet, ::Unity::Mathematics::int3  TargetPos, ::Unity::Collections::NativeList_1<::Unity::Mathematics::int3>  SortedChunks) noexcept  {
this->ChunkSet = ChunkSet;
this->TargetPos = TargetPos;
this->SortedChunks = SortedChunks;
}
// Ctor Parameters []
constexpr ::Voxels::SortChunksJob::SortChunksJob()   {
}
