#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/SetDisplayRefresh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SetDisplayRefresh)
// Forward declare root types
namespace Oculus::Interaction::Input {
class SetDisplayRefresh;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::SetDisplayRefresh*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::SetDisplayRefresh*, "Oculus.Interaction.Input", "SetDisplayRefresh");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.SetDisplayRefresh
class CORDL_TYPE SetDisplayRefresh : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _desiredDisplayFrequency, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__desiredDisplayFrequency, put=__cordl_internal_set__desiredDisplayFrequency)) float_t  _desiredDisplayFrequency;

/// @brief Method Awake, addr 0xa421474, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Oculus::Interaction::Input::SetDisplayRefresh* New_ctor() ;

/// @brief Method SetDesiredDisplayFrequency, addr 0xa42134c, size 0x128, virtual false, abstract: false, final false
inline void SetDesiredDisplayFrequency(float_t  desiredDisplayFrequency) ;

constexpr float_t const& __cordl_internal_get__desiredDisplayFrequency() const;

constexpr float_t& __cordl_internal_get__desiredDisplayFrequency() ;

constexpr void __cordl_internal_set__desiredDisplayFrequency(float_t  value) ;

/// @brief Method .ctor, addr 0xa421478, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetDisplayRefresh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetDisplayRefresh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetDisplayRefresh(SetDisplayRefresh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetDisplayRefresh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetDisplayRefresh(SetDisplayRefresh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31155};

/// [SerializeField]
/// @brief Field _desiredDisplayFrequency, offset: 0x20, size: 0x4, def value: None
 float_t  ____desiredDisplayFrequency;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::SetDisplayRefresh, ____desiredDisplayFrequency) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::SetDisplayRefresh) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
