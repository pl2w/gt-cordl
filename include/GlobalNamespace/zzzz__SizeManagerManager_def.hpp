#pragma once
// IWYU pragma private; include "GlobalNamespace/SizeManagerManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SizeManagerManager)
namespace GlobalNamespace {
class SizeManager;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SizeManagerManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SizeManagerManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SizeManagerManager*, "", "SizeManagerManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SizeManagerManager
class CORDL_TYPE SizeManagerManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field allSM, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allSM, put=setStaticF_allSM)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeManager>>*  allSM;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::SizeManagerManager>  instance;

/// @brief Method Awake, addr 0x595ed08, size 0xf4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateManager, addr 0x595eee0, size 0xc0, virtual false, abstract: false, final false
static inline void CreateManager() ;

/// @brief Method FixedUpdate, addr 0x595efa0, size 0xcc, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::SizeManagerManager* New_ctor() ;

/// @brief Method RegisterSM, addr 0x595dcbc, size 0x154, virtual false, abstract: false, final false
static inline void RegisterSM(::GlobalNamespace::SizeManager*  sM) ;

/// @brief Method SetInstance, addr 0x595edfc, size 0xe4, virtual false, abstract: false, final false
static inline void SetInstance(::GlobalNamespace::SizeManagerManager*  manager) ;

/// @brief Method UnregisterSM, addr 0x595db68, size 0x100, virtual false, abstract: false, final false
static inline void UnregisterSM(::GlobalNamespace::SizeManager*  sM) ;

/// @brief Method .ctor, addr 0x595f06c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeManager>>* getStaticF_allSM() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GlobalNamespace::SizeManagerManager> getStaticF_instance() ;

static inline void setStaticF_allSM(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeManager>>*  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::SizeManagerManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SizeManagerManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SizeManagerManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SizeManagerManager(SizeManagerManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SizeManagerManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SizeManagerManager(SizeManagerManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2352};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SizeManagerManager) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
