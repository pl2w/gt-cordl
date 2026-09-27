#pragma once
// IWYU pragma private; include "GlobalNamespace/GRCollectible.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ProgressionManager_CoreType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRCollectible)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class GRCollectible;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRCollectible*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRCollectible*, "", "GRCollectible");
// Dependencies ProgressionManager::CoreType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRCollectible
class CORDL_TYPE GRCollectible : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnCollected, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCollected, put=__cordl_internal_set_OnCollected)) ::System::Action*  OnCollected;

/// @brief Field energyValue, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_energyValue, put=__cordl_internal_set_energyValue)) int32_t  energyValue;

/// @brief Field entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field type, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::ProgressionManager_CoreType  type;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Method Awake, addr 0x5874828, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InvokeOnCollected, addr 0x5874aa0, size 0x1c, virtual false, abstract: false, final false
inline void InvokeOnCollected() ;

static inline ::GlobalNamespace::GRCollectible* New_ctor() ;

/// @brief Method OnEntityDestroy, addr 0x5874a98, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x587482c, size 0x108, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x5874a9c, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

constexpr ::System::Action* const& __cordl_internal_get_OnCollected() const;

constexpr ::System::Action*& __cordl_internal_get_OnCollected() ;

constexpr int32_t const& __cordl_internal_get_energyValue() const;

constexpr int32_t& __cordl_internal_get_energyValue() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr ::GlobalNamespace::ProgressionManager_CoreType const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::ProgressionManager_CoreType& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_OnCollected(::System::Action*  value) ;

constexpr void __cordl_internal_set_energyValue(int32_t  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::ProgressionManager_CoreType  value) ;

/// @brief Method .ctor, addr 0x5874abc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRCollectible() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRCollectible", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRCollectible(GRCollectible && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRCollectible", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRCollectible(GRCollectible const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1898};

/// @brief Field entity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entity;

/// @brief Field energyValue, offset: 0x28, size: 0x4, def value: None
 int32_t  ___energyValue;

/// @brief Field type, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::ProgressionManager_CoreType  ___type;

/// @brief Field OnCollected, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___OnCollected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRCollectible, ___entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectible, ___energyValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectible, ___type) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectible, ___OnCollected) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRCollectible) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
