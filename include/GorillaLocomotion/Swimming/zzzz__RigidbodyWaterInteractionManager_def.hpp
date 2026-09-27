#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/RigidbodyWaterInteractionManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RigidbodyWaterInteractionManager)
namespace GorillaLocomotion::Swimming {
class RigidbodyWaterInteraction;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaLocomotion::Swimming {
class RigidbodyWaterInteractionManager;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager*, "GorillaLocomotion.Swimming", "RigidbodyWaterInteractionManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaLocomotion::Swimming {
// Is value type: false
// CS Name: GorillaLocomotion.Swimming.RigidbodyWaterInteractionManager
class CORDL_TYPE RigidbodyWaterInteractionManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field allrBWI, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allrBWI, put=setStaticF_allrBWI)) ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::RigidbodyWaterInteraction>>*  allrBWI;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager>  instance;

/// @brief Method Awake, addr 0x5ce0e0c, size 0xf4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateManager, addr 0x5ce0fe4, size 0xc0, virtual false, abstract: false, final false
static inline void CreateManager() ;

/// @brief Method FixedUpdate, addr 0x5ce10a4, size 0xcc, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager* New_ctor() ;

/// @brief Method RegisterRBWI, addr 0x5cde600, size 0x154, virtual false, abstract: false, final false
static inline void RegisterRBWI(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction*  rbWI) ;

/// @brief Method SetInstance, addr 0x5ce0f00, size 0xe4, virtual false, abstract: false, final false
static inline void SetInstance(::GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager*  manager) ;

/// @brief Method UnregisterRBWI, addr 0x5cde874, size 0x100, virtual false, abstract: false, final false
static inline void UnregisterRBWI(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction*  rbWI) ;

/// @brief Method .ctor, addr 0x5ce1170, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::RigidbodyWaterInteraction>>* getStaticF_allrBWI() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager> getStaticF_instance() ;

static inline void setStaticF_allrBWI(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::RigidbodyWaterInteraction>>*  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigidbodyWaterInteractionManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigidbodyWaterInteractionManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigidbodyWaterInteractionManager(RigidbodyWaterInteractionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigidbodyWaterInteractionManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigidbodyWaterInteractionManager(RigidbodyWaterInteractionManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4512};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager) == 0x20, "Size mismatch!");

} // namespace end def GorillaLocomotion::Swimming
