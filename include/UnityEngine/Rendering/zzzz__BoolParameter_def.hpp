#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BoolParameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__BoolParameter_DisplayType_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
CORDL_MODULE_EXPORT(BoolParameter)
namespace GlobalNamespace {
struct BoolParameter_DisplayType;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class BoolParameter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::BoolParameter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::BoolParameter*, "UnityEngine.Rendering", "BoolParameter");
// [DebuggerDisplay("{m_Value} ({m_OverrideState})")]
// Dependencies UnityEngine.Rendering.BoolParameter::DisplayType, UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.BoolParameter
class CORDL_TYPE BoolParameter : public ::UnityEngine::Rendering::VolumeParameter_1<bool> {
public:
// Declarations
using DisplayType = ::GlobalNamespace::BoolParameter_DisplayType;

/// @brief Field displayType, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_displayType, put=__cordl_internal_set_displayType)) ::GlobalNamespace::BoolParameter_DisplayType  displayType;

static inline ::UnityEngine::Rendering::BoolParameter* New_ctor(bool  value, ::GlobalNamespace::BoolParameter_DisplayType  displayType, bool  overrideState) ;

static inline ::UnityEngine::Rendering::BoolParameter* New_ctor(bool  value, bool  overrideState) ;

constexpr ::GlobalNamespace::BoolParameter_DisplayType const& __cordl_internal_get_displayType() const;

constexpr ::GlobalNamespace::BoolParameter_DisplayType& __cordl_internal_get_displayType() ;

constexpr void __cordl_internal_set_displayType(::GlobalNamespace::BoolParameter_DisplayType  value) ;

/// @brief Method .ctor, addr 0xb19e1ec, size 0x74, virtual false, abstract: false, final false
inline void _ctor(bool  value, ::GlobalNamespace::BoolParameter_DisplayType  displayType, bool  overrideState) ;

/// @brief Method .ctor, addr 0xb19e18c, size 0x60, virtual false, abstract: false, final false
inline void _ctor(bool  value, bool  overrideState) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoolParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoolParameter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoolParameter(BoolParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoolParameter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoolParameter(BoolParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17062};

/// @brief Field displayType, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::BoolParameter_DisplayType  ___displayType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BoolParameter, ___displayType) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::BoolParameter) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
