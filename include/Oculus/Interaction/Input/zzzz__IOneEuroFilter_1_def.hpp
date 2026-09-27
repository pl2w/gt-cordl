#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IOneEuroFilter_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IOneEuroFilter_1)
namespace Oculus::Interaction::Input {
struct OneEuroFilterPropertyBlock;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
template<typename TData>
class IOneEuroFilter_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::Input::IOneEuroFilter_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::Input::IOneEuroFilter_1, "Oculus.Interaction.Input", "IOneEuroFilter`1");
// Dependencies 
namespace Oculus::Interaction::Input {
// cpp template
template<typename TData>
// Is value type: false
// CS Name: Oculus.Interaction.Input.IOneEuroFilter`1<TData>
class CORDL_TYPE IOneEuroFilter_1 {
public:
// Declarations
 __declspec(property(get=get_Value)) TData  Value;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Reset() ;

/// @brief Method SetProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetProperties(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock>  properties) ;

/// @brief Method Step, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TData Step(TData  rawValue, float_t  deltaTime) ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TData get_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "IOneEuroFilter_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IOneEuroFilter_1(IOneEuroFilter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16516};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input
