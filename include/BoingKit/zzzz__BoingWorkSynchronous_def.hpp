#pragma once
// IWYU pragma private; include "BoingKit/BoingWorkSynchronous.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BoingWorkSynchronous)
namespace BoingKit {
class BoingBehavior;
}
namespace BoingKit {
class BoingBones;
}
namespace BoingKit {
class BoingReactorFieldCPUSampler;
}
namespace BoingKit {
class BoingReactorField;
}
namespace BoingKit {
class BoingReactor;
}
namespace GlobalNamespace {
struct BoingEffector_Params;
}
namespace GlobalNamespace {
struct BoingManager_UpdateMode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace BoingKit {
class BoingWorkSynchronous;
}
// Write type traits
MARK_REF_T(::BoingKit::BoingWorkSynchronous*);
DEFINE_IL2CPP_CLASS(::BoingKit::BoingWorkSynchronous*, "BoingKit", "BoingWorkSynchronous");
// Dependencies System.Object
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingWorkSynchronous
class CORDL_TYPE BoingWorkSynchronous : public ::System::Object {
public:
// Declarations
/// @brief Method ExecuteBehaviors, addr 0x5e28858, size 0x1dc, virtual false, abstract: false, final false
static inline void ExecuteBehaviors(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*  behaviorMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode) ;

/// @brief Method ExecuteBones, addr 0x5e28f38, size 0x340, virtual false, abstract: false, final false
static inline void ExecuteBones(::ArrayW<::GlobalNamespace::BoingEffector_Params>  aEffectorParams, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*  bonesMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode) ;

/// @brief Method ExecuteReactors, addr 0x5e28a34, size 0x504, virtual false, abstract: false, final false
static inline void ExecuteReactors(::ArrayW<::GlobalNamespace::BoingEffector_Params>  aEffectorParams, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*  reactorMap, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorField>>*  fieldMap, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>*  cpuSamplerMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode) ;

/// @brief Method PullBonesResults, addr 0x5e29278, size 0x180, virtual false, abstract: false, final false
static inline void PullBonesResults(::ArrayW<::GlobalNamespace::BoingEffector_Params>  aEffectorParams, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*  bonesMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingWorkSynchronous() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingWorkSynchronous", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingWorkSynchronous(BoingWorkSynchronous && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingWorkSynchronous", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingWorkSynchronous(BoingWorkSynchronous const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5214};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingWorkSynchronous) == 0x10, "Size mismatch!");

} // namespace end def BoingKit
