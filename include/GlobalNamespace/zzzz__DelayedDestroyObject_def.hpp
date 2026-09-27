#pragma once
// IWYU pragma private; include "GlobalNamespace/DelayedDestroyObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DelayedDestroyObject)
// Forward declare root types
namespace GlobalNamespace {
class DelayedDestroyObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DelayedDestroyObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DelayedDestroyObject*, "", "DelayedDestroyObject");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DelayedDestroyObject
class CORDL_TYPE DelayedDestroyObject : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _timeToDie, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeToDie, put=__cordl_internal_set__timeToDie)) float_t  _timeToDie;

/// @brief Field lifetime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_lifetime, put=__cordl_internal_set_lifetime)) float_t  lifetime;

/// @brief Method LateUpdate, addr 0x56f9440, size 0x8c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::DelayedDestroyObject* New_ctor() ;

/// @brief Method Start, addr 0x56f941c, size 0x24, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get__timeToDie() const;

constexpr float_t& __cordl_internal_get__timeToDie() ;

constexpr float_t const& __cordl_internal_get_lifetime() const;

constexpr float_t& __cordl_internal_get_lifetime() ;

constexpr void __cordl_internal_set__timeToDie(float_t  value) ;

constexpr void __cordl_internal_set_lifetime(float_t  value) ;

/// @brief Method .ctor, addr 0x56f94cc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelayedDestroyObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelayedDestroyObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DelayedDestroyObject(DelayedDestroyObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelayedDestroyObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelayedDestroyObject(DelayedDestroyObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{133};

/// @brief Field lifetime, offset: 0x20, size: 0x4, def value: None
 float_t  ___lifetime;

/// @brief Field _timeToDie, offset: 0x24, size: 0x4, def value: None
 float_t  ____timeToDie;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DelayedDestroyObject, ___lifetime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DelayedDestroyObject, ____timeToDie) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DelayedDestroyObject) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
