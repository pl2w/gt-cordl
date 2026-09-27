#pragma once
// IWYU pragma private; include "GlobalNamespace/PeriodicFoodTopUpper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PeriodicFoodTopUpper)
namespace GlobalNamespace {
class CrittersFood;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class PeriodicFoodTopUpper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeriodicFoodTopUpper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeriodicFoodTopUpper*, "", "PeriodicFoodTopUpper");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeriodicFoodTopUpper
class CORDL_TYPE PeriodicFoodTopUpper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field food, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_food, put=__cordl_internal_set_food)) ::UnityW<::GlobalNamespace::CrittersFood>  food;

/// @brief Field foodObject, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_foodObject, put=__cordl_internal_set_foodObject)) ::UnityW<::UnityEngine::GameObject>  foodObject;

/// @brief Field timeFoodEmpty, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeFoodEmpty, put=__cordl_internal_set_timeFoodEmpty)) float_t  timeFoodEmpty;

/// @brief Field waitToRefill, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_waitToRefill, put=__cordl_internal_set_waitToRefill)) float_t  waitToRefill;

/// @brief Field waitingToRefill, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_waitingToRefill, put=__cordl_internal_set_waitingToRefill)) bool  waitingToRefill;

/// @brief Method Awake, addr 0x56fcb4c, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeriodicFoodTopUpper* New_ctor() ;

/// @brief Method Update, addr 0x56fcba4, size 0xdc, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::CrittersFood> const& __cordl_internal_get_food() const;

constexpr ::UnityW<::GlobalNamespace::CrittersFood>& __cordl_internal_get_food() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_foodObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_foodObject() ;

constexpr float_t const& __cordl_internal_get_timeFoodEmpty() const;

constexpr float_t& __cordl_internal_get_timeFoodEmpty() ;

constexpr float_t const& __cordl_internal_get_waitToRefill() const;

constexpr float_t& __cordl_internal_get_waitToRefill() ;

constexpr bool const& __cordl_internal_get_waitingToRefill() const;

constexpr bool& __cordl_internal_get_waitingToRefill() ;

constexpr void __cordl_internal_set_food(::UnityW<::GlobalNamespace::CrittersFood>  value) ;

constexpr void __cordl_internal_set_foodObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_timeFoodEmpty(float_t  value) ;

constexpr void __cordl_internal_set_waitToRefill(float_t  value) ;

constexpr void __cordl_internal_set_waitingToRefill(bool  value) ;

/// @brief Method .ctor, addr 0x56fcc80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeriodicFoodTopUpper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeriodicFoodTopUpper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PeriodicFoodTopUpper(PeriodicFoodTopUpper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeriodicFoodTopUpper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeriodicFoodTopUpper(PeriodicFoodTopUpper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{142};

/// @brief Field food, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersFood>  ___food;

/// @brief Field timeFoodEmpty, offset: 0x28, size: 0x4, def value: None
 float_t  ___timeFoodEmpty;

/// @brief Field waitingToRefill, offset: 0x2c, size: 0x1, def value: None
 bool  ___waitingToRefill;

/// @brief Field waitToRefill, offset: 0x30, size: 0x4, def value: None
 float_t  ___waitToRefill;

/// @brief Field foodObject, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___foodObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeriodicFoodTopUpper, ___food) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeriodicFoodTopUpper, ___timeFoodEmpty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeriodicFoodTopUpper, ___waitingToRefill) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeriodicFoodTopUpper, ___waitToRefill) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeriodicFoodTopUpper, ___foodObject) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeriodicFoodTopUpper) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
