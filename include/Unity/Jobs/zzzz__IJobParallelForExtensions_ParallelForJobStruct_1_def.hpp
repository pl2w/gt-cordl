#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobParallelForExtensions_ParallelForJobStruct_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_SharedStatic_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IJobParallelForExtensions_ParallelForJobStruct_1)
namespace System {
struct IntPtr;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobRanges;
}
namespace Unity::Jobs {
template<typename T>
class ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct IJobParallelForExtensions_ParallelForJobStruct_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::IJobParallelForExtensions_ParallelForJobStruct_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::IJobParallelForExtensions_ParallelForJobStruct_1, "Unity.Jobs", "IJobParallelForExtensions/ParallelForJobStruct`1");
// Dependencies System.IntPtr, Unity.Collections.LowLevel.Unsafe.BurstLike::SharedStatic`1<T>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Jobs.IJobParallelForExtensions/ParallelForJobStruct`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE IJobParallelForExtensions_ParallelForJobStruct_1 {
public:
// Declarations
using ExecuteJobFunction = ::Unity::Jobs::ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction<T>;

/// @brief Field jobReflectionData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_jobReflectionData, put=setStaticF_jobReflectionData)) ::GlobalNamespace::BurstLike_SharedStatic_1<::System::IntPtr>  jobReflectionData;

/// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Execute(::by_ref<T>  jobData, ::System::IntPtr  additionalPtr, ::System::IntPtr  bufferRangePatchData, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

/// [BurstDiscard]
/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Initialize() ;

static inline ::GlobalNamespace::BurstLike_SharedStatic_1<::System::IntPtr> getStaticF_jobReflectionData() ;

static inline void setStaticF_jobReflectionData(::GlobalNamespace::BurstLike_SharedStatic_1<::System::IntPtr>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr IJobParallelForExtensions_ParallelForJobStruct_1() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14655};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace end def GlobalNamespace
