#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaVelocityEstimatorManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaVelocityEstimatorManager)
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaVelocityEstimatorManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaVelocityEstimatorManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaVelocityEstimatorManager*, "", "GorillaVelocityEstimatorManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaVelocityEstimatorManager
class CORDL_TYPE GorillaVelocityEstimatorManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field estimators, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_estimators, put=setStaticF_estimators)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaVelocityEstimator>>*  estimators;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimatorManager>  instance;

/// @brief Method Awake, addr 0x5dfe8d4, size 0xf4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateManager, addr 0x5dfed2c, size 0xf8, virtual false, abstract: false, final false
static inline void CreateManager() ;

/// @brief Method LateUpdate, addr 0x5dfebb4, size 0x178, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::GorillaVelocityEstimatorManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5dfeae4, size 0xd0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Register, addr 0x5dfe19c, size 0x18c, virtual false, abstract: false, final false
static inline void Register(::GlobalNamespace::GorillaVelocityEstimator*  velEstimator) ;

/// @brief Method SetInstance, addr 0x5dfe9c8, size 0x11c, virtual false, abstract: false, final false
static inline void SetInstance(::GlobalNamespace::GorillaVelocityEstimatorManager*  manager) ;

/// @brief Method Unregister, addr 0x5dfe37c, size 0x138, virtual false, abstract: false, final false
static inline void Unregister(::GlobalNamespace::GorillaVelocityEstimator*  velEstimator) ;

/// @brief Method .ctor, addr 0x5dfee24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaVelocityEstimator>>* getStaticF_estimators() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GlobalNamespace::GorillaVelocityEstimatorManager> getStaticF_instance() ;

static inline void setStaticF_estimators(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaVelocityEstimator>>*  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::GorillaVelocityEstimatorManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaVelocityEstimatorManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaVelocityEstimatorManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaVelocityEstimatorManager(GorillaVelocityEstimatorManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaVelocityEstimatorManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaVelocityEstimatorManager(GorillaVelocityEstimatorManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{515};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaVelocityEstimatorManager) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
