#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObjectManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TransferrableObjectManager)
namespace GlobalNamespace {
class TransferrableObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class TransferrableObjectManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TransferrableObjectManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransferrableObjectManager*, "", "TransferrableObjectManager");
// [DefaultExecutionOrder(1549)]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransferrableObjectManager
class CORDL_TYPE TransferrableObjectManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::TransferrableObjectManager>  instance;

/// @brief Field transObs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_transObs, put=setStaticF_transObs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  transObs;

/// @brief Method Awake, addr 0x5772d34, size 0xf4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateManager, addr 0x57730b4, size 0xf8, virtual false, abstract: false, final false
static inline void CreateManager() ;

/// @brief Method LateUpdate, addr 0x5772fdc, size 0xd8, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::TransferrableObjectManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5772f0c, size 0xd0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Register, addr 0x576cee4, size 0x154, virtual false, abstract: false, final false
static inline void Register(::GlobalNamespace::TransferrableObject*  transOb) ;

/// @brief Method SetInstance, addr 0x5772e28, size 0xe4, virtual false, abstract: false, final false
static inline void SetInstance(::GlobalNamespace::TransferrableObjectManager*  manager) ;

/// @brief Method Unregister, addr 0x576d840, size 0x100, virtual false, abstract: false, final false
static inline void Unregister(::GlobalNamespace::TransferrableObject*  transOb) ;

/// @brief Method .ctor, addr 0x57731ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GlobalNamespace::TransferrableObjectManager> getStaticF_instance() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>* getStaticF_transObs() ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::TransferrableObjectManager>  value) ;

static inline void setStaticF_transObs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransferrableObjectManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObjectManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransferrableObjectManager(TransferrableObjectManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObjectManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransferrableObjectManager(TransferrableObjectManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1369};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TransferrableObjectManager) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
