#pragma once
// IWYU pragma private; include "GlobalNamespace/DelayedDestroyCrittersPooledObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DelayedDestroyCrittersPooledObject)
// Forward declare root types
namespace GlobalNamespace {
class DelayedDestroyCrittersPooledObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DelayedDestroyCrittersPooledObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DelayedDestroyCrittersPooledObject*, "", "DelayedDestroyCrittersPooledObject");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DelayedDestroyCrittersPooledObject
class CORDL_TYPE DelayedDestroyCrittersPooledObject : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field destroyDelay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_destroyDelay, put=__cordl_internal_set_destroyDelay)) float_t  destroyDelay;

/// @brief Field timeToDie, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeToDie, put=__cordl_internal_set_timeToDie)) float_t  timeToDie;

/// @brief Method LateUpdate, addr 0x56f93d0, size 0x38, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::DelayedDestroyCrittersPooledObject* New_ctor() ;

/// @brief Method OnEnable, addr 0x56f92f8, size 0xd8, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr float_t const& __cordl_internal_get_destroyDelay() const;

constexpr float_t& __cordl_internal_get_destroyDelay() ;

constexpr float_t const& __cordl_internal_get_timeToDie() const;

constexpr float_t& __cordl_internal_get_timeToDie() ;

constexpr void __cordl_internal_set_destroyDelay(float_t  value) ;

constexpr void __cordl_internal_set_timeToDie(float_t  value) ;

/// @brief Method .ctor, addr 0x56f9408, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelayedDestroyCrittersPooledObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelayedDestroyCrittersPooledObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DelayedDestroyCrittersPooledObject(DelayedDestroyCrittersPooledObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelayedDestroyCrittersPooledObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelayedDestroyCrittersPooledObject(DelayedDestroyCrittersPooledObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{132};

/// @brief Field destroyDelay, offset: 0x20, size: 0x4, def value: None
 float_t  ___destroyDelay;

/// @brief Field timeToDie, offset: 0x24, size: 0x4, def value: None
 float_t  ___timeToDie;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DelayedDestroyCrittersPooledObject, ___destroyDelay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DelayedDestroyCrittersPooledObject, ___timeToDie) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DelayedDestroyCrittersPooledObject) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
