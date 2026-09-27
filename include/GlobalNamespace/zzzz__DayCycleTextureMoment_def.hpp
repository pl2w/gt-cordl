#pragma once
// IWYU pragma private; include "GlobalNamespace/DayCycleTextureMoment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DayCycleTextureMoment)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class DayCycleTextureMoment;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DayCycleTextureMoment*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DayCycleTextureMoment*, "", "DayCycleTextureMoment");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DayCycleTextureMoment
class CORDL_TYPE DayCycleTextureMoment : public ::System::Object {
public:
// Declarations
/// @brief Field cloudyTex, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cloudyTex, put=__cordl_internal_set_cloudyTex)) ::UnityW<::UnityEngine::Texture2D>  cloudyTex;

/// @brief Field sunnyTex, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sunnyTex, put=__cordl_internal_set_sunnyTex)) ::UnityW<::UnityEngine::Texture2D>  sunnyTex;

static inline ::GlobalNamespace::DayCycleTextureMoment* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_cloudyTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_cloudyTex() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_sunnyTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_sunnyTex() ;

constexpr void __cordl_internal_set_cloudyTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_sunnyTex(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x566e118, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DayCycleTextureMoment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DayCycleTextureMoment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DayCycleTextureMoment(DayCycleTextureMoment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DayCycleTextureMoment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DayCycleTextureMoment(DayCycleTextureMoment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{791};

/// @brief Field sunnyTex, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___sunnyTex;

/// @brief Field cloudyTex, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___cloudyTex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DayCycleTextureMoment, ___sunnyTex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayCycleTextureMoment, ___cloudyTex) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DayCycleTextureMoment) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
