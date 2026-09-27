#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersFoodSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActorSettings_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CrittersFoodSettings)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersFoodSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersFoodSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersFoodSettings*, "", "CrittersFoodSettings");
// Dependencies CrittersActorSettings
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersFoodSettings
class CORDL_TYPE CrittersFoodSettings : public ::GlobalNamespace::CrittersActorSettings {
public:
// Declarations
/// @brief Field _currentFood, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentFood, put=__cordl_internal_set__currentFood)) float_t  _currentFood;

/// @brief Field _currentSize, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentSize, put=__cordl_internal_set__currentSize)) float_t  _currentSize;

/// @brief Field _disableWhenEmpty, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__disableWhenEmpty, put=__cordl_internal_set__disableWhenEmpty)) bool  _disableWhenEmpty;

/// @brief Field _food, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__food, put=__cordl_internal_set__food)) ::UnityW<::UnityEngine::Transform>  _food;

/// @brief Field _maxFood, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxFood, put=__cordl_internal_set__maxFood)) float_t  _maxFood;

/// @brief Field _startingSize, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__startingSize, put=__cordl_internal_set__startingSize)) float_t  _startingSize;

static inline ::GlobalNamespace::CrittersFoodSettings* New_ctor() ;

/// @brief Method UpdateActorSettings, addr 0x55ff0f0, size 0xc0, virtual true, abstract: false, final false
inline void UpdateActorSettings() ;

constexpr float_t const& __cordl_internal_get__currentFood() const;

constexpr float_t& __cordl_internal_get__currentFood() ;

constexpr float_t const& __cordl_internal_get__currentSize() const;

constexpr float_t& __cordl_internal_get__currentSize() ;

constexpr bool const& __cordl_internal_get__disableWhenEmpty() const;

constexpr bool& __cordl_internal_get__disableWhenEmpty() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__food() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__food() ;

constexpr float_t const& __cordl_internal_get__maxFood() const;

constexpr float_t& __cordl_internal_get__maxFood() ;

constexpr float_t const& __cordl_internal_get__startingSize() const;

constexpr float_t& __cordl_internal_get__startingSize() ;

constexpr void __cordl_internal_set__currentFood(float_t  value) ;

constexpr void __cordl_internal_set__currentSize(float_t  value) ;

constexpr void __cordl_internal_set__disableWhenEmpty(bool  value) ;

constexpr void __cordl_internal_set__food(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__maxFood(float_t  value) ;

constexpr void __cordl_internal_set__startingSize(float_t  value) ;

/// @brief Method .ctor, addr 0x55ff1b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersFoodSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersFoodSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersFoodSettings(CrittersFoodSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersFoodSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersFoodSettings(CrittersFoodSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{98};

/// @brief Field _maxFood, offset: 0x40, size: 0x4, def value: None
 float_t  ____maxFood;

/// @brief Field _currentFood, offset: 0x44, size: 0x4, def value: None
 float_t  ____currentFood;

/// @brief Field _startingSize, offset: 0x48, size: 0x4, def value: None
 float_t  ____startingSize;

/// @brief Field _currentSize, offset: 0x4c, size: 0x4, def value: None
 float_t  ____currentSize;

/// @brief Field _food, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____food;

/// @brief Field _disableWhenEmpty, offset: 0x58, size: 0x1, def value: None
 bool  ____disableWhenEmpty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersFoodSettings, ____maxFood) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersFoodSettings, ____currentFood) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersFoodSettings, ____startingSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersFoodSettings, ____currentSize) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersFoodSettings, ____food) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersFoodSettings, ____disableWhenEmpty) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersFoodSettings) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
