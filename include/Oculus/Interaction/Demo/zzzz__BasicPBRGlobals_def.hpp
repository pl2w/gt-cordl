#pragma once
// IWYU pragma private; include "Oculus/Interaction/Demo/BasicPBRGlobals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BasicPBRGlobals)
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace Oculus::Interaction::Demo {
class BasicPBRGlobals;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Demo::BasicPBRGlobals*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Demo::BasicPBRGlobals*, "Oculus.Interaction.Demo", "BasicPBRGlobals");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Demo {
// Is value type: false
// CS Name: Oculus.Interaction.Demo.BasicPBRGlobals
class CORDL_TYPE BasicPBRGlobals : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _mainlight, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__mainlight, put=__cordl_internal_set__mainlight)) ::UnityW<::UnityEngine::Light>  _mainlight;

static inline ::Oculus::Interaction::Demo::BasicPBRGlobals* New_ctor() ;

/// @brief Method UpateShaderGlobals, addr 0xa4320a4, size 0x164, virtual false, abstract: false, final false
inline void UpateShaderGlobals() ;

/// @brief Method Update, addr 0xa4320a0, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get__mainlight() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get__mainlight() ;

constexpr void __cordl_internal_set__mainlight(::UnityW<::UnityEngine::Light>  value) ;

/// @brief Method .ctor, addr 0xa432208, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicPBRGlobals() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicPBRGlobals", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicPBRGlobals(BasicPBRGlobals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicPBRGlobals", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicPBRGlobals(BasicPBRGlobals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28280};

/// [SerializeField]
/// @brief Field _mainlight, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ____mainlight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Demo::BasicPBRGlobals, ____mainlight) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Demo::BasicPBRGlobals) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Demo
