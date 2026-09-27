#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResourceCollectionDepositTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SIResourceCollectionDepositTrigger)
namespace GlobalNamespace {
class ISIResourceDeposit;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SIResourceCollectionDepositTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIResourceCollectionDepositTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIResourceCollectionDepositTrigger*, "", "SIResourceCollectionDepositTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIResourceCollectionDepositTrigger
class CORDL_TYPE SIResourceCollectionDepositTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field parentCollection, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentCollection, put=__cordl_internal_set_parentCollection)) ::UnityW<::UnityEngine::GameObject>  parentCollection;

/// @brief Field resourceDeposit, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourceDeposit, put=__cordl_internal_set_resourceDeposit)) ::GlobalNamespace::ISIResourceDeposit*  resourceDeposit;

/// @brief Method Awake, addr 0x5aec188, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SIResourceCollectionDepositTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5aec1e8, size 0x130, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_parentCollection() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_parentCollection() ;

constexpr ::GlobalNamespace::ISIResourceDeposit* const& __cordl_internal_get_resourceDeposit() const;

constexpr ::GlobalNamespace::ISIResourceDeposit*& __cordl_internal_get_resourceDeposit() ;

constexpr void __cordl_internal_set_parentCollection(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_resourceDeposit(::GlobalNamespace::ISIResourceDeposit*  value) ;

/// @brief Method .ctor, addr 0x5aec318, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIResourceCollectionDepositTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIResourceCollectionDepositTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIResourceCollectionDepositTrigger(SIResourceCollectionDepositTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIResourceCollectionDepositTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIResourceCollectionDepositTrigger(SIResourceCollectionDepositTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{349};

/// @brief Field parentCollection, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___parentCollection;

/// @brief Field resourceDeposit, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ISIResourceDeposit*  ___resourceDeposit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIResourceCollectionDepositTrigger, ___parentCollection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceCollectionDepositTrigger, ___resourceDeposit) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIResourceCollectionDepositTrigger) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
