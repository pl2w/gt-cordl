#pragma once
// IWYU pragma private; include "Oculus/Interaction/Unity/Input/InputAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InputAxis)
namespace Oculus::Interaction::Input {
class IAxis1D;
}
// Forward declare root types
namespace Oculus::Interaction::Unity::Input {
class InputAxis;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Unity::Input::InputAxis*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Unity::Input::InputAxis*, "Oculus.Interaction.Unity.Input", "InputAxis");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Unity::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Unity.Input.InputAxis
class CORDL_TYPE InputAxis : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _axisName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__axisName, put=__cordl_internal_set__axisName)) ::StringW  _axisName;

/// @brief Convert operator to "::Oculus::Interaction::Input::IAxis1D"
constexpr operator  ::Oculus::Interaction::Input::IAxis1D*() noexcept;

static inline ::Oculus::Interaction::Unity::Input::InputAxis* New_ctor() ;

/// @brief Method Value, addr 0xa4928a8, size 0xc, virtual true, abstract: false, final true
inline float_t Value() ;

constexpr ::StringW const& __cordl_internal_get__axisName() const;

constexpr ::StringW& __cordl_internal_get__axisName() ;

constexpr void __cordl_internal_set__axisName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa4928b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::Input::IAxis1D"
constexpr ::Oculus::Interaction::Input::IAxis1D* i___Oculus__Interaction__Input__IAxis1D() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputAxis() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputAxis", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputAxis(InputAxis && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputAxis", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputAxis(InputAxis const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16063};

/// [SerializeField]
/// @brief Field _axisName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____axisName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Unity::Input::InputAxis, ____axisName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Unity::Input::InputAxis) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Unity::Input
