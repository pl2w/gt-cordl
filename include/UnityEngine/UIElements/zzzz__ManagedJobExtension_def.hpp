#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ManagedJobExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ManagedJobExtension)
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ManagedJobExtension;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::ManagedJobExtension*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ManagedJobExtension*, "UnityEngine.UIElements", "ManagedJobExtension");
// [Extension]
// Dependencies System.Object, Unity.Jobs.IJobParallelFor
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ManagedJobExtension
class CORDL_TYPE ManagedJobExtension : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ScheduleOrRunJob, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJobParallelFor*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Unity::Jobs::JobHandle ScheduleOrRunJob(T  jobData, int32_t  arrayLength, int32_t  innerloopBatchCount, ::Unity::Jobs::JobHandle  dependsOn) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManagedJobExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManagedJobExtension", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ManagedJobExtension(ManagedJobExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManagedJobExtension", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManagedJobExtension(ManagedJobExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7810};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ManagedJobExtension) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
