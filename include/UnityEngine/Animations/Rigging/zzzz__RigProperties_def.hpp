#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RigProperties)
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
struct RigProperties;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::Rigging::RigProperties);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::RigProperties, "UnityEngine.Animations.Rigging", "RigProperties");
// Dependencies 
namespace UnityEngine::Animations::Rigging {
// Is value type: true
// CS Name: UnityEngine.Animations.Rigging.RigProperties
struct CORDL_TYPE RigProperties {
public:
// Declarations
/// @brief Field s_Weight, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Weight, put=setStaticF_s_Weight)) ::StringW  s_Weight;

static inline ::StringW getStaticF_s_Weight() ;

static inline void setStaticF_s_Weight(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RigProperties() ;

// Ctor Parameters [CppParam { name: "component", ty: "::UnityW<::UnityEngine::Component>", modifiers: "", def_value: None, comment: None }]
constexpr RigProperties(::UnityW<::UnityEngine::Component>  component) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32320};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field component, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Component>  component;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::Rigging::RigProperties, component) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::Rigging::RigProperties) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
