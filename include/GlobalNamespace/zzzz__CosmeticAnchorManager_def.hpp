#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticAnchorManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CosmeticAnchorManager)
namespace GlobalNamespace {
class CosmeticAnchors;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticAnchorManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticAnchorManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticAnchorManager*, "", "CosmeticAnchorManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticAnchorManager
class CORDL_TYPE CosmeticAnchorManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field allAnchors, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allAnchors, put=setStaticF_allAnchors)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticAnchors>>*  allAnchors;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::CosmeticAnchorManager>  instance;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x57559ac, size 0xf4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateManager, addr 0x5755b84, size 0xc0, virtual false, abstract: false, final false
static inline void CreateManager() ;

static inline ::GlobalNamespace::CosmeticAnchorManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x5755f9c, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5755f90, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RegisterCosmeticAnchor, addr 0x5755c44, size 0x170, virtual false, abstract: false, final false
static inline void RegisterCosmeticAnchor(::GlobalNamespace::CosmeticAnchors*  cA) ;

/// @brief Method SetInstance, addr 0x5755aa0, size 0xe4, virtual false, abstract: false, final false
static inline void SetInstance(::GlobalNamespace::CosmeticAnchorManager*  manager) ;

/// @brief Method SliceUpdate, addr 0x5755fa8, size 0xc4, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method UnregisterCosmeticAnchor, addr 0x5755e74, size 0x11c, virtual false, abstract: false, final false
static inline void UnregisterCosmeticAnchor(::GlobalNamespace::CosmeticAnchors*  cA) ;

/// @brief Method .ctor, addr 0x5756070, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticAnchors>>* getStaticF_allAnchors() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GlobalNamespace::CosmeticAnchorManager> getStaticF_instance() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

static inline void setStaticF_allAnchors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticAnchors>>*  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::CosmeticAnchorManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticAnchorManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticAnchorManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticAnchorManager(CosmeticAnchorManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticAnchorManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticAnchorManager(CosmeticAnchorManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1318};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CosmeticAnchorManager) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
