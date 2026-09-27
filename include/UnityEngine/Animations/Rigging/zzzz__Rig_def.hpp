#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/Rig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Rig)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Animations::Rigging {
class RigEffectorData;
}
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
class Rig;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::Rigging::Rig*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::Rig*, "UnityEngine.Animations.Rigging", "Rig");
// [DisallowMultipleComponent]
// [AddComponentMenu("Animation Rigging/Setup/Rig")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.animation.rigging@1.3/manual/RiggingWorkflow.html#rig-component")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::Animations::Rigging {
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.Rig
class CORDL_TYPE Rig : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_Effectors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Effectors, put=__cordl_internal_set_m_Effectors)) ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigEffectorData*>*  m_Effectors;

/// @brief Field m_Weight, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Weight, put=__cordl_internal_set_m_Weight)) float_t  m_Weight;

 __declspec(property(get=get_weight, put=set_weight)) float_t  weight;

static inline ::UnityEngine::Animations::Rigging::Rig* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigEffectorData*>* const& __cordl_internal_get_m_Effectors() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigEffectorData*>*& __cordl_internal_get_m_Effectors() ;

constexpr float_t const& __cordl_internal_get_m_Weight() const;

constexpr float_t& __cordl_internal_get_m_Weight() ;

constexpr void __cordl_internal_set_m_Effectors(::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigEffectorData*>*  value) ;

constexpr void __cordl_internal_set_m_Weight(float_t  value) ;

/// @brief Method .ctor, addr 0xae779d4, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_weight, addr 0xae779ac, size 0x8, virtual false, abstract: false, final false
inline float_t get_weight() ;

/// @brief Method set_weight, addr 0xae779b4, size 0x20, virtual false, abstract: false, final false
inline void set_weight(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Rig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Rig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Rig(Rig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Rig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Rig(Rig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32301};

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_Weight, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_Weight;

/// [SerializeField]
/// @brief Field m_Effectors, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigEffectorData*>*  ___m_Effectors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::Rigging::Rig, ___m_Weight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::Rig, ___m_Effectors) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::Rigging::Rig) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
