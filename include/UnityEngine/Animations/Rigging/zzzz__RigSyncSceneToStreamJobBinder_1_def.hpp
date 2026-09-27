#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigSyncSceneToStreamJobBinder_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Animations/Rigging/zzzz__AnimationJobBinder_2_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigSyncSceneToStreamJob_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RigSyncSceneToStreamJobBinder_1)
namespace UnityEngine::Animations::Rigging {
struct RigSyncSceneToStreamJob;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
template<typename T>
class RigSyncSceneToStreamJobBinder_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJobBinder_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJobBinder_1, "UnityEngine.Animations.Rigging", "RigSyncSceneToStreamJobBinder`1");
// Dependencies UnityEngine.Animations.Rigging.AnimationJobBinder`2<TJob, TData>, UnityEngine.Animations.Rigging.RigSyncSceneToStreamJob
namespace UnityEngine::Animations::Rigging {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.RigSyncSceneToStreamJobBinder`1<T>
class CORDL_TYPE RigSyncSceneToStreamJobBinder_1 : public ::UnityEngine::Animations::Rigging::AnimationJobBinder_2<::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob,T> {
public:
// Declarations
/// @brief Field s_PropertyElementNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PropertyElementNames, put=setStaticF_s_PropertyElementNames)) ::ArrayW<::StringW>  s_PropertyElementNames;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob Create(::UnityEngine::Animator*  animator, ::by_ref<T>  data, ::UnityEngine::Component*  component) ;

/// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Destroy(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob  job) ;

static inline ::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJobBinder_1<T>* New_ctor() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob  job, ::by_ref<T>  data) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::StringW> getStaticF_s_PropertyElementNames() ;

static inline void setStaticF_s_PropertyElementNames(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigSyncSceneToStreamJobBinder_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigSyncSceneToStreamJobBinder_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigSyncSceneToStreamJobBinder_1(RigSyncSceneToStreamJobBinder_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigSyncSceneToStreamJobBinder_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigSyncSceneToStreamJobBinder_1(RigSyncSceneToStreamJobBinder_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32298};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations::Rigging
