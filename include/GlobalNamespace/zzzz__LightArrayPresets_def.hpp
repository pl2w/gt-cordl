#pragma once
// IWYU pragma private; include "GlobalNamespace/LightArrayPresets.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightArrayPresets)
namespace GlobalNamespace {
class LightArrayPresets_LightArrayPreset;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class LightArrayPresets;
}
namespace GlobalNamespace {
class LightArrayPresets_LightArrayPreset;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LightArrayPresets*);
MARK_REF_T(::GlobalNamespace::LightArrayPresets_LightArrayPreset*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightArrayPresets*, "", "LightArrayPresets");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightArrayPresets_LightArrayPreset*, "", "LightArrayPresets/LightArrayPreset");
// [CreateAssetMenu(fileName = "LightArrayPresets", menuName = "Scriptable Objects/LightArrayPresets")]
// Dependencies LightArrayPresets::LightArrayPreset, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightArrayPresets
class CORDL_TYPE LightArrayPresets : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using LightArrayPreset = ::GlobalNamespace::LightArrayPresets_LightArrayPreset;

/// @brief Field lookup, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookup, put=__cordl_internal_set_lookup)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LightArrayPresets_LightArrayPreset*>*  lookup;

/// @brief Field presets, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_presets, put=__cordl_internal_set_presets)) ::ArrayW<::GlobalNamespace::LightArrayPresets_LightArrayPreset*>  presets;

/// @brief Method GetPreset, addr 0x56cf42c, size 0x30, virtual false, abstract: false, final false
inline ::GlobalNamespace::LightArrayPresets_LightArrayPreset* GetPreset(int32_t  i) ;

/// @brief Method GetPreset, addr 0x56cf5e8, size 0x68, virtual false, abstract: false, final false
inline ::GlobalNamespace::LightArrayPresets_LightArrayPreset* GetPreset(::StringW  n) ;

static inline ::GlobalNamespace::LightArrayPresets* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LightArrayPresets_LightArrayPreset*>* const& __cordl_internal_get_lookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LightArrayPresets_LightArrayPreset*>*& __cordl_internal_get_lookup() ;

constexpr ::ArrayW<::GlobalNamespace::LightArrayPresets_LightArrayPreset*> const& __cordl_internal_get_presets() const;

constexpr ::ArrayW<::GlobalNamespace::LightArrayPresets_LightArrayPreset*>& __cordl_internal_get_presets() ;

constexpr void __cordl_internal_set_lookup(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LightArrayPresets_LightArrayPreset*>*  value) ;

constexpr void __cordl_internal_set_presets(::ArrayW<::GlobalNamespace::LightArrayPresets_LightArrayPreset*>  value) ;

/// @brief Method .ctor, addr 0x56d1b08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method initLookup, addr 0x56d1a1c, size 0xec, virtual false, abstract: false, final false
inline void initLookup() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightArrayPresets() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightArrayPresets", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightArrayPresets(LightArrayPresets && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightArrayPresets", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightArrayPresets(LightArrayPresets const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1055};

/// @brief Field lookup, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LightArrayPresets_LightArrayPreset*>*  ___lookup;

/// [SerializeField]
/// @brief Field presets, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::LightArrayPresets_LightArrayPreset*>  ___presets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightArrayPresets, ___lookup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArrayPresets, ___presets) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightArrayPresets) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightArrayPresets/LightArrayPreset
class CORDL_TYPE LightArrayPresets_LightArrayPreset : public ::System::Object {
public:
// Declarations
/// @brief Field color, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

/// @brief Field intensity, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_intensity, put=__cordl_internal_set_intensity)) float_t  intensity;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

static inline ::GlobalNamespace::LightArrayPresets_LightArrayPreset* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr float_t const& __cordl_internal_get_intensity() const;

constexpr float_t& __cordl_internal_get_intensity() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_intensity(float_t  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0x56d1b10, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightArrayPresets_LightArrayPreset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightArrayPresets_LightArrayPreset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightArrayPresets_LightArrayPreset(LightArrayPresets_LightArrayPreset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightArrayPresets_LightArrayPreset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightArrayPresets_LightArrayPreset(LightArrayPresets_LightArrayPreset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1054};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field color, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

/// @brief Field intensity, offset: 0x28, size: 0x4, def value: None
 float_t  ___intensity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightArrayPresets_LightArrayPreset, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArrayPresets_LightArrayPreset, ___color) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArrayPresets_LightArrayPreset, ___intensity) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightArrayPresets_LightArrayPreset) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
