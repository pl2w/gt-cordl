#pragma once
// IWYU pragma private; include "Drawing/PersistentFilterJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PersistentFilterJob)
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeAppendBuffer;
}
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace Drawing {
struct PersistentFilterJob;
}
// Write type traits
MARK_VAL_T(::Drawing::PersistentFilterJob);
DEFINE_IL2CPP_CLASS(::Drawing::PersistentFilterJob, "Drawing", "PersistentFilterJob");
// [BurstCompile]
// Dependencies 
namespace Drawing {
// Is value type: true
// CS Name: Drawing.PersistentFilterJob
struct CORDL_TYPE PersistentFilterJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x55dab50, size 0x31c, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr PersistentFilterJob() ;

// Ctor Parameters [CppParam { name: "buffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr PersistentFilterJob(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffer, float_t  time) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27772};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field buffer, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffer;

/// @brief Field time, offset: 0x8, size: 0x4, def value: None
 float_t  time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Drawing::PersistentFilterJob, buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Drawing::PersistentFilterJob, time) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Drawing::PersistentFilterJob) == 0x10, "Size mismatch!");

} // namespace end def Drawing
